// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODYWORKLOADIDENTITY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKLOADIDENTITYRESPONSEBODYWORKLOADIDENTITY_HPP_
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
  class CreateWorkloadIdentityResponseBodyWorkloadIdentity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkloadIdentityResponseBodyWorkloadIdentity& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkloadIdentityResponseBodyWorkloadIdentity& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedResourceOAuth2ReturnURLs, allowedResourceOAuth2ReturnURLs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    CreateWorkloadIdentityResponseBodyWorkloadIdentity() = default ;
    CreateWorkloadIdentityResponseBodyWorkloadIdentity(const CreateWorkloadIdentityResponseBodyWorkloadIdentity &) = default ;
    CreateWorkloadIdentityResponseBodyWorkloadIdentity(CreateWorkloadIdentityResponseBodyWorkloadIdentity &&) = default ;
    CreateWorkloadIdentityResponseBodyWorkloadIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkloadIdentityResponseBodyWorkloadIdentity() = default ;
    CreateWorkloadIdentityResponseBodyWorkloadIdentity& operator=(const CreateWorkloadIdentityResponseBodyWorkloadIdentity &) = default ;
    CreateWorkloadIdentityResponseBodyWorkloadIdentity& operator=(CreateWorkloadIdentityResponseBodyWorkloadIdentity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedResourceOAuth2ReturnURLs_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->identityProviderName_ == nullptr && return this->roleArn_ == nullptr && return this->updateTime_ == nullptr
        && return this->workloadIdentityArn_ == nullptr && return this->workloadIdentityName_ == nullptr; };
    // allowedResourceOAuth2ReturnURLs Field Functions 
    bool hasAllowedResourceOAuth2ReturnURLs() const { return this->allowedResourceOAuth2ReturnURLs_ != nullptr;};
    void deleteAllowedResourceOAuth2ReturnURLs() { this->allowedResourceOAuth2ReturnURLs_ = nullptr;};
    inline const vector<string> & allowedResourceOAuth2ReturnURLs() const { DARABONBA_PTR_GET_CONST(allowedResourceOAuth2ReturnURLs_, vector<string>) };
    inline vector<string> allowedResourceOAuth2ReturnURLs() { DARABONBA_PTR_GET(allowedResourceOAuth2ReturnURLs_, vector<string>) };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setAllowedResourceOAuth2ReturnURLs(const vector<string> & allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_VALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setAllowedResourceOAuth2ReturnURLs(vector<string> && allowedResourceOAuth2ReturnURLs) { DARABONBA_PTR_SET_RVALUE(allowedResourceOAuth2ReturnURLs_, allowedResourceOAuth2ReturnURLs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workloadIdentityArn Field Functions 
    bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
    void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
    inline string workloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string workloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline CreateWorkloadIdentityResponseBodyWorkloadIdentity& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    std::shared_ptr<vector<string>> allowedResourceOAuth2ReturnURLs_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> workloadIdentityArn_ = nullptr;
    std::shared_ptr<string> workloadIdentityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
