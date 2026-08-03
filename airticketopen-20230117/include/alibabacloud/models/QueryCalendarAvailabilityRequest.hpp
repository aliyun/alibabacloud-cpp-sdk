// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALENDARAVAILABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALENDARAVAILABILITYREQUEST_HPP_
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
  class QueryCalendarAvailabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCalendarAvailabilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_TO_JSON(CheckInDateEnd, checkInDateEnd_);
      DARABONBA_PTR_TO_JSON(CheckInDateStart, checkInDateStart_);
      DARABONBA_PTR_TO_JSON(ChildCount, childCount_);
      DARABONBA_PTR_TO_JSON(ChildrenAges, childrenAges_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCalendarAvailabilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(AdultCount, adultCount_);
      DARABONBA_PTR_FROM_JSON(CheckInDateEnd, checkInDateEnd_);
      DARABONBA_PTR_FROM_JSON(CheckInDateStart, checkInDateStart_);
      DARABONBA_PTR_FROM_JSON(ChildCount, childCount_);
      DARABONBA_PTR_FROM_JSON(ChildrenAges, childrenAges_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    QueryCalendarAvailabilityRequest() = default ;
    QueryCalendarAvailabilityRequest(const QueryCalendarAvailabilityRequest &) = default ;
    QueryCalendarAvailabilityRequest(QueryCalendarAvailabilityRequest &&) = default ;
    QueryCalendarAvailabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCalendarAvailabilityRequest() = default ;
    QueryCalendarAvailabilityRequest& operator=(const QueryCalendarAvailabilityRequest &) = default ;
    QueryCalendarAvailabilityRequest& operator=(QueryCalendarAvailabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->adultCount_ == nullptr && this->checkInDateEnd_ == nullptr && this->checkInDateStart_ == nullptr && this->childCount_ == nullptr && this->childrenAges_ == nullptr
        && this->roomCount_ == nullptr && this->standardHotelIds_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline QueryCalendarAvailabilityRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // adultCount Field Functions 
    bool hasAdultCount() const { return this->adultCount_ != nullptr;};
    void deleteAdultCount() { this->adultCount_ = nullptr;};
    inline int32_t getAdultCount() const { DARABONBA_PTR_GET_DEFAULT(adultCount_, 0) };
    inline QueryCalendarAvailabilityRequest& setAdultCount(int32_t adultCount) { DARABONBA_PTR_SET_VALUE(adultCount_, adultCount) };


    // checkInDateEnd Field Functions 
    bool hasCheckInDateEnd() const { return this->checkInDateEnd_ != nullptr;};
    void deleteCheckInDateEnd() { this->checkInDateEnd_ = nullptr;};
    inline string getCheckInDateEnd() const { DARABONBA_PTR_GET_DEFAULT(checkInDateEnd_, "") };
    inline QueryCalendarAvailabilityRequest& setCheckInDateEnd(string checkInDateEnd) { DARABONBA_PTR_SET_VALUE(checkInDateEnd_, checkInDateEnd) };


    // checkInDateStart Field Functions 
    bool hasCheckInDateStart() const { return this->checkInDateStart_ != nullptr;};
    void deleteCheckInDateStart() { this->checkInDateStart_ = nullptr;};
    inline string getCheckInDateStart() const { DARABONBA_PTR_GET_DEFAULT(checkInDateStart_, "") };
    inline QueryCalendarAvailabilityRequest& setCheckInDateStart(string checkInDateStart) { DARABONBA_PTR_SET_VALUE(checkInDateStart_, checkInDateStart) };


    // childCount Field Functions 
    bool hasChildCount() const { return this->childCount_ != nullptr;};
    void deleteChildCount() { this->childCount_ = nullptr;};
    inline int32_t getChildCount() const { DARABONBA_PTR_GET_DEFAULT(childCount_, 0) };
    inline QueryCalendarAvailabilityRequest& setChildCount(int32_t childCount) { DARABONBA_PTR_SET_VALUE(childCount_, childCount) };


    // childrenAges Field Functions 
    bool hasChildrenAges() const { return this->childrenAges_ != nullptr;};
    void deleteChildrenAges() { this->childrenAges_ = nullptr;};
    inline const vector<int32_t> & getChildrenAges() const { DARABONBA_PTR_GET_CONST(childrenAges_, vector<int32_t>) };
    inline vector<int32_t> getChildrenAges() { DARABONBA_PTR_GET(childrenAges_, vector<int32_t>) };
    inline QueryCalendarAvailabilityRequest& setChildrenAges(const vector<int32_t> & childrenAges) { DARABONBA_PTR_SET_VALUE(childrenAges_, childrenAges) };
    inline QueryCalendarAvailabilityRequest& setChildrenAges(vector<int32_t> && childrenAges) { DARABONBA_PTR_SET_RVALUE(childrenAges_, childrenAges) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline QueryCalendarAvailabilityRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // standardHotelIds Field Functions 
    bool hasStandardHotelIds() const { return this->standardHotelIds_ != nullptr;};
    void deleteStandardHotelIds() { this->standardHotelIds_ = nullptr;};
    inline const vector<string> & getStandardHotelIds() const { DARABONBA_PTR_GET_CONST(standardHotelIds_, vector<string>) };
    inline vector<string> getStandardHotelIds() { DARABONBA_PTR_GET(standardHotelIds_, vector<string>) };
    inline QueryCalendarAvailabilityRequest& setStandardHotelIds(const vector<string> & standardHotelIds) { DARABONBA_PTR_SET_VALUE(standardHotelIds_, standardHotelIds) };
    inline QueryCalendarAvailabilityRequest& setStandardHotelIds(vector<string> && standardHotelIds) { DARABONBA_PTR_SET_RVALUE(standardHotelIds_, standardHotelIds) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline QueryCalendarAvailabilityRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> adultCount_ {};
    // This parameter is required.
    shared_ptr<string> checkInDateEnd_ {};
    // This parameter is required.
    shared_ptr<string> checkInDateStart_ {};
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
