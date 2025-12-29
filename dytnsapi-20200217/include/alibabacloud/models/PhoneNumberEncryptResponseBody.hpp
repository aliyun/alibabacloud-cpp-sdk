// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PHONENUMBERENCRYPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PHONENUMBERENCRYPTRESPONSEBODY_HPP_
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
  class PhoneNumberEncryptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PhoneNumberEncryptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PhoneNumberEncryptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PhoneNumberEncryptResponseBody() = default ;
    PhoneNumberEncryptResponseBody(const PhoneNumberEncryptResponseBody &) = default ;
    PhoneNumberEncryptResponseBody(PhoneNumberEncryptResponseBody &&) = default ;
    PhoneNumberEncryptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PhoneNumberEncryptResponseBody() = default ;
    PhoneNumberEncryptResponseBody& operator=(const PhoneNumberEncryptResponseBody &) = default ;
    PhoneNumberEncryptResponseBody& operator=(PhoneNumberEncryptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EncryptedNumber, encryptedNumber_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(OriginalNumber, originalNumber_);
        DARABONBA_PTR_TO_JSON(OutId, outId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EncryptedNumber, encryptedNumber_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(OriginalNumber, originalNumber_);
        DARABONBA_PTR_FROM_JSON(OutId, outId_);
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
      virtual bool empty() const override { return this->encryptedNumber_ == nullptr
        && this->expireTime_ == nullptr && this->originalNumber_ == nullptr && this->outId_ == nullptr; };
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


      // outId Field Functions 
      bool hasOutId() const { return this->outId_ != nullptr;};
      void deleteOutId() { this->outId_ = nullptr;};
      inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
      inline Data& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    protected:
      // The encrypted phone number.
      shared_ptr<string> encryptedNumber_ {};
      // The time when the phone number expires.
      shared_ptr<string> expireTime_ {};
      // The original phone number.
      shared_ptr<string> originalNumber_ {};
      shared_ptr<string> outId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PhoneNumberEncryptResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PhoneNumberEncryptResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PhoneNumberEncryptResponseBody::Data>) };
    inline vector<PhoneNumberEncryptResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<PhoneNumberEncryptResponseBody::Data>) };
    inline PhoneNumberEncryptResponseBody& setData(const vector<PhoneNumberEncryptResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PhoneNumberEncryptResponseBody& setData(vector<PhoneNumberEncryptResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PhoneNumberEncryptResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PhoneNumberEncryptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // Details about the returned entries.
    shared_ptr<vector<PhoneNumberEncryptResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
