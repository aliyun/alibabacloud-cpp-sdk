// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfigShrink_);
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfigShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfigShrink_);
      DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfigShrink_);
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfigShrink_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfigShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfigShrink_);
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfigShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfigShrink_);
      DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAppAgentTemplateShrinkRequest() = default ;
    CreateAppAgentTemplateShrinkRequest(const CreateAppAgentTemplateShrinkRequest &) = default ;
    CreateAppAgentTemplateShrinkRequest(CreateAppAgentTemplateShrinkRequest &&) = default ;
    CreateAppAgentTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateShrinkRequest() = default ;
    CreateAppAgentTemplateShrinkRequest& operator=(const CreateAppAgentTemplateShrinkRequest &) = default ;
    CreateAppAgentTemplateShrinkRequest& operator=(CreateAppAgentTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentSilenceConfigShrink_ != nullptr
        && this->ambientSoundConfigShrink_ != nullptr && this->appId_ != nullptr && this->asrConfigShrink_ != nullptr && this->backChannelConfigShrink_ != nullptr && this->chatMode_ != nullptr
        && this->greeting_ != nullptr && this->interruptConfigShrink_ != nullptr && this->interruptMode_ != nullptr && this->llmConfigShrink_ != nullptr && this->name_ != nullptr
        && this->ttsConfigShrink_ != nullptr && this->type_ != nullptr; };
    // agentSilenceConfigShrink Field Functions 
    bool hasAgentSilenceConfigShrink() const { return this->agentSilenceConfigShrink_ != nullptr;};
    void deleteAgentSilenceConfigShrink() { this->agentSilenceConfigShrink_ = nullptr;};
    inline string agentSilenceConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(agentSilenceConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setAgentSilenceConfigShrink(string agentSilenceConfigShrink) { DARABONBA_PTR_SET_VALUE(agentSilenceConfigShrink_, agentSilenceConfigShrink) };


    // ambientSoundConfigShrink Field Functions 
    bool hasAmbientSoundConfigShrink() const { return this->ambientSoundConfigShrink_ != nullptr;};
    void deleteAmbientSoundConfigShrink() { this->ambientSoundConfigShrink_ = nullptr;};
    inline string ambientSoundConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(ambientSoundConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setAmbientSoundConfigShrink(string ambientSoundConfigShrink) { DARABONBA_PTR_SET_VALUE(ambientSoundConfigShrink_, ambientSoundConfigShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // asrConfigShrink Field Functions 
    bool hasAsrConfigShrink() const { return this->asrConfigShrink_ != nullptr;};
    void deleteAsrConfigShrink() { this->asrConfigShrink_ = nullptr;};
    inline string asrConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(asrConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setAsrConfigShrink(string asrConfigShrink) { DARABONBA_PTR_SET_VALUE(asrConfigShrink_, asrConfigShrink) };


    // backChannelConfigShrink Field Functions 
    bool hasBackChannelConfigShrink() const { return this->backChannelConfigShrink_ != nullptr;};
    void deleteBackChannelConfigShrink() { this->backChannelConfigShrink_ = nullptr;};
    inline string backChannelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(backChannelConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setBackChannelConfigShrink(string backChannelConfigShrink) { DARABONBA_PTR_SET_VALUE(backChannelConfigShrink_, backChannelConfigShrink) };


    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline CreateAppAgentTemplateShrinkRequest& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptConfigShrink Field Functions 
    bool hasInterruptConfigShrink() const { return this->interruptConfigShrink_ != nullptr;};
    void deleteInterruptConfigShrink() { this->interruptConfigShrink_ = nullptr;};
    inline string interruptConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interruptConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setInterruptConfigShrink(string interruptConfigShrink) { DARABONBA_PTR_SET_VALUE(interruptConfigShrink_, interruptConfigShrink) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline CreateAppAgentTemplateShrinkRequest& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    // llmConfigShrink Field Functions 
    bool hasLlmConfigShrink() const { return this->llmConfigShrink_ != nullptr;};
    void deleteLlmConfigShrink() { this->llmConfigShrink_ = nullptr;};
    inline string llmConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(llmConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setLlmConfigShrink(string llmConfigShrink) { DARABONBA_PTR_SET_VALUE(llmConfigShrink_, llmConfigShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttsConfigShrink Field Functions 
    bool hasTtsConfigShrink() const { return this->ttsConfigShrink_ != nullptr;};
    void deleteTtsConfigShrink() { this->ttsConfigShrink_ = nullptr;};
    inline string ttsConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(ttsConfigShrink_, "") };
    inline CreateAppAgentTemplateShrinkRequest& setTtsConfigShrink(string ttsConfigShrink) { DARABONBA_PTR_SET_VALUE(ttsConfigShrink_, ttsConfigShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateAppAgentTemplateShrinkRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> agentSilenceConfigShrink_ = nullptr;
    std::shared_ptr<string> ambientSoundConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> asrConfigShrink_ = nullptr;
    std::shared_ptr<string> backChannelConfigShrink_ = nullptr;
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<string> interruptConfigShrink_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
    std::shared_ptr<string> llmConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ttsConfigShrink_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
