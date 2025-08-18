// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUESTREMOVECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUESTREMOVECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveUserGroupMemberRequestRemoveCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserGroupMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserGroupMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    RemoveUserGroupMemberRequestRemoveCommand() = default ;
    RemoveUserGroupMemberRequestRemoveCommand(const RemoveUserGroupMemberRequestRemoveCommand &) = default ;
    RemoveUserGroupMemberRequestRemoveCommand(RemoveUserGroupMemberRequestRemoveCommand &&) = default ;
    RemoveUserGroupMemberRequestRemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserGroupMemberRequestRemoveCommand() = default ;
    RemoveUserGroupMemberRequestRemoveCommand& operator=(const RemoveUserGroupMemberRequestRemoveCommand &) = default ;
    RemoveUserGroupMemberRequestRemoveCommand& operator=(RemoveUserGroupMemberRequestRemoveCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupId_ != nullptr
        && this->userIdList_ != nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline RemoveUserGroupMemberRequestRemoveCommand& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline RemoveUserGroupMemberRequestRemoveCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline RemoveUserGroupMemberRequestRemoveCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
