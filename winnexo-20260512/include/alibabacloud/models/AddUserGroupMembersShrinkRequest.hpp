// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class AddUserGroupMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(userGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(userIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(userGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(userIds, userIdsShrink_);
    };
    AddUserGroupMembersShrinkRequest() = default ;
    AddUserGroupMembersShrinkRequest(const AddUserGroupMembersShrinkRequest &) = default ;
    AddUserGroupMembersShrinkRequest(AddUserGroupMembersShrinkRequest &&) = default ;
    AddUserGroupMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMembersShrinkRequest() = default ;
    AddUserGroupMembersShrinkRequest& operator=(const AddUserGroupMembersShrinkRequest &) = default ;
    AddUserGroupMembersShrinkRequest& operator=(AddUserGroupMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->userGroupId_ == nullptr && this->userIdsShrink_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline AddUserGroupMembersShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddUserGroupMembersShrinkRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string getUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline AddUserGroupMembersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this parameter explicitly by using `--tenant-id`.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user group.
    // 
    // This parameter is required.
    shared_ptr<string> userGroupId_ {};
    // The list of platform user IDs to add. Supports single or batch input. Duplicate relationships are idempotent.
    // 
    // This parameter is required.
    shared_ptr<string> userIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
