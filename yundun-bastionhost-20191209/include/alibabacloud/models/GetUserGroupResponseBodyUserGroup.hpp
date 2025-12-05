// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODYUSERGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODYUSERGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetUserGroupResponseBodyUserGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBodyUserGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBodyUserGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    GetUserGroupResponseBodyUserGroup() = default ;
    GetUserGroupResponseBodyUserGroup(const GetUserGroupResponseBodyUserGroup &) = default ;
    GetUserGroupResponseBodyUserGroup(GetUserGroupResponseBodyUserGroup &&) = default ;
    GetUserGroupResponseBodyUserGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBodyUserGroup() = default ;
    GetUserGroupResponseBodyUserGroup& operator=(const GetUserGroupResponseBodyUserGroup &) = default ;
    GetUserGroupResponseBodyUserGroup& operator=(GetUserGroupResponseBodyUserGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->userGroupId_ == nullptr && return this->userGroupName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetUserGroupResponseBodyUserGroup& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline GetUserGroupResponseBodyUserGroup& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline GetUserGroupResponseBodyUserGroup& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The description of the user group.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // The name of the user group.
    std::shared_ptr<string> userGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
