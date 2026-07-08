// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class PhoneNumberStatusForVoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PhoneNumberStatusForVoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PhoneNumberStatusForVoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PhoneNumberStatusForVoiceResponseBody() = default ;
    PhoneNumberStatusForVoiceResponseBody(const PhoneNumberStatusForVoiceResponseBody &) = default ;
    PhoneNumberStatusForVoiceResponseBody(PhoneNumberStatusForVoiceResponseBody &&) = default ;
    PhoneNumberStatusForVoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PhoneNumberStatusForVoiceResponseBody() = default ;
    PhoneNumberStatusForVoiceResponseBody& operator=(const PhoneNumberStatusForVoiceResponseBody &) = default ;
    PhoneNumberStatusForVoiceResponseBody& operator=(PhoneNumberStatusForVoiceResponseBody &&) = default ;
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
      // The current carrier for the number. If the number has been ported, this field returns the new carrier. Valid values:
      // 
      // - **CMCC**: China Mobile
      // 
      // - **CUCC**: China Unicom
      // 
      // - **CTCC**: China Telecom
      // 
      // > Queries for China Broadnet numbers are not supported.
      shared_ptr<string> carrier_ {};
      // The status of the phone number. Valid values:
      // 
      // - **NORMAL**: The number is active.
      // 
      // - **SHUTDOWN**: The service for the number is suspended.
      // 
      // - **POWER_OFF**: The phone is powered off.
      // 
      // - **NOT_EXIST**: The number does not exist.
      // 
      // - **SUSPECTED_POWER_OFF**: The phone is likely powered off.
      // 
      // - **DEFECT**: The number is invalid.
      // 
      // - **UNKNOWN**: The status is unknown.
      // 
      // > Due to carrier system adjustments, the `SUSPECTED_POWER_OFF` and `POWER_OFF` statuses are not returned for China Telecom numbers. [For more information, see the official announcement.](https://help.aliyun.com/document_detail/2489709.html)
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PhoneNumberStatusForVoiceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PhoneNumberStatusForVoiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PhoneNumberStatusForVoiceResponseBody::Data) };
    inline PhoneNumberStatusForVoiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PhoneNumberStatusForVoiceResponseBody::Data) };
    inline PhoneNumberStatusForVoiceResponseBody& setData(const PhoneNumberStatusForVoiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PhoneNumberStatusForVoiceResponseBody& setData(PhoneNumberStatusForVoiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PhoneNumberStatusForVoiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PhoneNumberStatusForVoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the request. Valid values:
    // 
    // - **OK**: The request was successful.
    // 
    // - **OperatorLimit**: The carrier restricts queries for this phone number.
    // 
    // - **RequestFrequencyLimit**: Carrier restrictions limit how frequently you can query the same number. If you receive this error, try again later.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<PhoneNumberStatusForVoiceResponseBody::Data> data_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID. This is a common parameter. Each request has a unique ID that you can use to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
