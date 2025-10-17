// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestAgentSilenceConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestAmbientSoundConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestAsrConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestBackChannelConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestInterruptConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestLlmConfig.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestTtsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppAgentTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppAgentTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppAgentTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyAppAgentTemplateRequest() = default ;
    ModifyAppAgentTemplateRequest(const ModifyAppAgentTemplateRequest &) = default ;
    ModifyAppAgentTemplateRequest(ModifyAppAgentTemplateRequest &&) = default ;
    ModifyAppAgentTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppAgentTemplateRequest() = default ;
    ModifyAppAgentTemplateRequest& operator=(const ModifyAppAgentTemplateRequest &) = default ;
    ModifyAppAgentTemplateRequest& operator=(ModifyAppAgentTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSilenceConfig_ == nullptr
        && return this->ambientSoundConfig_ == nullptr && return this->appId_ == nullptr && return this->asrConfig_ == nullptr && return this->backChannelConfig_ == nullptr && return this->chatMode_ == nullptr
        && return this->greeting_ == nullptr && return this->id_ == nullptr && return this->interruptConfig_ == nullptr && return this->interruptMode_ == nullptr && return this->llmConfig_ == nullptr
        && return this->name_ == nullptr && return this->ttsConfig_ == nullptr && return this->type_ == nullptr; };
    // agentSilenceConfig Field Functions 
    bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
    void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestAgentSilenceConfig & agentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, ModifyAppAgentTemplateRequestAgentSilenceConfig) };
    inline ModifyAppAgentTemplateRequestAgentSilenceConfig agentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, ModifyAppAgentTemplateRequestAgentSilenceConfig) };
    inline ModifyAppAgentTemplateRequest& setAgentSilenceConfig(const ModifyAppAgentTemplateRequestAgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
    inline ModifyAppAgentTemplateRequest& setAgentSilenceConfig(ModifyAppAgentTemplateRequestAgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestAmbientSoundConfig & ambientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, ModifyAppAgentTemplateRequestAmbientSoundConfig) };
    inline ModifyAppAgentTemplateRequestAmbientSoundConfig ambientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, ModifyAppAgentTemplateRequestAmbientSoundConfig) };
    inline ModifyAppAgentTemplateRequest& setAmbientSoundConfig(const ModifyAppAgentTemplateRequestAmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline ModifyAppAgentTemplateRequest& setAmbientSoundConfig(ModifyAppAgentTemplateRequestAmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppAgentTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, ModifyAppAgentTemplateRequestAsrConfig) };
    inline ModifyAppAgentTemplateRequestAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, ModifyAppAgentTemplateRequestAsrConfig) };
    inline ModifyAppAgentTemplateRequest& setAsrConfig(const ModifyAppAgentTemplateRequestAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline ModifyAppAgentTemplateRequest& setAsrConfig(ModifyAppAgentTemplateRequestAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // backChannelConfig Field Functions 
    bool hasBackChannelConfig() const { return this->backChannelConfig_ != nullptr;};
    void deleteBackChannelConfig() { this->backChannelConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestBackChannelConfig & backChannelConfig() const { DARABONBA_PTR_GET_CONST(backChannelConfig_, ModifyAppAgentTemplateRequestBackChannelConfig) };
    inline ModifyAppAgentTemplateRequestBackChannelConfig backChannelConfig() { DARABONBA_PTR_GET(backChannelConfig_, ModifyAppAgentTemplateRequestBackChannelConfig) };
    inline ModifyAppAgentTemplateRequest& setBackChannelConfig(const ModifyAppAgentTemplateRequestBackChannelConfig & backChannelConfig) { DARABONBA_PTR_SET_VALUE(backChannelConfig_, backChannelConfig) };
    inline ModifyAppAgentTemplateRequest& setBackChannelConfig(ModifyAppAgentTemplateRequestBackChannelConfig && backChannelConfig) { DARABONBA_PTR_SET_RVALUE(backChannelConfig_, backChannelConfig) };


    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline ModifyAppAgentTemplateRequest& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline ModifyAppAgentTemplateRequest& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyAppAgentTemplateRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestInterruptConfig & interruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, ModifyAppAgentTemplateRequestInterruptConfig) };
    inline ModifyAppAgentTemplateRequestInterruptConfig interruptConfig() { DARABONBA_PTR_GET(interruptConfig_, ModifyAppAgentTemplateRequestInterruptConfig) };
    inline ModifyAppAgentTemplateRequest& setInterruptConfig(const ModifyAppAgentTemplateRequestInterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline ModifyAppAgentTemplateRequest& setInterruptConfig(ModifyAppAgentTemplateRequestInterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline ModifyAppAgentTemplateRequest& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestLlmConfig & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, ModifyAppAgentTemplateRequestLlmConfig) };
    inline ModifyAppAgentTemplateRequestLlmConfig llmConfig() { DARABONBA_PTR_GET(llmConfig_, ModifyAppAgentTemplateRequestLlmConfig) };
    inline ModifyAppAgentTemplateRequest& setLlmConfig(const ModifyAppAgentTemplateRequestLlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline ModifyAppAgentTemplateRequest& setLlmConfig(ModifyAppAgentTemplateRequestLlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppAgentTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const ModifyAppAgentTemplateRequestTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, ModifyAppAgentTemplateRequestTtsConfig) };
    inline ModifyAppAgentTemplateRequestTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, ModifyAppAgentTemplateRequestTtsConfig) };
    inline ModifyAppAgentTemplateRequest& setTtsConfig(const ModifyAppAgentTemplateRequestTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline ModifyAppAgentTemplateRequest& setTtsConfig(ModifyAppAgentTemplateRequestTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ModifyAppAgentTemplateRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<ModifyAppAgentTemplateRequestAgentSilenceConfig> agentSilenceConfig_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestAmbientSoundConfig> ambientSoundConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestBackChannelConfig> backChannelConfig_ = nullptr;
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestInterruptConfig> interruptConfig_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestLlmConfig> llmConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<ModifyAppAgentTemplateRequestTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
