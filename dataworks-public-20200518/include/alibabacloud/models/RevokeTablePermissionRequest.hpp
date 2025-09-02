// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKETABLEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RevokeTablePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTablePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_TO_JSON(RevokeUserId, revokeUserId_);
      DARABONBA_PTR_TO_JSON(RevokeUserName, revokeUserName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeTablePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_FROM_JSON(RevokeUserId, revokeUserId_);
      DARABONBA_PTR_FROM_JSON(RevokeUserName, revokeUserName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RevokeTablePermissionRequest() = default ;
    RevokeTablePermissionRequest(const RevokeTablePermissionRequest &) = default ;
    RevokeTablePermissionRequest(RevokeTablePermissionRequest &&) = default ;
    RevokeTablePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTablePermissionRequest() = default ;
    RevokeTablePermissionRequest& operator=(const RevokeTablePermissionRequest &) = default ;
    RevokeTablePermissionRequest& operator=(RevokeTablePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->maxComputeProjectName_ != nullptr && this->revokeUserId_ != nullptr && this->revokeUserName_ != nullptr && this->tableName_ != nullptr && this->workspaceId_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string actions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline RevokeTablePermissionRequest& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // maxComputeProjectName Field Functions 
    bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
    void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
    inline string maxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
    inline RevokeTablePermissionRequest& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


    // revokeUserId Field Functions 
    bool hasRevokeUserId() const { return this->revokeUserId_ != nullptr;};
    void deleteRevokeUserId() { this->revokeUserId_ = nullptr;};
    inline string revokeUserId() const { DARABONBA_PTR_GET_DEFAULT(revokeUserId_, "") };
    inline RevokeTablePermissionRequest& setRevokeUserId(string revokeUserId) { DARABONBA_PTR_SET_VALUE(revokeUserId_, revokeUserId) };


    // revokeUserName Field Functions 
    bool hasRevokeUserName() const { return this->revokeUserName_ != nullptr;};
    void deleteRevokeUserName() { this->revokeUserName_ = nullptr;};
    inline string revokeUserName() const { DARABONBA_PTR_GET_DEFAULT(revokeUserName_, "") };
    inline RevokeTablePermissionRequest& setRevokeUserName(string revokeUserName) { DARABONBA_PTR_SET_VALUE(revokeUserName_, revokeUserName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline RevokeTablePermissionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline RevokeTablePermissionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The permissions that you want to revoke. Separate multiple permissions with commas (,). You can revoke only the SELECT, DESCRIBE, and DOWNLOAD permissions on MaxCompute tables.
    // 
    // This parameter is required.
    std::shared_ptr<string> actions_ = nullptr;
    // The name of the MaxCompute project to which the table belongs. You can log on to the DataWorks console and go to the SettingCenter page to obtain the name of the MaxCompute project that you associate with the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> maxComputeProjectName_ = nullptr;
    // The ID of the Alibaba Cloud account from which you want to revoke permissions. You can log on to the DataWorks console and go to the Security Settings page to obtain the ID. You must specify either this parameter or the RevokeUserName parameter. If you specify both this parameter and the RevokeUserName parameter and the parameter values are different, the value of this parameter prevails.
    std::shared_ptr<string> revokeUserId_ = nullptr;
    // The Alibaba Cloud account from which you want to revoke permissions. Specify this parameter in the format that is the same as the format of the account used to access the MaxCompute project.
    // 
    // *   If the account is an Alibaba Cloud account, the value is in the ALIYUN$+Account name format.
    // *   If the account is a RAM user, the value is in the RAM$+Account name format.
    // 
    // You must specify either this parameter or the RevokeUserId parameter. If you specify both this parameter and the RevokeUserId parameter and the parameter values are different, the value of the RevokeUserId parameter prevails.
    std::shared_ptr<string> revokeUserName_ = nullptr;
    // The name of the MaxCompute table. You can call the [SearchMetaTables](https://help.aliyun.com/document_detail/173919.html) operation to query the name of the MaxCompute table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the DataWorks workspace with which the MaxCompute project is associated. You can log on to the DataWorks console and go to the Workspace page to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
