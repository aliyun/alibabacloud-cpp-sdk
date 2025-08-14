// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combineConfigs_ != nullptr
        && this->encryption_ != nullptr && this->imageWatermarks_ != nullptr && this->subtitles_ != nullptr && this->textWatermarks_ != nullptr && this->transcode_ != nullptr; };
    // combineConfigs Field Functions 
    bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
    void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setCombineConfigs(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setCombineConfigs(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setEncryption(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setEncryption(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setImageWatermarks(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setImageWatermarks(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setSubtitles(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setSubtitles(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTextWatermarks(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTextWatermarks(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTranscode(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTranscode(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration of an image.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermark.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
