// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKLOADIDENTITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKLOADIDENTITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateWorkloadIdentityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkloadIdentityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkloadIdentityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    UpdateWorkloadIdentityShrinkRequest() = default ;
    UpdateWorkloadIdentityShrinkRequest(const UpdateWorkloadIdentityShrinkRequest &) = default ;
    UpdateWorkloadIdentityShrinkRequest(UpdateWorkloadIdentityShrinkRequest &&) = default ;
    UpdateWorkloadIdentityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkloadIdentityShrinkRequest() = default ;
    UpdateWorkloadIdentityShrinkRequest& operator=(const UpdateWorkloadIdentityShrinkRequest &) = default ;
    UpdateWorkloadIdentityShrinkRequest& operator=(UpdateWorkloadIdentityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLsShrink_ == nullptr
        && return this->description_ == nullptr && return this->identityProviderName_ == nullptr && return this->roleArn_ == nullptr && return this->workloadIdentityName_ == nullptr; };
    // allowedResourceOAuth2ReturnURLsShrink Field Functions 
    bool hasAllowedResourceOAuth2ReturnURLsShrink() const { return this->allowedResourceOAuth2ReturnURLsShrink_ != nullptr;};
    void deleteAllowedResourceOAuth2ReturnURLsShrink() { this->allowedResourceOAuth2ReturnURLsShrink_ = nullptr;};
    inline string allowedResourceOAuth2ReturnURLsShrink() const { DARABONBA_PTR_GET_DEFAULT(allowedResourceOAuth2ReturnURLsShrink_, "") };
    inline UpdateWorkloadIdentityShrinkRequest& setAllowedResourceOAuth2ReturnURLsShrink(string allowedResourceOAuth2ReturnURLsShrink) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLsShrink_, allowedResourceOAuth2ReturnURLsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkloadIdentityShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline UpdateWorkloadIdentityShrinkRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline UpdateWorkloadIdentityShrinkRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string workloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline UpdateWorkloadIdentityShrinkRequest& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    std::shared_ptr<string> allowedResourceOAuth2ReturnURLsShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<string> workloadIdentityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
