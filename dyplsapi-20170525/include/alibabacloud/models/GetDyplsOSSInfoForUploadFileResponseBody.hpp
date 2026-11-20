// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYPLSOSSINFOFORUPLOADFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDYPLSOSSINFOFORUPLOADFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetDyplsOSSInfoForUploadFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDyplsOSSInfoForUploadFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDyplsOSSInfoForUploadFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDyplsOSSInfoForUploadFileResponseBody() = default ;
    GetDyplsOSSInfoForUploadFileResponseBody(const GetDyplsOSSInfoForUploadFileResponseBody &) = default ;
    GetDyplsOSSInfoForUploadFileResponseBody(GetDyplsOSSInfoForUploadFileResponseBody &&) = default ;
    GetDyplsOSSInfoForUploadFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDyplsOSSInfoForUploadFileResponseBody() = default ;
    GetDyplsOSSInfoForUploadFileResponseBody& operator=(const GetDyplsOSSInfoForUploadFileResponseBody &) = default ;
    GetDyplsOSSInfoForUploadFileResponseBody& operator=(GetDyplsOSSInfoForUploadFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(StartPath, startPath_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Signature, signature_);
        DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
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
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->expireTime_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr && this->startPath_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Data& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Data& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Data& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // signature Field Functions 
      bool hasSignature() const { return this->signature_ != nullptr;};
      void deleteSignature() { this->signature_ = nullptr;};
      inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
      inline Data& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


      // startPath Field Functions 
      bool hasStartPath() const { return this->startPath_ != nullptr;};
      void deleteStartPath() { this->startPath_ = nullptr;};
      inline string getStartPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
      inline Data& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


    protected:
      // AccessKey ID used for signing.
      shared_ptr<string> accessKeyId_ {};
      // Expiration Time.
      shared_ptr<string> expireTime_ {};
      // Host address.
      shared_ptr<string> host_ {};
      // Signing policy.
      shared_ptr<string> policy_ {};
      // Signature computed from the **AccessKey secret** and **policy**. When invoking the OSS API, OSS authenticates this signature to confirm the validity of the POST request.
      shared_ptr<string> signature_ {};
      // Policy path.
      shared_ptr<string> startPath_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDyplsOSSInfoForUploadFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDyplsOSSInfoForUploadFileResponseBody::Data) };
    inline GetDyplsOSSInfoForUploadFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDyplsOSSInfoForUploadFileResponseBody::Data) };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setData(const GetDyplsOSSInfoForUploadFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setData(GetDyplsOSSInfoForUploadFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDyplsOSSInfoForUploadFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details of denied access.
    shared_ptr<string> accessDeniedDetail_ {};
    // Request status code. Valid values:  
    // * OK: indicates that the request succeeded.  
    // * For other error codes, see [Error Code List](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<GetDyplsOSSInfoForUploadFileResponseBody::Data> data_ {};
    // Description of the status code.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded. Valid values:  
    // 
    // - true: indicates success.  
    // 
    // - false: indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
