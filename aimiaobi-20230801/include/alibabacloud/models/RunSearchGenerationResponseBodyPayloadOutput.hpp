// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContext.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
    };
    RunSearchGenerationResponseBodyPayloadOutput() = default ;
    RunSearchGenerationResponseBodyPayloadOutput(const RunSearchGenerationResponseBodyPayloadOutput &) = default ;
    RunSearchGenerationResponseBodyPayloadOutput(RunSearchGenerationResponseBodyPayloadOutput &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutput() = default ;
    RunSearchGenerationResponseBodyPayloadOutput& operator=(const RunSearchGenerationResponseBodyPayloadOutput &) = default ;
    RunSearchGenerationResponseBodyPayloadOutput& operator=(RunSearchGenerationResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentContext_ == nullptr
        && return this->messages_ == nullptr; };
    // agentContext Field Functions 
    bool hasAgentContext() const { return this->agentContext_ != nullptr;};
    void deleteAgentContext() { this->agentContext_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext & agentContext() const { DARABONBA_PTR_GET_CONST(agentContext_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext agentContext() { DARABONBA_PTR_GET(agentContext_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext) };
    inline RunSearchGenerationResponseBodyPayloadOutput& setAgentContext(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext & agentContext) { DARABONBA_PTR_SET_VALUE(agentContext_, agentContext) };
    inline RunSearchGenerationResponseBodyPayloadOutput& setAgentContext(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext && agentContext) { DARABONBA_PTR_SET_RVALUE(agentContext_, agentContext) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages>) };
    inline RunSearchGenerationResponseBodyPayloadOutput& setMessages(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunSearchGenerationResponseBodyPayloadOutput& setMessages(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContext> agentContext_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessages>> messages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
