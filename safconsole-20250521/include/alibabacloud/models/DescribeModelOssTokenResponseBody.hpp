// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOSSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOSSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeModelOssTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOssTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(XOssSecurityToken, XOssSecurityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOssTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(XOssSecurityToken, XOssSecurityToken_);
    };
    DescribeModelOssTokenResponseBody() = default ;
    DescribeModelOssTokenResponseBody(const DescribeModelOssTokenResponseBody &) = default ;
    DescribeModelOssTokenResponseBody(DescribeModelOssTokenResponseBody &&) = default ;
    DescribeModelOssTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOssTokenResponseBody() = default ;
    DescribeModelOssTokenResponseBody& operator=(const DescribeModelOssTokenResponseBody &) = default ;
    DescribeModelOssTokenResponseBody& operator=(DescribeModelOssTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(XOssSecurityToken, XOssSecurityToken_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(XOssSecurityToken, XOssSecurityToken_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->host_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr && this->XOssSecurityToken_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline ResultObject& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline ResultObject& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResultObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline ResultObject& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline ResultObject& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // XOssSecurityToken Field Functions 
      bool hasXOssSecurityToken() const { return this->XOssSecurityToken_ != nullptr;};
      void deleteXOssSecurityToken() { this->XOssSecurityToken_ = nullptr;};
      inline string getXOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(XOssSecurityToken_, "") };
      inline ResultObject& setXOssSecurityToken(string XOssSecurityToken) { DARABONBA_PTR_SET_VALUE(XOssSecurityToken_, XOssSecurityToken) };


    protected:
      // AccessKeyId for uploading files to OSS.
      shared_ptr<string> accessId_ {};
      // OSS domain name.
      shared_ptr<string> host_ {};
      // Key required for file upload.
      shared_ptr<string> key_ {};
      // Authorization policy for security group control rules.
      shared_ptr<string> policy_ {};
      // OSS signature.
      shared_ptr<string> signature_ {};
      // Temporary authorization token for OSS.
      shared_ptr<string> XOssSecurityToken_ {};
    };

    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->code_ == nullptr && this->host_ == nullptr && this->httpStatusCode_ == nullptr && this->key_ == nullptr && this->policy_ == nullptr
        && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->signature_ == nullptr && this->success_ == nullptr && this->XOssSecurityToken_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline DescribeModelOssTokenResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeModelOssTokenResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeModelOssTokenResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeModelOssTokenResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeModelOssTokenResponseBody& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeModelOssTokenResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelOssTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeModelOssTokenResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeModelOssTokenResponseBody::ResultObject) };
    inline DescribeModelOssTokenResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeModelOssTokenResponseBody::ResultObject) };
    inline DescribeModelOssTokenResponseBody& setResultObject(const DescribeModelOssTokenResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeModelOssTokenResponseBody& setResultObject(DescribeModelOssTokenResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline DescribeModelOssTokenResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModelOssTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // XOssSecurityToken Field Functions 
    bool hasXOssSecurityToken() const { return this->XOssSecurityToken_ != nullptr;};
    void deleteXOssSecurityToken() { this->XOssSecurityToken_ = nullptr;};
    inline string getXOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(XOssSecurityToken_, "") };
    inline DescribeModelOssTokenResponseBody& setXOssSecurityToken(string XOssSecurityToken) { DARABONBA_PTR_SET_VALUE(XOssSecurityToken_, XOssSecurityToken) };


  protected:
    // AccessKeyId for uploading files to OSS.
    shared_ptr<string> accessId_ {};
    // Status code. A return value of 200 indicates success.
    shared_ptr<int64_t> code_ {};
    // OSS domain name.
    shared_ptr<string> host_ {};
    // HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // Key required for file upload.
    shared_ptr<string> key_ {};
    // Authorization policy for security group control rules.
    shared_ptr<string> policy_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result.
    shared_ptr<DescribeModelOssTokenResponseBody::ResultObject> resultObject_ {};
    // OSS signature.
    shared_ptr<string> signature_ {};
    // Indicates whether the call was successful.
    // 
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
    // Temporary authorization token for OSS.
    shared_ptr<string> XOssSecurityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
