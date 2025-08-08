// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTTEMPBUCKETTOKENCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTTEMPBUCKETTOKENCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ArtifactTempBucketTokenCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactTempBucketTokenCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(accessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(accessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(securityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactTempBucketTokenCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(accessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(accessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(securityToken, securityToken_);
    };
    ArtifactTempBucketTokenCredentials() = default ;
    ArtifactTempBucketTokenCredentials(const ArtifactTempBucketTokenCredentials &) = default ;
    ArtifactTempBucketTokenCredentials(ArtifactTempBucketTokenCredentials &&) = default ;
    ArtifactTempBucketTokenCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactTempBucketTokenCredentials() = default ;
    ArtifactTempBucketTokenCredentials& operator=(const ArtifactTempBucketTokenCredentials &) = default ;
    ArtifactTempBucketTokenCredentials& operator=(ArtifactTempBucketTokenCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->securityToken_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline ArtifactTempBucketTokenCredentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline ArtifactTempBucketTokenCredentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ArtifactTempBucketTokenCredentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
