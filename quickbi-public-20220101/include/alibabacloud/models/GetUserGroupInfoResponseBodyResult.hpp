// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetUserGroupInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupInfoResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetUserGroupInfoResponseBodyResult& obj) { 
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
    GetUserGroupInfoResponseBodyResult() = default ;
    GetUserGroupInfoResponseBodyResult(const GetUserGroupInfoResponseBodyResult &) = default ;
    GetUserGroupInfoResponseBodyResult(GetUserGroupInfoResponseBodyResult &&) = default ;
    GetUserGroupInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupInfoResponseBodyResult() = default ;
    GetUserGroupInfoResponseBodyResult& operator=(const GetUserGroupInfoResponseBodyResult &) = default ;
    GetUserGroupInfoResponseBodyResult& operator=(GetUserGroupInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->identifiedPath_ != nullptr && this->modifiedTime_ != nullptr && this->modifyUser_ != nullptr && this->parentUsergroupId_ != nullptr
        && this->usergroupDesc_ != nullptr && this->usergroupId_ != nullptr && this->usergroupName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetUserGroupInfoResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetUserGroupInfoResponseBodyResult& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // identifiedPath Field Functions 
    bool hasIdentifiedPath() const { return this->identifiedPath_ != nullptr;};
    void deleteIdentifiedPath() { this->identifiedPath_ = nullptr;};
    inline string identifiedPath() const { DARABONBA_PTR_GET_DEFAULT(identifiedPath_, "") };
    inline GetUserGroupInfoResponseBodyResult& setIdentifiedPath(string identifiedPath) { DARABONBA_PTR_SET_VALUE(identifiedPath_, identifiedPath) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetUserGroupInfoResponseBodyResult& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetUserGroupInfoResponseBodyResult& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // parentUsergroupId Field Functions 
    bool hasParentUsergroupId() const { return this->parentUsergroupId_ != nullptr;};
    void deleteParentUsergroupId() { this->parentUsergroupId_ = nullptr;};
    inline string parentUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUsergroupId_, "") };
    inline GetUserGroupInfoResponseBodyResult& setParentUsergroupId(string parentUsergroupId) { DARABONBA_PTR_SET_VALUE(parentUsergroupId_, parentUsergroupId) };


    // usergroupDesc Field Functions 
    bool hasUsergroupDesc() const { return this->usergroupDesc_ != nullptr;};
    void deleteUsergroupDesc() { this->usergroupDesc_ = nullptr;};
    inline string usergroupDesc() const { DARABONBA_PTR_GET_DEFAULT(usergroupDesc_, "") };
    inline GetUserGroupInfoResponseBodyResult& setUsergroupDesc(string usergroupDesc) { DARABONBA_PTR_SET_VALUE(usergroupDesc_, usergroupDesc) };


    // usergroupId Field Functions 
    bool hasUsergroupId() const { return this->usergroupId_ != nullptr;};
    void deleteUsergroupId() { this->usergroupId_ = nullptr;};
    inline string usergroupId() const { DARABONBA_PTR_GET_DEFAULT(usergroupId_, "") };
    inline GetUserGroupInfoResponseBodyResult& setUsergroupId(string usergroupId) { DARABONBA_PTR_SET_VALUE(usergroupId_, usergroupId) };


    // usergroupName Field Functions 
    bool hasUsergroupName() const { return this->usergroupName_ != nullptr;};
    void deleteUsergroupName() { this->usergroupName_ = nullptr;};
    inline string usergroupName() const { DARABONBA_PTR_GET_DEFAULT(usergroupName_, "") };
    inline GetUserGroupInfoResponseBodyResult& setUsergroupName(string usergroupName) { DARABONBA_PTR_SET_VALUE(usergroupName_, usergroupName) };


  protected:
    // Creation time of the user group.
    std::shared_ptr<string> createTime_ = nullptr;
    // Creator of the sub-user group. This is the UserID in Quick BI, not the UID in Alibaba Cloud.
    std::shared_ptr<string> createUser_ = nullptr;
    // Directory level of the user group.
    std::shared_ptr<string> identifiedPath_ = nullptr;
    // Last modified time of the user group.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // Modifier of the user group. This is the UserID in Quick BI, not the UID in Alibaba Cloud.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // Parent user group ID.
    std::shared_ptr<string> parentUsergroupId_ = nullptr;
    // Description of the user group.
    std::shared_ptr<string> usergroupDesc_ = nullptr;
    // User group ID.
    std::shared_ptr<string> usergroupId_ = nullptr;
    // Name of the user group.
    std::shared_ptr<string> usergroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
