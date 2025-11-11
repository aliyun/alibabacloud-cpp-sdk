// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGSPEECHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGSPEECHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfigSpeechConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfigSpeechConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfigSpeechConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig(const SubmitSmartClipTaskRequestEditingConfigSpeechConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig(SubmitSmartClipTaskRequestEditingConfigSpeechConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfigSpeechConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig& operator=(const SubmitSmartClipTaskRequestEditingConfigSpeechConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfig& operator=(SubmitSmartClipTaskRequestEditingConfigSpeechConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrConfig_ == nullptr
        && return this->speechRate_ == nullptr && return this->style_ == nullptr && return this->voice_ == nullptr && return this->volume_ == nullptr; };
    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig) };
    inline Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setAsrConfig(const Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setAsrConfig(Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline double speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setSpeechRate(double speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline double volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<double> speechRate_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<double> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
