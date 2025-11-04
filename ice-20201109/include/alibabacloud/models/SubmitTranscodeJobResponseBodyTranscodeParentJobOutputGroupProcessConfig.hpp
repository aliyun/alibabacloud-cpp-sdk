// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->combineConfigs_ == nullptr
        && return this->encryption_ == nullptr && return this->imageWatermarks_ == nullptr && return this->subtitles_ == nullptr && return this->textWatermarks_ == nullptr && return this->transcode_ == nullptr; };
    // combineConfigs Field Functions 
    bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
    void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setCombineConfigs(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setCombineConfigs(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setEncryption(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setEncryption(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setImageWatermarks(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setImageWatermarks(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setSubtitles(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setSubtitles(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>) };
    inline vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTextWatermarks(const vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTextWatermarks(vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTranscode(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTranscode(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration of an image.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermark.
    std::shared_ptr<vector<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
