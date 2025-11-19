// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultAudioResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultImageResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultTextResult.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResult& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TextResult, textResult_);
      DARABONBA_PTR_TO_JSON(VideoResult, videoResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
      DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TextResult, textResult_);
      DARABONBA_PTR_FROM_JSON(VideoResult, videoResult_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResult(const GetMediaAuditResultResponseBodyMediaAuditResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResult(GetMediaAuditResultResponseBodyMediaAuditResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalModules_ == nullptr
        && return this->audioResult_ == nullptr && return this->imageResult_ == nullptr && return this->label_ == nullptr && return this->suggestion_ == nullptr && return this->textResult_ == nullptr
        && return this->videoResult_ == nullptr; };
    // abnormalModules Field Functions 
    bool hasAbnormalModules() const { return this->abnormalModules_ != nullptr;};
    void deleteAbnormalModules() { this->abnormalModules_ = nullptr;};
    inline string abnormalModules() const { DARABONBA_PTR_GET_DEFAULT(abnormalModules_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setAbnormalModules(string abnormalModules) { DARABONBA_PTR_SET_VALUE(abnormalModules_, abnormalModules) };


    // audioResult Field Functions 
    bool hasAudioResult() const { return this->audioResult_ != nullptr;};
    void deleteAudioResult() { this->audioResult_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult> & audioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult> audioResult() { DARABONBA_PTR_GET(audioResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setAudioResult(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult> & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setAudioResult(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult> && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


    // imageResult Field Functions 
    bool hasImageResult() const { return this->imageResult_ != nullptr;};
    void deleteImageResult() { this->imageResult_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult> & imageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult> imageResult() { DARABONBA_PTR_GET(imageResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setImageResult(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setImageResult(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // textResult Field Functions 
    bool hasTextResult() const { return this->textResult_ != nullptr;};
    void deleteTextResult() { this->textResult_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult> & textResult() const { DARABONBA_PTR_GET_CONST(textResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult> textResult() { DARABONBA_PTR_GET(textResult_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setTextResult(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult> & textResult) { DARABONBA_PTR_SET_VALUE(textResult_, textResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setTextResult(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult> && textResult) { DARABONBA_PTR_SET_RVALUE(textResult_, textResult) };


    // videoResult Field Functions 
    bool hasVideoResult() const { return this->videoResult_ != nullptr;};
    void deleteVideoResult() { this->videoResult_ = nullptr;};
    inline const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult & videoResult() const { DARABONBA_PTR_GET_CONST(videoResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult) };
    inline Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult videoResult() { DARABONBA_PTR_GET(videoResult_, Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setVideoResult(const Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult & videoResult) { DARABONBA_PTR_SET_VALUE(videoResult_, videoResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult& setVideoResult(Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult && videoResult) { DARABONBA_PTR_SET_RVALUE(videoResult_, videoResult) };


  protected:
    // The content that violates the regulations. Separate multiple values with commas (,). Valid values:
    // 
    // *   **video**
    // *   **image-cover**
    // *   **text-title**
    std::shared_ptr<string> abnormalModules_ = nullptr;
    // The results of audio review.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultAudioResult>> audioResult_ = nullptr;
    // The results of image review.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultImageResult>> imageResult_ = nullptr;
    // The category of the review result. Separate multiple values with commas (,). Valid values:
    // 
    // *   **porn**
    // *   **terrorism**
    // *   **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**
    // *   **review**
    // *   **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The results of text review.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultTextResult>> textResult_ = nullptr;
    // The results of video review.
    std::shared_ptr<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResult> videoResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
