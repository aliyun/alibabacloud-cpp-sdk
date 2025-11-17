// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSBYUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSBYUSERIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListUserGroupsByUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(IdentifiedPath, identifiedPath_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(ParentUsergroupId, parentUsergroupId_);
      DARABONBA_PTR_TO_JSON(UsergroupDesc, usergroupDesc_);
      DARABONBA_PTR_TO_JSON(UsergroupId, usergroupId_);
      DARABONBA_PTR_TO_JSON(UsergroupName, usergroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(IdentifiedPath, identifiedPath_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(ParentUsergroupId, parentUsergroupId_);
      DARABONBA_PTR_FROM_JSON(UsergroupDesc, usergroupDesc_);
      DARABONBA_PTR_FROM_JSON(UsergroupId, usergroupId_);
      DARABONBA_PTR_FROM_JSON(UsergroupName, usergroupName_);
    };
    ListUserGroupsByUserIdResponseBodyResult() = default ;
    ListUserGroupsByUserIdResponseBodyResult(const ListUserGroupsByUserIdResponseBodyResult &) = default ;
    ListUserGroupsByUserIdResponseBodyResult(ListUserGroupsByUserIdResponseBodyResult &&) = default ;
    ListUserGroupsByUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsByUserIdResponseBodyResult() = default ;
    ListUserGroupsByUserIdResponseBodyResult& operator=(const ListUserGroupsByUserIdResponseBodyResult &) = default ;
    ListUserGroupsByUserIdResponseBodyResult& operator=(ListUserGroupsByUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createUser_ == nullptr && return this->identifiedPath_ == nullptr && return this->modifiedTime_ == nullptr && return this->modifyUser_ == nullptr && return this->parentUsergroupId_ == nullptr
        && return this->usergroupDesc_ == nullptr && return this->usergroupId_ == nullptr && return this->usergroupName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // identifiedPath Field Functions 
    bool hasIdentifiedPath() const { return this->identifiedPath_ != nullptr;};
    void deleteIdentifiedPath() { this->identifiedPath_ = nullptr;};
    inline string identifiedPath() const { DARABONBA_PTR_GET_DEFAULT(identifiedPath_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setIdentifiedPath(string identifiedPath) { DARABONBA_PTR_SET_VALUE(identifiedPath_, identifiedPath) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // parentUsergroupId Field Functions 
    bool hasParentUsergroupId() const { return this->parentUsergroupId_ != nullptr;};
    void deleteParentUsergroupId() { this->parentUsergroupId_ = nullptr;};
    inline string parentUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUsergroupId_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setParentUsergroupId(string parentUsergroupId) { DARABONBA_PTR_SET_VALUE(parentUsergroupId_, parentUsergroupId) };


    // usergroupDesc Field Functions 
    bool hasUsergroupDesc() const { return this->usergroupDesc_ != nullptr;};
    void deleteUsergroupDesc() { this->usergroupDesc_ = nullptr;};
    inline string usergroupDesc() const { DARABONBA_PTR_GET_DEFAULT(usergroupDesc_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setUsergroupDesc(string usergroupDesc) { DARABONBA_PTR_SET_VALUE(usergroupDesc_, usergroupDesc) };


    // usergroupId Field Functions 
    bool hasUsergroupId() const { return this->usergroupId_ != nullptr;};
    void deleteUsergroupId() { this->usergroupId_ = nullptr;};
    inline string usergroupId() const { DARABONBA_PTR_GET_DEFAULT(usergroupId_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setUsergroupId(string usergroupId) { DARABONBA_PTR_SET_VALUE(usergroupId_, usergroupId) };


    // usergroupName Field Functions 
    bool hasUsergroupName() const { return this->usergroupName_ != nullptr;};
    void deleteUsergroupName() { this->usergroupName_ = nullptr;};
    inline string usergroupName() const { DARABONBA_PTR_GET_DEFAULT(usergroupName_, "") };
    inline ListUserGroupsByUserIdResponseBodyResult& setUsergroupName(string usergroupName) { DARABONBA_PTR_SET_VALUE(usergroupName_, usergroupName) };


  protected:
    // The time when the user group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The user group creator. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    std::shared_ptr<string> createUser_ = nullptr;
    // Directory level of the user group.
    std::shared_ptr<string> identifiedPath_ = nullptr;
    // The time when the user group was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The user group modifier. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The ID of the user group.
    std::shared_ptr<string> parentUsergroupId_ = nullptr;
    // The description of the user group.
    std::shared_ptr<string> usergroupDesc_ = nullptr;
    // The ID of the user group.
    std::shared_ptr<string> usergroupId_ = nullptr;
    // The name of the user group.
    std::shared_ptr<string> usergroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
