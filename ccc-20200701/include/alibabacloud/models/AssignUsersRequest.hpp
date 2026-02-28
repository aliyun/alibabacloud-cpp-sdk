// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AssignUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RamIdList, ramIdList_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, AssignUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RamIdList, ramIdList_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    AssignUsersRequest() = default ;
    AssignUsersRequest(const AssignUsersRequest &) = default ;
    AssignUsersRequest(AssignUsersRequest &&) = default ;
    AssignUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignUsersRequest() = default ;
    AssignUsersRequest& operator=(const AssignUsersRequest &) = default ;
    AssignUsersRequest& operator=(AssignUsersRequest &&) = default ;
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
    inline AssignUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ramIdList Field Functions 
    bool hasRamIdList() const { return this->ramIdList_ != nullptr;};
    void deleteRamIdList() { this->ramIdList_ = nullptr;};
    inline string getRamIdList() const { DARABONBA_PTR_GET_DEFAULT(ramIdList_, "") };
    inline AssignUsersRequest& setRamIdList(string ramIdList) { DARABONBA_PTR_SET_VALUE(ramIdList_, ramIdList) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline AssignUsersRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // skillLevelList Field Functions 
    bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
    void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
    inline string getSkillLevelList() const { DARABONBA_PTR_GET_DEFAULT(skillLevelList_, "") };
    inline AssignUsersRequest& setSkillLevelList(string skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline AssignUsersRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> ramIdList_ {};
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    shared_ptr<string> skillLevelList_ {};
    // This parameter is required.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
