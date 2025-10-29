// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ttsSpeed_ == nullptr
        && return this->ttsStyle_ == nullptr && return this->ttsVolume_ == nullptr; };
    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int64_t ttsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsSpeed(int64_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string ttsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int64_t ttsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsVolume(int64_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


  protected:
    std::shared_ptr<int64_t> ttsSpeed_ = nullptr;
    std::shared_ptr<string> ttsStyle_ = nullptr;
    std::shared_ptr<int64_t> ttsVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
