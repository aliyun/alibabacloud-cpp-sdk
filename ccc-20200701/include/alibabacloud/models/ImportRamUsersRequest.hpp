// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTRAMUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTRAMUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportRamUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportRamUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RamIdList, ramIdList_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ImportRamUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RamIdList, ramIdList_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ImportRamUsersRequest() = default ;
    ImportRamUsersRequest(const ImportRamUsersRequest &) = default ;
    ImportRamUsersRequest(ImportRamUsersRequest &&) = default ;
    ImportRamUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportRamUsersRequest() = default ;
    ImportRamUsersRequest& operator=(const ImportRamUsersRequest &) = default ;
    ImportRamUsersRequest& operator=(ImportRamUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ramIdList_ == nullptr && this->roleId_ == nullptr && this->skillLevelList_ == nullptr && this->workMode_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportRamUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ramIdList Field Functions 
    bool hasRamIdList() const { return this->ramIdList_ != nullptr;};
    void deleteRamIdList() { this->ramIdList_ = nullptr;};
    inline string getRamIdList() const { DARABONBA_PTR_GET_DEFAULT(ramIdList_, "") };
    inline ImportRamUsersRequest& setRamIdList(string ramIdList) { DARABONBA_PTR_SET_VALUE(ramIdList_, ramIdList) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ImportRamUsersRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // skillLevelList Field Functions 
    bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
    void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
    inline string getSkillLevelList() const { DARABONBA_PTR_GET_DEFAULT(skillLevelList_, "") };
    inline ImportRamUsersRequest& setSkillLevelList(string skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ImportRamUsersRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // List of RAM user IDs to add.
    // 
    // This parameter is required.
    shared_ptr<string> ramIdList_ {};
    // Role ID. This is the agent\\"s role in the instance after successful import. Roles include administrator, skill group leader, and agent.
    // 
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    // Skill level list for the skill group. This is a JSON array string. Each array element is an object with two fields: skillGroupId and skillLevel. skillGroupId is the ID of the skill group the agent wants to associate with. skillLevel is the agent\\"s skill level in that skill group. The range is 1-10. A smaller value indicates stronger business capability and the ability to handle more calls per unit of time.
    shared_ptr<string> skillLevelList_ {};
    // Work mode.
    // 
    // This parameter is required.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
