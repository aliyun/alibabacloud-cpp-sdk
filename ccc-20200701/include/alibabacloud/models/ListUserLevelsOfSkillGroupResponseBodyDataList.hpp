// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERLEVELSOFSKILLGROUPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERLEVELSOFSKILLGROUPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListUserLevelsOfSkillGroupResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserLevelsOfSkillGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserLevelsOfSkillGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserLevelsOfSkillGroupResponseBodyDataList() = default ;
    ListUserLevelsOfSkillGroupResponseBodyDataList(const ListUserLevelsOfSkillGroupResponseBodyDataList &) = default ;
    ListUserLevelsOfSkillGroupResponseBodyDataList(ListUserLevelsOfSkillGroupResponseBodyDataList &&) = default ;
    ListUserLevelsOfSkillGroupResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserLevelsOfSkillGroupResponseBodyDataList() = default ;
    ListUserLevelsOfSkillGroupResponseBodyDataList& operator=(const ListUserLevelsOfSkillGroupResponseBodyDataList &) = default ;
    ListUserLevelsOfSkillGroupResponseBodyDataList& operator=(ListUserLevelsOfSkillGroupResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->loginName_ == nullptr && return this->ramId_ == nullptr && return this->roleId_ == nullptr && return this->roleName_ == nullptr && return this->skillGroupId_ == nullptr
        && return this->skillGroupName_ == nullptr && return this->skillLevel_ == nullptr && return this->userId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline string ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // skillLevel Field Functions 
    bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
    void deleteSkillLevel() { this->skillLevel_ = nullptr;};
    inline int32_t skillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0) };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setSkillLevel(int32_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserLevelsOfSkillGroupResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<string> ramId_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<int32_t> skillLevel_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
