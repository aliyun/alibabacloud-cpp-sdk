// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAAGENTEVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAAGENTEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAgentEventsEventSequence.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAgentEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAgentEvents& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAgentEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    GetCallDetailRecordResponseBodyDataAgentEvents() = default ;
    GetCallDetailRecordResponseBodyDataAgentEvents(const GetCallDetailRecordResponseBodyDataAgentEvents &) = default ;
    GetCallDetailRecordResponseBodyDataAgentEvents(GetCallDetailRecordResponseBodyDataAgentEvents &&) = default ;
    GetCallDetailRecordResponseBodyDataAgentEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAgentEvents() = default ;
    GetCallDetailRecordResponseBodyDataAgentEvents& operator=(const GetCallDetailRecordResponseBodyDataAgentEvents &) = default ;
    GetCallDetailRecordResponseBodyDataAgentEvents& operator=(GetCallDetailRecordResponseBodyDataAgentEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr && this->eventSequence_ != nullptr && this->skillGroupId_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetCallDetailRecordResponseBodyDataAgentEvents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline GetCallDetailRecordResponseBodyDataAgentEvents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // eventSequence Field Functions 
    bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
    void deleteEventSequence() { this->eventSequence_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence> & eventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence> eventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence>) };
    inline GetCallDetailRecordResponseBodyDataAgentEvents& setEventSequence(const vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
    inline GetCallDetailRecordResponseBodyDataAgentEvents& setEventSequence(vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline GetCallDetailRecordResponseBodyDataAgentEvents& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataAgentEventsEventSequence>> eventSequence_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
