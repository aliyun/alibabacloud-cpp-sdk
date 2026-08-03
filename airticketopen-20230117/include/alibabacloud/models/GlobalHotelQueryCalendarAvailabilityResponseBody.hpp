// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELQUERYCALENDARAVAILABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELQUERYCALENDARAVAILABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataHotelsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelQueryCalendarAvailabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelQueryCalendarAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelQueryCalendarAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelQueryCalendarAvailabilityResponseBody() = default ;
    GlobalHotelQueryCalendarAvailabilityResponseBody(const GlobalHotelQueryCalendarAvailabilityResponseBody &) = default ;
    GlobalHotelQueryCalendarAvailabilityResponseBody(GlobalHotelQueryCalendarAvailabilityResponseBody &&) = default ;
    GlobalHotelQueryCalendarAvailabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelQueryCalendarAvailabilityResponseBody() = default ;
    GlobalHotelQueryCalendarAvailabilityResponseBody& operator=(const GlobalHotelQueryCalendarAvailabilityResponseBody &) = default ;
    GlobalHotelQueryCalendarAvailabilityResponseBody& operator=(GlobalHotelQueryCalendarAvailabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailedHotels, failedHotels_);
        DARABONBA_PTR_TO_JSON(Hotels, hotels_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedHotels, failedHotels_);
        DARABONBA_PTR_FROM_JSON(Hotels, hotels_);
        DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
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
      class FailedHotels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedHotels& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(StandardHotelId, standardHotelId_);
        };
        friend void from_json(const Darabonba::Json& j, FailedHotels& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(StandardHotelId, standardHotelId_);
        };
        FailedHotels() = default ;
        FailedHotels(const FailedHotels &) = default ;
        FailedHotels(FailedHotels &&) = default ;
        FailedHotels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedHotels() = default ;
        FailedHotels& operator=(const FailedHotels &) = default ;
        FailedHotels& operator=(FailedHotels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->standardHotelId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline FailedHotels& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline FailedHotels& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // standardHotelId Field Functions 
        bool hasStandardHotelId() const { return this->standardHotelId_ != nullptr;};
        void deleteStandardHotelId() { this->standardHotelId_ = nullptr;};
        inline string getStandardHotelId() const { DARABONBA_PTR_GET_DEFAULT(standardHotelId_, "") };
        inline FailedHotels& setStandardHotelId(string standardHotelId) { DARABONBA_PTR_SET_VALUE(standardHotelId_, standardHotelId) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> standardHotelId_ {};
      };

      virtual bool empty() const override { return this->failedHotels_ == nullptr
        && this->hotels_ == nullptr && this->tracerId_ == nullptr; };
      // failedHotels Field Functions 
      bool hasFailedHotels() const { return this->failedHotels_ != nullptr;};
      void deleteFailedHotels() { this->failedHotels_ = nullptr;};
      inline const vector<Data::FailedHotels> & getFailedHotels() const { DARABONBA_PTR_GET_CONST(failedHotels_, vector<Data::FailedHotels>) };
      inline vector<Data::FailedHotels> getFailedHotels() { DARABONBA_PTR_GET(failedHotels_, vector<Data::FailedHotels>) };
      inline Data& setFailedHotels(const vector<Data::FailedHotels> & failedHotels) { DARABONBA_PTR_SET_VALUE(failedHotels_, failedHotels) };
      inline Data& setFailedHotels(vector<Data::FailedHotels> && failedHotels) { DARABONBA_PTR_SET_RVALUE(failedHotels_, failedHotels) };


      // hotels Field Functions 
      bool hasHotels() const { return this->hotels_ != nullptr;};
      void deleteHotels() { this->hotels_ = nullptr;};
      inline const map<string, vector<DataHotelsValue>> & getHotels() const { DARABONBA_PTR_GET_CONST(hotels_, map<string, vector<DataHotelsValue>>) };
      inline map<string, vector<DataHotelsValue>> getHotels() { DARABONBA_PTR_GET(hotels_, map<string, vector<DataHotelsValue>>) };
      inline Data& setHotels(const map<string, vector<DataHotelsValue>> & hotels) { DARABONBA_PTR_SET_VALUE(hotels_, hotels) };
      inline Data& setHotels(map<string, vector<DataHotelsValue>> && hotels) { DARABONBA_PTR_SET_RVALUE(hotels_, hotels) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Data& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      shared_ptr<vector<Data::FailedHotels>> failedHotels_ {};
      shared_ptr<map<string, vector<DataHotelsValue>>> hotels_ {};
      shared_ptr<string> tracerId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelQueryCalendarAvailabilityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelQueryCalendarAvailabilityResponseBody::Data) };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelQueryCalendarAvailabilityResponseBody::Data) };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setData(const GlobalHotelQueryCalendarAvailabilityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setData(GlobalHotelQueryCalendarAvailabilityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelQueryCalendarAvailabilityResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    shared_ptr<GlobalHotelQueryCalendarAvailabilityResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
