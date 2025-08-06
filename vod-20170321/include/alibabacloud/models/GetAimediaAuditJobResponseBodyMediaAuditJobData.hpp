// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobData& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TextResult, textResult_);
      DARABONBA_PTR_TO_JSON(VideoResult, videoResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobData& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TextResult, textResult_);
      DARABONBA_PTR_FROM_JSON(VideoResult, videoResult_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobData() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobData(const GetAIMediaAuditJobResponseBodyMediaAuditJobData &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobData(GetAIMediaAuditJobResponseBodyMediaAuditJobData &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobData() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobData& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobData &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobData& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnormalModules_ != nullptr
        && this->audioResult_ != nullptr && this->imageResult_ != nullptr && this->label_ != nullptr && this->suggestion_ != nullptr && this->textResult_ != nullptr
        && this->videoResult_ != nullptr; };
    // abnormalModules Field Functions 
    bool hasAbnormalModules() const { return this->abnormalModules_ != nullptr;};
    void deleteAbnormalModules() { this->abnormalModules_ = nullptr;};
    inline string abnormalModules() const { DARABONBA_PTR_GET_DEFAULT(abnormalModules_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setAbnormalModules(string abnormalModules) { DARABONBA_PTR_SET_VALUE(abnormalModules_, abnormalModules) };


    // audioResult Field Functions 
    bool hasAudioResult() const { return this->audioResult_ != nullptr;};
    void deleteAudioResult() { this->audioResult_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult> & audioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult> audioResult() { DARABONBA_PTR_GET(audioResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setAudioResult(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult> & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setAudioResult(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult> && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


    // imageResult Field Functions 
    bool hasImageResult() const { return this->imageResult_ != nullptr;};
    void deleteImageResult() { this->imageResult_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult> & imageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult> imageResult() { DARABONBA_PTR_GET(imageResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setImageResult(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setImageResult(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // textResult Field Functions 
    bool hasTextResult() const { return this->textResult_ != nullptr;};
    void deleteTextResult() { this->textResult_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult> & textResult() const { DARABONBA_PTR_GET_CONST(textResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult> textResult() { DARABONBA_PTR_GET(textResult_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setTextResult(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult> & textResult) { DARABONBA_PTR_SET_VALUE(textResult_, textResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setTextResult(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult> && textResult) { DARABONBA_PTR_SET_RVALUE(textResult_, textResult) };


    // videoResult Field Functions 
    bool hasVideoResult() const { return this->videoResult_ != nullptr;};
    void deleteVideoResult() { this->videoResult_ = nullptr;};
    inline const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult & videoResult() const { DARABONBA_PTR_GET_CONST(videoResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult) };
    inline Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult videoResult() { DARABONBA_PTR_GET(videoResult_, Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setVideoResult(const Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult & videoResult) { DARABONBA_PTR_SET_VALUE(videoResult_, videoResult) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobData& setVideoResult(Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult && videoResult) { DARABONBA_PTR_SET_RVALUE(videoResult_, videoResult) };


  protected:
    // The content that violates the regulations. Separate multiple values with commas (,). Valid values:
    // 
    // *   **video**: the video.
    // *   **image-cover**: the cover.
    // *   **text-title**: the title.
    std::shared_ptr<string> abnormalModules_ = nullptr;
    // The results of audio review.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataAudioResult>> audioResult_ = nullptr;
    // The results of image review.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataImageResult>> imageResult_ = nullptr;
    // The category of the review result. Multiple values are separated by commas (,). Valid values:
    // 
    // *   **porn**: pornographic content
    // *   **terrorism**: terrorist or politically sensitive content
    // *   **ad**: ad violation
    // *   **live**: undesirable scene
    // *   **logo**: logo
    // *   **audio**: audio anti-spam
    // *   **normal**: normal content
    std::shared_ptr<string> label_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**: The content violates the regulations.
    // *   **review**: The content may violate the regulations.
    // *   **pass**: The content passes the review.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The text moderation results.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataTextResult>> textResult_ = nullptr;
    // The results of video review.
    std::shared_ptr<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResult> videoResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
