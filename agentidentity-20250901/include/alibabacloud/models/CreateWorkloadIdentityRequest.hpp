// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateWorkloadIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkloadIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    CreateWorkloadIdentityRequest() = default ;
    CreateWorkloadIdentityRequest(const CreateWorkloadIdentityRequest &) = default ;
    CreateWorkloadIdentityRequest(CreateWorkloadIdentityRequest &&) = default ;
    CreateWorkloadIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkloadIdentityRequest() = default ;
    CreateWorkloadIdentityRequest& operator=(const CreateWorkloadIdentityRequest &) = default ;
    CreateWorkloadIdentityRequest& operator=(CreateWorkloadIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLs_ == nullptr
        && return this->description_ == nullptr && return this->identityProviderName_ == nullptr && return this->roleArn_ == nullptr && return this->workloadIdentityName_ == nullptr; };
    // allowedResourceOAuth2ReturnURLs Field Functions 
    bool hasAllowedResourceOAuth2ReturnURLs() const { return this->allowedResourceOAuth2ReturnURLs_ != nullptr;};
    void deleteAllowedResourceOAuth2ReturnURLs() { this->allowedResourceOAuth2ReturnURLs_ = nullptr;};
    inline const vector<string> & allowedResourceOAuth2ReturnURLs() const { DARABONBA_PTR_GET_CONST(allowedResourceOAuth2ReturnURLs_, vector<string>) };
    inline vector<string> allowedResourceOAuth2ReturnURLs() { DARABONBA_PTR_GET(allowedResourceOAuth2ReturnURLs_, vector<string>) };
    inline CreateWorkloadIdentityRequest& setAllowedResourceOAuth2ReturnURLs(const vector<string> & allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };
    inline CreateWorkloadIdentityRequest& setAllowedResourceOAuth2ReturnURLs(vector<string> && allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_RVALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkloadIdentityRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateWorkloadIdentityRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateWorkloadIdentityRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string workloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline CreateWorkloadIdentityRequest& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    std::shared_ptr<vector<string>> allowedResourceOAuth2ReturnURLs_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<string> workloadIdentityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
