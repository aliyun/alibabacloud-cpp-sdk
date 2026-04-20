// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddWorkspaceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DmsUserIds, dmsUserIds_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleSource, roleSource_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DmsUserIds, dmsUserIds_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleSource, roleSource_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddWorkspaceUserRequest() = default ;
    AddWorkspaceUserRequest(const AddWorkspaceUserRequest &) = default ;
    AddWorkspaceUserRequest(AddWorkspaceUserRequest &&) = default ;
    AddWorkspaceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceUserRequest() = default ;
    AddWorkspaceUserRequest& operator=(const AddWorkspaceUserRequest &) = default ;
    AddWorkspaceUserRequest& operator=(AddWorkspaceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dmsUserIds_ == nullptr
        && this->roleId_ == nullptr && this->roleSource_ == nullptr && this->workspaceId_ == nullptr; };
    // dmsUserIds Field Functions 
    bool hasDmsUserIds() const { return this->dmsUserIds_ != nullptr;};
    void deleteDmsUserIds() { this->dmsUserIds_ = nullptr;};
    inline string getDmsUserIds() const { DARABONBA_PTR_GET_DEFAULT(dmsUserIds_, "") };
    inline AddWorkspaceUserRequest& setDmsUserIds(string dmsUserIds) { DARABONBA_PTR_SET_VALUE(dmsUserIds_, dmsUserIds) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline AddWorkspaceUserRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleSource Field Functions 
    bool hasRoleSource() const { return this->roleSource_ != nullptr;};
    void deleteRoleSource() { this->roleSource_ = nullptr;};
    inline string getRoleSource() const { DARABONBA_PTR_GET_DEFAULT(roleSource_, "") };
    inline AddWorkspaceUserRequest& setRoleSource(string roleSource) { DARABONBA_PTR_SET_VALUE(roleSource_, roleSource) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddWorkspaceUserRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dmsUserIds_ {};
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    // This parameter is required.
    shared_ptr<string> roleSource_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
