// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserGroupListByParentIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupListByParentIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(IdentifiedPath, identifiedPath_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupListByParentIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(IdentifiedPath, identifiedPath_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    QueryUserGroupListByParentIdResponseBodyResult() = default ;
    QueryUserGroupListByParentIdResponseBodyResult(const QueryUserGroupListByParentIdResponseBodyResult &) = default ;
    QueryUserGroupListByParentIdResponseBodyResult(QueryUserGroupListByParentIdResponseBodyResult &&) = default ;
    QueryUserGroupListByParentIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupListByParentIdResponseBodyResult() = default ;
    QueryUserGroupListByParentIdResponseBodyResult& operator=(const QueryUserGroupListByParentIdResponseBodyResult &) = default ;
    QueryUserGroupListByParentIdResponseBodyResult& operator=(QueryUserGroupListByParentIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->identifiedPath_ != nullptr && this->modifiedTime_ != nullptr && this->modifyUser_ != nullptr && this->parentUserGroupId_ != nullptr
        && this->userGroupDescription_ != nullptr && this->userGroupId_ != nullptr && this->userGroupName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // identifiedPath Field Functions 
    bool hasIdentifiedPath() const { return this->identifiedPath_ != nullptr;};
    void deleteIdentifiedPath() { this->identifiedPath_ = nullptr;};
    inline string identifiedPath() const { DARABONBA_PTR_GET_DEFAULT(identifiedPath_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setIdentifiedPath(string identifiedPath) { DARABONBA_PTR_SET_VALUE(identifiedPath_, identifiedPath) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // parentUserGroupId Field Functions 
    bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
    void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
    inline string parentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


    // userGroupDescription Field Functions 
    bool hasUserGroupDescription() const { return this->userGroupDescription_ != nullptr;};
    void deleteUserGroupDescription() { this->userGroupDescription_ = nullptr;};
    inline string userGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(userGroupDescription_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setUserGroupDescription(string userGroupDescription) { DARABONBA_PTR_SET_VALUE(userGroupDescription_, userGroupDescription) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline QueryUserGroupListByParentIdResponseBodyResult& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The time when the sub-user group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The creator of the sub-user group. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    std::shared_ptr<string> createUser_ = nullptr;
    // Directory level of the sub-user group.
    std::shared_ptr<string> identifiedPath_ = nullptr;
    // The time when the sub-user group was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The user who modified the subgroup. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The ID of the parent user group.
    std::shared_ptr<string> parentUserGroupId_ = nullptr;
    // The description of the sub-user group.
    std::shared_ptr<string> userGroupDescription_ = nullptr;
    // The ID of the sub-user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // The name of the sub-user group.
    std::shared_ptr<string> userGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
