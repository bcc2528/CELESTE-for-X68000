void m_alloc(int buffer)
{
	__asm__ volatile (	"move.l	%0,d2\n"
				"moveq.l	#$01,d1\n"
				"trap	#3\n" :: "d"(buffer));
}

void m_assign(int buffer)
{
	__asm__ volatile (	"move.l	%0,d2\n"
				"moveq.l	#$02,d1\n"
				"trap	#3\n" :: "d"(buffer));
}

void m_vset(int no, unsigned char *address)
{
	__asm__ volatile (	"lea.l	(%0),a1\n"
				"move.l	%1,d2\n"
				"moveq.l	#$04,d1\n"
				"trap	#3\n" :: "a"(address), "d"(no));
}

void music_stop(int track1, int track2, short track3)
{
	__asm__ volatile (	"move.l	%0,d2\n"
				"move.l	%1,d3\n"
				"move.w	%2,d4\n"
				"moveq.l	#$0a,d1\n"
				"trap	#3\n" :: "d"(track1), "d"(track2), "d"(track3));
}

void play_cnv_data(unsigned char *address, int size)
{
	__asm__ volatile (	"lea.l	(%0),a1\n"
				"move.l	%1,d2\n"
				"moveq.l	#$11,d1\n"
				"trap	#3\n" :: "a"(address), "d"(size));
}

void se_play(unsigned char *address, int track)
{
	__asm__ volatile (	"lea.l	(%0),a1\n"
				"move.l	%1,d2\n"
				"moveq.l	#$12,d1\n"
				"trap	#3\n" :: "a"(address), "d"(track));
}

void m_vset2(unsigned char *address, int no)
{
	__asm__ volatile (	"lea.l	(%0),a1\n"
				"move.l	%1,d2\n"
				"moveq.l	#$1b,d1\n"
				"trap	#3\n" :: "a"(address), "d"(no));
}
