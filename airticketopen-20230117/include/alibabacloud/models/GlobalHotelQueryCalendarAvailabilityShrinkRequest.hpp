// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYCALENDARAVAILABILITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYCALENDARAVAILABILITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelQueryCalendarAvailabilityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryCalendarAvailabilityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_TO_JSON(CheckInDateEnd, checkInDateEnd_);
      DARABONBA_PTR_TO_JSON(CheckInDateStart, checkInDateStart_);
      DARABONBA_PTR_TO_JSON(ChildCount, childCount_);
      DARABONBA_PTR_TO_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryCalendarAvailabilityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_FROM_JSON(CheckInDateEnd, checkInDateEnd_);
      DARABONBA_PTR_FROM_JSON(CheckInDateStart, checkInDateStart_);
      DARABONBA_PTR_FROM_JSON(ChildCount, childCount_);
      DARABONBA_PTR_FROM_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryCalendarAvailabilityShrinkRequest() = default ;
    GlobalHotelQueryCalendarAvailabilityShrinkRequest(const GlobalHotelQueryCalendarAvailabilityShrinkRequest &) = default ;
    GlobalHotelQueryCalendarAvailabilityShrinkRequest(GlobalHotelQueryCalendarAvailabilityShrinkRequest &&) = default ;
    GlobalHotelQueryCalendarAvailabilityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryCalendarAvailabilityShrinkRequest() = default ;
    GlobalHotelQueryCalendarAvailabilityShrinkRequest& operator=(const GlobalHotelQueryCalendarAvailabilityShrinkRequest &) = default ;
    GlobalHotelQueryCalendarAvailabilityShrinkRequest& operator=(GlobalHotelQueryCalendarAvailabilityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->adultCount_ == nullptr && this->checkInDateEnd_ == nullptr && this->checkInDateStart_ == nullptr && this->childCount_ == nullptr && this->childrenAgesShrink_ == nullptr
        && this->roomCount_ == nullptr && this->standardHotelIdsShrink_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // adultCount Field Functions 
    bool hasAdultCount() const { return this->adultCount_ != nullptr;};
    void deleteAdultCount() { this->adultCount_ = nullptr;};
    inline int32_t getAdultCount() const { DARABONBA_PTR_GET_DEFAULT(adultCount_, 0) };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setAdultCount(int32_t adultCount) { DARABONBA_PTR_SET_VALUE(adultCount_, adultCount) };


    // checkInDateEnd Field Functions 
    bool hasCheckInDateEnd() const { return this->checkInDateEnd_ != nullptr;};
    void deleteCheckInDateEnd() { this->checkInDateEnd_ = nullptr;};
    inline string getCheckInDateEnd() const { DARABONBA_PTR_GET_DEFAULT(checkInDateEnd_, "") };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setCheckInDateEnd(string checkInDateEnd) { DARABONBA_PTR_SET_VALUE(checkInDateEnd_, checkInDateEnd) };


    // checkInDateStart Field Functions 
    bool hasCheckInDateStart() const { return this->checkInDateStart_ != nullptr;};
    void deleteCheckInDateStart() { this->checkInDateStart_ = nullptr;};
    inline string getCheckInDateStart() const { DARABONBA_PTR_GET_DEFAULT(checkInDateStart_, "") };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setCheckInDateStart(string checkInDateStart) { DARABONBA_PTR_SET_VALUE(checkInDateStart_, checkInDateStart) };


    // childCount Field Functions 
    bool hasChildCount() const { return this->childCount_ != nullptr;};
    void deleteChildCount() { this->childCount_ = nullptr;};
    inline int32_t getChildCount() const { DARABONBA_PTR_GET_DEFAULT(childCount_, 0) };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setChildCount(int32_t childCount) { DARABONBA_PTR_SET_VALUE(childCount_, childCount) };


    // childrenAgesShrink Field Functions 
    bool hasChildrenAgesShrink() const { return this->childrenAgesShrink_ != nullptr;};
    void deleteChildrenAgesShrink() { this->childrenAgesShrink_ = nullptr;};
    inline string getChildrenAgesShrink() const { DARABONBA_PTR_GET_DEFAULT(childrenAgesShrink_, "") };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setChildrenAgesShrink(string childrenAgesShrink) { DARABONBA_PTR_SET_VALUE(childrenAgesShrink_, childrenAgesShrink) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // standardHotelIdsShrink Field Functions 
    bool hasStandardHotelIdsShrink() const { return this->standardHotelIdsShrink_ != nullptr;};
    void deleteStandardHotelIdsShrink() { this->standardHotelIdsShrink_ = nullptr;};
    inline string getStandardHotelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(standardHotelIdsShrink_, "") };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setStandardHotelIdsShrink(string standardHotelIdsShrink) { DARABONBA_PTR_SET_VALUE(standardHotelIdsShrink_, standardHotelIdsShrink) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryCalendarAvailabilityShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The account ID of the distributor.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The number of adults.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adultCount_ {};
    // The end date of the check-in date range in the format yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> checkInDateEnd_ {};
    // The start date of the check-in date range in the format yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> checkInDateStart_ {};
    // The number of children.
    shared_ptr<int32_t> childCount_ {};
    // The list of children\\"s ages.
    shared_ptr<string> childrenAgesShrink_ {};
    // The number of rooms.
    // 
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    // The IDs of the hotels.
    // 
    // This parameter is required.
    shared_ptr<string> standardHotelIdsShrink_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
