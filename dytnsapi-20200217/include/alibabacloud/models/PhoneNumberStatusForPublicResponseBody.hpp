// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORPUBLICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORPUBLICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class PhoneNumberStatusForPublicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PhoneNumberStatusForPublicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PhoneNumberStatusForPublicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PhoneNumberStatusForPublicResponseBody() = default ;
    PhoneNumberStatusForPublicResponseBody(const PhoneNumberStatusForPublicResponseBody &) = default ;
    PhoneNumberStatusForPublicResponseBody(PhoneNumberStatusForPublicResponseBody &&) = default ;
    PhoneNumberStatusForPublicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PhoneNumberStatusForPublicResponseBody() = default ;
    PhoneNumberStatusForPublicResponseBody& operator=(const PhoneNumberStatusForPublicResponseBody &) = default ;
    PhoneNumberStatusForPublicResponseBody& operator=(PhoneNumberStatusForPublicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->carrier_ == nullptr
        && this->status_ == nullptr; };
      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline Data& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The basic carrier of the number. If the number has been ported, this parameter returns the current carrier.
      // 
      // Valid values:
      // 
      // - **CMCC**: China Mobile
      // 
      // - **CUCC**: China Unicom
      // 
      // - **CTCC**: China Telecom
      // 
      // - **CBN**: China Broadnet
      shared_ptr<string> carrier_ {};
      // The status of the queried phone number. Valid values:
      // 
      // - **NORMAL**: The number is in service.
      // 
      // - **SHUTDOWN**: The service for the number is suspended.
      // 
      // - **POWER_OFF**: The phone is powered off.
      // 
      // - **NOT_EXIST**: The number is non-existent.
      // 
      // - **SUSPECTED_POWER_OFF**: The phone is suspected to be powered off.
      // 
      // - **BUSY**: The line is busy.
      // 
      // - **UNKNOWN**: The status is unknown.
      // 
      // > Due to carrier system adjustments, the `BUSY`, `SUSPECTED_POWER_OFF`, and `POWER_OFF` statuses are not returned for China Telecom numbers. For more information, see the [official announcement](https://help.aliyun.com/document_detail/2489709.html).
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PhoneNumberStatusForPublicResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PhoneNumberStatusForPublicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PhoneNumberStatusForPublicResponseBody::Data) };
    inline PhoneNumberStatusForPublicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PhoneNumberStatusForPublicResponseBody::Data) };
    inline PhoneNumberStatusForPublicResponseBody& setData(const PhoneNumberStatusForPublicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PhoneNumberStatusForPublicResponseBody& setData(PhoneNumberStatusForPublicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PhoneNumberStatusForPublicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PhoneNumberStatusForPublicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the request. Valid values:
    // 
    // - **OK**: The request was successful.
    // 
    // - **OperatorLimit**: The query for the phone number is prohibited by the carrier.
    // 
    // - **RequestFrequencyLimit**: Carrier restrictions prohibit frequent queries for the same number in a short period. If this error code is returned, try again later.
    // 
    // > For a list of other error codes, see [API Error Center](https://next.api.aliyun.com/document/Dytnsapi/2020-02-17/errorCode).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<PhoneNumberStatusForPublicResponseBody::Data> data_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
