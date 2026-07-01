// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSOCROSSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSOCROSSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsOcrOssInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsOcrOssInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsOcrOssInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSmsOcrOssInfoResponseBody() = default ;
    GetSmsOcrOssInfoResponseBody(const GetSmsOcrOssInfoResponseBody &) = default ;
    GetSmsOcrOssInfoResponseBody(GetSmsOcrOssInfoResponseBody &&) = default ;
    GetSmsOcrOssInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsOcrOssInfoResponseBody() = default ;
    GetSmsOcrOssInfoResponseBody& operator=(const GetSmsOcrOssInfoResponseBody &) = default ;
    GetSmsOcrOssInfoResponseBody& operator=(GetSmsOcrOssInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Signature, signature_);
        DARABONBA_PTR_TO_JSON(StartPath, startPath_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
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
        && this->bucket_ == nullptr && this->expireTime_ == nullptr && this->host_ == nullptr && this->policy_ == nullptr && this->signature_ == nullptr
        && this->startPath_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Model& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Model& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


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
      // 签名使用的 AccessKey ID。
      shared_ptr<string> accessKeyId_ {};
      // bucket名称。
      shared_ptr<string> bucket_ {};
      // 过期时间戳，单位：秒。
      shared_ptr<string> expireTime_ {};
      // Host 地址。
      shared_ptr<string> host_ {};
      // 签名策略。
      shared_ptr<string> policy_ {};
      // 根据 AccessKey Secret 和 Policy 计算出的签名信息。调用 OSS API 时，OSS 验证该签名信息，从而确认请求的合法性。
      shared_ptr<string> signature_ {};
      // 策略路径。
      shared_ptr<string> startPath_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetSmsOcrOssInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsOcrOssInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsOcrOssInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetSmsOcrOssInfoResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetSmsOcrOssInfoResponseBody::Model) };
    inline GetSmsOcrOssInfoResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetSmsOcrOssInfoResponseBody::Model) };
    inline GetSmsOcrOssInfoResponseBody& setModel(const GetSmsOcrOssInfoResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetSmsOcrOssInfoResponseBody& setModel(GetSmsOcrOssInfoResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsOcrOssInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSmsOcrOssInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 访问被拒绝详细信息，只有 RAM 校验失败才会返回此字段。
    shared_ptr<string> accessDeniedDetail_ {};
    // 请求状态码。
    // 
    // - 返回 OK 代表请求成功。
    // 
    // - 其他错误码，请参见 [API 错误码](https://www.alibabacloud.com/help/en/sms/developer-reference/api-error-codes)。
    shared_ptr<string> code_ {};
    // 状态码的描述。
    shared_ptr<string> message_ {};
    // OSS配置信息。
    shared_ptr<GetSmsOcrOssInfoResponseBody::Model> model_ {};
    // 本次调用请求的 ID，是由阿里云为该请求生成的唯一标识符，可用于排查和定位问题。
    shared_ptr<string> requestId_ {};
    // 调用接口是否成功。取值：
    // 
    // - true：调用成功。
    // 
    // - false：调用失败。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
