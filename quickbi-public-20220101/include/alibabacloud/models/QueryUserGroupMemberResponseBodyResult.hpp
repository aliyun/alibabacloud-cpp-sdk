// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserGroupMemberResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsUserGroup, isUserGroup_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_TO_JSON(ParentUserGroupName, parentUserGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsUserGroup, isUserGroup_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_FROM_JSON(ParentUserGroupName, parentUserGroupName_);
    };
    QueryUserGroupMemberResponseBodyResult() = default ;
    QueryUserGroupMemberResponseBodyResult(const QueryUserGroupMemberResponseBodyResult &) = default ;
    QueryUserGroupMemberResponseBodyResult(QueryUserGroupMemberResponseBodyResult &&) = default ;
    QueryUserGroupMemberResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupMemberResponseBodyResult() = default ;
    QueryUserGroupMemberResponseBodyResult& operator=(const QueryUserGroupMemberResponseBodyResult &) = default ;
    QueryUserGroupMemberResponseBodyResult& operator=(QueryUserGroupMemberResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->isUserGroup_ == nullptr && return this->name_ == nullptr && return this->parentUserGroupId_ == nullptr && return this->parentUserGroupName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryUserGroupMemberResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isUserGroup Field Functions 
    bool hasIsUserGroup() const { return this->isUserGroup_ != nullptr;};
    void deleteIsUserGroup() { this->isUserGroup_ = nullptr;};
    inline bool isUserGroup() const { DARABONBA_PTR_GET_DEFAULT(isUserGroup_, false) };
    inline QueryUserGroupMemberResponseBodyResult& setIsUserGroup(bool isUserGroup) { DARABONBA_PTR_SET_VALUE(isUserGroup_, isUserGroup) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryUserGroupMemberResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentUserGroupId Field Functions 
    bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
    void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
    inline string parentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
    inline QueryUserGroupMemberResponseBodyResult& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


    // parentUserGroupName Field Functions 
    bool hasParentUserGroupName() const { return this->parentUserGroupName_ != nullptr;};
    void deleteParentUserGroupName() { this->parentUserGroupName_ = nullptr;};
    inline string parentUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupName_, "") };
    inline QueryUserGroupMemberResponseBodyResult& setParentUserGroupName(string parentUserGroupName) { DARABONBA_PTR_SET_VALUE(parentUserGroupName_, parentUserGroupName) };


  protected:
    // ID of the user group or the user group member.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether it is a user group. Possible values:
    // 
    // - true: It is a user group.
    // - false: It is a user.
    std::shared_ptr<bool> isUserGroup_ = nullptr;
    // Name or nickname of the user group or its member.
    std::shared_ptr<string> name_ = nullptr;
    // ID of the parent user group.
    std::shared_ptr<string> parentUserGroupId_ = nullptr;
    // Name of the parent user group.
    std::shared_ptr<string> parentUserGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
