// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combineConfigs_ != nullptr
        && this->encryption_ != nullptr && this->imageWatermarks_ != nullptr && this->subtitles_ != nullptr && this->textWatermarks_ != nullptr && this->transcode_ != nullptr; };
    // combineConfigs Field Functions 
    bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
    void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setCombineConfigs(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setCombineConfigs(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setEncryption(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setEncryption(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setImageWatermarks(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setImageWatermarks(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setSubtitles(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setSubtitles(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTextWatermarks(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTextWatermarks(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTranscode(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfig& setTranscode(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration of an image.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermark.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
