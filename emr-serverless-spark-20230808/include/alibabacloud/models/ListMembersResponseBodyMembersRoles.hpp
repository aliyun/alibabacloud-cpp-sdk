// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERSROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERSROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMembersResponseBodyMembersRolesActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListMembersResponseBodyMembersRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersResponseBodyMembersRoles& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(roleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersResponseBodyMembersRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(roleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
    };
    ListMembersResponseBodyMembersRoles() = default ;
    ListMembersResponseBodyMembersRoles(const ListMembersResponseBodyMembersRoles &) = default ;
    ListMembersResponseBodyMembersRoles(ListMembersResponseBodyMembersRoles &&) = default ;
    ListMembersResponseBodyMembersRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersResponseBodyMembersRoles() = default ;
    ListMembersResponseBodyMembersRoles& operator=(const ListMembersResponseBodyMembersRoles &) = default ;
    ListMembersResponseBodyMembersRoles& operator=(ListMembersResponseBodyMembersRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->roleArn_ != nullptr && this->roleName_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::ListMembersResponseBodyMembersRolesActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::ListMembersResponseBodyMembersRolesActions>) };
    inline vector<Models::ListMembersResponseBodyMembersRolesActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::ListMembersResponseBodyMembersRolesActions>) };
    inline ListMembersResponseBodyMembersRoles& setActions(const vector<Models::ListMembersResponseBodyMembersRolesActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListMembersResponseBodyMembersRoles& setActions(vector<Models::ListMembersResponseBodyMembersRolesActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListMembersResponseBodyMembersRoles& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMembersResponseBodyMembersRoles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ListMembersResponseBodyMembersRoles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListMembersResponseBodyMembersRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // 权限列表。
    std::shared_ptr<vector<Models::ListMembersResponseBodyMembersRolesActions>> actions_ = nullptr;
    // 创建时间。
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 描述。
    std::shared_ptr<string> description_ = nullptr;
    // 角色 arn。
    std::shared_ptr<string> roleArn_ = nullptr;
    // 角色名称。
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
