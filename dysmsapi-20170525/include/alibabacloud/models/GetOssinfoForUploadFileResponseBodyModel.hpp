// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSINFOFORUPLOADFILERESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETOSSINFOFORUPLOADFILERESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetOSSInfoForUploadFileResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSInfoForUploadFileResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(StartPath, startPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSInfoForUploadFileResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
    };
    GetOSSInfoForUploadFileResponseBodyModel() = default ;
    GetOSSInfoForUploadFileResponseBodyModel(const GetOSSInfoForUploadFileResponseBodyModel &) = default ;
    GetOSSInfoForUploadFileResponseBodyModel(GetOSSInfoForUploadFileResponseBodyModel &&) = default ;
    GetOSSInfoForUploadFileResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSInfoForUploadFileResponseBodyModel() = default ;
    GetOSSInfoForUploadFileResponseBodyModel& operator=(const GetOSSInfoForUploadFileResponseBodyModel &) = default ;
    GetOSSInfoForUploadFileResponseBodyModel& operator=(GetOSSInfoForUploadFileResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->expireTime_ != nullptr && this->host_ != nullptr && this->policy_ != nullptr && this->signature_ != nullptr && this->startPath_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // startPath Field Functions 
    bool hasStartPath() const { return this->startPath_ != nullptr;};
    void deleteStartPath() { this->startPath_ = nullptr;};
    inline string startPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
    inline GetOSSInfoForUploadFileResponseBodyModel& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


  protected:
    // AccessKey ID used for signing.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // Expiration time.
    std::shared_ptr<string> expireTime_ = nullptr;
    // Host address.
    std::shared_ptr<string> host_ = nullptr;
    // Signature policy.
    std::shared_ptr<string> policy_ = nullptr;
    // Signature information calculated based on **AccessKey Secret** and **Policy**. When calling the OSS API, OSS verifies this signature information to confirm the legitimacy of the Post request.
    std::shared_ptr<string> signature_ = nullptr;
    // Policy path.
    std::shared_ptr<string> startPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
