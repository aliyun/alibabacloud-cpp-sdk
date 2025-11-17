// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddUserGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest(AddUserGroupMemberRequest &&) = default ;
    AddUserGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest& operator=(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest& operator=(AddUserGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupId_ == nullptr
        && return this->userIdList_ == nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddUserGroupMemberRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline string userIdList() const { DARABONBA_PTR_GET_DEFAULT(userIdList_, "") };
    inline AddUserGroupMemberRequest& setUserIdList(string userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };


  protected:
    // The ID of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // The ID of the Quick BI user. Separate multiple IDs with commas (,). Example: abc,efg. You can enter a maximum of 1000 entries.
    // 
    // This parameter is required.
    std::shared_ptr<string> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
