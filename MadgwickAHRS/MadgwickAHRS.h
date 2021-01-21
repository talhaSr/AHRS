/*
 * MadgwickAHRS.h
 *
 *  	@Created on: Jan 21, 2021
 *      @Author: Talha Sari
 *		@Credit: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
 */

#ifndef INC_MADGWICKAHRS_H_
#define INC_MADGWICKAHRS_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Variables */
extern volatile float beta;
extern volatile float q0, q1, q2, q3;

/* Functions */
void MadgwickAHRS_Update(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MadgwickAHRS_UpdateIMU(float gx, float gy, float gz, float ax, float ay, float az);


#ifdef __cplusplus
}
#endif

#endif /* INC_MADGWICKAHRS_H_ */
