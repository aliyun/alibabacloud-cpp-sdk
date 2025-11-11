// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfigMediaConfig.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfigSpeechConfig.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfigTitleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundMusicConfig, backgroundMusicConfig_);
      DARABONBA_PTR_TO_JSON(MediaConfig, mediaConfig_);
      DARABONBA_PTR_TO_JSON(SpeechConfig, speechConfig_);
      DARABONBA_PTR_TO_JSON(TitleConfig, titleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundMusicConfig, backgroundMusicConfig_);
      DARABONBA_PTR_FROM_JSON(MediaConfig, mediaConfig_);
      DARABONBA_PTR_FROM_JSON(SpeechConfig, speechConfig_);
      DARABONBA_PTR_FROM_JSON(TitleConfig, titleConfig_);
    };
    SubmitSmartClipTaskRequestEditingConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfig(const SubmitSmartClipTaskRequestEditingConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfig(SubmitSmartClipTaskRequestEditingConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfig& operator=(const SubmitSmartClipTaskRequestEditingConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfig& operator=(SubmitSmartClipTaskRequestEditingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundMusicConfig_ == nullptr
        && return this->mediaConfig_ == nullptr && return this->speechConfig_ == nullptr && return this->titleConfig_ == nullptr; };
    // backgroundMusicConfig Field Functions 
    bool hasBackgroundMusicConfig() const { return this->backgroundMusicConfig_ != nullptr;};
    void deleteBackgroundMusicConfig() { this->backgroundMusicConfig_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig & backgroundMusicConfig() const { DARABONBA_PTR_GET_CONST(backgroundMusicConfig_, Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig) };
    inline Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig backgroundMusicConfig() { DARABONBA_PTR_GET(backgroundMusicConfig_, Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setBackgroundMusicConfig(const Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig & backgroundMusicConfig) { DARABONBA_PTR_SET_VALUE(backgroundMusicConfig_, backgroundMusicConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setBackgroundMusicConfig(Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig && backgroundMusicConfig) { DARABONBA_PTR_SET_RVALUE(backgroundMusicConfig_, backgroundMusicConfig) };


    // mediaConfig Field Functions 
    bool hasMediaConfig() const { return this->mediaConfig_ != nullptr;};
    void deleteMediaConfig() { this->mediaConfig_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig & mediaConfig() const { DARABONBA_PTR_GET_CONST(mediaConfig_, Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig) };
    inline Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig mediaConfig() { DARABONBA_PTR_GET(mediaConfig_, Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setMediaConfig(const Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig & mediaConfig) { DARABONBA_PTR_SET_VALUE(mediaConfig_, mediaConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setMediaConfig(Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig && mediaConfig) { DARABONBA_PTR_SET_RVALUE(mediaConfig_, mediaConfig) };


    // speechConfig Field Functions 
    bool hasSpeechConfig() const { return this->speechConfig_ != nullptr;};
    void deleteSpeechConfig() { this->speechConfig_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig & speechConfig() const { DARABONBA_PTR_GET_CONST(speechConfig_, Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig) };
    inline Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig speechConfig() { DARABONBA_PTR_GET(speechConfig_, Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setSpeechConfig(const Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig & speechConfig) { DARABONBA_PTR_SET_VALUE(speechConfig_, speechConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setSpeechConfig(Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig && speechConfig) { DARABONBA_PTR_SET_RVALUE(speechConfig_, speechConfig) };


    // titleConfig Field Functions 
    bool hasTitleConfig() const { return this->titleConfig_ != nullptr;};
    void deleteTitleConfig() { this->titleConfig_ = nullptr;};
    inline const Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig & titleConfig() const { DARABONBA_PTR_GET_CONST(titleConfig_, Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig) };
    inline Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig titleConfig() { DARABONBA_PTR_GET(titleConfig_, Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setTitleConfig(const Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig & titleConfig) { DARABONBA_PTR_SET_VALUE(titleConfig_, titleConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig& setTitleConfig(Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig && titleConfig) { DARABONBA_PTR_SET_RVALUE(titleConfig_, titleConfig) };


  protected:
    std::shared_ptr<Models::SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig> backgroundMusicConfig_ = nullptr;
    std::shared_ptr<Models::SubmitSmartClipTaskRequestEditingConfigMediaConfig> mediaConfig_ = nullptr;
    std::shared_ptr<Models::SubmitSmartClipTaskRequestEditingConfigSpeechConfig> speechConfig_ = nullptr;
    std::shared_ptr<Models::SubmitSmartClipTaskRequestEditingConfigTitleConfig> titleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
