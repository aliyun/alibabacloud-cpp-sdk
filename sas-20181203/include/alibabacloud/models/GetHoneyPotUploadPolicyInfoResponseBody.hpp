// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTUPLOADPOLICYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTUPLOADPOLICYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneyPotUploadPolicyInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneyPotUploadPolicyInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneyPotUploadPolicyInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneyPotUploadPolicyInfoResponseBody() = default ;
    GetHoneyPotUploadPolicyInfoResponseBody(const GetHoneyPotUploadPolicyInfoResponseBody &) = default ;
    GetHoneyPotUploadPolicyInfoResponseBody(GetHoneyPotUploadPolicyInfoResponseBody &&) = default ;
    GetHoneyPotUploadPolicyInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneyPotUploadPolicyInfoResponseBody() = default ;
    GetHoneyPotUploadPolicyInfoResponseBody& operator=(const GetHoneyPotUploadPolicyInfoResponseBody &) = default ;
    GetHoneyPotUploadPolicyInfoResponseBody& operator=(GetHoneyPotUploadPolicyInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Accessid, accessid_);
        DARABONBA_PTR_TO_JSON(Expire, expire_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
        DARABONBA_PTR_FROM_JSON(Expire, expire_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
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
      virtual bool empty() const override { return this->accessid_ == nullptr
        && this->expire_ == nullptr && this->host_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr && this->securityToken_ == nullptr
        && this->signature_ == nullptr; };
      // accessid Field Functions 
      bool hasAccessid() const { return this->accessid_ != nullptr;};
      void deleteAccessid() { this->accessid_ = nullptr;};
      inline string getAccessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
      inline Data& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline string getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
      inline Data& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Data& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Data& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      // The key ID that is required for the file upload.
      shared_ptr<string> accessid_ {};
      // The expiration time of the URL. The value is a timestamp. You can use the value to determine whether the URL expires. If the expiration time arrives, you can no longer use the URL to upload files.
      shared_ptr<string> expire_ {};
      // The request URL during the upload.
      shared_ptr<string> host_ {};
      // The full path of the file in OSS. The file is uploaded by calling the OSS PostObject operation.
      shared_ptr<string> key_ {};
      // The limits that are imposed on the file upload. The limits include the file size.
      shared_ptr<string> policy_ {};
      // The security token.
      shared_ptr<string> securityToken_ {};
      // The signature that is calculated based on **AccessKeySecret** and **Policy**. When you call an Object Storage Service (OSS) API operation, OSS uses the signature information to verify the POST request.
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHoneyPotUploadPolicyInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHoneyPotUploadPolicyInfoResponseBody::Data) };
    inline GetHoneyPotUploadPolicyInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHoneyPotUploadPolicyInfoResponseBody::Data) };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setData(const GetHoneyPotUploadPolicyInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setData(GetHoneyPotUploadPolicyInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneyPotUploadPolicyInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetHoneyPotUploadPolicyInfoResponseBody::Data> data_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
