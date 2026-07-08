// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORSMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PHONENUMBERSTATUSFORSMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class PhoneNumberStatusForSmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PhoneNumberStatusForSmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PhoneNumberStatusForSmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PhoneNumberStatusForSmsResponseBody() = default ;
    PhoneNumberStatusForSmsResponseBody(const PhoneNumberStatusForSmsResponseBody &) = default ;
    PhoneNumberStatusForSmsResponseBody(PhoneNumberStatusForSmsResponseBody &&) = default ;
    PhoneNumberStatusForSmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PhoneNumberStatusForSmsResponseBody() = default ;
    PhoneNumberStatusForSmsResponseBody& operator=(const PhoneNumberStatusForSmsResponseBody &) = default ;
    PhoneNumberStatusForSmsResponseBody& operator=(PhoneNumberStatusForSmsResponseBody &&) = default ;
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
      // The carrier of the phone number. If the number has been ported, this parameter returns the current carrier. Valid values:
      // 
      // - **CMCC**: China Mobile.
      // 
      // - **CUCC**: China Unicom.
      // 
      // - **CTCC**: China Telecom.
      // 
      // > Queries for China Broadnet numbers are not supported.
      shared_ptr<string> carrier_ {};
      // The status of the phone number. Valid values:
      // 
      // - **NORMAL**: Active.
      // 
      // - **SHUTDOWN**: Shutdown.
      // 
      // - **POWER_OFF**: Powered off.
      // 
      // - **NOT_EXIST**: Non-existent number.
      // 
      // - **DEFECT**: Invalid number.
      // 
      // - **UNKNOWN**: Unknown.
      // 
      // > Due to carrier system adjustments, the statuses for busy, suspected to be powered off, and powered off are not returned for China Telecom numbers. For more information, see the [official announcement](https://help.aliyun.com/document_detail/2489709.html).
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PhoneNumberStatusForSmsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PhoneNumberStatusForSmsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PhoneNumberStatusForSmsResponseBody::Data) };
    inline PhoneNumberStatusForSmsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PhoneNumberStatusForSmsResponseBody::Data) };
    inline PhoneNumberStatusForSmsResponseBody& setData(const PhoneNumberStatusForSmsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PhoneNumberStatusForSmsResponseBody& setData(PhoneNumberStatusForSmsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PhoneNumberStatusForSmsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PhoneNumberStatusForSmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request status code. Valid values:
    // 
    // - **OK**: The request was successful.
    // 
    // - **OperatorLimit**: The carrier restricts queries for this phone number.
    // 
    // - **RequestFrequencyLimit**: Indicates that requests for a single number are too frequent. Due to carrier restrictions, repeated queries for the same number within a short period are prohibited. If you receive this error code, try again later.
    shared_ptr<string> code_ {};
    // A container for the returned data.
    shared_ptr<PhoneNumberStatusForSmsResponseBody::Data> data_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The unique ID of the request. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
