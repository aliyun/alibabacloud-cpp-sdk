// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig.hpp>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventConfig_ == nullptr
        && return this->ttsConfig_ == nullptr && return this->vocabId_ == nullptr; };
    // eventConfig Field Functions 
    bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
    void deleteEventConfig() { this->eventConfig_ = nullptr;};
    inline const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig & eventConfig() const { DARABONBA_PTR_GET_CONST(eventConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig) };
    inline Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig eventConfig() { DARABONBA_PTR_GET(eventConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& setEventConfig(const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig & eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& setEventConfig(Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig && eventConfig) { DARABONBA_PTR_SET_RVALUE(eventConfig_, eventConfig) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig) };
    inline Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& setTtsConfig(const Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& setTtsConfig(Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // vocabId Field Functions 
    bool hasVocabId() const { return this->vocabId_ != nullptr;};
    void deleteVocabId() { this->vocabId_ = nullptr;};
    inline string vocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfig& setVocabId(string vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


  protected:
    std::shared_ptr<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigEventConfig> eventConfig_ = nullptr;
    std::shared_ptr<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<string> vocabId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
