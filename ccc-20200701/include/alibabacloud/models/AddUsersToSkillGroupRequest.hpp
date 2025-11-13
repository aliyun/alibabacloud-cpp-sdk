// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERSTOSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERSTOSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddUsersToSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUsersToSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(UserSkillLevelList, userSkillLevelList_);
    };
    friend void from_json(const Darabonba::Json& j, AddUsersToSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(UserSkillLevelList, userSkillLevelList_);
    };
    AddUsersToSkillGroupRequest() = default ;
    AddUsersToSkillGroupRequest(const AddUsersToSkillGroupRequest &) = default ;
    AddUsersToSkillGroupRequest(AddUsersToSkillGroupRequest &&) = default ;
    AddUsersToSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUsersToSkillGroupRequest() = default ;
    AddUsersToSkillGroupRequest& operator=(const AddUsersToSkillGroupRequest &) = default ;
    AddUsersToSkillGroupRequest& operator=(AddUsersToSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->skillGroupId_ == nullptr && return this->userSkillLevelList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddUsersToSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline AddUsersToSkillGroupRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // userSkillLevelList Field Functions 
    bool hasUserSkillLevelList() const { return this->userSkillLevelList_ != nullptr;};
    void deleteUserSkillLevelList() { this->userSkillLevelList_ = nullptr;};
    inline string userSkillLevelList() const { DARABONBA_PTR_GET_DEFAULT(userSkillLevelList_, "") };
    inline AddUsersToSkillGroupRequest& setUserSkillLevelList(string userSkillLevelList) { DARABONBA_PTR_SET_VALUE(userSkillLevelList_, userSkillLevelList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userSkillLevelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
