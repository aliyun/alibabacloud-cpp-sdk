// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfig(const SubmitTranscodeJobRequestOutputGroupProcessConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfig(SubmitTranscodeJobRequestOutputGroupProcessConfig &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfig& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfig& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->combineConfigs_ == nullptr
        && return this->encryption_ == nullptr && return this->imageWatermarks_ == nullptr && return this->subtitles_ == nullptr && return this->textWatermarks_ == nullptr && return this->transcode_ == nullptr; };
    // combineConfigs Field Functions 
    bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
    void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs>) };
    inline vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs>) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setCombineConfigs(const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setCombineConfigs(vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setEncryption(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setEncryption(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks>) };
    inline vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks>) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setImageWatermarks(const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setImageWatermarks(vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles>) };
    inline vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles>) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setSubtitles(const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setSubtitles(vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks>) };
    inline vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks>) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setTextWatermarks(const vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setTextWatermarks(vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setTranscode(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfig& setTranscode(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration of an image.
    std::shared_ptr<vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermark.
    std::shared_ptr<vector<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
