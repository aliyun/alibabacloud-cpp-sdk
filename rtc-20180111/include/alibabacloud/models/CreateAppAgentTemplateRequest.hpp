// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppAgentTemplateRequestAgentSilenceConfig.hpp>
#include <alibabacloud/models/CreateAppAgentTemplateRequestAsrConfig.hpp>
#include <alibabacloud/models/CreateAppAgentTemplateRequestLlmConfig.hpp>
#include <alibabacloud/models/CreateAppAgentTemplateRequestTtsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAppAgentTemplateRequest() = default ;
    CreateAppAgentTemplateRequest(const CreateAppAgentTemplateRequest &) = default ;
    CreateAppAgentTemplateRequest(CreateAppAgentTemplateRequest &&) = default ;
    CreateAppAgentTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateRequest() = default ;
    CreateAppAgentTemplateRequest& operator=(const CreateAppAgentTemplateRequest &) = default ;
    CreateAppAgentTemplateRequest& operator=(CreateAppAgentTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentSilenceConfig_ != nullptr
        && this->appId_ != nullptr && this->asrConfig_ != nullptr && this->chatMode_ != nullptr && this->greeting_ != nullptr && this->interruptMode_ != nullptr
        && this->llmConfig_ != nullptr && this->name_ != nullptr && this->ttsConfig_ != nullptr && this->type_ != nullptr; };
    // agentSilenceConfig Field Functions 
    bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
    void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
    inline const CreateAppAgentTemplateRequestAgentSilenceConfig & agentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, CreateAppAgentTemplateRequestAgentSilenceConfig) };
    inline CreateAppAgentTemplateRequestAgentSilenceConfig agentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, CreateAppAgentTemplateRequestAgentSilenceConfig) };
    inline CreateAppAgentTemplateRequest& setAgentSilenceConfig(const CreateAppAgentTemplateRequestAgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
    inline CreateAppAgentTemplateRequest& setAgentSilenceConfig(CreateAppAgentTemplateRequestAgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppAgentTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const CreateAppAgentTemplateRequestAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, CreateAppAgentTemplateRequestAsrConfig) };
    inline CreateAppAgentTemplateRequestAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, CreateAppAgentTemplateRequestAsrConfig) };
    inline CreateAppAgentTemplateRequest& setAsrConfig(const CreateAppAgentTemplateRequestAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline CreateAppAgentTemplateRequest& setAsrConfig(CreateAppAgentTemplateRequestAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline CreateAppAgentTemplateRequest& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline CreateAppAgentTemplateRequest& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline CreateAppAgentTemplateRequest& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const CreateAppAgentTemplateRequestLlmConfig & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, CreateAppAgentTemplateRequestLlmConfig) };
    inline CreateAppAgentTemplateRequestLlmConfig llmConfig() { DARABONBA_PTR_GET(llmConfig_, CreateAppAgentTemplateRequestLlmConfig) };
    inline CreateAppAgentTemplateRequest& setLlmConfig(const CreateAppAgentTemplateRequestLlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline CreateAppAgentTemplateRequest& setLlmConfig(CreateAppAgentTemplateRequestLlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppAgentTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const CreateAppAgentTemplateRequestTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, CreateAppAgentTemplateRequestTtsConfig) };
    inline CreateAppAgentTemplateRequestTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, CreateAppAgentTemplateRequestTtsConfig) };
    inline CreateAppAgentTemplateRequest& setTtsConfig(const CreateAppAgentTemplateRequestTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline CreateAppAgentTemplateRequest& setTtsConfig(CreateAppAgentTemplateRequestTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateAppAgentTemplateRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<CreateAppAgentTemplateRequestAgentSilenceConfig> agentSilenceConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<CreateAppAgentTemplateRequestAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
    std::shared_ptr<CreateAppAgentTemplateRequestLlmConfig> llmConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateAppAgentTemplateRequestTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
