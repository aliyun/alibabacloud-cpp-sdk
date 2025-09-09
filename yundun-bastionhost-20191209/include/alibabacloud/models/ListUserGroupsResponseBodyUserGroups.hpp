// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListUserGroupsResponseBodyUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    ListUserGroupsResponseBodyUserGroups() = default ;
    ListUserGroupsResponseBodyUserGroups(const ListUserGroupsResponseBodyUserGroups &) = default ;
    ListUserGroupsResponseBodyUserGroups(ListUserGroupsResponseBodyUserGroups &&) = default ;
    ListUserGroupsResponseBodyUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBodyUserGroups() = default ;
    ListUserGroupsResponseBodyUserGroups& operator=(const ListUserGroupsResponseBodyUserGroups &) = default ;
    ListUserGroupsResponseBodyUserGroups& operator=(ListUserGroupsResponseBodyUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->memberCount_ != nullptr && this->userGroupId_ != nullptr && this->userGroupName_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // memberCount Field Functions 
    bool hasMemberCount() const { return this->memberCount_ != nullptr;};
    void deleteMemberCount() { this->memberCount_ = nullptr;};
    inline int32_t memberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0) };
    inline ListUserGroupsResponseBodyUserGroups& setMemberCount(int32_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The description of the user group.
    std::shared_ptr<string> comment_ = nullptr;
    // The number of users in the user group.
    std::shared_ptr<int32_t> memberCount_ = nullptr;
    // The ID of the user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // The name of the user group.
    std::shared_ptr<string> userGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
