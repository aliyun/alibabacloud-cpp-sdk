// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateWorkspaceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DmsUserId, dmsUserId_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DmsUserId, dmsUserId_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateWorkspaceUserRequest() = default ;
    UpdateWorkspaceUserRequest(const UpdateWorkspaceUserRequest &) = default ;
    UpdateWorkspaceUserRequest(UpdateWorkspaceUserRequest &&) = default ;
    UpdateWorkspaceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceUserRequest() = default ;
    UpdateWorkspaceUserRequest& operator=(const UpdateWorkspaceUserRequest &) = default ;
    UpdateWorkspaceUserRequest& operator=(UpdateWorkspaceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dmsUserId_ == nullptr
        && this->roleIds_ == nullptr && this->workspaceId_ == nullptr; };
    // dmsUserId Field Functions 
    bool hasDmsUserId() const { return this->dmsUserId_ != nullptr;};
    void deleteDmsUserId() { this->dmsUserId_ = nullptr;};
    inline string getDmsUserId() const { DARABONBA_PTR_GET_DEFAULT(dmsUserId_, "") };
    inline UpdateWorkspaceUserRequest& setDmsUserId(string dmsUserId) { DARABONBA_PTR_SET_VALUE(dmsUserId_, dmsUserId) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string getRoleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline UpdateWorkspaceUserRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceUserRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dmsUserId_ {};
    // This parameter is required.
    shared_ptr<string> roleIds_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
