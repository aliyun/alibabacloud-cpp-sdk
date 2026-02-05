// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetJobDataUploadParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDataUploadParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UploadParams, uploadParams_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDataUploadParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UploadParams, uploadParams_);
    };
    GetJobDataUploadParamsResponseBody() = default ;
    GetJobDataUploadParamsResponseBody(const GetJobDataUploadParamsResponseBody &) = default ;
    GetJobDataUploadParamsResponseBody(GetJobDataUploadParamsResponseBody &&) = default ;
    GetJobDataUploadParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDataUploadParamsResponseBody() = default ;
    GetJobDataUploadParamsResponseBody& operator=(const GetJobDataUploadParamsResponseBody &) = default ;
    GetJobDataUploadParamsResponseBody& operator=(GetJobDataUploadParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadParams& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(Expire, expire_);
        DARABONBA_PTR_TO_JSON(Folder, folder_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
      };
      friend void from_json(const Darabonba::Json& j, UploadParams& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(Expire, expire_);
        DARABONBA_PTR_FROM_JSON(Folder, folder_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
      };
      UploadParams() = default ;
      UploadParams(const UploadParams &) = default ;
      UploadParams(UploadParams &&) = default ;
      UploadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadParams() = default ;
      UploadParams& operator=(const UploadParams &) = default ;
      UploadParams& operator=(UploadParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->expire_ == nullptr && this->folder_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline UploadParams& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline int32_t getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0) };
      inline UploadParams& setExpire(int32_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // folder Field Functions 
      bool hasFolder() const { return this->folder_ != nullptr;};
      void deleteFolder() { this->folder_ = nullptr;};
      inline string getFolder() const { DARABONBA_PTR_GET_DEFAULT(folder_, "") };
      inline UploadParams& setFolder(string folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline UploadParams& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline UploadParams& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline UploadParams& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    protected:
      shared_ptr<string> accessId_ {};
      shared_ptr<int32_t> expire_ {};
      shared_ptr<string> folder_ {};
      shared_ptr<string> host_ {};
      shared_ptr<string> policy_ {};
      shared_ptr<string> signature_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->uploadParams_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetJobDataUploadParamsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetJobDataUploadParamsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJobDataUploadParamsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobDataUploadParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJobDataUploadParamsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uploadParams Field Functions 
    bool hasUploadParams() const { return this->uploadParams_ != nullptr;};
    void deleteUploadParams() { this->uploadParams_ = nullptr;};
    inline const GetJobDataUploadParamsResponseBody::UploadParams & getUploadParams() const { DARABONBA_PTR_GET_CONST(uploadParams_, GetJobDataUploadParamsResponseBody::UploadParams) };
    inline GetJobDataUploadParamsResponseBody::UploadParams getUploadParams() { DARABONBA_PTR_GET(uploadParams_, GetJobDataUploadParamsResponseBody::UploadParams) };
    inline GetJobDataUploadParamsResponseBody& setUploadParams(const GetJobDataUploadParamsResponseBody::UploadParams & uploadParams) { DARABONBA_PTR_SET_VALUE(uploadParams_, uploadParams) };
    inline GetJobDataUploadParamsResponseBody& setUploadParams(GetJobDataUploadParamsResponseBody::UploadParams && uploadParams) { DARABONBA_PTR_SET_RVALUE(uploadParams_, uploadParams) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetJobDataUploadParamsResponseBody::UploadParams> uploadParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
