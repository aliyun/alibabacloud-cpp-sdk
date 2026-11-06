// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCloudPermissionTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRequest, allowRequest_);
      DARABONBA_PTR_TO_JSON(ApplicableScope, applicableScope_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountResources, cloudAccountResources_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateName, cloudPermissionTemplateName_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRequest, allowRequest_);
      DARABONBA_PTR_FROM_JSON(ApplicableScope, applicableScope_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountResources, cloudAccountResources_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateName, cloudPermissionTemplateName_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCloudPermissionTemplateRequest() = default ;
    CreateCloudPermissionTemplateRequest(const CreateCloudPermissionTemplateRequest &) = default ;
    CreateCloudPermissionTemplateRequest(CreateCloudPermissionTemplateRequest &&) = default ;
    CreateCloudPermissionTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPermissionTemplateRequest() = default ;
    CreateCloudPermissionTemplateRequest& operator=(const CreateCloudPermissionTemplateRequest &) = default ;
    CreateCloudPermissionTemplateRequest& operator=(CreateCloudPermissionTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountResources& obj) { 
        DARABONBA_PTR_TO_JSON(CloudAccountResourceId, cloudAccountResourceId_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccountResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudAccountResourceId, cloudAccountResourceId_);
      };
      CloudAccountResources() = default ;
      CloudAccountResources(const CloudAccountResources &) = default ;
      CloudAccountResources(CloudAccountResources &&) = default ;
      CloudAccountResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountResources() = default ;
      CloudAccountResources& operator=(const CloudAccountResources &) = default ;
      CloudAccountResources& operator=(CloudAccountResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cloudAccountResourceId_ == nullptr; };
      // cloudAccountResourceId Field Functions 
      bool hasCloudAccountResourceId() const { return this->cloudAccountResourceId_ != nullptr;};
      void deleteCloudAccountResourceId() { this->cloudAccountResourceId_ = nullptr;};
      inline string getCloudAccountResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountResourceId_, "") };
      inline CloudAccountResources& setCloudAccountResourceId(string cloudAccountResourceId) { DARABONBA_PTR_SET_VALUE(cloudAccountResourceId_, cloudAccountResourceId) };


    protected:
      // The ID of the cloud account resource.
      shared_ptr<string> cloudAccountResourceId_ {};
    };

    class ApplicableScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicableScope& obj) { 
        DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicableScope& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      ApplicableScope() = default ;
      ApplicableScope(const ApplicableScope &) = default ;
      ApplicableScope(ApplicableScope &&) = default ;
      ApplicableScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicableScope() = default ;
      ApplicableScope& operator=(const ApplicableScope &) = default ;
      ApplicableScope& operator=(ApplicableScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->organizationalUnitIds_ == nullptr && this->scopeType_ == nullptr && this->userIds_ == nullptr; };
      // groupIds Field Functions 
      bool hasGroupIds() const { return this->groupIds_ != nullptr;};
      void deleteGroupIds() { this->groupIds_ = nullptr;};
      inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
      inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
      inline ApplicableScope& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
      inline ApplicableScope& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


      // organizationalUnitIds Field Functions 
      bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
      void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
      inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
      inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
      inline ApplicableScope& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
      inline ApplicableScope& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline ApplicableScope& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline ApplicableScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline ApplicableScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The list of group IDs.
      shared_ptr<vector<string>> groupIds_ {};
      // The list of organizational unit IDs.
      shared_ptr<vector<string>> organizationalUnitIds_ {};
      // The type of the applicable scope. Valid values: global and custom.
      shared_ptr<string> scopeType_ {};
      // The list of user IDs.
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->allowRequest_ == nullptr
        && this->applicableScope_ == nullptr && this->clientToken_ == nullptr && this->cloudAccountId_ == nullptr && this->cloudAccountResources_ == nullptr && this->cloudPermissionTemplateName_ == nullptr
        && this->cloudPermissionTemplateUsageType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
    // allowRequest Field Functions 
    bool hasAllowRequest() const { return this->allowRequest_ != nullptr;};
    void deleteAllowRequest() { this->allowRequest_ = nullptr;};
    inline bool getAllowRequest() const { DARABONBA_PTR_GET_DEFAULT(allowRequest_, false) };
    inline CreateCloudPermissionTemplateRequest& setAllowRequest(bool allowRequest) { DARABONBA_PTR_SET_VALUE(allowRequest_, allowRequest) };


    // applicableScope Field Functions 
    bool hasApplicableScope() const { return this->applicableScope_ != nullptr;};
    void deleteApplicableScope() { this->applicableScope_ = nullptr;};
    inline const CreateCloudPermissionTemplateRequest::ApplicableScope & getApplicableScope() const { DARABONBA_PTR_GET_CONST(applicableScope_, CreateCloudPermissionTemplateRequest::ApplicableScope) };
    inline CreateCloudPermissionTemplateRequest::ApplicableScope getApplicableScope() { DARABONBA_PTR_GET(applicableScope_, CreateCloudPermissionTemplateRequest::ApplicableScope) };
    inline CreateCloudPermissionTemplateRequest& setApplicableScope(const CreateCloudPermissionTemplateRequest::ApplicableScope & applicableScope) { DARABONBA_PTR_SET_VALUE(applicableScope_, applicableScope) };
    inline CreateCloudPermissionTemplateRequest& setApplicableScope(CreateCloudPermissionTemplateRequest::ApplicableScope && applicableScope) { DARABONBA_PTR_SET_RVALUE(applicableScope_, applicableScope) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudPermissionTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline CreateCloudPermissionTemplateRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountResources Field Functions 
    bool hasCloudAccountResources() const { return this->cloudAccountResources_ != nullptr;};
    void deleteCloudAccountResources() { this->cloudAccountResources_ = nullptr;};
    inline const vector<CreateCloudPermissionTemplateRequest::CloudAccountResources> & getCloudAccountResources() const { DARABONBA_PTR_GET_CONST(cloudAccountResources_, vector<CreateCloudPermissionTemplateRequest::CloudAccountResources>) };
    inline vector<CreateCloudPermissionTemplateRequest::CloudAccountResources> getCloudAccountResources() { DARABONBA_PTR_GET(cloudAccountResources_, vector<CreateCloudPermissionTemplateRequest::CloudAccountResources>) };
    inline CreateCloudPermissionTemplateRequest& setCloudAccountResources(const vector<CreateCloudPermissionTemplateRequest::CloudAccountResources> & cloudAccountResources) { DARABONBA_PTR_SET_VALUE(cloudAccountResources_, cloudAccountResources) };
    inline CreateCloudPermissionTemplateRequest& setCloudAccountResources(vector<CreateCloudPermissionTemplateRequest::CloudAccountResources> && cloudAccountResources) { DARABONBA_PTR_SET_RVALUE(cloudAccountResources_, cloudAccountResources) };


    // cloudPermissionTemplateName Field Functions 
    bool hasCloudPermissionTemplateName() const { return this->cloudPermissionTemplateName_ != nullptr;};
    void deleteCloudPermissionTemplateName() { this->cloudPermissionTemplateName_ = nullptr;};
    inline string getCloudPermissionTemplateName() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateName_, "") };
    inline CreateCloudPermissionTemplateRequest& setCloudPermissionTemplateName(string cloudPermissionTemplateName) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateName_, cloudPermissionTemplateName) };


    // cloudPermissionTemplateUsageType Field Functions 
    bool hasCloudPermissionTemplateUsageType() const { return this->cloudPermissionTemplateUsageType_ != nullptr;};
    void deleteCloudPermissionTemplateUsageType() { this->cloudPermissionTemplateUsageType_ = nullptr;};
    inline string getCloudPermissionTemplateUsageType() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateUsageType_, "") };
    inline CreateCloudPermissionTemplateRequest& setCloudPermissionTemplateUsageType(string cloudPermissionTemplateUsageType) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateUsageType_, cloudPermissionTemplateUsageType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudPermissionTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudPermissionTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Specifies whether users are allowed to apply for the permission template. Default value: true.
    shared_ptr<bool> allowRequest_ {};
    // The applicable scope of the permission template, including the scope type and specified users, groups, or organizational units.
    shared_ptr<CreateCloudPermissionTemplateRequest::ApplicableScope> applicableScope_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The cloud account ID.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // The list of cloud account resource policies.
    shared_ptr<vector<CreateCloudPermissionTemplateRequest::CloudAccountResources>> cloudAccountResources_ {};
    // The name of the permission template. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> cloudPermissionTemplateName_ {};
    // The usage type of the permission template. Valid values:
    // - user: Privilege escalation for human users.
    // - application: Privilege escalation for M2M applications.
    // Default value: user.
    shared_ptr<string> cloudPermissionTemplateUsageType_ {};
    // The description of the permission template. The description can be up to 128 characters in length.
    shared_ptr<string> description_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
