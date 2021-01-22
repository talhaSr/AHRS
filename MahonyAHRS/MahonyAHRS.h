/*
 * MahonyAHRS.h
 *
 *  	@Created on: Jan 21, 2021
 *      @Author: Talha Sari
 *		@Credit: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
 */
#ifndef MahonyAHRS_h
#define MahonyAHRS_h

/* Variables */
extern volatile float twoKp;
extern volatile float twoKi;
extern volatile float q0, q1, q2, q3;

/* Functions */
void MahonyAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MahonyAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az);

#endif