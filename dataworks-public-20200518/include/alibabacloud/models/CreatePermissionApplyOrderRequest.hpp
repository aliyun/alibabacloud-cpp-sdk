// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePermissionApplyOrderRequestApplyObject.hpp>
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
    virtual bool empty() const override { this->applyObject_ != nullptr
        && this->applyReason_ != nullptr && this->applyType_ != nullptr && this->applyUserIds_ != nullptr && this->catalogName_ != nullptr && this->deadline_ != nullptr
        && this->engineType_ != nullptr && this->maxComputeProjectName_ != nullptr && this->orderType_ != nullptr && this->workspaceId_ != nullptr; };
    // applyObject Field Functions 
    bool hasApplyObject() const { return this->applyObject_ != nullptr;};
    void deleteApplyObject() { this->applyObject_ = nullptr;};
    inline const vector<CreatePermissionApplyOrderRequestApplyObject> & applyObject() const { DARABONBA_PTR_GET_CONST(applyObject_, vector<CreatePermissionApplyOrderRequestApplyObject>) };
    inline vector<CreatePermissionApplyOrderRequestApplyObject> applyObject() { DARABONBA_PTR_GET(applyObject_, vector<CreatePermissionApplyOrderRequestApplyObject>) };
    inline CreatePermissionApplyOrderRequest& setApplyObject(const vector<CreatePermissionApplyOrderRequestApplyObject> & applyObject) { DARABONBA_PTR_SET_VALUE(applyObject_, applyObject) };
    inline CreatePermissionApplyOrderRequest& setApplyObject(vector<CreatePermissionApplyOrderRequestApplyObject> && applyObject) { DARABONBA_PTR_SET_RVALUE(applyObject_, applyObject) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string applyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // applyUserIds Field Functions 
    bool hasApplyUserIds() const { return this->applyUserIds_ != nullptr;};
    void deleteApplyUserIds() { this->applyUserIds_ = nullptr;};
    inline string applyUserIds() const { DARABONBA_PTR_GET_DEFAULT(applyUserIds_, "") };
    inline CreatePermissionApplyOrderRequest& setApplyUserIds(string applyUserIds) { DARABONBA_PTR_SET_VALUE(applyUserIds_, applyUserIds) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreatePermissionApplyOrderRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline int64_t deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, 0L) };
    inline CreatePermissionApplyOrderRequest& setDeadline(int64_t deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreatePermissionApplyOrderRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // maxComputeProjectName Field Functions 
    bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
    void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
    inline string maxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
    inline CreatePermissionApplyOrderRequest& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline CreatePermissionApplyOrderRequest& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int32_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0) };
    inline CreatePermissionApplyOrderRequest& setWorkspaceId(int32_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The objects on which you want to request permissions.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreatePermissionApplyOrderRequestApplyObject>> applyObject_ = nullptr;
    // The reason for your request. The administrator determines whether to approve the request based on the reason.
    // 
    // This parameter is required.
    std::shared_ptr<string> applyReason_ = nullptr;
    std::shared_ptr<string> applyType_ = nullptr;
    // The ID of the Alibaba Cloud account for which you want to request permissions. If you want to request permissions for multiple Alibaba Cloud accounts, separate the IDs of the accounts with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> applyUserIds_ = nullptr;
    std::shared_ptr<string> catalogName_ = nullptr;
    // The expiration time of the permissions that you request. This value is a UNIX timestamp. The default value is January 1, 2065. If LabelSecurity is disabled for the MaxCompute project in which you want to request permissions on the fields of a table, or the security level of the fields is 0 or is lower than or equal to the security level of the Alibaba Cloud account for which you want to request permissions, you can request only permanent permissions. You can go to the Workspace Management page in the DataWorks console, click MaxCompute Management in the left-side navigation pane, and then check whether column-level access control is enabled. You can go to your DataWorks workspace, view the security level of the fields in Data Map, and then view the security level of the Alibaba Cloud account on the User Management page.
    std::shared_ptr<int64_t> deadline_ = nullptr;
    // The type of the compute engine in which you want to request permissions on the fields of a table. The parameter value is odps and cannot be changed. This value indicates that you can request permissions only on fields of tables in the MaxCompute compute engine.
    std::shared_ptr<string> engineType_ = nullptr;
    // The name of the MaxCompute project in which you request permissions on the fields of a table.
    std::shared_ptr<string> maxComputeProjectName_ = nullptr;
    // The type of the permission request order. The parameter value is 1 and cannot be changed. This value indicates ACL-based authorization.
    std::shared_ptr<int32_t> orderType_ = nullptr;
    // The ID of the DataWorks workspace that is associated with the MaxCompute project in which you want to request permissions on the fields of a table. You can go to the SettingCenter page in the DataWorks console to view the workspace ID.
    std::shared_ptr<int32_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
