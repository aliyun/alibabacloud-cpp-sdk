// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups(ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups &&) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups() = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& operator=(const ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups &) = default ;
    ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& operator=(ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->userGroupId_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes>) };
    inline vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes>) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setAttributes(const vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setAttributes(vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<vector<Models::ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes>> attributes_ = nullptr;
    // 用户组创建时间。
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
