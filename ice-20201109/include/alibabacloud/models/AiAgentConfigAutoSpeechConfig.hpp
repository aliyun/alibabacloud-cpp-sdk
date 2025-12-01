// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfigAutoSpeechConfigLlmPending.hpp>
#include <alibabacloud/models/AIAgentConfigAutoSpeechConfigUserIdle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigAutoSpeechConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAutoSpeechConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LlmPending, llmPending_);
      DARABONBA_PTR_TO_JSON(UserIdle, userIdle_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAutoSpeechConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LlmPending, llmPending_);
      DARABONBA_PTR_FROM_JSON(UserIdle, userIdle_);
    };
    AIAgentConfigAutoSpeechConfig() = default ;
    AIAgentConfigAutoSpeechConfig(const AIAgentConfigAutoSpeechConfig &) = default ;
    AIAgentConfigAutoSpeechConfig(AIAgentConfigAutoSpeechConfig &&) = default ;
    AIAgentConfigAutoSpeechConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAutoSpeechConfig() = default ;
    AIAgentConfigAutoSpeechConfig& operator=(const AIAgentConfigAutoSpeechConfig &) = default ;
    AIAgentConfigAutoSpeechConfig& operator=(AIAgentConfigAutoSpeechConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmPending_ == nullptr
        && return this->userIdle_ == nullptr; };
    // llmPending Field Functions 
    bool hasLlmPending() const { return this->llmPending_ != nullptr;};
    void deleteLlmPending() { this->llmPending_ = nullptr;};
    inline const Models::AIAgentConfigAutoSpeechConfigLlmPending & llmPending() const { DARABONBA_PTR_GET_CONST(llmPending_, Models::AIAgentConfigAutoSpeechConfigLlmPending) };
    inline Models::AIAgentConfigAutoSpeechConfigLlmPending llmPending() { DARABONBA_PTR_GET(llmPending_, Models::AIAgentConfigAutoSpeechConfigLlmPending) };
    inline AIAgentConfigAutoSpeechConfig& setLlmPending(const Models::AIAgentConfigAutoSpeechConfigLlmPending & llmPending) { DARABONBA_PTR_SET_VALUE(llmPending_, llmPending) };
    inline AIAgentConfigAutoSpeechConfig& setLlmPending(Models::AIAgentConfigAutoSpeechConfigLlmPending && llmPending) { DARABONBA_PTR_SET_RVALUE(llmPending_, llmPending) };


    // userIdle Field Functions 
    bool hasUserIdle() const { return this->userIdle_ != nullptr;};
    void deleteUserIdle() { this->userIdle_ = nullptr;};
    inline const Models::AIAgentConfigAutoSpeechConfigUserIdle & userIdle() const { DARABONBA_PTR_GET_CONST(userIdle_, Models::AIAgentConfigAutoSpeechConfigUserIdle) };
    inline Models::AIAgentConfigAutoSpeechConfigUserIdle userIdle() { DARABONBA_PTR_GET(userIdle_, Models::AIAgentConfigAutoSpeechConfigUserIdle) };
    inline AIAgentConfigAutoSpeechConfig& setUserIdle(const Models::AIAgentConfigAutoSpeechConfigUserIdle & userIdle) { DARABONBA_PTR_SET_VALUE(userIdle_, userIdle) };
    inline AIAgentConfigAutoSpeechConfig& setUserIdle(Models::AIAgentConfigAutoSpeechConfigUserIdle && userIdle) { DARABONBA_PTR_SET_RVALUE(userIdle_, userIdle) };


  protected:
    std::shared_ptr<Models::AIAgentConfigAutoSpeechConfigLlmPending> llmPending_ = nullptr;
    std::shared_ptr<Models::AIAgentConfigAutoSpeechConfigUserIdle> userIdle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
