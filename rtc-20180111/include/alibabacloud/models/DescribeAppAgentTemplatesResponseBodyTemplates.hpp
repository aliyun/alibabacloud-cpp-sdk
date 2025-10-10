// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig.hpp>
#include <alibabacloud/models/DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppAgentTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAgentTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAgentTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfig_);
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAppAgentTemplatesResponseBodyTemplates() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplates(const DescribeAppAgentTemplatesResponseBodyTemplates &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplates(DescribeAppAgentTemplatesResponseBodyTemplates &&) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAgentTemplatesResponseBodyTemplates() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplates& operator=(const DescribeAppAgentTemplatesResponseBodyTemplates &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplates& operator=(DescribeAppAgentTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentSilenceConfig_ != nullptr
        && this->ambientSoundConfig_ != nullptr && this->asrConfig_ != nullptr && this->backChannelConfig_ != nullptr && this->chatMode_ != nullptr && this->createTime_ != nullptr
        && this->greeting_ != nullptr && this->id_ != nullptr && this->interruptConfig_ != nullptr && this->interruptMode_ != nullptr && this->llmConfig_ != nullptr
        && this->name_ != nullptr && this->ttsConfig_ != nullptr && this->type_ != nullptr; };
    // agentSilenceConfig Field Functions 
    bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
    void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig & agentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig agentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAgentSilenceConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAgentSilenceConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig & ambientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig ambientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAmbientSoundConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAmbientSoundConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAsrConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setAsrConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // backChannelConfig Field Functions 
    bool hasBackChannelConfig() const { return this->backChannelConfig_ != nullptr;};
    void deleteBackChannelConfig() { this->backChannelConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig & backChannelConfig() const { DARABONBA_PTR_GET_CONST(backChannelConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig backChannelConfig() { DARABONBA_PTR_GET(backChannelConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setBackChannelConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig & backChannelConfig) { DARABONBA_PTR_SET_VALUE(backChannelConfig_, backChannelConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setBackChannelConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig && backChannelConfig) { DARABONBA_PTR_SET_RVALUE(backChannelConfig_, backChannelConfig) };


    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig & interruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig interruptConfig() { DARABONBA_PTR_GET(interruptConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setInterruptConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setInterruptConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig llmConfig() { DARABONBA_PTR_GET(llmConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setLlmConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setLlmConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig) };
    inline Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setTtsConfig(const Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setTtsConfig(Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplates& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesAgentSilenceConfig> agentSilenceConfig_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesAmbientSoundConfig> ambientSoundConfig_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesBackChannelConfig> backChannelConfig_ = nullptr;
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesInterruptConfig> interruptConfig_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig> llmConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeAppAgentTemplatesResponseBodyTemplatesTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
