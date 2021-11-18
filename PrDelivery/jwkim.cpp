
void init(int N, int px[], int py[]) {
/* 
각 테스트 케이스의 처음에 호출된다.

고객의 수는 N이며, 각 고객의 ID는 0, 1, … N-1로 부여된다.

고객이 살고 있는 집의 위치는 (px[0], py[0]), (px[1], py[1]), … (px[N-1], py[N-1])로 주어진다.

고객들의 집의 위치는 서로 다름이 보장된다.



Parameters

   N : 고객 수 (2 ≤ N ≤ 25)

   px, py : 각 고객의 집의 위치에 해당하는 좌표 (-1,000,000 ≤ px[i], py[i] ≤ 1,000,000)
   ※ i는 고객의 ID를 의미(0 ≤ i ≤ N-1)
*/
}

void addRestaurant(int pID, int x, int y) {
	/*
	좌표 평면 위 (x, y)에 ID가 ‘pID’인 음식점을 추가한다.

같은 위치에 다른 음식점이나 고객의 집이 위치하는 경우는 없다.

 

ID가 ‘pID’인 음식점은 추가된 적이 없음을 보장한다.

 

Parameters

   pID : 추가하려는 음식점의 ID (0 ≤ pID ≤ 999,999)

   x, y : 추가하려는 음식점의 위치에 해당하는 좌표 평면상 좌표 (-1,000,000 ≤ x, y ≤ 1,000,000
   */
}

void removeRestaurant(int pID) {
/*
ID가 ‘pID’인 음식점을 삭제한다.



ID가 ‘pID’인 음식점이 추가되어 있으며, 삭제된 적이 없음이 보장된다.



Parameters

   pID : 삭제하려는 음식점의 ID (0 ≤ pID ≤ 999,999)
   */
}

void order(int uID, int pID) {

}

void beFriend(int uID1, int uID2) {

}

int recommend(int uID) {
	return 0;
}