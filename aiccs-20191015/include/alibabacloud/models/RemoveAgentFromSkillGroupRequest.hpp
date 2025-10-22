// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAGENTFROMSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class RemoveAgentFromSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAgentFromSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAgentFromSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    RemoveAgentFromSkillGroupRequest() = default ;
    RemoveAgentFromSkillGroupRequest(const RemoveAgentFromSkillGroupRequest &) = default ;
    RemoveAgentFromSkillGroupRequest(RemoveAgentFromSkillGroupRequest &&) = default ;
    RemoveAgentFromSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAgentFromSkillGroupRequest() = default ;
    RemoveAgentFromSkillGroupRequest& operator=(const RemoveAgentFromSkillGroupRequest &) = default ;
    RemoveAgentFromSkillGroupRequest& operator=(RemoveAgentFromSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIds_ == nullptr
        && return this->instanceId_ == nullptr && return this->skillGroupId_ == nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline const vector<int64_t> & agentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<int64_t>) };
    inline vector<int64_t> agentIds() { DARABONBA_PTR_GET(agentIds_, vector<int64_t>) };
    inline RemoveAgentFromSkillGroupRequest& setAgentIds(const vector<int64_t> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
    inline RemoveAgentFromSkillGroupRequest& setAgentIds(vector<int64_t> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveAgentFromSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline int64_t skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
    inline RemoveAgentFromSkillGroupRequest& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> agentIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
