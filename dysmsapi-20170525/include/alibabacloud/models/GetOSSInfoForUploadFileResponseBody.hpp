// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSINFOFORUPLOADFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSINFOFORUPLOADFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetOSSInfoForUploadFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSInfoForUploadFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSInfoForUploadFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOSSInfoForUploadFileResponseBody() = default ;
    GetOSSInfoForUploadFileResponseBody(const GetOSSInfoForUploadFileResponseBody &) = default ;
    GetOSSInfoForUploadFileResponseBody(GetOSSInfoForUploadFileResponseBody &&) = default ;
    GetOSSInfoForUploadFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSInfoForUploadFileResponseBody() = default ;
    GetOSSInfoForUploadFileResponseBody& operator=(const GetOSSInfoForUploadFileResponseBody &) = default ;
    GetOSSInfoForUploadFileResponseBody& operator=(GetOSSInfoForUploadFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(StartPath, startPath_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->expireTime_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr && this->startPath_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Model& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Model& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Model& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Model& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Model& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // startPath Field Functions 
      bool hasStartPath() const { return this->startPath_ != nullptr;};
      void deleteStartPath() { this->startPath_ = nullptr;};
      inline string getStartPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
      inline Model& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


    protected:
      // The AccessKey ID used for the signature.
      shared_ptr<string> accessKeyId_ {};
      // The expiration time.
      shared_ptr<string> expireTime_ {};
      // The host address.
      shared_ptr<string> host_ {};
      // The signature policy.
      shared_ptr<string> policy_ {};
      // The signature information calculated based on the **AccessKey Secret** and **Policy**. When you call an OSS API operation, OSS verifies the signature information to confirm the validity of the POST request.
      shared_ptr<string> signature_ {};
      // The policy path.
      shared_ptr<string> startPath_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOSSInfoForUploadFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOSSInfoForUploadFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetOSSInfoForUploadFileResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetOSSInfoForUploadFileResponseBody::Model) };
    inline GetOSSInfoForUploadFileResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetOSSInfoForUploadFileResponseBody::Model) };
    inline GetOSSInfoForUploadFileResponseBody& setModel(const GetOSSInfoForUploadFileResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetOSSInfoForUploadFileResponseBody& setModel(GetOSSInfoForUploadFileResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOSSInfoForUploadFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOSSInfoForUploadFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code of the request.
    // 
    // - **OK** indicates that the request is successful.
    // - For information about other error codes, see [Error codes](https://help.aliyun.com/document_detail/101346.htm).
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The returned result.
    shared_ptr<GetOSSInfoForUploadFileResponseBody::Model> model_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - **true**: The call is successful.
    // - **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
