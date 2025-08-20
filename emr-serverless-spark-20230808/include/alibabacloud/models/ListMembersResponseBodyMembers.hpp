// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMembersResponseBodyMembersActions.hpp>
#include <alibabacloud/models/ListMembersResponseBodyMembersRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListMembersResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(memberArn, memberArn_);
      DARABONBA_PTR_TO_JSON(roles, roles_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(userType, userType_);
      DARABONBA_PTR_TO_JSON(visible, visible_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(memberArn, memberArn_);
      DARABONBA_PTR_FROM_JSON(roles, roles_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(userType, userType_);
      DARABONBA_PTR_FROM_JSON(visible, visible_);
    };
    ListMembersResponseBodyMembers() = default ;
    ListMembersResponseBodyMembers(const ListMembersResponseBodyMembers &) = default ;
    ListMembersResponseBodyMembers(ListMembersResponseBodyMembers &&) = default ;
    ListMembersResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersResponseBodyMembers() = default ;
    ListMembersResponseBodyMembers& operator=(const ListMembersResponseBodyMembers &) = default ;
    ListMembersResponseBodyMembers& operator=(ListMembersResponseBodyMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->createTime_ != nullptr && this->displayName_ != nullptr && this->memberArn_ != nullptr && this->roles_ != nullptr && this->userName_ != nullptr
        && this->userType_ != nullptr && this->visible_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::ListMembersResponseBodyMembersActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::ListMembersResponseBodyMembersActions>) };
    inline vector<Models::ListMembersResponseBodyMembersActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::ListMembersResponseBodyMembersActions>) };
    inline ListMembersResponseBodyMembers& setActions(const vector<Models::ListMembersResponseBodyMembersActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListMembersResponseBodyMembers& setActions(vector<Models::ListMembersResponseBodyMembersActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMembersResponseBodyMembers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListMembersResponseBodyMembers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // memberArn Field Functions 
    bool hasMemberArn() const { return this->memberArn_ != nullptr;};
    void deleteMemberArn() { this->memberArn_ = nullptr;};
    inline string memberArn() const { DARABONBA_PTR_GET_DEFAULT(memberArn_, "") };
    inline ListMembersResponseBodyMembers& setMemberArn(string memberArn) { DARABONBA_PTR_SET_VALUE(memberArn_, memberArn) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::ListMembersResponseBodyMembersRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::ListMembersResponseBodyMembersRoles>) };
    inline vector<Models::ListMembersResponseBodyMembersRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::ListMembersResponseBodyMembersRoles>) };
    inline ListMembersResponseBodyMembers& setRoles(const vector<Models::ListMembersResponseBodyMembersRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListMembersResponseBodyMembers& setRoles(vector<Models::ListMembersResponseBodyMembersRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListMembersResponseBodyMembers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListMembersResponseBodyMembers& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline ListMembersResponseBodyMembers& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    // 针对此用户允许的操作列表。
    std::shared_ptr<vector<Models::ListMembersResponseBodyMembersActions>> actions_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // 用户展示名称。
    std::shared_ptr<string> displayName_ = nullptr;
    // 用户 arn。
    std::shared_ptr<string> memberArn_ = nullptr;
    // 用户角色列表。
    std::shared_ptr<vector<Models::ListMembersResponseBodyMembersRoles>> roles_ = nullptr;
    // 用户名称。
    std::shared_ptr<string> userName_ = nullptr;
    // 用户类型。
    std::shared_ptr<string> userType_ = nullptr;
    std::shared_ptr<bool> visible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
