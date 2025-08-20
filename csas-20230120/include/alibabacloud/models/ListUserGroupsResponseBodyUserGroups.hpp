// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsResponseBodyUserGroupsAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserGroupsResponseBodyUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
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
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->userGroupId_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes>) };
    inline vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes>) };
    inline ListUserGroupsResponseBodyUserGroups& setAttributes(const vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListUserGroupsResponseBodyUserGroups& setAttributes(vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListUserGroupsResponseBodyUserGroups& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<vector<Models::ListUserGroupsResponseBodyUserGroupsAttributes>> attributes_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
