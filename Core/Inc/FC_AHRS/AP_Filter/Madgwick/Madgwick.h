/*
 * Madgwick.h
 *
 *  Created on: Jul 3, 2025
 *      Author: rlawn
 */

#ifndef INC_FC_AHRS_AP_FILTER_MADGWICK_MADGWICK_H_
#define INC_FC_AHRS_AP_FILTER_MADGWICK_MADGWICK_H_


/* Includes ------------------------------------------------------------------*/
#include <FC_Serial/MiniLink/MiniLink_module.h>
#include <math.h>



/* Functions -----------------------------------------------------------------*/
void Magwick_Initialization(ATTITUDE_QUATERNION* qu);
//드론이 처음 켜졌을 때 수평 상태라고 가정하고, 자세를 나타내는 쿼터니언(qu) 값을 초기 상태로 설정
void Madgwick_Update(ATTITUDE_QUATERNION* qu, SCALED_IMU* imu);
//현재 자세(qu)와 새로 들어온 IMU 센서 값(imu)을 매드윅 알고리즘에 넣어, 자세를 계산하고 업데이트
void Madgwick_GetEuler(ATTITUDE_QUATERNION* qu, ATTITUDE* atti);
//쿼터니언(qu) 값을 사람이 이해하기 쉬운 롤, 피치, 요 각도(atti)로 변환

//Madgwick은 센서 퓨전 알고리즘 -> 드론이나 로봇의 자세를 추정하는 데 사용


#endif /* INC_FC_AHRS_AP_FILTER_MADGWICK_MADGWICK_H_ */
