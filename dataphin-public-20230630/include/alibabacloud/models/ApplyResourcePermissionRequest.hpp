// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYRESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ApplyResourcePermissionRequest() = default ;
    ApplyResourcePermissionRequest(const ApplyResourcePermissionRequest &) = default ;
    ApplyResourcePermissionRequest(ApplyResourcePermissionRequest &&) = default ;
    ApplyResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyResourcePermissionRequest() = default ;
    ApplyResourcePermissionRequest& operator=(const ApplyResourcePermissionRequest &) = default ;
    ApplyResourcePermissionRequest& operator=(ApplyResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyCommand& obj) { 
        DARABONBA_PTR_TO_JSON(GrantToUsers, grantToUsers_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(OperateList, operateList_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantToUsers, grantToUsers_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(OperateList, operateList_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ApplyCommand() = default ;
      ApplyCommand(const ApplyCommand &) = default ;
      ApplyCommand(ApplyCommand &&) = default ;
      ApplyCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyCommand() = default ;
      ApplyCommand& operator=(const ApplyCommand &) = default ;
      ApplyCommand& operator=(ApplyCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnList_ == nullptr
        && this->resourceId_ == nullptr; };
        // columnList Field Functions 
        bool hasColumnList() const { return this->columnList_ != nullptr;};
        void deleteColumnList() { this->columnList_ = nullptr;};
        inline const vector<string> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<string>) };
        inline vector<string> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<string>) };
        inline ResourceList& setColumnList(const vector<string> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
        inline ResourceList& setColumnList(vector<string> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      protected:
        // The list of column names specified for column-level permissions. This parameter is required when the granularity is COLUMN.
        shared_ptr<vector<string>> columnList_ {};
        // The resource ID, which is the GUID of the table metadata.
        // 
        // This parameter is required.
        shared_ptr<string> resourceId_ {};
      };

      class GrantToUsers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantToUsers& obj) { 
          DARABONBA_PTR_TO_JSON(AccountType, accountType_);
          DARABONBA_PTR_TO_JSON(PeriodEnd, periodEnd_);
          DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, GrantToUsers& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
          DARABONBA_PTR_FROM_JSON(PeriodEnd, periodEnd_);
          DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        GrantToUsers() = default ;
        GrantToUsers(const GrantToUsers &) = default ;
        GrantToUsers(GrantToUsers &&) = default ;
        GrantToUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantToUsers() = default ;
        GrantToUsers& operator=(const GrantToUsers &) = default ;
        GrantToUsers& operator=(GrantToUsers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountType_ == nullptr
        && this->periodEnd_ == nullptr && this->periodType_ == nullptr && this->projectId_ == nullptr && this->userId_ == nullptr; };
        // accountType Field Functions 
        bool hasAccountType() const { return this->accountType_ != nullptr;};
        void deleteAccountType() { this->accountType_ = nullptr;};
        inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
        inline GrantToUsers& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


        // periodEnd Field Functions 
        bool hasPeriodEnd() const { return this->periodEnd_ != nullptr;};
        void deletePeriodEnd() { this->periodEnd_ = nullptr;};
        inline string getPeriodEnd() const { DARABONBA_PTR_GET_DEFAULT(periodEnd_, "") };
        inline GrantToUsers& setPeriodEnd(string periodEnd) { DARABONBA_PTR_SET_VALUE(periodEnd_, periodEnd) };


        // periodType Field Functions 
        bool hasPeriodType() const { return this->periodType_ != nullptr;};
        void deletePeriodType() { this->periodType_ = nullptr;};
        inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
        inline GrantToUsers& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline GrantToUsers& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline GrantToUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The account type.
        // 
        // This parameter is required.
        shared_ptr<string> accountType_ {};
        // The expiration date of the permission. Format: yyyy-MM-dd.
        shared_ptr<string> periodEnd_ {};
        // The type of the permission validity period.
        shared_ptr<string> periodType_ {};
        // The project ID of the production account. This parameter is required when the account type is PRODUCE.
        shared_ptr<string> projectId_ {};
        // The user ID.
        // 
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->grantToUsers_ == nullptr
        && this->granularity_ == nullptr && this->operateList_ == nullptr && this->reason_ == nullptr && this->resourceList_ == nullptr && this->resourceType_ == nullptr; };
      // grantToUsers Field Functions 
      bool hasGrantToUsers() const { return this->grantToUsers_ != nullptr;};
      void deleteGrantToUsers() { this->grantToUsers_ = nullptr;};
      inline const vector<ApplyCommand::GrantToUsers> & getGrantToUsers() const { DARABONBA_PTR_GET_CONST(grantToUsers_, vector<ApplyCommand::GrantToUsers>) };
      inline vector<ApplyCommand::GrantToUsers> getGrantToUsers() { DARABONBA_PTR_GET(grantToUsers_, vector<ApplyCommand::GrantToUsers>) };
      inline ApplyCommand& setGrantToUsers(const vector<ApplyCommand::GrantToUsers> & grantToUsers) { DARABONBA_PTR_SET_VALUE(grantToUsers_, grantToUsers) };
      inline ApplyCommand& setGrantToUsers(vector<ApplyCommand::GrantToUsers> && grantToUsers) { DARABONBA_PTR_SET_RVALUE(grantToUsers_, grantToUsers) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
      inline ApplyCommand& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // operateList Field Functions 
      bool hasOperateList() const { return this->operateList_ != nullptr;};
      void deleteOperateList() { this->operateList_ = nullptr;};
      inline const vector<string> & getOperateList() const { DARABONBA_PTR_GET_CONST(operateList_, vector<string>) };
      inline vector<string> getOperateList() { DARABONBA_PTR_GET(operateList_, vector<string>) };
      inline ApplyCommand& setOperateList(const vector<string> & operateList) { DARABONBA_PTR_SET_VALUE(operateList_, operateList) };
      inline ApplyCommand& setOperateList(vector<string> && operateList) { DARABONBA_PTR_SET_RVALUE(operateList_, operateList) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ApplyCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<ApplyCommand::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<ApplyCommand::ResourceList>) };
      inline vector<ApplyCommand::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<ApplyCommand::ResourceList>) };
      inline ApplyCommand& setResourceList(const vector<ApplyCommand::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline ApplyCommand& setResourceList(vector<ApplyCommand::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ApplyCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The list of users to whom permissions are granted.
      // 
      // This parameter is required.
      shared_ptr<vector<ApplyCommand::GrantToUsers>> grantToUsers_ {};
      // The permission granularity. Valid values: TABLE (table-level permissions) and COLUMN (column-level permissions).
      // 
      // This parameter is required.
      shared_ptr<string> granularity_ {};
      // The list of operation types.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> operateList_ {};
      // The reason for the application. This parameter is required and cannot be empty or contain only whitespace characters.
      // 
      // This parameter is required.
      shared_ptr<string> reason_ {};
      // The list of resources for which permissions are applied.
      // 
      // This parameter is required.
      shared_ptr<vector<ApplyCommand::ResourceList>> resourceList_ {};
      // The resource type.
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->applyCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // applyCommand Field Functions 
    bool hasApplyCommand() const { return this->applyCommand_ != nullptr;};
    void deleteApplyCommand() { this->applyCommand_ = nullptr;};
    inline const ApplyResourcePermissionRequest::ApplyCommand & getApplyCommand() const { DARABONBA_PTR_GET_CONST(applyCommand_, ApplyResourcePermissionRequest::ApplyCommand) };
    inline ApplyResourcePermissionRequest::ApplyCommand getApplyCommand() { DARABONBA_PTR_GET(applyCommand_, ApplyResourcePermissionRequest::ApplyCommand) };
    inline ApplyResourcePermissionRequest& setApplyCommand(const ApplyResourcePermissionRequest::ApplyCommand & applyCommand) { DARABONBA_PTR_SET_VALUE(applyCommand_, applyCommand) };
    inline ApplyResourcePermissionRequest& setApplyCommand(ApplyResourcePermissionRequest::ApplyCommand && applyCommand) { DARABONBA_PTR_SET_RVALUE(applyCommand_, applyCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyResourcePermissionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ApplyResourcePermissionRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The permission application request.
    // 
    // This parameter is required.
    shared_ptr<ApplyResourcePermissionRequest::ApplyCommand> applyCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
