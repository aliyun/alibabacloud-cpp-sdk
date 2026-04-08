// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUEST_HPP_
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
  class CreatePermissionApplyOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionApplyOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyObject, applyObject_);
      DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(ApplyUserIds, applyUserIds_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(Deadline, deadline_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionApplyOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyObject, applyObject_);
      DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(ApplyUserIds, applyUserIds_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreatePermissionApplyOrderRequest() = default ;
    CreatePermissionApplyOrderRequest(const CreatePermissionApplyOrderRequest &) = default ;
    CreatePermissionApplyOrderRequest(CreatePermissionApplyOrderRequest &&) = default ;
    CreatePermissionApplyOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionApplyOrderRequest() = default ;
    CreatePermissionApplyOrderRequest& operator=(const CreatePermissionApplyOrderRequest &) = default ;
    CreatePermissionApplyOrderRequest& operator=(CreatePermissionApplyOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyObject& obj) { 
        DARABONBA_PTR_TO_JSON(Actions, actions_);
        DARABONBA_PTR_TO_JSON(ColumnMetaList, columnMetaList_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Actions, actions_);
        DARABONBA_PTR_FROM_JSON(ColumnMetaList, columnMetaList_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      ApplyObject() = default ;
      ApplyObject(const ApplyObject &) = default ;
      ApplyObject(ApplyObject &&) = default ;
      ApplyObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyObject() = default ;
      ApplyObject& operator=(const ApplyObject &) = default ;
      ApplyObject& operator=(ApplyObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ColumnMetaList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnMetaList& obj) { 
          DARABONBA_PTR_TO_JSON(Actions, actions_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnMetaList& obj) { 
          DARABONBA_PTR_FROM_JSON(Actions, actions_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->actions_ == nullptr
        && this->name_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline string getActions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
        inline ColumnMetaList& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ColumnMetaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> actions_ {};
        // Permissions for the target columns. Enter the column names here. If applying for permissions on the entire table, enter all column names of the table. Permissions for specific columns can only be requested if labelSecurity is enabled for the MaxCompute project. Otherwise, you can only apply for permissions on the entire table.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->columnMetaList_ == nullptr && this->name_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline string getActions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
      inline ApplyObject& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


      // columnMetaList Field Functions 
      bool hasColumnMetaList() const { return this->columnMetaList_ != nullptr;};
      void deleteColumnMetaList() { this->columnMetaList_ = nullptr;};
      inline const vector<ApplyObject::ColumnMetaList> & getColumnMetaList() const { DARABONBA_PTR_GET_CONST(columnMetaList_, vector<ApplyObject::ColumnMetaList>) };
      inline vector<ApplyObject::ColumnMetaList> getColumnMetaList() { DARABONBA_PTR_GET(columnMetaList_, vector<ApplyObject::ColumnMetaList>) };
      inline ApplyObject& setColumnMetaList(const vector<ApplyObject::ColumnMetaList> & columnMetaList) { DARABONBA_PTR_SET_VALUE(columnMetaList_, columnMetaList) };
      inline ApplyObject& setColumnMetaList(vector<ApplyObject::ColumnMetaList> && columnMetaList) { DARABONBA_PTR_SET_RVALUE(columnMetaList_, columnMetaList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApplyObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The type of permissions requested. Use commas (,) to separate multiple permission types in a single request. Currently only supports Select, Describe, Drop, Alter, Update, and Download permission types.
      shared_ptr<string> actions_ {};
      // The list of column objects.
      shared_ptr<vector<ApplyObject::ColumnMetaList>> columnMetaList_ {};
      // The object you request access to. Currently, only permission requests for MaxCompute tables are supported. The name of the target table needs to be entered here.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->applyObject_ == nullptr
        && this->applyReason_ == nullptr && this->applyType_ == nullptr && this->applyUserIds_ == nullptr && this->catalogName_ == nullptr && this->deadline_ == nullptr
        && this->engineType_ == nullptr && this->maxComputeProjectName_ == nullptr && this->orderType_ == nullptr && this->workspaceId_ == nullptr; };
    // applyObject Field Functions 
    bool hasApplyObject() const { return this->applyObject_ != nullptr;};
    void deleteApplyObject() { this->applyObject_ = nullptr;};
    inline const vector<CreatePermissionApplyOrderRequest::ApplyObject> & getApplyObject() const { DARABONBA_PTR_GET_CONST(applyObject_, vector<CreatePermissionApplyOrderRequest::ApplyObject>) };
    inline vector<CreatePermissionApplyOrderRequest::ApplyObject> getApplyObject() { DARABONBA_PTR_GET(applyObject_, vector<CreatePermissionApplyOrderRequest::ApplyObject>) };
    inline CreatePermissionApplyOrderRequest& setApplyObject(const vector<CreatePermissionApplyOrderRequest::ApplyObject> & applyObject) { DARABONBA_PTR_SET_VALUE(applyObject_, applyObject) };
    inline CreatePermissionApplyOrderRequest& setApplyObject(vector<CreatePermissionApplyOrderRequest::ApplyObject> && applyObject) { DARABONBA_PTR_SET_RVALUE(applyObject_, applyObject) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // applyUserIds Field Functions 
    bool hasApplyUserIds() const { return this->applyUserIds_ != nullptr;};
    void deleteApplyUserIds() { this->applyUserIds_ = nullptr;};
    inline string getApplyUserIds() const { DARABONBA_PTR_GET_DEFAULT(applyUserIds_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyUserIds(string applyUserIds) { DARABONBA_PTR_SET_VALUE(applyUserIds_, applyUserIds) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreatePermissionApplyOrderRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline int64_t getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, 0L) };
    inline CreatePermissionApplyOrderRequest& setDeadline(int64_t deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreatePermissionApplyOrderRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // maxComputeProjectName Field Functions 
    bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
    void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
    inline string getMaxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
    inline CreatePermissionApplyOrderRequest& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline CreatePermissionApplyOrderRequest& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int32_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0) };
    inline CreatePermissionApplyOrderRequest& setWorkspaceId(int32_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of requested objects.
    // 
    // This parameter is required.
    shared_ptr<vector<CreatePermissionApplyOrderRequest::ApplyObject>> applyObject_ {};
    // The reason for your request. The administrator determines whether to approve the request based on the reason.
    // 
    // This parameter is required.
    shared_ptr<string> applyReason_ {};
    shared_ptr<string> applyType_ {};
    // The ID of the Alibaba Cloud account for which you want to request permissions. If you want to request permissions for multiple Alibaba Cloud accounts, separate the IDs of the accounts with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> applyUserIds_ {};
    shared_ptr<string> catalogName_ {};
    // The expiration time of the permissions that you request. This value is a UNIX timestamp. The default value is January 1, 2065. If LabelSecurity is disabled for the MaxCompute project in which you want to request permissions on the fields of a table, or the security level of the fields is 0 or is lower than or equal to the security level of the Alibaba Cloud account for which you want to request permissions, you can request only permanent permissions. You can go to the Workspace Management page in the DataWorks console, click MaxCompute Management in the left-side navigation pane, and then check whether column-level access control is enabled. You can go to your DataWorks workspace, view the security level of the fields in Data Map, and then view the security level of the Alibaba Cloud account on the User Management page.
    shared_ptr<int64_t> deadline_ {};
    // The type of compute engine for permission requests. Currently only supports ODPS, which means only MaxCompute compute engine permissions are supported.
    shared_ptr<string> engineType_ {};
    // The name of the MaxCompute project you request access to.
    shared_ptr<string> maxComputeProjectName_ {};
    // The request type. The only supported value is 1, which represents an object ACL permission request.
    shared_ptr<int32_t> orderType_ {};
    // The DataWorks workspace ID to which the MaxCompute project belongs for permission requests. You can check the workspace ID on the DataWorks workspace configuration page.
    shared_ptr<int32_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
