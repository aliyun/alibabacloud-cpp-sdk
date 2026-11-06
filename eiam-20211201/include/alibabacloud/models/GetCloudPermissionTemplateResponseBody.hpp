// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
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
  class GetCloudPermissionTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplate, cloudPermissionTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplate, cloudPermissionTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudPermissionTemplateResponseBody() = default ;
    GetCloudPermissionTemplateResponseBody(const GetCloudPermissionTemplateResponseBody &) = default ;
    GetCloudPermissionTemplateResponseBody(GetCloudPermissionTemplateResponseBody &&) = default ;
    GetCloudPermissionTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudPermissionTemplateResponseBody() = default ;
    GetCloudPermissionTemplateResponseBody& operator=(const GetCloudPermissionTemplateResponseBody &) = default ;
    GetCloudPermissionTemplateResponseBody& operator=(GetCloudPermissionTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudPermissionTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudPermissionTemplate& obj) { 
        DARABONBA_PTR_TO_JSON(AllowRequest, allowRequest_);
        DARABONBA_PTR_TO_JSON(ApplicableScope, applicableScope_);
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateCreator, cloudPermissionTemplateCreator_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateInitResult, cloudPermissionTemplateInitResult_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateName, cloudPermissionTemplateName_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateOwnerId, cloudPermissionTemplateOwnerId_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateOwnerType, cloudPermissionTemplateOwnerType_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateSharingMode, cloudPermissionTemplateSharingMode_);
        DARABONBA_PTR_TO_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PermissionEntityExternalId, permissionEntityExternalId_);
        DARABONBA_PTR_TO_JSON(PermissionEntityId, permissionEntityId_);
        DARABONBA_PTR_TO_JSON(PermissionEntityType, permissionEntityType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, CloudPermissionTemplate& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowRequest, allowRequest_);
        DARABONBA_PTR_FROM_JSON(ApplicableScope, applicableScope_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateCreator, cloudPermissionTemplateCreator_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateInitResult, cloudPermissionTemplateInitResult_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateName, cloudPermissionTemplateName_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateOwnerId, cloudPermissionTemplateOwnerId_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateOwnerType, cloudPermissionTemplateOwnerType_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateSharingMode, cloudPermissionTemplateSharingMode_);
        DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateUsageType, cloudPermissionTemplateUsageType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PermissionEntityExternalId, permissionEntityExternalId_);
        DARABONBA_PTR_FROM_JSON(PermissionEntityId, permissionEntityId_);
        DARABONBA_PTR_FROM_JSON(PermissionEntityType, permissionEntityType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      CloudPermissionTemplate() = default ;
      CloudPermissionTemplate(const CloudPermissionTemplate &) = default ;
      CloudPermissionTemplate(CloudPermissionTemplate &&) = default ;
      CloudPermissionTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudPermissionTemplate() = default ;
      CloudPermissionTemplate& operator=(const CloudPermissionTemplate &) = default ;
      CloudPermissionTemplate& operator=(CloudPermissionTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudPermissionTemplateInitResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudPermissionTemplateInitResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, CloudPermissionTemplateInitResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        CloudPermissionTemplateInitResult() = default ;
        CloudPermissionTemplateInitResult(const CloudPermissionTemplateInitResult &) = default ;
        CloudPermissionTemplateInitResult(CloudPermissionTemplateInitResult &&) = default ;
        CloudPermissionTemplateInitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudPermissionTemplateInitResult() = default ;
        CloudPermissionTemplateInitResult& operator=(const CloudPermissionTemplateInitResult &) = default ;
        CloudPermissionTemplateInitResult& operator=(CloudPermissionTemplateInitResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->result_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline CloudPermissionTemplateInitResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline CloudPermissionTemplateInitResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline CloudPermissionTemplateInitResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        // The error code returned when initialization fails.
        shared_ptr<string> errorCode_ {};
        // The error message returned when initialization fails.
        shared_ptr<string> errorMessage_ {};
        // The initialization result. Valid values: success and failed.
        shared_ptr<string> result_ {};
      };

      class CloudPermissionTemplateCreator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudPermissionTemplateCreator& obj) { 
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
        };
        friend void from_json(const Darabonba::Json& j, CloudPermissionTemplateCreator& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
        };
        CloudPermissionTemplateCreator() = default ;
        CloudPermissionTemplateCreator(const CloudPermissionTemplateCreator &) = default ;
        CloudPermissionTemplateCreator(CloudPermissionTemplateCreator &&) = default ;
        CloudPermissionTemplateCreator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudPermissionTemplateCreator() = default ;
        CloudPermissionTemplateCreator& operator=(const CloudPermissionTemplateCreator &) = default ;
        CloudPermissionTemplateCreator& operator=(CloudPermissionTemplateCreator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->creatorType_ == nullptr; };
        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline CloudPermissionTemplateCreator& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline CloudPermissionTemplateCreator& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline CloudPermissionTemplateCreator& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


      protected:
        // The identity identifier of the creator.
        shared_ptr<string> creatorId_ {};
        // The name of the creator.
        shared_ptr<string> creatorName_ {};
        // The type of the creator. Valid values: idaas_admin and idaas_user.
        shared_ptr<string> creatorType_ {};
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
        // The list of specified group IDs. This parameter has a value only when ScopeType is set to custom.
        shared_ptr<vector<string>> groupIds_ {};
        // The list of specified organizational unit IDs. This parameter has a value only when ScopeType is set to custom.
        shared_ptr<vector<string>> organizationalUnitIds_ {};
        // The type of the applicable scope. Valid values: global and custom.
        shared_ptr<string> scopeType_ {};
        // The list of specified user IDs. This parameter has a value only when ScopeType is set to custom.
        shared_ptr<vector<string>> userIds_ {};
      };

      virtual bool empty() const override { return this->allowRequest_ == nullptr
        && this->applicableScope_ == nullptr && this->cloudAccountId_ == nullptr && this->cloudPermissionTemplateCreator_ == nullptr && this->cloudPermissionTemplateId_ == nullptr && this->cloudPermissionTemplateInitResult_ == nullptr
        && this->cloudPermissionTemplateName_ == nullptr && this->cloudPermissionTemplateOwnerId_ == nullptr && this->cloudPermissionTemplateOwnerType_ == nullptr && this->cloudPermissionTemplateSharingMode_ == nullptr && this->cloudPermissionTemplateUsageType_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->permissionEntityExternalId_ == nullptr && this->permissionEntityId_ == nullptr
        && this->permissionEntityType_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // allowRequest Field Functions 
      bool hasAllowRequest() const { return this->allowRequest_ != nullptr;};
      void deleteAllowRequest() { this->allowRequest_ = nullptr;};
      inline bool getAllowRequest() const { DARABONBA_PTR_GET_DEFAULT(allowRequest_, false) };
      inline CloudPermissionTemplate& setAllowRequest(bool allowRequest) { DARABONBA_PTR_SET_VALUE(allowRequest_, allowRequest) };


      // applicableScope Field Functions 
      bool hasApplicableScope() const { return this->applicableScope_ != nullptr;};
      void deleteApplicableScope() { this->applicableScope_ = nullptr;};
      inline const CloudPermissionTemplate::ApplicableScope & getApplicableScope() const { DARABONBA_PTR_GET_CONST(applicableScope_, CloudPermissionTemplate::ApplicableScope) };
      inline CloudPermissionTemplate::ApplicableScope getApplicableScope() { DARABONBA_PTR_GET(applicableScope_, CloudPermissionTemplate::ApplicableScope) };
      inline CloudPermissionTemplate& setApplicableScope(const CloudPermissionTemplate::ApplicableScope & applicableScope) { DARABONBA_PTR_SET_VALUE(applicableScope_, applicableScope) };
      inline CloudPermissionTemplate& setApplicableScope(CloudPermissionTemplate::ApplicableScope && applicableScope) { DARABONBA_PTR_SET_RVALUE(applicableScope_, applicableScope) };


      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline CloudPermissionTemplate& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // cloudPermissionTemplateCreator Field Functions 
      bool hasCloudPermissionTemplateCreator() const { return this->cloudPermissionTemplateCreator_ != nullptr;};
      void deleteCloudPermissionTemplateCreator() { this->cloudPermissionTemplateCreator_ = nullptr;};
      inline const CloudPermissionTemplate::CloudPermissionTemplateCreator & getCloudPermissionTemplateCreator() const { DARABONBA_PTR_GET_CONST(cloudPermissionTemplateCreator_, CloudPermissionTemplate::CloudPermissionTemplateCreator) };
      inline CloudPermissionTemplate::CloudPermissionTemplateCreator getCloudPermissionTemplateCreator() { DARABONBA_PTR_GET(cloudPermissionTemplateCreator_, CloudPermissionTemplate::CloudPermissionTemplateCreator) };
      inline CloudPermissionTemplate& setCloudPermissionTemplateCreator(const CloudPermissionTemplate::CloudPermissionTemplateCreator & cloudPermissionTemplateCreator) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateCreator_, cloudPermissionTemplateCreator) };
      inline CloudPermissionTemplate& setCloudPermissionTemplateCreator(CloudPermissionTemplate::CloudPermissionTemplateCreator && cloudPermissionTemplateCreator) { DARABONBA_PTR_SET_RVALUE(cloudPermissionTemplateCreator_, cloudPermissionTemplateCreator) };


      // cloudPermissionTemplateId Field Functions 
      bool hasCloudPermissionTemplateId() const { return this->cloudPermissionTemplateId_ != nullptr;};
      void deleteCloudPermissionTemplateId() { this->cloudPermissionTemplateId_ = nullptr;};
      inline string getCloudPermissionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateId_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateId(string cloudPermissionTemplateId) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateId_, cloudPermissionTemplateId) };


      // cloudPermissionTemplateInitResult Field Functions 
      bool hasCloudPermissionTemplateInitResult() const { return this->cloudPermissionTemplateInitResult_ != nullptr;};
      void deleteCloudPermissionTemplateInitResult() { this->cloudPermissionTemplateInitResult_ = nullptr;};
      inline const CloudPermissionTemplate::CloudPermissionTemplateInitResult & getCloudPermissionTemplateInitResult() const { DARABONBA_PTR_GET_CONST(cloudPermissionTemplateInitResult_, CloudPermissionTemplate::CloudPermissionTemplateInitResult) };
      inline CloudPermissionTemplate::CloudPermissionTemplateInitResult getCloudPermissionTemplateInitResult() { DARABONBA_PTR_GET(cloudPermissionTemplateInitResult_, CloudPermissionTemplate::CloudPermissionTemplateInitResult) };
      inline CloudPermissionTemplate& setCloudPermissionTemplateInitResult(const CloudPermissionTemplate::CloudPermissionTemplateInitResult & cloudPermissionTemplateInitResult) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateInitResult_, cloudPermissionTemplateInitResult) };
      inline CloudPermissionTemplate& setCloudPermissionTemplateInitResult(CloudPermissionTemplate::CloudPermissionTemplateInitResult && cloudPermissionTemplateInitResult) { DARABONBA_PTR_SET_RVALUE(cloudPermissionTemplateInitResult_, cloudPermissionTemplateInitResult) };


      // cloudPermissionTemplateName Field Functions 
      bool hasCloudPermissionTemplateName() const { return this->cloudPermissionTemplateName_ != nullptr;};
      void deleteCloudPermissionTemplateName() { this->cloudPermissionTemplateName_ = nullptr;};
      inline string getCloudPermissionTemplateName() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateName_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateName(string cloudPermissionTemplateName) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateName_, cloudPermissionTemplateName) };


      // cloudPermissionTemplateOwnerId Field Functions 
      bool hasCloudPermissionTemplateOwnerId() const { return this->cloudPermissionTemplateOwnerId_ != nullptr;};
      void deleteCloudPermissionTemplateOwnerId() { this->cloudPermissionTemplateOwnerId_ = nullptr;};
      inline string getCloudPermissionTemplateOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateOwnerId_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateOwnerId(string cloudPermissionTemplateOwnerId) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateOwnerId_, cloudPermissionTemplateOwnerId) };


      // cloudPermissionTemplateOwnerType Field Functions 
      bool hasCloudPermissionTemplateOwnerType() const { return this->cloudPermissionTemplateOwnerType_ != nullptr;};
      void deleteCloudPermissionTemplateOwnerType() { this->cloudPermissionTemplateOwnerType_ = nullptr;};
      inline string getCloudPermissionTemplateOwnerType() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateOwnerType_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateOwnerType(string cloudPermissionTemplateOwnerType) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateOwnerType_, cloudPermissionTemplateOwnerType) };


      // cloudPermissionTemplateSharingMode Field Functions 
      bool hasCloudPermissionTemplateSharingMode() const { return this->cloudPermissionTemplateSharingMode_ != nullptr;};
      void deleteCloudPermissionTemplateSharingMode() { this->cloudPermissionTemplateSharingMode_ = nullptr;};
      inline string getCloudPermissionTemplateSharingMode() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateSharingMode_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateSharingMode(string cloudPermissionTemplateSharingMode) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateSharingMode_, cloudPermissionTemplateSharingMode) };


      // cloudPermissionTemplateUsageType Field Functions 
      bool hasCloudPermissionTemplateUsageType() const { return this->cloudPermissionTemplateUsageType_ != nullptr;};
      void deleteCloudPermissionTemplateUsageType() { this->cloudPermissionTemplateUsageType_ = nullptr;};
      inline string getCloudPermissionTemplateUsageType() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateUsageType_, "") };
      inline CloudPermissionTemplate& setCloudPermissionTemplateUsageType(string cloudPermissionTemplateUsageType) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateUsageType_, cloudPermissionTemplateUsageType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CloudPermissionTemplate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CloudPermissionTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CloudPermissionTemplate& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // permissionEntityExternalId Field Functions 
      bool hasPermissionEntityExternalId() const { return this->permissionEntityExternalId_ != nullptr;};
      void deletePermissionEntityExternalId() { this->permissionEntityExternalId_ = nullptr;};
      inline string getPermissionEntityExternalId() const { DARABONBA_PTR_GET_DEFAULT(permissionEntityExternalId_, "") };
      inline CloudPermissionTemplate& setPermissionEntityExternalId(string permissionEntityExternalId) { DARABONBA_PTR_SET_VALUE(permissionEntityExternalId_, permissionEntityExternalId) };


      // permissionEntityId Field Functions 
      bool hasPermissionEntityId() const { return this->permissionEntityId_ != nullptr;};
      void deletePermissionEntityId() { this->permissionEntityId_ = nullptr;};
      inline string getPermissionEntityId() const { DARABONBA_PTR_GET_DEFAULT(permissionEntityId_, "") };
      inline CloudPermissionTemplate& setPermissionEntityId(string permissionEntityId) { DARABONBA_PTR_SET_VALUE(permissionEntityId_, permissionEntityId) };


      // permissionEntityType Field Functions 
      bool hasPermissionEntityType() const { return this->permissionEntityType_ != nullptr;};
      void deletePermissionEntityType() { this->permissionEntityType_ = nullptr;};
      inline string getPermissionEntityType() const { DARABONBA_PTR_GET_DEFAULT(permissionEntityType_, "") };
      inline CloudPermissionTemplate& setPermissionEntityType(string permissionEntityType) { DARABONBA_PTR_SET_VALUE(permissionEntityType_, permissionEntityType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudPermissionTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline CloudPermissionTemplate& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Specifies whether users are allowed to request the permission.
      shared_ptr<bool> allowRequest_ {};
      // The applicable scope of the permission template.
      shared_ptr<CloudPermissionTemplate::ApplicableScope> applicableScope_ {};
      // The ID of the cloud account to which the template belongs.
      shared_ptr<string> cloudAccountId_ {};
      // The creator information of the permission template.
      shared_ptr<CloudPermissionTemplate::CloudPermissionTemplateCreator> cloudPermissionTemplateCreator_ {};
      // The unique identifier of the permission template.
      shared_ptr<string> cloudPermissionTemplateId_ {};
      // The initialization result. This parameter is returned only when the status is init_failed.
      shared_ptr<CloudPermissionTemplate::CloudPermissionTemplateInitResult> cloudPermissionTemplateInitResult_ {};
      // The name of the permission template.
      shared_ptr<string> cloudPermissionTemplateName_ {};
      // The ID of the application to which the exclusive template belongs. This parameter is empty for shared templates.
      shared_ptr<string> cloudPermissionTemplateOwnerId_ {};
      // The owner type of the exclusive template. Valid values: application (M2M applications) and user (human users). This parameter is empty for shared templates.
      shared_ptr<string> cloudPermissionTemplateOwnerType_ {};
      // The sharing mode of the permission template. Valid values: shared and exclusive.
      shared_ptr<string> cloudPermissionTemplateSharingMode_ {};
      // The usage type of the permission template. Valid values: user (privilege escalation for human users) and application (privilege escalation for M2M applications).
      shared_ptr<string> cloudPermissionTemplateUsageType_ {};
      // The creation time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the permission template.
      shared_ptr<string> description_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The external unique identifier of the associated cloud role, which is the ARN of the role on the cloud provider side.
      shared_ptr<string> permissionEntityExternalId_ {};
      // The ID of the associated CloudAccountRole.
      shared_ptr<string> permissionEntityId_ {};
      // The permission entity type. Fixed value: cloud_account_role.
      shared_ptr<string> permissionEntityType_ {};
      // The status of the permission template. Valid values: initializing, init_failed, enabled, and disabled.
      shared_ptr<string> status_ {};
      // The last update time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->cloudPermissionTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudPermissionTemplate Field Functions 
    bool hasCloudPermissionTemplate() const { return this->cloudPermissionTemplate_ != nullptr;};
    void deleteCloudPermissionTemplate() { this->cloudPermissionTemplate_ = nullptr;};
    inline const GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate & getCloudPermissionTemplate() const { DARABONBA_PTR_GET_CONST(cloudPermissionTemplate_, GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate) };
    inline GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate getCloudPermissionTemplate() { DARABONBA_PTR_GET(cloudPermissionTemplate_, GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate) };
    inline GetCloudPermissionTemplateResponseBody& setCloudPermissionTemplate(const GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate & cloudPermissionTemplate) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplate_, cloudPermissionTemplate) };
    inline GetCloudPermissionTemplateResponseBody& setCloudPermissionTemplate(GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate && cloudPermissionTemplate) { DARABONBA_PTR_SET_RVALUE(cloudPermissionTemplate_, cloudPermissionTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudPermissionTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The permission template.
    shared_ptr<GetCloudPermissionTemplateResponseBody::CloudPermissionTemplate> cloudPermissionTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
