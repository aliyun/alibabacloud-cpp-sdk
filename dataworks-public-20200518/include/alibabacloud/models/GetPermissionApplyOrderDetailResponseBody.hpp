// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyOrderDetail, applyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyOrderDetail, applyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPermissionApplyOrderDetailResponseBody() = default ;
    GetPermissionApplyOrderDetailResponseBody(const GetPermissionApplyOrderDetailResponseBody &) = default ;
    GetPermissionApplyOrderDetailResponseBody(GetPermissionApplyOrderDetailResponseBody &&) = default ;
    GetPermissionApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBody() = default ;
    GetPermissionApplyOrderDetailResponseBody& operator=(const GetPermissionApplyOrderDetailResponseBody &) = default ;
    GetPermissionApplyOrderDetailResponseBody& operator=(GetPermissionApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyBaseId, applyBaseId_);
        DARABONBA_PTR_TO_JSON(ApplyTimestamp, applyTimestamp_);
        DARABONBA_PTR_TO_JSON(ApproveAccountList, approveAccountList_);
        DARABONBA_PTR_TO_JSON(ApproveContent, approveContent_);
        DARABONBA_PTR_TO_JSON(FinishAapprovalTimestamp, finishAapprovalTimestamp_);
        DARABONBA_PTR_TO_JSON(FinishApprovalComment, finishApprovalComment_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
        DARABONBA_PTR_TO_JSON(GranteeObjectList, granteeObjectList_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyBaseId, applyBaseId_);
        DARABONBA_PTR_FROM_JSON(ApplyTimestamp, applyTimestamp_);
        DARABONBA_PTR_FROM_JSON(ApproveAccountList, approveAccountList_);
        DARABONBA_PTR_FROM_JSON(ApproveContent, approveContent_);
        DARABONBA_PTR_FROM_JSON(FinishAapprovalTimestamp, finishAapprovalTimestamp_);
        DARABONBA_PTR_FROM_JSON(FinishApprovalComment, finishApprovalComment_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
        DARABONBA_PTR_FROM_JSON(GranteeObjectList, granteeObjectList_);
      };
      ApplyOrderDetail() = default ;
      ApplyOrderDetail(const ApplyOrderDetail &) = default ;
      ApplyOrderDetail(ApplyOrderDetail &&) = default ;
      ApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyOrderDetail() = default ;
      ApplyOrderDetail& operator=(const ApplyOrderDetail &) = default ;
      ApplyOrderDetail& operator=(ApplyOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GranteeObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GranteeObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(GranteeId, granteeId_);
          DARABONBA_PTR_TO_JSON(GranteeName, granteeName_);
          DARABONBA_PTR_TO_JSON(GranteeType, granteeType_);
          DARABONBA_PTR_TO_JSON(GranteeTypeSub, granteeTypeSub_);
        };
        friend void from_json(const Darabonba::Json& j, GranteeObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(GranteeId, granteeId_);
          DARABONBA_PTR_FROM_JSON(GranteeName, granteeName_);
          DARABONBA_PTR_FROM_JSON(GranteeType, granteeType_);
          DARABONBA_PTR_FROM_JSON(GranteeTypeSub, granteeTypeSub_);
        };
        GranteeObjectList() = default ;
        GranteeObjectList(const GranteeObjectList &) = default ;
        GranteeObjectList(GranteeObjectList &&) = default ;
        GranteeObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GranteeObjectList() = default ;
        GranteeObjectList& operator=(const GranteeObjectList &) = default ;
        GranteeObjectList& operator=(GranteeObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->granteeId_ == nullptr
        && this->granteeName_ == nullptr && this->granteeType_ == nullptr && this->granteeTypeSub_ == nullptr; };
        // granteeId Field Functions 
        bool hasGranteeId() const { return this->granteeId_ != nullptr;};
        void deleteGranteeId() { this->granteeId_ = nullptr;};
        inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
        inline GranteeObjectList& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


        // granteeName Field Functions 
        bool hasGranteeName() const { return this->granteeName_ != nullptr;};
        void deleteGranteeName() { this->granteeName_ = nullptr;};
        inline string getGranteeName() const { DARABONBA_PTR_GET_DEFAULT(granteeName_, "") };
        inline GranteeObjectList& setGranteeName(string granteeName) { DARABONBA_PTR_SET_VALUE(granteeName_, granteeName) };


        // granteeType Field Functions 
        bool hasGranteeType() const { return this->granteeType_ != nullptr;};
        void deleteGranteeType() { this->granteeType_ = nullptr;};
        inline int32_t getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, 0) };
        inline GranteeObjectList& setGranteeType(int32_t granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


        // granteeTypeSub Field Functions 
        bool hasGranteeTypeSub() const { return this->granteeTypeSub_ != nullptr;};
        void deleteGranteeTypeSub() { this->granteeTypeSub_ = nullptr;};
        inline int32_t getGranteeTypeSub() const { DARABONBA_PTR_GET_DEFAULT(granteeTypeSub_, 0) };
        inline GranteeObjectList& setGranteeTypeSub(int32_t granteeTypeSub) { DARABONBA_PTR_SET_VALUE(granteeTypeSub_, granteeTypeSub) };


      protected:
        // The ID of the account that is used to request permissions.
        shared_ptr<string> granteeId_ {};
        // The name of the account that is used to request permissions. The name is in the same format as that of the account used to access the MaxCompute project.
        // 
        // *   If the account is an Alibaba Cloud account, the value is in the ALIYUN$+Account name format.
        // *   If the account is a RAM user, the value is in the RAM$+Account name format.
        shared_ptr<string> granteeName_ {};
        // The type of the subject that requests permissions. The value is fixed as 1, which indicates users.
        shared_ptr<int32_t> granteeType_ {};
        // The subtype of the subject that requests permissions. Valid values:
        // 
        // *   101: production account
        // *   103: individual account
        // *   105: account that requests permissions for others
        shared_ptr<int32_t> granteeTypeSub_ {};
      };

      class ApproveContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApproveContent& obj) { 
          DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_TO_JSON(Deadline, deadline_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(ProjectMeta, projectMeta_);
        };
        friend void from_json(const Darabonba::Json& j, ApproveContent& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(ProjectMeta, projectMeta_);
        };
        ApproveContent() = default ;
        ApproveContent(const ApproveContent &) = default ;
        ApproveContent(ApproveContent &&) = default ;
        ApproveContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApproveContent() = default ;
        ApproveContent& operator=(const ApproveContent &) = default ;
        ApproveContent& operator=(ApproveContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProjectMeta : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProjectMeta& obj) { 
            DARABONBA_PTR_TO_JSON(MaxComputeProjectName, maxComputeProjectName_);
            DARABONBA_PTR_TO_JSON(ObjectMetaList, objectMetaList_);
            DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          };
          friend void from_json(const Darabonba::Json& j, ProjectMeta& obj) { 
            DARABONBA_PTR_FROM_JSON(MaxComputeProjectName, maxComputeProjectName_);
            DARABONBA_PTR_FROM_JSON(ObjectMetaList, objectMetaList_);
            DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          };
          ProjectMeta() = default ;
          ProjectMeta(const ProjectMeta &) = default ;
          ProjectMeta(ProjectMeta &&) = default ;
          ProjectMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProjectMeta() = default ;
          ProjectMeta& operator=(const ProjectMeta &) = default ;
          ProjectMeta& operator=(ProjectMeta &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ObjectMetaList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ObjectMetaList& obj) { 
              DARABONBA_PTR_TO_JSON(Actions, actions_);
              DARABONBA_PTR_TO_JSON(ColumnMetaList, columnMetaList_);
              DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
            };
            friend void from_json(const Darabonba::Json& j, ObjectMetaList& obj) { 
              DARABONBA_PTR_FROM_JSON(Actions, actions_);
              DARABONBA_PTR_FROM_JSON(ColumnMetaList, columnMetaList_);
              DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
            };
            ObjectMetaList() = default ;
            ObjectMetaList(const ObjectMetaList &) = default ;
            ObjectMetaList(ObjectMetaList &&) = default ;
            ObjectMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ObjectMetaList() = default ;
            ObjectMetaList& operator=(const ObjectMetaList &) = default ;
            ObjectMetaList& operator=(ObjectMetaList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ColumnMetaList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ColumnMetaList& obj) { 
                DARABONBA_PTR_TO_JSON(ColumnActions, columnActions_);
                DARABONBA_PTR_TO_JSON(ColumnComment, columnComment_);
                DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
                DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
              };
              friend void from_json(const Darabonba::Json& j, ColumnMetaList& obj) { 
                DARABONBA_PTR_FROM_JSON(ColumnActions, columnActions_);
                DARABONBA_PTR_FROM_JSON(ColumnComment, columnComment_);
                DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
                DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
              };
              ColumnMetaList() = default ;
              ColumnMetaList(const ColumnMetaList &) = default ;
              ColumnMetaList(ColumnMetaList &&) = default ;
              ColumnMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ColumnMetaList() = default ;
              ColumnMetaList& operator=(const ColumnMetaList &) = default ;
              ColumnMetaList& operator=(ColumnMetaList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->columnActions_ == nullptr
        && this->columnComment_ == nullptr && this->columnName_ == nullptr && this->securityLevel_ == nullptr; };
              // columnActions Field Functions 
              bool hasColumnActions() const { return this->columnActions_ != nullptr;};
              void deleteColumnActions() { this->columnActions_ = nullptr;};
              inline const vector<string> & getColumnActions() const { DARABONBA_PTR_GET_CONST(columnActions_, vector<string>) };
              inline vector<string> getColumnActions() { DARABONBA_PTR_GET(columnActions_, vector<string>) };
              inline ColumnMetaList& setColumnActions(const vector<string> & columnActions) { DARABONBA_PTR_SET_VALUE(columnActions_, columnActions) };
              inline ColumnMetaList& setColumnActions(vector<string> && columnActions) { DARABONBA_PTR_SET_RVALUE(columnActions_, columnActions) };


              // columnComment Field Functions 
              bool hasColumnComment() const { return this->columnComment_ != nullptr;};
              void deleteColumnComment() { this->columnComment_ = nullptr;};
              inline string getColumnComment() const { DARABONBA_PTR_GET_DEFAULT(columnComment_, "") };
              inline ColumnMetaList& setColumnComment(string columnComment) { DARABONBA_PTR_SET_VALUE(columnComment_, columnComment) };


              // columnName Field Functions 
              bool hasColumnName() const { return this->columnName_ != nullptr;};
              void deleteColumnName() { this->columnName_ = nullptr;};
              inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
              inline ColumnMetaList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


              // securityLevel Field Functions 
              bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
              void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
              inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
              inline ColumnMetaList& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


            protected:
              shared_ptr<vector<string>> columnActions_ {};
              // The description of the column on which you request permissions.
              shared_ptr<string> columnComment_ {};
              // The name of the column on which you request permissions.
              shared_ptr<string> columnName_ {};
              // The security level of the column on which you request permissions. Valid values: 0 to 9.
              shared_ptr<string> securityLevel_ {};
            };

            virtual bool empty() const override { return this->actions_ == nullptr
        && this->columnMetaList_ == nullptr && this->objectName_ == nullptr; };
            // actions Field Functions 
            bool hasActions() const { return this->actions_ != nullptr;};
            void deleteActions() { this->actions_ = nullptr;};
            inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
            inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
            inline ObjectMetaList& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
            inline ObjectMetaList& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


            // columnMetaList Field Functions 
            bool hasColumnMetaList() const { return this->columnMetaList_ != nullptr;};
            void deleteColumnMetaList() { this->columnMetaList_ = nullptr;};
            inline const vector<ObjectMetaList::ColumnMetaList> & getColumnMetaList() const { DARABONBA_PTR_GET_CONST(columnMetaList_, vector<ObjectMetaList::ColumnMetaList>) };
            inline vector<ObjectMetaList::ColumnMetaList> getColumnMetaList() { DARABONBA_PTR_GET(columnMetaList_, vector<ObjectMetaList::ColumnMetaList>) };
            inline ObjectMetaList& setColumnMetaList(const vector<ObjectMetaList::ColumnMetaList> & columnMetaList) { DARABONBA_PTR_SET_VALUE(columnMetaList_, columnMetaList) };
            inline ObjectMetaList& setColumnMetaList(vector<ObjectMetaList::ColumnMetaList> && columnMetaList) { DARABONBA_PTR_SET_RVALUE(columnMetaList_, columnMetaList) };


            // objectName Field Functions 
            bool hasObjectName() const { return this->objectName_ != nullptr;};
            void deleteObjectName() { this->objectName_ = nullptr;};
            inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
            inline ObjectMetaList& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


          protected:
            shared_ptr<vector<string>> actions_ {};
            // The information about the column fields in the object on which you request permissions.
            shared_ptr<vector<ObjectMetaList::ColumnMetaList>> columnMetaList_ {};
            // The name of the table on which you request permissions.
            shared_ptr<string> objectName_ {};
          };

          virtual bool empty() const override { return this->maxComputeProjectName_ == nullptr
        && this->objectMetaList_ == nullptr && this->workspaceId_ == nullptr; };
          // maxComputeProjectName Field Functions 
          bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
          void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
          inline string getMaxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
          inline ProjectMeta& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


          // objectMetaList Field Functions 
          bool hasObjectMetaList() const { return this->objectMetaList_ != nullptr;};
          void deleteObjectMetaList() { this->objectMetaList_ = nullptr;};
          inline const vector<ProjectMeta::ObjectMetaList> & getObjectMetaList() const { DARABONBA_PTR_GET_CONST(objectMetaList_, vector<ProjectMeta::ObjectMetaList>) };
          inline vector<ProjectMeta::ObjectMetaList> getObjectMetaList() { DARABONBA_PTR_GET(objectMetaList_, vector<ProjectMeta::ObjectMetaList>) };
          inline ProjectMeta& setObjectMetaList(const vector<ProjectMeta::ObjectMetaList> & objectMetaList) { DARABONBA_PTR_SET_VALUE(objectMetaList_, objectMetaList) };
          inline ProjectMeta& setObjectMetaList(vector<ProjectMeta::ObjectMetaList> && objectMetaList) { DARABONBA_PTR_SET_RVALUE(objectMetaList_, objectMetaList) };


          // workspaceId Field Functions 
          bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
          void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
          inline int32_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0) };
          inline ProjectMeta& setWorkspaceId(int32_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        protected:
          // The MaxCompute project to which the object on which you request permissions belongs.
          shared_ptr<string> maxComputeProjectName_ {};
          // The details about the object on which you request permissions.
          shared_ptr<vector<ProjectMeta::ObjectMetaList>> objectMetaList_ {};
          // The ID of the DataWorks workspace that is associated with the object on which you request permissions.
          shared_ptr<int32_t> workspaceId_ {};
        };

        virtual bool empty() const override { return this->applyReason_ == nullptr
        && this->deadline_ == nullptr && this->orderType_ == nullptr && this->projectMeta_ == nullptr; };
        // applyReason Field Functions 
        bool hasApplyReason() const { return this->applyReason_ != nullptr;};
        void deleteApplyReason() { this->applyReason_ = nullptr;};
        inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
        inline ApproveContent& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


        // deadline Field Functions 
        bool hasDeadline() const { return this->deadline_ != nullptr;};
        void deleteDeadline() { this->deadline_ = nullptr;};
        inline int64_t getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, 0L) };
        inline ApproveContent& setDeadline(int64_t deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
        inline ApproveContent& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // projectMeta Field Functions 
        bool hasProjectMeta() const { return this->projectMeta_ != nullptr;};
        void deleteProjectMeta() { this->projectMeta_ = nullptr;};
        inline const ApproveContent::ProjectMeta & getProjectMeta() const { DARABONBA_PTR_GET_CONST(projectMeta_, ApproveContent::ProjectMeta) };
        inline ApproveContent::ProjectMeta getProjectMeta() { DARABONBA_PTR_GET(projectMeta_, ApproveContent::ProjectMeta) };
        inline ApproveContent& setProjectMeta(const ApproveContent::ProjectMeta & projectMeta) { DARABONBA_PTR_SET_VALUE(projectMeta_, projectMeta) };
        inline ApproveContent& setProjectMeta(ApproveContent::ProjectMeta && projectMeta) { DARABONBA_PTR_SET_RVALUE(projectMeta_, projectMeta) };


      protected:
        // The reason of the permission request. The administrator processes the request based on the reason.
        shared_ptr<string> applyReason_ {};
        // The expiration time of the permissions that you request. The value is a UNIX timestamp. If LabelSecurity is disabled for the MaxCompute project in which you want to request permissions on the fields of a table, or the security level of the fields is 0 or is lower than or equal to the security level of the Alibaba Cloud account for which you want to request permissions, you can request only permanent permissions.
        shared_ptr<int64_t> deadline_ {};
        // The type of the permission request order. The parameter value is 1 and cannot be changed. This value indicates ACL-based authorization.
        shared_ptr<int32_t> orderType_ {};
        // The information about the project and workspace that are associated with the object on which you request permissions.
        shared_ptr<ApproveContent::ProjectMeta> projectMeta_ {};
      };

      class ApproveAccountList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApproveAccountList& obj) { 
          DARABONBA_PTR_TO_JSON(BaseId, baseId_);
        };
        friend void from_json(const Darabonba::Json& j, ApproveAccountList& obj) { 
          DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
        };
        ApproveAccountList() = default ;
        ApproveAccountList(const ApproveAccountList &) = default ;
        ApproveAccountList(ApproveAccountList &&) = default ;
        ApproveAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApproveAccountList() = default ;
        ApproveAccountList& operator=(const ApproveAccountList &) = default ;
        ApproveAccountList& operator=(ApproveAccountList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baseId_ == nullptr; };
        // baseId Field Functions 
        bool hasBaseId() const { return this->baseId_ != nullptr;};
        void deleteBaseId() { this->baseId_ = nullptr;};
        inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
        inline ApproveAccountList& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


      protected:
        // The ID of the Alibaba Cloud account that is used to process the permission request order.
        shared_ptr<string> baseId_ {};
      };

      virtual bool empty() const override { return this->applyBaseId_ == nullptr
        && this->applyTimestamp_ == nullptr && this->approveAccountList_ == nullptr && this->approveContent_ == nullptr && this->finishAapprovalTimestamp_ == nullptr && this->finishApprovalComment_ == nullptr
        && this->flowId_ == nullptr && this->flowStatus_ == nullptr && this->granteeObjectList_ == nullptr; };
      // applyBaseId Field Functions 
      bool hasApplyBaseId() const { return this->applyBaseId_ != nullptr;};
      void deleteApplyBaseId() { this->applyBaseId_ = nullptr;};
      inline string getApplyBaseId() const { DARABONBA_PTR_GET_DEFAULT(applyBaseId_, "") };
      inline ApplyOrderDetail& setApplyBaseId(string applyBaseId) { DARABONBA_PTR_SET_VALUE(applyBaseId_, applyBaseId) };


      // applyTimestamp Field Functions 
      bool hasApplyTimestamp() const { return this->applyTimestamp_ != nullptr;};
      void deleteApplyTimestamp() { this->applyTimestamp_ = nullptr;};
      inline int64_t getApplyTimestamp() const { DARABONBA_PTR_GET_DEFAULT(applyTimestamp_, 0L) };
      inline ApplyOrderDetail& setApplyTimestamp(int64_t applyTimestamp) { DARABONBA_PTR_SET_VALUE(applyTimestamp_, applyTimestamp) };


      // approveAccountList Field Functions 
      bool hasApproveAccountList() const { return this->approveAccountList_ != nullptr;};
      void deleteApproveAccountList() { this->approveAccountList_ = nullptr;};
      inline const vector<ApplyOrderDetail::ApproveAccountList> & getApproveAccountList() const { DARABONBA_PTR_GET_CONST(approveAccountList_, vector<ApplyOrderDetail::ApproveAccountList>) };
      inline vector<ApplyOrderDetail::ApproveAccountList> getApproveAccountList() { DARABONBA_PTR_GET(approveAccountList_, vector<ApplyOrderDetail::ApproveAccountList>) };
      inline ApplyOrderDetail& setApproveAccountList(const vector<ApplyOrderDetail::ApproveAccountList> & approveAccountList) { DARABONBA_PTR_SET_VALUE(approveAccountList_, approveAccountList) };
      inline ApplyOrderDetail& setApproveAccountList(vector<ApplyOrderDetail::ApproveAccountList> && approveAccountList) { DARABONBA_PTR_SET_RVALUE(approveAccountList_, approveAccountList) };


      // approveContent Field Functions 
      bool hasApproveContent() const { return this->approveContent_ != nullptr;};
      void deleteApproveContent() { this->approveContent_ = nullptr;};
      inline const ApplyOrderDetail::ApproveContent & getApproveContent() const { DARABONBA_PTR_GET_CONST(approveContent_, ApplyOrderDetail::ApproveContent) };
      inline ApplyOrderDetail::ApproveContent getApproveContent() { DARABONBA_PTR_GET(approveContent_, ApplyOrderDetail::ApproveContent) };
      inline ApplyOrderDetail& setApproveContent(const ApplyOrderDetail::ApproveContent & approveContent) { DARABONBA_PTR_SET_VALUE(approveContent_, approveContent) };
      inline ApplyOrderDetail& setApproveContent(ApplyOrderDetail::ApproveContent && approveContent) { DARABONBA_PTR_SET_RVALUE(approveContent_, approveContent) };


      // finishAapprovalTimestamp Field Functions 
      bool hasFinishAapprovalTimestamp() const { return this->finishAapprovalTimestamp_ != nullptr;};
      void deleteFinishAapprovalTimestamp() { this->finishAapprovalTimestamp_ = nullptr;};
      inline int64_t getFinishAapprovalTimestamp() const { DARABONBA_PTR_GET_DEFAULT(finishAapprovalTimestamp_, 0L) };
      inline ApplyOrderDetail& setFinishAapprovalTimestamp(int64_t finishAapprovalTimestamp) { DARABONBA_PTR_SET_VALUE(finishAapprovalTimestamp_, finishAapprovalTimestamp) };


      // finishApprovalComment Field Functions 
      bool hasFinishApprovalComment() const { return this->finishApprovalComment_ != nullptr;};
      void deleteFinishApprovalComment() { this->finishApprovalComment_ = nullptr;};
      inline string getFinishApprovalComment() const { DARABONBA_PTR_GET_DEFAULT(finishApprovalComment_, "") };
      inline ApplyOrderDetail& setFinishApprovalComment(string finishApprovalComment) { DARABONBA_PTR_SET_VALUE(finishApprovalComment_, finishApprovalComment) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline ApplyOrderDetail& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowStatus Field Functions 
      bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
      void deleteFlowStatus() { this->flowStatus_ = nullptr;};
      inline int32_t getFlowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, 0) };
      inline ApplyOrderDetail& setFlowStatus(int32_t flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


      // granteeObjectList Field Functions 
      bool hasGranteeObjectList() const { return this->granteeObjectList_ != nullptr;};
      void deleteGranteeObjectList() { this->granteeObjectList_ = nullptr;};
      inline const vector<ApplyOrderDetail::GranteeObjectList> & getGranteeObjectList() const { DARABONBA_PTR_GET_CONST(granteeObjectList_, vector<ApplyOrderDetail::GranteeObjectList>) };
      inline vector<ApplyOrderDetail::GranteeObjectList> getGranteeObjectList() { DARABONBA_PTR_GET(granteeObjectList_, vector<ApplyOrderDetail::GranteeObjectList>) };
      inline ApplyOrderDetail& setGranteeObjectList(const vector<ApplyOrderDetail::GranteeObjectList> & granteeObjectList) { DARABONBA_PTR_SET_VALUE(granteeObjectList_, granteeObjectList) };
      inline ApplyOrderDetail& setGranteeObjectList(vector<ApplyOrderDetail::GranteeObjectList> && granteeObjectList) { DARABONBA_PTR_SET_RVALUE(granteeObjectList_, granteeObjectList) };


    protected:
      // The ID of the Alibaba Cloud account that was used to submit the permission request order.
      shared_ptr<string> applyBaseId_ {};
      // The time when the permission request order was submitted. The value is a UNIX timestamp.
      shared_ptr<int64_t> applyTimestamp_ {};
      // The list of Alibaba Cloud accounts that are used to process the permission request order.
      shared_ptr<vector<ApplyOrderDetail::ApproveAccountList>> approveAccountList_ {};
      // The content of the permission request.
      shared_ptr<ApplyOrderDetail::ApproveContent> approveContent_ {};
      shared_ptr<int64_t> finishAapprovalTimestamp_ {};
      shared_ptr<string> finishApprovalComment_ {};
      // The ID of the permission request order.
      shared_ptr<string> flowId_ {};
      // The status of the permission request order. Valid values:
      // 
      // *   1: to be processed
      // *   2: approved and authorized
      // *   3: approved but authorization failed
      // *   4: rejected
      shared_ptr<int32_t> flowStatus_ {};
      // The information about the account that is used to request permissions.
      shared_ptr<vector<ApplyOrderDetail::GranteeObjectList>> granteeObjectList_ {};
    };

    virtual bool empty() const override { return this->applyOrderDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // applyOrderDetail Field Functions 
    bool hasApplyOrderDetail() const { return this->applyOrderDetail_ != nullptr;};
    void deleteApplyOrderDetail() { this->applyOrderDetail_ = nullptr;};
    inline const GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail & getApplyOrderDetail() const { DARABONBA_PTR_GET_CONST(applyOrderDetail_, GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail getApplyOrderDetail() { DARABONBA_PTR_GET(applyOrderDetail_, GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBody& setApplyOrderDetail(const GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail & applyOrderDetail) { DARABONBA_PTR_SET_VALUE(applyOrderDetail_, applyOrderDetail) };
    inline GetPermissionApplyOrderDetailResponseBody& setApplyOrderDetail(GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail && applyOrderDetail) { DARABONBA_PTR_SET_RVALUE(applyOrderDetail_, applyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the permission request order.
    shared_ptr<GetPermissionApplyOrderDetailResponseBody::ApplyOrderDetail> applyOrderDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
