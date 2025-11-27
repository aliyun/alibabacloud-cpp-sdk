// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSOCROSSINFORESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETSMSOCROSSINFORESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsOcrOssInfoResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsOcrOssInfoResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(StartPath, startPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsOcrOssInfoResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
    };
    GetSmsOcrOssInfoResponseBodyModel() = default ;
    GetSmsOcrOssInfoResponseBodyModel(const GetSmsOcrOssInfoResponseBodyModel &) = default ;
    GetSmsOcrOssInfoResponseBodyModel(GetSmsOcrOssInfoResponseBodyModel &&) = default ;
    GetSmsOcrOssInfoResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsOcrOssInfoResponseBodyModel() = default ;
    GetSmsOcrOssInfoResponseBodyModel& operator=(const GetSmsOcrOssInfoResponseBodyModel &) = default ;
    GetSmsOcrOssInfoResponseBodyModel& operator=(GetSmsOcrOssInfoResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->bucket_ == nullptr && return this->expireTime_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr && return this->signature_ == nullptr
        && return this->startPath_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // startPath Field Functions 
    bool hasStartPath() const { return this->startPath_ != nullptr;};
    void deleteStartPath() { this->startPath_ = nullptr;};
    inline string startPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
    inline GetSmsOcrOssInfoResponseBodyModel& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<string> startPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
