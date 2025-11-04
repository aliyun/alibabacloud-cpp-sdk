// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_TO_JSON(IsInheritTags, isInheritTags_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CombineConfigs, combineConfigs_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ImageWatermarks, imageWatermarks_);
      DARABONBA_PTR_FROM_JSON(IsInheritTags, isInheritTags_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TextWatermarks, textWatermarks_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig &&) = default ;
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
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs> & combineConfigs() const { DARABONBA_PTR_GET_CONST(combineConfigs_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs> combineConfigs() { DARABONBA_PTR_GET(combineConfigs_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs>) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setCombineConfigs(const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs> & combineConfigs) { DARABONBA_PTR_SET_VALUE(combineConfigs_, combineConfigs) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setCombineConfigs(vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs> && combineConfigs) { DARABONBA_PTR_SET_RVALUE(combineConfigs_, combineConfigs) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setEncryption(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setEncryption(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // imageWatermarks Field Functions 
    bool hasImageWatermarks() const { return this->imageWatermarks_ != nullptr;};
    void deleteImageWatermarks() { this->imageWatermarks_ = nullptr;};
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks> & imageWatermarks() const { DARABONBA_PTR_GET_CONST(imageWatermarks_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks> imageWatermarks() { DARABONBA_PTR_GET(imageWatermarks_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks>) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setImageWatermarks(const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks> & imageWatermarks) { DARABONBA_PTR_SET_VALUE(imageWatermarks_, imageWatermarks) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setImageWatermarks(vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks> && imageWatermarks) { DARABONBA_PTR_SET_RVALUE(imageWatermarks_, imageWatermarks) };


    // isInheritTags Field Functions 
    bool hasIsInheritTags() const { return this->isInheritTags_ != nullptr;};
    void deleteIsInheritTags() { this->isInheritTags_ = nullptr;};
    inline bool isInheritTags() const { DARABONBA_PTR_GET_DEFAULT(isInheritTags_, false) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setIsInheritTags(bool isInheritTags) { DARABONBA_PTR_SET_VALUE(isInheritTags_, isInheritTags) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles>) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setSubtitles(const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setSubtitles(vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // textWatermarks Field Functions 
    bool hasTextWatermarks() const { return this->textWatermarks_ != nullptr;};
    void deleteTextWatermarks() { this->textWatermarks_ = nullptr;};
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks> & textWatermarks() const { DARABONBA_PTR_GET_CONST(textWatermarks_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks> textWatermarks() { DARABONBA_PTR_GET(textWatermarks_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks>) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setTextWatermarks(const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks> & textWatermarks) { DARABONBA_PTR_SET_VALUE(textWatermarks_, textWatermarks) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setTextWatermarks(vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks> && textWatermarks) { DARABONBA_PTR_SET_RVALUE(textWatermarks_, textWatermarks) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode & transcode() const { DARABONBA_PTR_GET_CONST(transcode_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode transcode() { DARABONBA_PTR_GET(transcode_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setTranscode(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode & transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfig& setTranscode(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode && transcode) { DARABONBA_PTR_SET_RVALUE(transcode_, transcode) };


  protected:
    // The multi-input stream merge configuration.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs>> combineConfigs_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption> encryption_ = nullptr;
    // The watermark configuration for an image.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigImageWatermarks>> imageWatermarks_ = nullptr;
    // Indicates whether the tags of the input stream are inherited in the output stream. This parameter does not take effect when the input is not a media asset. Default value: false.
    std::shared_ptr<bool> isInheritTags_ = nullptr;
    // The subtitle configuration.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigSubtitles>> subtitles_ = nullptr;
    // The configurations of the text watermarks.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarks>> textWatermarks_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscode> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
