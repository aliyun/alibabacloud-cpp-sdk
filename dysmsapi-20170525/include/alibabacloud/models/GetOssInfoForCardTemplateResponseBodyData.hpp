// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSINFOFORCARDTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOSSINFOFORCARDTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetOSSInfoForCardTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSInfoForCardTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(StartPath, startPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSInfoForCardTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
    };
    GetOSSInfoForCardTemplateResponseBodyData() = default ;
    GetOSSInfoForCardTemplateResponseBodyData(const GetOSSInfoForCardTemplateResponseBodyData &) = default ;
    GetOSSInfoForCardTemplateResponseBodyData(GetOSSInfoForCardTemplateResponseBodyData &&) = default ;
    GetOSSInfoForCardTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSInfoForCardTemplateResponseBodyData() = default ;
    GetOSSInfoForCardTemplateResponseBodyData& operator=(const GetOSSInfoForCardTemplateResponseBodyData &) = default ;
    GetOSSInfoForCardTemplateResponseBodyData& operator=(GetOSSInfoForCardTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->aliUid_ == nullptr && return this->bucket_ == nullptr && return this->expireTime_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr
        && return this->signature_ == nullptr && return this->startPath_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // startPath Field Functions 
    bool hasStartPath() const { return this->startPath_ != nullptr;};
    void deleteStartPath() { this->startPath_ = nullptr;};
    inline string startPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
    inline GetOSSInfoForCardTemplateResponseBodyData& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The timeout period.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The hostname.
    std::shared_ptr<string> host_ = nullptr;
    // The signature policy.
    std::shared_ptr<string> policy_ = nullptr;
    // The signature.
    std::shared_ptr<string> signature_ = nullptr;
    // The path of the policy.
    std::shared_ptr<string> startPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
