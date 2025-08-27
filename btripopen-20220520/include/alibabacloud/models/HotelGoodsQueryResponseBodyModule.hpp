// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/HotelGoodsQueryResponseBodyModuleRooms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(booking_instructions, bookingInstructions_);
      DARABONBA_PTR_TO_JSON(can_foreigner, canForeigner_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(descriptions, descriptions_);
      DARABONBA_PTR_TO_JSON(dinamic_banner_pic_urls, dinamicBannerPicUrls_);
      DARABONBA_PTR_TO_JSON(early_arrival_time, earlyArrivalTime_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(late_arrival_time, lateArrivalTime_);
      DARABONBA_PTR_TO_JSON(rooms, rooms_);
      DARABONBA_PTR_TO_JSON(search_id, searchId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(booking_instructions, bookingInstructions_);
      DARABONBA_PTR_FROM_JSON(can_foreigner, canForeigner_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(descriptions, descriptions_);
      DARABONBA_PTR_FROM_JSON(dinamic_banner_pic_urls, dinamicBannerPicUrls_);
      DARABONBA_PTR_FROM_JSON(early_arrival_time, earlyArrivalTime_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(late_arrival_time, lateArrivalTime_);
      DARABONBA_PTR_FROM_JSON(rooms, rooms_);
      DARABONBA_PTR_FROM_JSON(search_id, searchId_);
    };
    HotelGoodsQueryResponseBodyModule() = default ;
    HotelGoodsQueryResponseBodyModule(const HotelGoodsQueryResponseBodyModule &) = default ;
    HotelGoodsQueryResponseBodyModule(HotelGoodsQueryResponseBodyModule &&) = default ;
    HotelGoodsQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModule() = default ;
    HotelGoodsQueryResponseBodyModule& operator=(const HotelGoodsQueryResponseBodyModule &) = default ;
    HotelGoodsQueryResponseBodyModule& operator=(HotelGoodsQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->bookingInstructions_ != nullptr && this->canForeigner_ != nullptr && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->descriptions_ != nullptr
        && this->dinamicBannerPicUrls_ != nullptr && this->earlyArrivalTime_ != nullptr && this->hotelId_ != nullptr && this->hotelName_ != nullptr && this->lateArrivalTime_ != nullptr
        && this->rooms_ != nullptr && this->searchId_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline HotelGoodsQueryResponseBodyModule& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // bookingInstructions Field Functions 
    bool hasBookingInstructions() const { return this->bookingInstructions_ != nullptr;};
    void deleteBookingInstructions() { this->bookingInstructions_ = nullptr;};
    inline const map<string, string> & bookingInstructions() const { DARABONBA_PTR_GET_CONST(bookingInstructions_, map<string, string>) };
    inline map<string, string> bookingInstructions() { DARABONBA_PTR_GET(bookingInstructions_, map<string, string>) };
    inline HotelGoodsQueryResponseBodyModule& setBookingInstructions(const map<string, string> & bookingInstructions) { DARABONBA_PTR_SET_VALUE(bookingInstructions_, bookingInstructions) };
    inline HotelGoodsQueryResponseBodyModule& setBookingInstructions(map<string, string> && bookingInstructions) { DARABONBA_PTR_SET_RVALUE(bookingInstructions_, bookingInstructions) };


    // canForeigner Field Functions 
    bool hasCanForeigner() const { return this->canForeigner_ != nullptr;};
    void deleteCanForeigner() { this->canForeigner_ = nullptr;};
    inline bool canForeigner() const { DARABONBA_PTR_GET_DEFAULT(canForeigner_, false) };
    inline HotelGoodsQueryResponseBodyModule& setCanForeigner(bool canForeigner) { DARABONBA_PTR_SET_VALUE(canForeigner_, canForeigner) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelGoodsQueryResponseBodyModule& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelGoodsQueryResponseBodyModule& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // descriptions Field Functions 
    bool hasDescriptions() const { return this->descriptions_ != nullptr;};
    void deleteDescriptions() { this->descriptions_ = nullptr;};
    inline const vector<string> & descriptions() const { DARABONBA_PTR_GET_CONST(descriptions_, vector<string>) };
    inline vector<string> descriptions() { DARABONBA_PTR_GET(descriptions_, vector<string>) };
    inline HotelGoodsQueryResponseBodyModule& setDescriptions(const vector<string> & descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };
    inline HotelGoodsQueryResponseBodyModule& setDescriptions(vector<string> && descriptions) { DARABONBA_PTR_SET_RVALUE(descriptions_, descriptions) };


    // dinamicBannerPicUrls Field Functions 
    bool hasDinamicBannerPicUrls() const { return this->dinamicBannerPicUrls_ != nullptr;};
    void deleteDinamicBannerPicUrls() { this->dinamicBannerPicUrls_ = nullptr;};
    inline const vector<string> & dinamicBannerPicUrls() const { DARABONBA_PTR_GET_CONST(dinamicBannerPicUrls_, vector<string>) };
    inline vector<string> dinamicBannerPicUrls() { DARABONBA_PTR_GET(dinamicBannerPicUrls_, vector<string>) };
    inline HotelGoodsQueryResponseBodyModule& setDinamicBannerPicUrls(const vector<string> & dinamicBannerPicUrls) { DARABONBA_PTR_SET_VALUE(dinamicBannerPicUrls_, dinamicBannerPicUrls) };
    inline HotelGoodsQueryResponseBodyModule& setDinamicBannerPicUrls(vector<string> && dinamicBannerPicUrls) { DARABONBA_PTR_SET_RVALUE(dinamicBannerPicUrls_, dinamicBannerPicUrls) };


    // earlyArrivalTime Field Functions 
    bool hasEarlyArrivalTime() const { return this->earlyArrivalTime_ != nullptr;};
    void deleteEarlyArrivalTime() { this->earlyArrivalTime_ = nullptr;};
    inline string earlyArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(earlyArrivalTime_, "") };
    inline HotelGoodsQueryResponseBodyModule& setEarlyArrivalTime(string earlyArrivalTime) { DARABONBA_PTR_SET_VALUE(earlyArrivalTime_, earlyArrivalTime) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline int64_t hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, 0L) };
    inline HotelGoodsQueryResponseBodyModule& setHotelId(int64_t hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelGoodsQueryResponseBodyModule& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // lateArrivalTime Field Functions 
    bool hasLateArrivalTime() const { return this->lateArrivalTime_ != nullptr;};
    void deleteLateArrivalTime() { this->lateArrivalTime_ = nullptr;};
    inline string lateArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(lateArrivalTime_, "") };
    inline HotelGoodsQueryResponseBodyModule& setLateArrivalTime(string lateArrivalTime) { DARABONBA_PTR_SET_VALUE(lateArrivalTime_, lateArrivalTime) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline const vector<Models::HotelGoodsQueryResponseBodyModuleRooms> & rooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<Models::HotelGoodsQueryResponseBodyModuleRooms>) };
    inline vector<Models::HotelGoodsQueryResponseBodyModuleRooms> rooms() { DARABONBA_PTR_GET(rooms_, vector<Models::HotelGoodsQueryResponseBodyModuleRooms>) };
    inline HotelGoodsQueryResponseBodyModule& setRooms(const vector<Models::HotelGoodsQueryResponseBodyModuleRooms> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
    inline HotelGoodsQueryResponseBodyModule& setRooms(vector<Models::HotelGoodsQueryResponseBodyModuleRooms> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


    // searchId Field Functions 
    bool hasSearchId() const { return this->searchId_ != nullptr;};
    void deleteSearchId() { this->searchId_ = nullptr;};
    inline string searchId() const { DARABONBA_PTR_GET_DEFAULT(searchId_, "") };
    inline HotelGoodsQueryResponseBodyModule& setSearchId(string searchId) { DARABONBA_PTR_SET_VALUE(searchId_, searchId) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<map<string, string>> bookingInstructions_ = nullptr;
    std::shared_ptr<bool> canForeigner_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<vector<string>> descriptions_ = nullptr;
    std::shared_ptr<vector<string>> dinamicBannerPicUrls_ = nullptr;
    std::shared_ptr<string> earlyArrivalTime_ = nullptr;
    std::shared_ptr<int64_t> hotelId_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> lateArrivalTime_ = nullptr;
    std::shared_ptr<vector<Models::HotelGoodsQueryResponseBodyModuleRooms>> rooms_ = nullptr;
    std::shared_ptr<string> searchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
