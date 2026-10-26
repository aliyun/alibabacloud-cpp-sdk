// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPROJECTMANAGERSTOPROJECTAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPROJECTMANAGERSTOPROJECTAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachProjectManagersToProjectAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachProjectManagersToProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Principals, principals_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachProjectManagersToProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Principals, principals_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachProjectManagersToProjectAuthorizationRequest() = default ;
    AttachProjectManagersToProjectAuthorizationRequest(const AttachProjectManagersToProjectAuthorizationRequest &) = default ;
    AttachProjectManagersToProjectAuthorizationRequest(AttachProjectManagersToProjectAuthorizationRequest &&) = default ;
    AttachProjectManagersToProjectAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachProjectManagersToProjectAuthorizationRequest() = default ;
    AttachProjectManagersToProjectAuthorizationRequest& operator=(const AttachProjectManagersToProjectAuthorizationRequest &) = default ;
    AttachProjectManagersToProjectAuthorizationRequest& operator=(AttachProjectManagersToProjectAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Principals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Principals& obj) { 
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      };
      friend void from_json(const Darabonba::Json& j, Principals& obj) { 
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      };
      Principals() = default ;
      Principals(const Principals &) = default ;
      Principals(Principals &&) = default ;
      Principals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Principals() = default ;
      Principals& operator=(const Principals &) = default ;
      Principals& operator=(Principals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalName_ == nullptr && this->principalType_ == nullptr; };
      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Principals& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Principals& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Principals& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    protected:
      // When PrincipalType is set to RamUser, specify the ID of the RAM user to be designated as the project administrator. When PrincipalType is set to RamRole, specify the ARN of the RAM role to be designated as the project administrator.
      shared_ptr<string> principalId_ {};
      // The display name of the RAM user or RAM role designated as the project administrator.
      shared_ptr<string> principalName_ {};
      // The type of the project administrator. Valid values:
      // 
      // - **RamUser**: Resource Access Management (RAM) user.
      // 
      // - **RamRole**: RAM role.
      shared_ptr<string> principalType_ {};
    };

    virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->instanceId_ == nullptr && this->principals_ == nullptr && this->regionId_ == nullptr; };
    // authorizationId Field Functions 
    bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
    void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
    inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
    inline AttachProjectManagersToProjectAuthorizationRequest& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachProjectManagersToProjectAuthorizationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // principals Field Functions 
    bool hasPrincipals() const { return this->principals_ != nullptr;};
    void deletePrincipals() { this->principals_ = nullptr;};
    inline const vector<AttachProjectManagersToProjectAuthorizationRequest::Principals> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<AttachProjectManagersToProjectAuthorizationRequest::Principals>) };
    inline vector<AttachProjectManagersToProjectAuthorizationRequest::Principals> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<AttachProjectManagersToProjectAuthorizationRequest::Principals>) };
    inline AttachProjectManagersToProjectAuthorizationRequest& setPrincipals(const vector<AttachProjectManagersToProjectAuthorizationRequest::Principals> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
    inline AttachProjectManagersToProjectAuthorizationRequest& setPrincipals(vector<AttachProjectManagersToProjectAuthorizationRequest::Principals> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachProjectManagersToProjectAuthorizationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The project authorization ID.
    // > You can call the ListProjectAuthorizations operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizationId_ {};
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The information about the project administrators specified in the project authorization.
    shared_ptr<vector<AttachProjectManagersToProjectAuthorizationRequest::Principals>> principals_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
