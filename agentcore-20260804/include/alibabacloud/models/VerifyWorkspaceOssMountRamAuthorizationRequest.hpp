// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWORKSPACEOSSMOUNTRAMAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWORKSPACEOSSMOUNTRAMAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyWorkspaceOssMountRamAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWorkspaceOssMountRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWorkspaceOssMountRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
    };
    VerifyWorkspaceOssMountRamAuthorizationRequest() = default ;
    VerifyWorkspaceOssMountRamAuthorizationRequest(const VerifyWorkspaceOssMountRamAuthorizationRequest &) = default ;
    VerifyWorkspaceOssMountRamAuthorizationRequest(VerifyWorkspaceOssMountRamAuthorizationRequest &&) = default ;
    VerifyWorkspaceOssMountRamAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWorkspaceOssMountRamAuthorizationRequest() = default ;
    VerifyWorkspaceOssMountRamAuthorizationRequest& operator=(const VerifyWorkspaceOssMountRamAuthorizationRequest &) = default ;
    VerifyWorkspaceOssMountRamAuthorizationRequest& operator=(VerifyWorkspaceOssMountRamAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline VerifyWorkspaceOssMountRamAuthorizationRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


  protected:
    // The name of the OSS bucket.
    shared_ptr<string> bucketName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
