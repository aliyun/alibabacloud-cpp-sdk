// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCHANGEOFORDERRESPONSEBODY_HPP_
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
  class FlightChangeOfOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightChangeOfOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FlightChangeOfOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    FlightChangeOfOrderResponseBody() = default ;
    FlightChangeOfOrderResponseBody(const FlightChangeOfOrderResponseBody &) = default ;
    FlightChangeOfOrderResponseBody(FlightChangeOfOrderResponseBody &&) = default ;
    FlightChangeOfOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightChangeOfOrderResponseBody() = default ;
    FlightChangeOfOrderResponseBody& operator=(const FlightChangeOfOrderResponseBody &) = default ;
    FlightChangeOfOrderResponseBody& operator=(FlightChangeOfOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(flight_change_detail, flightChangeDetail_);
        DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_change_detail, flightChangeDetail_);
        DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlightChangeDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightChangeDetail& obj) { 
          DARABONBA_PTR_TO_JSON(change_reason, changeReason_);
          DARABONBA_PTR_TO_JSON(change_time, changeTime_);
          DARABONBA_PTR_TO_JSON(change_type, changeType_);
          DARABONBA_PTR_TO_JSON(new_arrival_airport, newArrivalAirport_);
          DARABONBA_PTR_TO_JSON(new_arrival_time, newArrivalTime_);
          DARABONBA_PTR_TO_JSON(new_departure_airport, newDepartureAirport_);
          DARABONBA_PTR_TO_JSON(new_departure_time, newDepartureTime_);
          DARABONBA_PTR_TO_JSON(new_flight_no, newFlightNo_);
          DARABONBA_PTR_TO_JSON(old_arrival_airport, oldArrivalAirport_);
          DARABONBA_PTR_TO_JSON(old_arrival_time, oldArrivalTime_);
          DARABONBA_PTR_TO_JSON(old_departure_airport, oldDepartureAirport_);
          DARABONBA_PTR_TO_JSON(old_departure_time, oldDepartureTime_);
          DARABONBA_PTR_TO_JSON(old_flight_no, oldFlightNo_);
        };
        friend void from_json(const Darabonba::Json& j, FlightChangeDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(change_reason, changeReason_);
          DARABONBA_PTR_FROM_JSON(change_time, changeTime_);
          DARABONBA_PTR_FROM_JSON(change_type, changeType_);
          DARABONBA_PTR_FROM_JSON(new_arrival_airport, newArrivalAirport_);
          DARABONBA_PTR_FROM_JSON(new_arrival_time, newArrivalTime_);
          DARABONBA_PTR_FROM_JSON(new_departure_airport, newDepartureAirport_);
          DARABONBA_PTR_FROM_JSON(new_departure_time, newDepartureTime_);
          DARABONBA_PTR_FROM_JSON(new_flight_no, newFlightNo_);
          DARABONBA_PTR_FROM_JSON(old_arrival_airport, oldArrivalAirport_);
          DARABONBA_PTR_FROM_JSON(old_arrival_time, oldArrivalTime_);
          DARABONBA_PTR_FROM_JSON(old_departure_airport, oldDepartureAirport_);
          DARABONBA_PTR_FROM_JSON(old_departure_time, oldDepartureTime_);
          DARABONBA_PTR_FROM_JSON(old_flight_no, oldFlightNo_);
        };
        FlightChangeDetail() = default ;
        FlightChangeDetail(const FlightChangeDetail &) = default ;
        FlightChangeDetail(FlightChangeDetail &&) = default ;
        FlightChangeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightChangeDetail() = default ;
        FlightChangeDetail& operator=(const FlightChangeDetail &) = default ;
        FlightChangeDetail& operator=(FlightChangeDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeReason_ == nullptr
        && this->changeTime_ == nullptr && this->changeType_ == nullptr && this->newArrivalAirport_ == nullptr && this->newArrivalTime_ == nullptr && this->newDepartureAirport_ == nullptr
        && this->newDepartureTime_ == nullptr && this->newFlightNo_ == nullptr && this->oldArrivalAirport_ == nullptr && this->oldArrivalTime_ == nullptr && this->oldDepartureAirport_ == nullptr
        && this->oldDepartureTime_ == nullptr && this->oldFlightNo_ == nullptr; };
        // changeReason Field Functions 
        bool hasChangeReason() const { return this->changeReason_ != nullptr;};
        void deleteChangeReason() { this->changeReason_ = nullptr;};
        inline string getChangeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
        inline FlightChangeDetail& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


        // changeTime Field Functions 
        bool hasChangeTime() const { return this->changeTime_ != nullptr;};
        void deleteChangeTime() { this->changeTime_ = nullptr;};
        inline string getChangeTime() const { DARABONBA_PTR_GET_DEFAULT(changeTime_, "") };
        inline FlightChangeDetail& setChangeTime(string changeTime) { DARABONBA_PTR_SET_VALUE(changeTime_, changeTime) };


        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline int32_t getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
        inline FlightChangeDetail& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // newArrivalAirport Field Functions 
        bool hasNewArrivalAirport() const { return this->newArrivalAirport_ != nullptr;};
        void deleteNewArrivalAirport() { this->newArrivalAirport_ = nullptr;};
        inline string getNewArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(newArrivalAirport_, "") };
        inline FlightChangeDetail& setNewArrivalAirport(string newArrivalAirport) { DARABONBA_PTR_SET_VALUE(newArrivalAirport_, newArrivalAirport) };


        // newArrivalTime Field Functions 
        bool hasNewArrivalTime() const { return this->newArrivalTime_ != nullptr;};
        void deleteNewArrivalTime() { this->newArrivalTime_ = nullptr;};
        inline string getNewArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(newArrivalTime_, "") };
        inline FlightChangeDetail& setNewArrivalTime(string newArrivalTime) { DARABONBA_PTR_SET_VALUE(newArrivalTime_, newArrivalTime) };


        // newDepartureAirport Field Functions 
        bool hasNewDepartureAirport() const { return this->newDepartureAirport_ != nullptr;};
        void deleteNewDepartureAirport() { this->newDepartureAirport_ = nullptr;};
        inline string getNewDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(newDepartureAirport_, "") };
        inline FlightChangeDetail& setNewDepartureAirport(string newDepartureAirport) { DARABONBA_PTR_SET_VALUE(newDepartureAirport_, newDepartureAirport) };


        // newDepartureTime Field Functions 
        bool hasNewDepartureTime() const { return this->newDepartureTime_ != nullptr;};
        void deleteNewDepartureTime() { this->newDepartureTime_ = nullptr;};
        inline string getNewDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(newDepartureTime_, "") };
        inline FlightChangeDetail& setNewDepartureTime(string newDepartureTime) { DARABONBA_PTR_SET_VALUE(newDepartureTime_, newDepartureTime) };


        // newFlightNo Field Functions 
        bool hasNewFlightNo() const { return this->newFlightNo_ != nullptr;};
        void deleteNewFlightNo() { this->newFlightNo_ = nullptr;};
        inline string getNewFlightNo() const { DARABONBA_PTR_GET_DEFAULT(newFlightNo_, "") };
        inline FlightChangeDetail& setNewFlightNo(string newFlightNo) { DARABONBA_PTR_SET_VALUE(newFlightNo_, newFlightNo) };


        // oldArrivalAirport Field Functions 
        bool hasOldArrivalAirport() const { return this->oldArrivalAirport_ != nullptr;};
        void deleteOldArrivalAirport() { this->oldArrivalAirport_ = nullptr;};
        inline string getOldArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(oldArrivalAirport_, "") };
        inline FlightChangeDetail& setOldArrivalAirport(string oldArrivalAirport) { DARABONBA_PTR_SET_VALUE(oldArrivalAirport_, oldArrivalAirport) };


        // oldArrivalTime Field Functions 
        bool hasOldArrivalTime() const { return this->oldArrivalTime_ != nullptr;};
        void deleteOldArrivalTime() { this->oldArrivalTime_ = nullptr;};
        inline string getOldArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(oldArrivalTime_, "") };
        inline FlightChangeDetail& setOldArrivalTime(string oldArrivalTime) { DARABONBA_PTR_SET_VALUE(oldArrivalTime_, oldArrivalTime) };


        // oldDepartureAirport Field Functions 
        bool hasOldDepartureAirport() const { return this->oldDepartureAirport_ != nullptr;};
        void deleteOldDepartureAirport() { this->oldDepartureAirport_ = nullptr;};
        inline string getOldDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(oldDepartureAirport_, "") };
        inline FlightChangeDetail& setOldDepartureAirport(string oldDepartureAirport) { DARABONBA_PTR_SET_VALUE(oldDepartureAirport_, oldDepartureAirport) };


        // oldDepartureTime Field Functions 
        bool hasOldDepartureTime() const { return this->oldDepartureTime_ != nullptr;};
        void deleteOldDepartureTime() { this->oldDepartureTime_ = nullptr;};
        inline string getOldDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(oldDepartureTime_, "") };
        inline FlightChangeDetail& setOldDepartureTime(string oldDepartureTime) { DARABONBA_PTR_SET_VALUE(oldDepartureTime_, oldDepartureTime) };


        // oldFlightNo Field Functions 
        bool hasOldFlightNo() const { return this->oldFlightNo_ != nullptr;};
        void deleteOldFlightNo() { this->oldFlightNo_ = nullptr;};
        inline string getOldFlightNo() const { DARABONBA_PTR_GET_DEFAULT(oldFlightNo_, "") };
        inline FlightChangeDetail& setOldFlightNo(string oldFlightNo) { DARABONBA_PTR_SET_VALUE(oldFlightNo_, oldFlightNo) };


      protected:
        // The reason for the flight change.
        shared_ptr<string> changeReason_ {};
        // The time of the flight change in string format (yyyy-MM-dd HH:mm:ss).
        shared_ptr<string> changeTime_ {};
        // The type of the flight change. Valid values:
        // - 1: cancellation
        // - 2: schedule change.
        shared_ptr<int32_t> changeType_ {};
        // The three-letter IATA code of the new arrival airport (uppercase).
        shared_ptr<string> newArrivalAirport_ {};
        // The arrival date and time of the new flight in string format (yyyy-MM-dd HH:mm:ss).
        shared_ptr<string> newArrivalTime_ {};
        // The three-letter IATA code of the new departure airport (uppercase).
        shared_ptr<string> newDepartureAirport_ {};
        // The departure date and time of the new flight in string format (yyyy-MM-dd HH:mm:ss).
        shared_ptr<string> newDepartureTime_ {};
        // The new flight number.
        shared_ptr<string> newFlightNo_ {};
        // The three-letter IATA code of the original arrival airport (uppercase).
        shared_ptr<string> oldArrivalAirport_ {};
        // The arrival date and time of the original flight in string format (yyyy-MM-dd HH:mm:ss).
        shared_ptr<string> oldArrivalTime_ {};
        // The three-letter IATA code of the original departure airport (uppercase).
        shared_ptr<string> oldDepartureAirport_ {};
        // The departure date and time of the original flight in string format (yyyy-MM-dd HH:mm:ss).
        shared_ptr<string> oldDepartureTime_ {};
        // The original flight number.
        shared_ptr<string> oldFlightNo_ {};
      };

      virtual bool empty() const override { return this->flightChangeDetail_ == nullptr
        && this->orderNum_ == nullptr; };
      // flightChangeDetail Field Functions 
      bool hasFlightChangeDetail() const { return this->flightChangeDetail_ != nullptr;};
      void deleteFlightChangeDetail() { this->flightChangeDetail_ = nullptr;};
      inline const Data::FlightChangeDetail & getFlightChangeDetail() const { DARABONBA_PTR_GET_CONST(flightChangeDetail_, Data::FlightChangeDetail) };
      inline Data::FlightChangeDetail getFlightChangeDetail() { DARABONBA_PTR_GET(flightChangeDetail_, Data::FlightChangeDetail) };
      inline Data& setFlightChangeDetail(const Data::FlightChangeDetail & flightChangeDetail) { DARABONBA_PTR_SET_VALUE(flightChangeDetail_, flightChangeDetail) };
      inline Data& setFlightChangeDetail(Data::FlightChangeDetail && flightChangeDetail) { DARABONBA_PTR_SET_RVALUE(flightChangeDetail_, flightChangeDetail) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
      inline Data& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    protected:
      // The flight change information.
      shared_ptr<Data::FlightChangeDetail> flightChangeDetail_ {};
      // The order number.
      shared_ptr<int64_t> orderNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightChangeOfOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<FlightChangeOfOrderResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<FlightChangeOfOrderResponseBody::Data>) };
    inline vector<FlightChangeOfOrderResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<FlightChangeOfOrderResponseBody::Data>) };
    inline FlightChangeOfOrderResponseBody& setData(const vector<FlightChangeOfOrderResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FlightChangeOfOrderResponseBody& setData(vector<FlightChangeOfOrderResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline FlightChangeOfOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline FlightChangeOfOrderResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline FlightChangeOfOrderResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline FlightChangeOfOrderResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightChangeOfOrderResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightChangeOfOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<vector<FlightChangeOfOrderResponseBody::Data>> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
