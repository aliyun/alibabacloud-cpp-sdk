// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYAVAILABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelQueryAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_TO_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_TO_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_TO_JSON(ChildCount, childCount_);
      DARABONBA_PTR_TO_JSON(ChildrenAges, childrenAges_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_FROM_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_FROM_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_FROM_JSON(ChildCount, childCount_);
      DARABONBA_PTR_FROM_JSON(ChildrenAges, childrenAges_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryAvailabilityRequest() = default ;
    GlobalHotelQueryAvailabilityRequest(const GlobalHotelQueryAvailabilityRequest &) = default ;
    GlobalHotelQueryAvailabilityRequest(GlobalHotelQueryAvailabilityRequest &&) = default ;
    GlobalHotelQueryAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryAvailabilityRequest() = default ;
    GlobalHotelQueryAvailabilityRequest& operator=(const GlobalHotelQueryAvailabilityRequest &) = default ;
    GlobalHotelQueryAvailabilityRequest& operator=(GlobalHotelQueryAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->adultCount_ == nullptr && this->checkInDate_ == nullptr && this->checkOutDate_ == nullptr && this->childCount_ == nullptr && this->childrenAges_ == nullptr
        && this->roomCount_ == nullptr && this->standardHotelIds_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelQueryAvailabilityRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // adultCount Field Functions 
    bool hasAdultCount() const { return this->adultCount_ != nullptr;};
    void deleteAdultCount() { this->adultCount_ = nullptr;};
    inline int32_t getAdultCount() const { DARABONBA_PTR_GET_DEFAULT(adultCount_, 0) };
    inline GlobalHotelQueryAvailabilityRequest& setAdultCount(int32_t adultCount) { DARABONBA_PTR_SET_VALUE(adultCount_, adultCount) };


    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline GlobalHotelQueryAvailabilityRequest& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string getCheckOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline GlobalHotelQueryAvailabilityRequest& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // childCount Field Functions 
    bool hasChildCount() const { return this->childCount_ != nullptr;};
    void deleteChildCount() { this->childCount_ = nullptr;};
    inline int32_t getChildCount() const { DARABONBA_PTR_GET_DEFAULT(childCount_, 0) };
    inline GlobalHotelQueryAvailabilityRequest& setChildCount(int32_t childCount) { DARABONBA_PTR_SET_VALUE(childCount_, childCount) };


    // childrenAges Field Functions 
    bool hasChildrenAges() const { return this->childrenAges_ != nullptr;};
    void deleteChildrenAges() { this->childrenAges_ = nullptr;};
    inline const vector<int32_t> & getChildrenAges() const { DARABONBA_PTR_GET_CONST(childrenAges_, vector<int32_t>) };
    inline vector<int32_t> getChildrenAges() { DARABONBA_PTR_GET(childrenAges_, vector<int32_t>) };
    inline GlobalHotelQueryAvailabilityRequest& setChildrenAges(const vector<int32_t> & childrenAges) { DARABONBA_PTR_SET_VALUE(childrenAges_, childrenAges) };
    inline GlobalHotelQueryAvailabilityRequest& setChildrenAges(vector<int32_t> && childrenAges) { DARABONBA_PTR_SET_RVALUE(childrenAges_, childrenAges) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline GlobalHotelQueryAvailabilityRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // standardHotelIds Field Functions 
    bool hasStandardHotelIds() const { return this->standardHotelIds_ != nullptr;};
    void deleteStandardHotelIds() { this->standardHotelIds_ = nullptr;};
    inline const vector<string> & getStandardHotelIds() const { DARABONBA_PTR_GET_CONST(standardHotelIds_, vector<string>) };
    inline vector<string> getStandardHotelIds() { DARABONBA_PTR_GET(standardHotelIds_, vector<string>) };
    inline GlobalHotelQueryAvailabilityRequest& setStandardHotelIds(const vector<string> & standardHotelIds) { DARABONBA_PTR_SET_VALUE(standardHotelIds_, standardHotelIds) };
    inline GlobalHotelQueryAvailabilityRequest& setStandardHotelIds(vector<string> && standardHotelIds) { DARABONBA_PTR_SET_RVALUE(standardHotelIds_, standardHotelIds) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryAvailabilityRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> adultCount_ {};
    // This parameter is required.
    shared_ptr<string> checkInDate_ {};
    // This parameter is required.
    shared_ptr<string> checkOutDate_ {};
    shared_ptr<int32_t> childCount_ {};
    shared_ptr<vector<int32_t>> childrenAges_ {};
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    // This parameter is required.
    shared_ptr<vector<string>> standardHotelIds_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
