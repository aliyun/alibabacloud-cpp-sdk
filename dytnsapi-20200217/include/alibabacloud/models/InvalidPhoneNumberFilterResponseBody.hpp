// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDPHONENUMBERFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVALIDPHONENUMBERFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class InvalidPhoneNumberFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidPhoneNumberFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidPhoneNumberFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InvalidPhoneNumberFilterResponseBody() = default ;
    InvalidPhoneNumberFilterResponseBody(const InvalidPhoneNumberFilterResponseBody &) = default ;
    InvalidPhoneNumberFilterResponseBody(InvalidPhoneNumberFilterResponseBody &&) = default ;
    InvalidPhoneNumberFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidPhoneNumberFilterResponseBody() = default ;
    InvalidPhoneNumberFilterResponseBody& operator=(const InvalidPhoneNumberFilterResponseBody &) = default ;
    InvalidPhoneNumberFilterResponseBody& operator=(InvalidPhoneNumberFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(EncryptedNumber, encryptedNumber_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(OriginalNumber, originalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(EncryptedNumber, encryptedNumber_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(OriginalNumber, originalNumber_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->encryptedNumber_ == nullptr && this->expireTime_ == nullptr && this->originalNumber_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // encryptedNumber Field Functions 
      bool hasEncryptedNumber() const { return this->encryptedNumber_ != nullptr;};
      void deleteEncryptedNumber() { this->encryptedNumber_ = nullptr;};
      inline string getEncryptedNumber() const { DARABONBA_PTR_GET_DEFAULT(encryptedNumber_, "") };
      inline Data& setEncryptedNumber(string encryptedNumber) { DARABONBA_PTR_SET_VALUE(encryptedNumber_, encryptedNumber) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // originalNumber Field Functions 
      bool hasOriginalNumber() const { return this->originalNumber_ != nullptr;};
      void deleteOriginalNumber() { this->originalNumber_ = nullptr;};
      inline string getOriginalNumber() const { DARABONBA_PTR_GET_DEFAULT(originalNumber_, "") };
      inline Data& setOriginalNumber(string originalNumber) { DARABONBA_PTR_SET_VALUE(originalNumber_, originalNumber) };


    protected:
      // The filtering result.
      // 
      // - **YES**: A valid phone number. The mapping relationship is returned.
      // 
      // - **NO**: An invalid phone number. The mapping relationship is not returned.
      shared_ptr<string> code_ {};
      // The encrypted phone number.
      shared_ptr<string> encryptedNumber_ {};
      // The expiration time of the phone number.
      shared_ptr<string> expireTime_ {};
      // The original phone number.
      shared_ptr<string> originalNumber_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InvalidPhoneNumberFilterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<InvalidPhoneNumberFilterResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<InvalidPhoneNumberFilterResponseBody::Data>) };
    inline vector<InvalidPhoneNumberFilterResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<InvalidPhoneNumberFilterResponseBody::Data>) };
    inline InvalidPhoneNumberFilterResponseBody& setData(const vector<InvalidPhoneNumberFilterResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InvalidPhoneNumberFilterResponseBody& setData(vector<InvalidPhoneNumberFilterResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InvalidPhoneNumberFilterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvalidPhoneNumberFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the request. Valid values:
    // 
    // - **OK**: The request is successful.
    // 
    // - **MobileNumberIllegal**: The mobile number is invalid.
    // 
    // - **EncyrptTypeIllegal**: The encryption type is invalid.
    // 
    // - **MobileNumberTypeNotMatch**: The mobile number does not match the encryption type.
    // 
    // - **CarrierIllegal**: The carrier type is invalid.
    // 
    // - **AuthCodeNotExist**: The authorization code does not exist.
    // 
    // - **PortabilityNumberNotSupported**: Mobile number portability is not supported.
    // 
    // - **Unknown**: An unknown exception occurred.
    // 
    // - **AuthCodeAndApiNotMatch**: A system exception occurred.
    // 
    // - **AuthCodeAndApiNotMatch**: The AuthCode does not match the API operation.
    // - **RequestFrequencyLimit**: Due to carrier restrictions, repeated high-frequency queries against the same phone number within a short period of time are prohibited. If this error code is returned, try again later.
    shared_ptr<string> code_ {};
    // The array of returned data.
    shared_ptr<vector<InvalidPhoneNumberFilterResponseBody::Data>> data_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
