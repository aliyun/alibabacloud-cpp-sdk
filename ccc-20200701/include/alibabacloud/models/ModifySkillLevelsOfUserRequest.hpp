// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSKILLLEVELSOFUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSKILLLEVELSOFUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifySkillLevelsOfUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySkillLevelsOfUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySkillLevelsOfUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ModifySkillLevelsOfUserRequest() = default ;
    ModifySkillLevelsOfUserRequest(const ModifySkillLevelsOfUserRequest &) = default ;
    ModifySkillLevelsOfUserRequest(ModifySkillLevelsOfUserRequest &&) = default ;
    ModifySkillLevelsOfUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySkillLevelsOfUserRequest() = default ;
    ModifySkillLevelsOfUserRequest& operator=(const ModifySkillLevelsOfUserRequest &) = default ;
    ModifySkillLevelsOfUserRequest& operator=(ModifySkillLevelsOfUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->skillLevelList_ == nullptr && return this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySkillLevelsOfUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillLevelList Field Functions 
    bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
    void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
    inline string skillLevelList() const { DARABONBA_PTR_GET_DEFAULT(skillLevelList_, "") };
    inline ModifySkillLevelsOfUserRequest& setSkillLevelList(string skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ModifySkillLevelsOfUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillLevelList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
