// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateWorkloadIdentityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkloadIdentityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLsShrink_);
      DARABONBA_PTR_TO_JSON(CreateRAMRole, createRAMRole_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(SessionBindingEnabled, sessionBindingEnabled_);
      DARABONBA_PTR_TO_JSON(SourceAgentArn, sourceAgentArn_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkloadIdentityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLsShrink_);
      DARABONBA_PTR_FROM_JSON(CreateRAMRole, createRAMRole_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(SessionBindingEnabled, sessionBindingEnabled_);
      DARABONBA_PTR_FROM_JSON(SourceAgentArn, sourceAgentArn_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    CreateWorkloadIdentityShrinkRequest() = default ;
    CreateWorkloadIdentityShrinkRequest(const CreateWorkloadIdentityShrinkRequest &) = default ;
    CreateWorkloadIdentityShrinkRequest(CreateWorkloadIdentityShrinkRequest &&) = default ;
    CreateWorkloadIdentityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkloadIdentityShrinkRequest() = default ;
    CreateWorkloadIdentityShrinkRequest& operator=(const CreateWorkloadIdentityShrinkRequest &) = default ;
    CreateWorkloadIdentityShrinkRequest& operator=(CreateWorkloadIdentityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLsShrink_ == nullptr
        && this->createRAMRole_ == nullptr && this->description_ == nullptr && this->identityProviderName_ == nullptr && this->roleArn_ == nullptr && this->sessionBindingEnabled_ == nullptr
        && this->sourceAgentArn_ == nullptr && this->sourcePlatform_ == nullptr && this->workloadIdentityName_ == nullptr; };
    // allowedResourceOAuth2ReturnURLsShrink Field Functions 
    bool hasAllowedResourceOAuth2ReturnURLsShrink() const { return this->allowedResourceOAuth2ReturnURLsShrink_ != nullptr;};
    void deleteAllowedResourceOAuth2ReturnURLsShrink() { this->allowedResourceOAuth2ReturnURLsShrink_ = nullptr;};
    inline string getAllowedResourceOAuth2ReturnURLsShrink() const { DARABONBA_PTR_GET_DEFAULT(allowedResourceOAuth2ReturnURLsShrink_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setAllowedResourceOAuth2ReturnURLsShrink(string allowedResourceOAuth2ReturnURLsShrink) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLsShrink_, allowedResourceOAuth2ReturnURLsShrink) };


    // createRAMRole Field Functions 
    bool hasCreateRAMRole() const { return this->createRAMRole_ != nullptr;};
    void deleteCreateRAMRole() { this->createRAMRole_ = nullptr;};
    inline bool getCreateRAMRole() const { DARABONBA_PTR_GET_DEFAULT(createRAMRole_, false) };
    inline CreateWorkloadIdentityShrinkRequest& setCreateRAMRole(bool createRAMRole) { DARABONBA_PTR_SET_VALUE(createRAMRole_, createRAMRole) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // sessionBindingEnabled Field Functions 
    bool hasSessionBindingEnabled() const { return this->sessionBindingEnabled_ != nullptr;};
    void deleteSessionBindingEnabled() { this->sessionBindingEnabled_ = nullptr;};
    inline bool getSessionBindingEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionBindingEnabled_, false) };
    inline CreateWorkloadIdentityShrinkRequest& setSessionBindingEnabled(bool sessionBindingEnabled) { DARABONBA_PTR_SET_VALUE(sessionBindingEnabled_, sessionBindingEnabled) };


    // sourceAgentArn Field Functions 
    bool hasSourceAgentArn() const { return this->sourceAgentArn_ != nullptr;};
    void deleteSourceAgentArn() { this->sourceAgentArn_ = nullptr;};
    inline string getSourceAgentArn() const { DARABONBA_PTR_GET_DEFAULT(sourceAgentArn_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setSourceAgentArn(string sourceAgentArn) { DARABONBA_PTR_SET_VALUE(sourceAgentArn_, sourceAgentArn) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string getWorkloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline CreateWorkloadIdentityShrinkRequest& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    shared_ptr<string> allowedResourceOAuth2ReturnURLsShrink_ {};
    shared_ptr<bool> createRAMRole_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> identityProviderName_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<bool> sessionBindingEnabled_ {};
    shared_ptr<string> sourceAgentArn_ {};
    shared_ptr<string> sourcePlatform_ {};
    shared_ptr<string> workloadIdentityName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
