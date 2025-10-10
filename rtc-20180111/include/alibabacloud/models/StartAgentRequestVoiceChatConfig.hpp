// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigASRConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigAgentSilenceConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigAmbientSoundConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigBackChannelConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigInterruptConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigLLMConfig.hpp>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigTTSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ASRConfig, ASRConfig_);
      DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_TO_JSON(LLMConfig, LLMConfig_);
      DARABONBA_PTR_TO_JSON(TTSConfig, TTSConfig_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ASRConfig, ASRConfig_);
      DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_FROM_JSON(LLMConfig, LLMConfig_);
      DARABONBA_PTR_FROM_JSON(TTSConfig, TTSConfig_);
    };
    StartAgentRequestVoiceChatConfig() = default ;
    StartAgentRequestVoiceChatConfig(const StartAgentRequestVoiceChatConfig &) = default ;
    StartAgentRequestVoiceChatConfig(StartAgentRequestVoiceChatConfig &&) = default ;
    StartAgentRequestVoiceChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfig() = default ;
    StartAgentRequestVoiceChatConfig& operator=(const StartAgentRequestVoiceChatConfig &) = default ;
    StartAgentRequestVoiceChatConfig& operator=(StartAgentRequestVoiceChatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ASRConfig_ != nullptr
        && this->agentSilenceConfig_ != nullptr && this->ambientSoundConfig_ != nullptr && this->backChannelConfig_ != nullptr && this->chatMode_ != nullptr && this->greeting_ != nullptr
        && this->interruptConfig_ != nullptr && this->interruptMode_ != nullptr && this->LLMConfig_ != nullptr && this->TTSConfig_ != nullptr; };
    // ASRConfig Field Functions 
    bool hasASRConfig() const { return this->ASRConfig_ != nullptr;};
    void deleteASRConfig() { this->ASRConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigASRConfig & ASRConfig() const { DARABONBA_PTR_GET_CONST(ASRConfig_, Models::StartAgentRequestVoiceChatConfigASRConfig) };
    inline Models::StartAgentRequestVoiceChatConfigASRConfig ASRConfig() { DARABONBA_PTR_GET(ASRConfig_, Models::StartAgentRequestVoiceChatConfigASRConfig) };
    inline StartAgentRequestVoiceChatConfig& setASRConfig(const Models::StartAgentRequestVoiceChatConfigASRConfig & ASRConfig) { DARABONBA_PTR_SET_VALUE(ASRConfig_, ASRConfig) };
    inline StartAgentRequestVoiceChatConfig& setASRConfig(Models::StartAgentRequestVoiceChatConfigASRConfig && ASRConfig) { DARABONBA_PTR_SET_RVALUE(ASRConfig_, ASRConfig) };


    // agentSilenceConfig Field Functions 
    bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
    void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig & agentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig) };
    inline Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig agentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig) };
    inline StartAgentRequestVoiceChatConfig& setAgentSilenceConfig(const Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
    inline StartAgentRequestVoiceChatConfig& setAgentSilenceConfig(Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig & ambientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig) };
    inline Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig ambientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig) };
    inline StartAgentRequestVoiceChatConfig& setAmbientSoundConfig(const Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline StartAgentRequestVoiceChatConfig& setAmbientSoundConfig(Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // backChannelConfig Field Functions 
    bool hasBackChannelConfig() const { return this->backChannelConfig_ != nullptr;};
    void deleteBackChannelConfig() { this->backChannelConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigBackChannelConfig & backChannelConfig() const { DARABONBA_PTR_GET_CONST(backChannelConfig_, Models::StartAgentRequestVoiceChatConfigBackChannelConfig) };
    inline Models::StartAgentRequestVoiceChatConfigBackChannelConfig backChannelConfig() { DARABONBA_PTR_GET(backChannelConfig_, Models::StartAgentRequestVoiceChatConfigBackChannelConfig) };
    inline StartAgentRequestVoiceChatConfig& setBackChannelConfig(const Models::StartAgentRequestVoiceChatConfigBackChannelConfig & backChannelConfig) { DARABONBA_PTR_SET_VALUE(backChannelConfig_, backChannelConfig) };
    inline StartAgentRequestVoiceChatConfig& setBackChannelConfig(Models::StartAgentRequestVoiceChatConfigBackChannelConfig && backChannelConfig) { DARABONBA_PTR_SET_RVALUE(backChannelConfig_, backChannelConfig) };


    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline StartAgentRequestVoiceChatConfig& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline StartAgentRequestVoiceChatConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigInterruptConfig & interruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, Models::StartAgentRequestVoiceChatConfigInterruptConfig) };
    inline Models::StartAgentRequestVoiceChatConfigInterruptConfig interruptConfig() { DARABONBA_PTR_GET(interruptConfig_, Models::StartAgentRequestVoiceChatConfigInterruptConfig) };
    inline StartAgentRequestVoiceChatConfig& setInterruptConfig(const Models::StartAgentRequestVoiceChatConfigInterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline StartAgentRequestVoiceChatConfig& setInterruptConfig(Models::StartAgentRequestVoiceChatConfigInterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline StartAgentRequestVoiceChatConfig& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    // LLMConfig Field Functions 
    bool hasLLMConfig() const { return this->LLMConfig_ != nullptr;};
    void deleteLLMConfig() { this->LLMConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigLLMConfig & LLMConfig() const { DARABONBA_PTR_GET_CONST(LLMConfig_, Models::StartAgentRequestVoiceChatConfigLLMConfig) };
    inline Models::StartAgentRequestVoiceChatConfigLLMConfig LLMConfig() { DARABONBA_PTR_GET(LLMConfig_, Models::StartAgentRequestVoiceChatConfigLLMConfig) };
    inline StartAgentRequestVoiceChatConfig& setLLMConfig(const Models::StartAgentRequestVoiceChatConfigLLMConfig & LLMConfig) { DARABONBA_PTR_SET_VALUE(LLMConfig_, LLMConfig) };
    inline StartAgentRequestVoiceChatConfig& setLLMConfig(Models::StartAgentRequestVoiceChatConfigLLMConfig && LLMConfig) { DARABONBA_PTR_SET_RVALUE(LLMConfig_, LLMConfig) };


    // TTSConfig Field Functions 
    bool hasTTSConfig() const { return this->TTSConfig_ != nullptr;};
    void deleteTTSConfig() { this->TTSConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigTTSConfig & TTSConfig() const { DARABONBA_PTR_GET_CONST(TTSConfig_, Models::StartAgentRequestVoiceChatConfigTTSConfig) };
    inline Models::StartAgentRequestVoiceChatConfigTTSConfig TTSConfig() { DARABONBA_PTR_GET(TTSConfig_, Models::StartAgentRequestVoiceChatConfigTTSConfig) };
    inline StartAgentRequestVoiceChatConfig& setTTSConfig(const Models::StartAgentRequestVoiceChatConfigTTSConfig & TTSConfig) { DARABONBA_PTR_SET_VALUE(TTSConfig_, TTSConfig) };
    inline StartAgentRequestVoiceChatConfig& setTTSConfig(Models::StartAgentRequestVoiceChatConfigTTSConfig && TTSConfig) { DARABONBA_PTR_SET_RVALUE(TTSConfig_, TTSConfig) };


  protected:
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigASRConfig> ASRConfig_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigAgentSilenceConfig> agentSilenceConfig_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigAmbientSoundConfig> ambientSoundConfig_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigBackChannelConfig> backChannelConfig_ = nullptr;
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigInterruptConfig> interruptConfig_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigLLMConfig> LLMConfig_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigTTSConfig> TTSConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
