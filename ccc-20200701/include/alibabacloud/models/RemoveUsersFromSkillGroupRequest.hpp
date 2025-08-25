// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSFROMSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSFROMSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RemoveUsersFromSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersFromSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersFromSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    RemoveUsersFromSkillGroupRequest() = default ;
    RemoveUsersFromSkillGroupRequest(const RemoveUsersFromSkillGroupRequest &) = default ;
    RemoveUsersFromSkillGroupRequest(RemoveUsersFromSkillGroupRequest &&) = default ;
    RemoveUsersFromSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersFromSkillGroupRequest() = default ;
    RemoveUsersFromSkillGroupRequest& operator=(const RemoveUsersFromSkillGroupRequest &) = default ;
    RemoveUsersFromSkillGroupRequest& operator=(RemoveUsersFromSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->skillGroupId_ != nullptr && this->userIdList_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveUsersFromSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline RemoveUsersFromSkillGroupRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline string userIdList() const { DARABONBA_PTR_GET_DEFAULT(userIdList_, "") };
    inline RemoveUsersFromSkillGroupRequest& setUserIdList(string userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
