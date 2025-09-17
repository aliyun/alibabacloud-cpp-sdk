// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALIFICATIONOSSINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALIFICATIONOSSINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetQualificationOssInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualificationOssInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(StartPath, startPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualificationOssInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(StartPath, startPath_);
    };
    GetQualificationOssInfoResponseBodyData() = default ;
    GetQualificationOssInfoResponseBodyData(const GetQualificationOssInfoResponseBodyData &) = default ;
    GetQualificationOssInfoResponseBodyData(GetQualificationOssInfoResponseBodyData &&) = default ;
    GetQualificationOssInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualificationOssInfoResponseBodyData() = default ;
    GetQualificationOssInfoResponseBodyData& operator=(const GetQualificationOssInfoResponseBodyData &) = default ;
    GetQualificationOssInfoResponseBodyData& operator=(GetQualificationOssInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->expire_ != nullptr && this->host_ != nullptr && this->policy_ != nullptr && this->signature_ != nullptr && this->startPath_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetQualificationOssInfoResponseBodyData& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline GetQualificationOssInfoResponseBodyData& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetQualificationOssInfoResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetQualificationOssInfoResponseBodyData& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetQualificationOssInfoResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // startPath Field Functions 
    bool hasStartPath() const { return this->startPath_ != nullptr;};
    void deleteStartPath() { this->startPath_ = nullptr;};
    inline string startPath() const { DARABONBA_PTR_GET_DEFAULT(startPath_, "") };
    inline GetQualificationOssInfoResponseBodyData& setStartPath(string startPath) { DARABONBA_PTR_SET_VALUE(startPath_, startPath) };


  protected:
    // ak
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // 过期时间
    std::shared_ptr<int64_t> expire_ = nullptr;
    // 域名
    std::shared_ptr<string> host_ = nullptr;
    // 策略
    std::shared_ptr<string> policy_ = nullptr;
    // 签名
    std::shared_ptr<string> signature_ = nullptr;
    // 前缀
    std::shared_ptr<string> startPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
