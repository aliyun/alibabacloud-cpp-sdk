// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERLEVELSOFSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERLEVELSOFSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyUserLevelsOfSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserLevelsOfSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(UserLevelList, userLevelList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserLevelsOfSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(UserLevelList, userLevelList_);
    };
    ModifyUserLevelsOfSkillGroupRequest() = default ;
    ModifyUserLevelsOfSkillGroupRequest(const ModifyUserLevelsOfSkillGroupRequest &) = default ;
    ModifyUserLevelsOfSkillGroupRequest(ModifyUserLevelsOfSkillGroupRequest &&) = default ;
    ModifyUserLevelsOfSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserLevelsOfSkillGroupRequest() = default ;
    ModifyUserLevelsOfSkillGroupRequest& operator=(const ModifyUserLevelsOfSkillGroupRequest &) = default ;
    ModifyUserLevelsOfSkillGroupRequest& operator=(ModifyUserLevelsOfSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->skillGroupId_ != nullptr && this->userLevelList_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserLevelsOfSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ModifyUserLevelsOfSkillGroupRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // userLevelList Field Functions 
    bool hasUserLevelList() const { return this->userLevelList_ != nullptr;};
    void deleteUserLevelList() { this->userLevelList_ = nullptr;};
    inline string userLevelList() const { DARABONBA_PTR_GET_DEFAULT(userLevelList_, "") };
    inline ModifyUserLevelsOfSkillGroupRequest& setUserLevelList(string userLevelList) { DARABONBA_PTR_SET_VALUE(userLevelList_, userLevelList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userLevelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
