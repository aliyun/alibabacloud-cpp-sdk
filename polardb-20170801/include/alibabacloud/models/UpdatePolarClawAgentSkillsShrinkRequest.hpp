// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentSkillsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Skills, skillsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Skills, skillsShrink_);
    };
    UpdatePolarClawAgentSkillsShrinkRequest() = default ;
    UpdatePolarClawAgentSkillsShrinkRequest(const UpdatePolarClawAgentSkillsShrinkRequest &) = default ;
    UpdatePolarClawAgentSkillsShrinkRequest(UpdatePolarClawAgentSkillsShrinkRequest &&) = default ;
    UpdatePolarClawAgentSkillsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentSkillsShrinkRequest() = default ;
    UpdatePolarClawAgentSkillsShrinkRequest& operator=(const UpdatePolarClawAgentSkillsShrinkRequest &) = default ;
    UpdatePolarClawAgentSkillsShrinkRequest& operator=(UpdatePolarClawAgentSkillsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->skillsShrink_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentSkillsShrinkRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentSkillsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // skillsShrink Field Functions 
    bool hasSkillsShrink() const { return this->skillsShrink_ != nullptr;};
    void deleteSkillsShrink() { this->skillsShrink_ = nullptr;};
    inline string getSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillsShrink_, "") };
    inline UpdatePolarClawAgentSkillsShrinkRequest& setSkillsShrink(string skillsShrink) { DARABONBA_PTR_SET_VALUE(skillsShrink_, skillsShrink) };


  protected:
    // Agent ID
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The skill allowlist. A value of null indicates that all skills are allowed.
    shared_ptr<string> skillsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
