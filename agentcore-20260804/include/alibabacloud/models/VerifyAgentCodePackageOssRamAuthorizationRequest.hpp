// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYAGENTCODEPACKAGEOSSRAMAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYAGENTCODEPACKAGEOSSRAMAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyAgentCodePackageOssRamAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyAgentCodePackageOssRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyAgentCodePackageOssRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
    };
    VerifyAgentCodePackageOssRamAuthorizationRequest() = default ;
    VerifyAgentCodePackageOssRamAuthorizationRequest(const VerifyAgentCodePackageOssRamAuthorizationRequest &) = default ;
    VerifyAgentCodePackageOssRamAuthorizationRequest(VerifyAgentCodePackageOssRamAuthorizationRequest &&) = default ;
    VerifyAgentCodePackageOssRamAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyAgentCodePackageOssRamAuthorizationRequest() = default ;
    VerifyAgentCodePackageOssRamAuthorizationRequest& operator=(const VerifyAgentCodePackageOssRamAuthorizationRequest &) = default ;
    VerifyAgentCodePackageOssRamAuthorizationRequest& operator=(VerifyAgentCodePackageOssRamAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucketName_ == nullptr; };
    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline VerifyAgentCodePackageOssRamAuthorizationRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


  protected:
    // The name of the source OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
