pthread_mutex_t lock;
pthread_cond_t cond;
bool state;

void wait() {
	pthread_mutex_lock(&lock);
	while(!state) {
		pthread_cond_wait(&cond, &lock)
	}
	pthread_mutex_unlock(&lock);
}

void signal() {
	pthread_mutex_lock(&lock);
	state = true;
	pthread_cond_signal(&cond)
	pthread_mutex_unlock(&lock);
}
