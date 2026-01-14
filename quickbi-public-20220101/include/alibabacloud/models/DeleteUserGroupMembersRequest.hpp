// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERGROUPMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERGROUPMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteUserGroupMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserGroupMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserGroupMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteUserGroupMembersRequest() = default ;
    DeleteUserGroupMembersRequest(const DeleteUserGroupMembersRequest &) = default ;
    DeleteUserGroupMembersRequest(DeleteUserGroupMembersRequest &&) = default ;
    DeleteUserGroupMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserGroupMembersRequest() = default ;
    DeleteUserGroupMembersRequest& operator=(const DeleteUserGroupMembersRequest &) = default ;
    DeleteUserGroupMembersRequest& operator=(DeleteUserGroupMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupIds_ == nullptr
        && this->userId_ == nullptr; };
    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string getUserGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline DeleteUserGroupMembersRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteUserGroupMembersRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the user group(s) to exit.
    // 
    // - Supports batch parameters, separate IDs with a comma (,).
    // 
    // This parameter is required.
    shared_ptr<string> userGroupIds_ {};
    // The UserID of the user to be removed from the user group. Note that this UserID refers to the Quick BI UserID, not the Alibaba Cloud UID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
