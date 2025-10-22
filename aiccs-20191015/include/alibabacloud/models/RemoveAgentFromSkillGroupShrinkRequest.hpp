// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class RemoveAgentFromSkillGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAgentFromSkillGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAgentFromSkillGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    RemoveAgentFromSkillGroupShrinkRequest() = default ;
    RemoveAgentFromSkillGroupShrinkRequest(const RemoveAgentFromSkillGroupShrinkRequest &) = default ;
    RemoveAgentFromSkillGroupShrinkRequest(RemoveAgentFromSkillGroupShrinkRequest &&) = default ;
    RemoveAgentFromSkillGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAgentFromSkillGroupShrinkRequest() = default ;
    RemoveAgentFromSkillGroupShrinkRequest& operator=(const RemoveAgentFromSkillGroupShrinkRequest &) = default ;
    RemoveAgentFromSkillGroupShrinkRequest& operator=(RemoveAgentFromSkillGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIdsShrink_ == nullptr
        && return this->instanceId_ == nullptr && return this->skillGroupId_ == nullptr; };
    // agentIdsShrink Field Functions 
    bool hasAgentIdsShrink() const { return this->agentIdsShrink_ != nullptr;};
    void deleteAgentIdsShrink() { this->agentIdsShrink_ = nullptr;};
    inline string agentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(agentIdsShrink_, "") };
    inline RemoveAgentFromSkillGroupShrinkRequest& setAgentIdsShrink(string agentIdsShrink) { DARABONBA_PTR_SET_VALUE(agentIdsShrink_, agentIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveAgentFromSkillGroupShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline int64_t skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
    inline RemoveAgentFromSkillGroupShrinkRequest& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
