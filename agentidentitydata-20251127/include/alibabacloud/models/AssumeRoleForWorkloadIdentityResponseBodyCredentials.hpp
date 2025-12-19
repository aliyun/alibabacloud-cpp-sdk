// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODYCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBodyCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBodyCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBodyCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AssumeRoleForWorkloadIdentityResponseBodyCredentials() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyCredentials(const AssumeRoleForWorkloadIdentityResponseBodyCredentials &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyCredentials(AssumeRoleForWorkloadIdentityResponseBodyCredentials &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBodyCredentials() = default ;
    AssumeRoleForWorkloadIdentityResponseBodyCredentials& operator=(const AssumeRoleForWorkloadIdentityResponseBodyCredentials &) = default ;
    AssumeRoleForWorkloadIdentityResponseBodyCredentials& operator=(AssumeRoleForWorkloadIdentityResponseBodyCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && return this->accessKeySecret_ == nullptr && return this->expiration_ == nullptr && return this->securityToken_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyCredentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyCredentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyCredentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBodyCredentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> expiration_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
