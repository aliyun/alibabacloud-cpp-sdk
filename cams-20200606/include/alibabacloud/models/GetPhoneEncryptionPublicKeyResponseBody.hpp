// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONEENCRYPTIONPUBLICKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHONEENCRYPTIONPUBLICKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetPhoneEncryptionPublicKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneEncryptionPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneEncryptionPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPhoneEncryptionPublicKeyResponseBody() = default ;
    GetPhoneEncryptionPublicKeyResponseBody(const GetPhoneEncryptionPublicKeyResponseBody &) = default ;
    GetPhoneEncryptionPublicKeyResponseBody(GetPhoneEncryptionPublicKeyResponseBody &&) = default ;
    GetPhoneEncryptionPublicKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneEncryptionPublicKeyResponseBody() = default ;
    GetPhoneEncryptionPublicKeyResponseBody& operator=(const GetPhoneEncryptionPublicKeyResponseBody &) = default ;
    GetPhoneEncryptionPublicKeyResponseBody& operator=(GetPhoneEncryptionPublicKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EncryptionPublicKey, encryptionPublicKey_);
        DARABONBA_PTR_TO_JSON(EncryptionPublicKeyStatus, encryptionPublicKeyStatus_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EncryptionPublicKey, encryptionPublicKey_);
        DARABONBA_PTR_FROM_JSON(EncryptionPublicKeyStatus, encryptionPublicKeyStatus_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
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
      virtual bool empty() const override { return this->encryptionPublicKey_ == nullptr
        && this->encryptionPublicKeyStatus_ == nullptr && this->phoneNumber_ == nullptr; };
      // encryptionPublicKey Field Functions 
      bool hasEncryptionPublicKey() const { return this->encryptionPublicKey_ != nullptr;};
      void deleteEncryptionPublicKey() { this->encryptionPublicKey_ = nullptr;};
      inline string getEncryptionPublicKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionPublicKey_, "") };
      inline Data& setEncryptionPublicKey(string encryptionPublicKey) { DARABONBA_PTR_SET_VALUE(encryptionPublicKey_, encryptionPublicKey) };


      // encryptionPublicKeyStatus Field Functions 
      bool hasEncryptionPublicKeyStatus() const { return this->encryptionPublicKeyStatus_ != nullptr;};
      void deleteEncryptionPublicKeyStatus() { this->encryptionPublicKeyStatus_ = nullptr;};
      inline string getEncryptionPublicKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionPublicKeyStatus_, "") };
      inline Data& setEncryptionPublicKeyStatus(string encryptionPublicKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionPublicKeyStatus_, encryptionPublicKeyStatus) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    protected:
      // The public key.
      shared_ptr<string> encryptionPublicKey_ {};
      // The validity state of the public key. Valid values:
      // 
      // *   MISMATCH: The public key is invalid.
      // *   VALID: The public key is valid.
      shared_ptr<string> encryptionPublicKeyStatus_ {};
      // The phone number.
      shared_ptr<string> phoneNumber_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetPhoneEncryptionPublicKeyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhoneEncryptionPublicKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPhoneEncryptionPublicKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPhoneEncryptionPublicKeyResponseBody::Data) };
    inline GetPhoneEncryptionPublicKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPhoneEncryptionPublicKeyResponseBody::Data) };
    inline GetPhoneEncryptionPublicKeyResponseBody& setData(const GetPhoneEncryptionPublicKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPhoneEncryptionPublicKeyResponseBody& setData(GetPhoneEncryptionPublicKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhoneEncryptionPublicKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhoneEncryptionPublicKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetPhoneEncryptionPublicKeyResponseBody::Data> data_ {};
    // Error description information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
