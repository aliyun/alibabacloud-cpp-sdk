// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddUserGroupMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddUserGroupMembersRequest() = default ;
    AddUserGroupMembersRequest(const AddUserGroupMembersRequest &) = default ;
    AddUserGroupMembersRequest(AddUserGroupMembersRequest &&) = default ;
    AddUserGroupMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMembersRequest() = default ;
    AddUserGroupMembersRequest& operator=(const AddUserGroupMembersRequest &) = default ;
    AddUserGroupMembersRequest& operator=(AddUserGroupMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupIds_ == nullptr
        && return this->userId_ == nullptr; };
    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string userGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline AddUserGroupMembersRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddUserGroupMembersRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The IDs of the user groups. Separate the IDs with commas (,). Example: aGroupId,bGroupId,cGroupIds
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupIds_ = nullptr;
    // The user ID of the Quick BI.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
