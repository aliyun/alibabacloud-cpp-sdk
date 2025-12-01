// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigAutoSpeechConfigLlmPending.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigAutoSpeechConfigUserIdle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigAutoSpeechConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigAutoSpeechConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LlmPending, llmPending_);
      DARABONBA_PTR_TO_JSON(UserIdle, userIdle_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigAutoSpeechConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LlmPending, llmPending_);
      DARABONBA_PTR_FROM_JSON(UserIdle, userIdle_);
    };
    AIAgentOutboundCallConfigAutoSpeechConfig() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfig(const AIAgentOutboundCallConfigAutoSpeechConfig &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfig(AIAgentOutboundCallConfigAutoSpeechConfig &&) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigAutoSpeechConfig() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfig& operator=(const AIAgentOutboundCallConfigAutoSpeechConfig &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfig& operator=(AIAgentOutboundCallConfigAutoSpeechConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmPending_ == nullptr
        && return this->userIdle_ == nullptr; };
    // llmPending Field Functions 
    bool hasLlmPending() const { return this->llmPending_ != nullptr;};
    void deleteLlmPending() { this->llmPending_ = nullptr;};
    inline const Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending & llmPending() const { DARABONBA_PTR_GET_CONST(llmPending_, Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending) };
    inline Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending llmPending() { DARABONBA_PTR_GET(llmPending_, Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending) };
    inline AIAgentOutboundCallConfigAutoSpeechConfig& setLlmPending(const Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending & llmPending) { DARABONBA_PTR_SET_VALUE(llmPending_, llmPending) };
    inline AIAgentOutboundCallConfigAutoSpeechConfig& setLlmPending(Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending && llmPending) { DARABONBA_PTR_SET_RVALUE(llmPending_, llmPending) };


    // userIdle Field Functions 
    bool hasUserIdle() const { return this->userIdle_ != nullptr;};
    void deleteUserIdle() { this->userIdle_ = nullptr;};
    inline const Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle & userIdle() const { DARABONBA_PTR_GET_CONST(userIdle_, Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle) };
    inline Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle userIdle() { DARABONBA_PTR_GET(userIdle_, Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle) };
    inline AIAgentOutboundCallConfigAutoSpeechConfig& setUserIdle(const Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle & userIdle) { DARABONBA_PTR_SET_VALUE(userIdle_, userIdle) };
    inline AIAgentOutboundCallConfigAutoSpeechConfig& setUserIdle(Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle && userIdle) { DARABONBA_PTR_SET_RVALUE(userIdle_, userIdle) };


  protected:
    std::shared_ptr<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPending> llmPending_ = nullptr;
    std::shared_ptr<Models::AIAgentOutboundCallConfigAutoSpeechConfigUserIdle> userIdle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
