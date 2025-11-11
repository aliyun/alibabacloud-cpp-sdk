// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitSmartClipTaskRequestInputConfigBackgroundMusics.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestInputConfigStickers.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestInputConfigVideoIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundMusics, backgroundMusics_);
      DARABONBA_PTR_TO_JSON(SpeechTexts, speechTexts_);
      DARABONBA_PTR_TO_JSON(Stickers, stickers_);
      DARABONBA_PTR_TO_JSON(Titles, titles_);
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundMusics, backgroundMusics_);
      DARABONBA_PTR_FROM_JSON(SpeechTexts, speechTexts_);
      DARABONBA_PTR_FROM_JSON(Stickers, stickers_);
      DARABONBA_PTR_FROM_JSON(Titles, titles_);
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    SubmitSmartClipTaskRequestInputConfig() = default ;
    SubmitSmartClipTaskRequestInputConfig(const SubmitSmartClipTaskRequestInputConfig &) = default ;
    SubmitSmartClipTaskRequestInputConfig(SubmitSmartClipTaskRequestInputConfig &&) = default ;
    SubmitSmartClipTaskRequestInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestInputConfig() = default ;
    SubmitSmartClipTaskRequestInputConfig& operator=(const SubmitSmartClipTaskRequestInputConfig &) = default ;
    SubmitSmartClipTaskRequestInputConfig& operator=(SubmitSmartClipTaskRequestInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundMusics_ == nullptr
        && return this->speechTexts_ == nullptr && return this->stickers_ == nullptr && return this->titles_ == nullptr && return this->videoIds_ == nullptr; };
    // backgroundMusics Field Functions 
    bool hasBackgroundMusics() const { return this->backgroundMusics_ != nullptr;};
    void deleteBackgroundMusics() { this->backgroundMusics_ = nullptr;};
    inline const vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics> & backgroundMusics() const { DARABONBA_PTR_GET_CONST(backgroundMusics_, vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics>) };
    inline vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics> backgroundMusics() { DARABONBA_PTR_GET(backgroundMusics_, vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics>) };
    inline SubmitSmartClipTaskRequestInputConfig& setBackgroundMusics(const vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics> & backgroundMusics) { DARABONBA_PTR_SET_VALUE(backgroundMusics_, backgroundMusics) };
    inline SubmitSmartClipTaskRequestInputConfig& setBackgroundMusics(vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics> && backgroundMusics) { DARABONBA_PTR_SET_RVALUE(backgroundMusics_, backgroundMusics) };


    // speechTexts Field Functions 
    bool hasSpeechTexts() const { return this->speechTexts_ != nullptr;};
    void deleteSpeechTexts() { this->speechTexts_ = nullptr;};
    inline const vector<string> & speechTexts() const { DARABONBA_PTR_GET_CONST(speechTexts_, vector<string>) };
    inline vector<string> speechTexts() { DARABONBA_PTR_GET(speechTexts_, vector<string>) };
    inline SubmitSmartClipTaskRequestInputConfig& setSpeechTexts(const vector<string> & speechTexts) { DARABONBA_PTR_SET_VALUE(speechTexts_, speechTexts) };
    inline SubmitSmartClipTaskRequestInputConfig& setSpeechTexts(vector<string> && speechTexts) { DARABONBA_PTR_SET_RVALUE(speechTexts_, speechTexts) };


    // stickers Field Functions 
    bool hasStickers() const { return this->stickers_ != nullptr;};
    void deleteStickers() { this->stickers_ = nullptr;};
    inline const vector<Models::SubmitSmartClipTaskRequestInputConfigStickers> & stickers() const { DARABONBA_PTR_GET_CONST(stickers_, vector<Models::SubmitSmartClipTaskRequestInputConfigStickers>) };
    inline vector<Models::SubmitSmartClipTaskRequestInputConfigStickers> stickers() { DARABONBA_PTR_GET(stickers_, vector<Models::SubmitSmartClipTaskRequestInputConfigStickers>) };
    inline SubmitSmartClipTaskRequestInputConfig& setStickers(const vector<Models::SubmitSmartClipTaskRequestInputConfigStickers> & stickers) { DARABONBA_PTR_SET_VALUE(stickers_, stickers) };
    inline SubmitSmartClipTaskRequestInputConfig& setStickers(vector<Models::SubmitSmartClipTaskRequestInputConfigStickers> && stickers) { DARABONBA_PTR_SET_RVALUE(stickers_, stickers) };


    // titles Field Functions 
    bool hasTitles() const { return this->titles_ != nullptr;};
    void deleteTitles() { this->titles_ = nullptr;};
    inline const vector<string> & titles() const { DARABONBA_PTR_GET_CONST(titles_, vector<string>) };
    inline vector<string> titles() { DARABONBA_PTR_GET(titles_, vector<string>) };
    inline SubmitSmartClipTaskRequestInputConfig& setTitles(const vector<string> & titles) { DARABONBA_PTR_SET_VALUE(titles_, titles) };
    inline SubmitSmartClipTaskRequestInputConfig& setTitles(vector<string> && titles) { DARABONBA_PTR_SET_RVALUE(titles_, titles) };


    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline const vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds> & videoIds() const { DARABONBA_PTR_GET_CONST(videoIds_, vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds>) };
    inline vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds> videoIds() { DARABONBA_PTR_GET(videoIds_, vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds>) };
    inline SubmitSmartClipTaskRequestInputConfig& setVideoIds(const vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds> & videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };
    inline SubmitSmartClipTaskRequestInputConfig& setVideoIds(vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds> && videoIds) { DARABONBA_PTR_SET_RVALUE(videoIds_, videoIds) };


  protected:
    std::shared_ptr<vector<Models::SubmitSmartClipTaskRequestInputConfigBackgroundMusics>> backgroundMusics_ = nullptr;
    std::shared_ptr<vector<string>> speechTexts_ = nullptr;
    std::shared_ptr<vector<Models::SubmitSmartClipTaskRequestInputConfigStickers>> stickers_ = nullptr;
    std::shared_ptr<vector<string>> titles_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::SubmitSmartClipTaskRequestInputConfigVideoIds>> videoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
