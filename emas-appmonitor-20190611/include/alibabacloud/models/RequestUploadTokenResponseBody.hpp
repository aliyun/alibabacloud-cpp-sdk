// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REQUESTUPLOADTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class RequestUploadTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestUploadTokenResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RequestUploadTokenResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RequestUploadTokenResponseBody() = default ;
    RequestUploadTokenResponseBody(const RequestUploadTokenResponseBody &) = default ;
    RequestUploadTokenResponseBody(RequestUploadTokenResponseBody &&) = default ;
    RequestUploadTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestUploadTokenResponseBody() = default ;
    RequestUploadTokenResponseBody& operator=(const RequestUploadTokenResponseBody &) = default ;
    RequestUploadTokenResponseBody& operator=(RequestUploadTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(UploadBucket, uploadBucket_);
        DARABONBA_PTR_TO_JSON(UploadDir, uploadDir_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(UploadBucket, uploadBucket_);
        DARABONBA_PTR_FROM_JSON(UploadDir, uploadDir_);
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
        && this->accessKeySecret_ == nullptr && this->endpoint_ == nullptr && this->securityToken_ == nullptr && this->uploadBucket_ == nullptr && this->uploadDir_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Model& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Model& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Model& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Model& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // uploadBucket Field Functions 
      bool hasUploadBucket() const { return this->uploadBucket_ != nullptr;};
      void deleteUploadBucket() { this->uploadBucket_ = nullptr;};
      inline string getUploadBucket() const { DARABONBA_PTR_GET_DEFAULT(uploadBucket_, "") };
      inline Model& setUploadBucket(string uploadBucket) { DARABONBA_PTR_SET_VALUE(uploadBucket_, uploadBucket) };


      // uploadDir Field Functions 
      bool hasUploadDir() const { return this->uploadDir_ != nullptr;};
      void deleteUploadDir() { this->uploadDir_ = nullptr;};
      inline string getUploadDir() const { DARABONBA_PTR_GET_DEFAULT(uploadDir_, "") };
      inline Model& setUploadDir(string uploadDir) { DARABONBA_PTR_SET_VALUE(uploadDir_, uploadDir) };


    protected:
      // OSS AccessKeyId
      shared_ptr<string> accessKeyId_ {};
      // OSS AccessKeySecret
      shared_ptr<string> accessKeySecret_ {};
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> securityToken_ {};
      shared_ptr<string> uploadBucket_ {};
      shared_ptr<string> uploadDir_ {};
    };

    virtual bool empty() const override { return this->args_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
    Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
    inline RequestUploadTokenResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline RequestUploadTokenResponseBody& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline RequestUploadTokenResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RequestUploadTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const RequestUploadTokenResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, RequestUploadTokenResponseBody::Model) };
    inline RequestUploadTokenResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, RequestUploadTokenResponseBody::Model) };
    inline RequestUploadTokenResponseBody& setModel(const RequestUploadTokenResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline RequestUploadTokenResponseBody& setModel(RequestUploadTokenResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RequestUploadTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RequestUploadTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Args
    Darabonba::Json args_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<RequestUploadTokenResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
