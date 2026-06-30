// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
    };
    UpdatePolarClawAgentSkillsRequest() = default ;
    UpdatePolarClawAgentSkillsRequest(const UpdatePolarClawAgentSkillsRequest &) = default ;
    UpdatePolarClawAgentSkillsRequest(UpdatePolarClawAgentSkillsRequest &&) = default ;
    UpdatePolarClawAgentSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentSkillsRequest() = default ;
    UpdatePolarClawAgentSkillsRequest& operator=(const UpdatePolarClawAgentSkillsRequest &) = default ;
    UpdatePolarClawAgentSkillsRequest& operator=(UpdatePolarClawAgentSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->skills_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentSkillsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentSkillsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
    inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
    inline UpdatePolarClawAgentSkillsRequest& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline UpdatePolarClawAgentSkillsRequest& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


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
    shared_ptr<vector<string>> skills_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
