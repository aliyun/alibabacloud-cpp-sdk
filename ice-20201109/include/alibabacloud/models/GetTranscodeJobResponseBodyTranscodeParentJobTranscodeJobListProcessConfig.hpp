// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(IsInheritTags, isInheritTags_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(IsInheritTags, isInheritTags_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& operator=(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->combineConfigs_ == nullptr
        && return this->encryption_ == nullptr && return this->imageWatermarks_ == nullptr && return this->isInheritTags_ == nullptr && return this->subtitles_ == nullptr && return this->textWatermarks_ == nullptr
        && return this->transcode_ == nullptr; };
    // combineConfigs Field Functions 
    bool hasCombineConfigs() const { return this->combineConfigs_ != nullptr;};
    void deleteCombineConfigs() { this->combineConfigs_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setCombineConfigs(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setCombineConfigs(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setEncryption(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setEncryption(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setImageWatermarks(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setImageWatermarks(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // isInheritTags Field Functions 
    bool hasIsInheritTags() const { return this->isInheritTags_ != nullptr;};
    void deleteIsInheritTags() { this->isInheritTags_ = nullptr;};
    inline bool isInheritTags() const { DARABONBA_PTR_GET_DEFAULT(isInheritTags_, false) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setIsInheritTags(bool isInheritTags) { DARABONBA_PTR_SET_VALUE(isInheritTags_, isInheritTags) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setSubtitles(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setSubtitles(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTextWatermarks(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTextWatermarks(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTranscode(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig& setTranscode(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration of an image.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // Indicates whether the tags of the input stream are inherited in the output stream. This parameter does not take effect when the input is not a media asset. Default value: false.
    std::shared_ptr<bool> isInheritTags_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermark.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
