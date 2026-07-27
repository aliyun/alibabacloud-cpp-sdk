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
        // The permission types to request. Separate multiple permission types with commas (,). Only Select, Describe, and Download types are supported.
        shared_ptr<string> actions_ {};
        // The name of the column for which permissions are requested. To request permissions on the entire table, enter all column names of the table.
        // You can request permissions on specific columns only if LabelSecurity is enabled for the MaxCompute project. If LabelSecurity is not enabled, you can request permissions only on the entire table.
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
      // The permission types to request. Separate multiple permission types with commas (,). Only Select, Describe, Drop, Alter, Update, and Download types are supported.
      shared_ptr<string> actions_ {};
      // The list of column objects.
      shared_ptr<vector<ApplyObject::ColumnMetaList>> columnMetaList_ {};
      // The object for which permissions are requested. Only MaxCompute table permissions are supported. Enter the name of the target table.
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
    // The list of objects for which permissions are requested.
    // 
    // This parameter is required.
    shared_ptr<vector<CreatePermissionApplyOrderRequest::ApplyObject>> applyObject_ {};
    // The reason for the request. This is used by the administrator for evaluation and approval.
    // 
    // This parameter is required.
    shared_ptr<string> applyReason_ {};
    // The type of the request order. Valid values:
    // 
    // - MaxComputeTable: MaxCompute table permission request order.
    // - MaxComputeFunction: MaxCompute function permission request order.
    // - MaxComputeResource: MaxCompute resource permission request order.
    // - DLFSchema: Data Lake Formation (DLF) 1.0 schema permission request order.
    // - DLFTable: DLF 1.0 table permission request order.
    // - DLFColumn: DLF 1.0 column permission request order.
    // - DsApiDeploy: Data service publication permission request order.
    shared_ptr<string> applyType_ {};
    // The UIDs of the Alibaba Cloud accounts for which permissions are requested. Separate multiple account UIDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> applyUserIds_ {};
    // The name of the data catalog to query. Go to the [Data Lake Formation console](https://dlf.console.aliyun.com/ap-southeast-1/metadata/catalog?spm=a2c4g.11186623.0.0.5a225658pT4Dkr) to view the data catalog name.
    shared_ptr<string> catalogName_ {};
    // The expiration time of the requested permissions. Specify a UNIX timestamp. If you do not specify this parameter, the default expiration time is January 1, 2065.
    // If LabelSecurity is not enabled for the MaxCompute project, or the security level of the requested table field is 0 or less than or equal to the security level of the requesting account, you can request only permanent permissions.
    // Go to the management page of the DataWorks workspace and check the advanced configuration page of the MaxCompute engine to verify whether column-level access control is enabled.
    // Go to the DataWorks workspace to view the security level of fields in Data Map and the security level of accounts on the Member Management page.
    shared_ptr<int64_t> deadline_ {};
    // This field is deprecated. Set it to empty.
    shared_ptr<string> engineType_ {};
    // The name of the MaxCompute project for which permissions are requested.
    shared_ptr<string> maxComputeProjectName_ {};
    // This field is deprecated. Set it to empty.
    shared_ptr<int32_t> orderType_ {};
    // The ID of the DataWorks workspace to which the MaxCompute project belongs. Go to the DataWorks workspace configuration page to obtain the workspace ID.
    shared_ptr<int32_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
