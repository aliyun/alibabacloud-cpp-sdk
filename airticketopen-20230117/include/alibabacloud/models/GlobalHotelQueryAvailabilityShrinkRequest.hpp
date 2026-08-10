// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYAVAILABILITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYAVAILABILITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelQueryAvailabilityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryAvailabilityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_TO_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_TO_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_TO_JSON(ChildCount, childCount_);
      DARABONBA_PTR_TO_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryAvailabilityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_FROM_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_FROM_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_FROM_JSON(ChildCount, childCount_);
      DARABONBA_PTR_FROM_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryAvailabilityShrinkRequest() = default ;
    GlobalHotelQueryAvailabilityShrinkRequest(const GlobalHotelQueryAvailabilityShrinkRequest &) = default ;
    GlobalHotelQueryAvailabilityShrinkRequest(GlobalHotelQueryAvailabilityShrinkRequest &&) = default ;
    GlobalHotelQueryAvailabilityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryAvailabilityShrinkRequest() = default ;
    GlobalHotelQueryAvailabilityShrinkRequest& operator=(const GlobalHotelQueryAvailabilityShrinkRequest &) = default ;
    GlobalHotelQueryAvailabilityShrinkRequest& operator=(GlobalHotelQueryAvailabilityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->adultCount_ == nullptr && this->checkInDate_ == nullptr && this->checkOutDate_ == nullptr && this->childCount_ == nullptr && this->childrenAgesShrink_ == nullptr
        && this->roomCount_ == nullptr && this->standardHotelIdsShrink_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // adultCount Field Functions 
    bool hasAdultCount() const { return this->adultCount_ != nullptr;};
    void deleteAdultCount() { this->adultCount_ = nullptr;};
    inline int32_t getAdultCount() const { DARABONBA_PTR_GET_DEFAULT(adultCount_, 0) };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setAdultCount(int32_t adultCount) { DARABONBA_PTR_SET_VALUE(adultCount_, adultCount) };


    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string getCheckOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // childCount Field Functions 
    bool hasChildCount() const { return this->childCount_ != nullptr;};
    void deleteChildCount() { this->childCount_ = nullptr;};
    inline int32_t getChildCount() const { DARABONBA_PTR_GET_DEFAULT(childCount_, 0) };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setChildCount(int32_t childCount) { DARABONBA_PTR_SET_VALUE(childCount_, childCount) };


    // childrenAgesShrink Field Functions 
    bool hasChildrenAgesShrink() const { return this->childrenAgesShrink_ != nullptr;};
    void deleteChildrenAgesShrink() { this->childrenAgesShrink_ = nullptr;};
    inline string getChildrenAgesShrink() const { DARABONBA_PTR_GET_DEFAULT(childrenAgesShrink_, "") };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setChildrenAgesShrink(string childrenAgesShrink) { DARABONBA_PTR_SET_VALUE(childrenAgesShrink_, childrenAgesShrink) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // standardHotelIdsShrink Field Functions 
    bool hasStandardHotelIdsShrink() const { return this->standardHotelIdsShrink_ != nullptr;};
    void deleteStandardHotelIdsShrink() { this->standardHotelIdsShrink_ = nullptr;};
    inline string getStandardHotelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(standardHotelIdsShrink_, "") };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setStandardHotelIdsShrink(string standardHotelIdsShrink) { DARABONBA_PTR_SET_VALUE(standardHotelIdsShrink_, standardHotelIdsShrink) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryAvailabilityShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The account ID of the distributor.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The number of adults.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adultCount_ {};
    // The check-in date in the format of yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> checkInDate_ {};
    // The check-out date in the format of yyyy-MM-dd.
    // 
    // This parameter is required.
    shared_ptr<string> checkOutDate_ {};
    // The number of children.
    shared_ptr<int32_t> childCount_ {};
    // The list of children\\"s ages.
    shared_ptr<string> childrenAgesShrink_ {};
    // The number of rooms.
    // 
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    // The list of standard hotel IDs.
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
