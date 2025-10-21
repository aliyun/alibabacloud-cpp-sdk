// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOSPLITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOSPLITRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& obj) { 
      DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(videoParts, videoParts_);
      DARABONBA_PTR_TO_JSON(videoRecognitionResult, videoRecognitionResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& obj) { 
      DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(videoParts, videoParts_);
      DARABONBA_PTR_FROM_JSON(videoRecognitionResult, videoRecognitionResult_);
    };
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult(const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult(GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult &&) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& operator=(const GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& operator=(GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasonText_ == nullptr
        && return this->text_ == nullptr && return this->videoParts_ == nullptr && return this->videoRecognitionResult_ == nullptr; };
    // reasonText Field Functions 
    bool hasReasonText() const { return this->reasonText_ != nullptr;};
    void deleteReasonText() { this->reasonText_ = nullptr;};
    inline string reasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // videoParts Field Functions 
    bool hasVideoParts() const { return this->videoParts_ != nullptr;};
    void deleteVideoParts() { this->videoParts_ = nullptr;};
    inline const vector<map<string, string>> & videoParts() const { DARABONBA_PTR_GET_CONST(videoParts_, vector<map<string, string>>) };
    inline vector<map<string, string>> videoParts() { DARABONBA_PTR_GET(videoParts_, vector<map<string, string>>) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setVideoParts(const vector<map<string, string>> & videoParts) { DARABONBA_PTR_SET_VALUE(videoParts_, videoParts) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setVideoParts(vector<map<string, string>> && videoParts) { DARABONBA_PTR_SET_RVALUE(videoParts_, videoParts) };


    // videoRecognitionResult Field Functions 
    bool hasVideoRecognitionResult() const { return this->videoRecognitionResult_ != nullptr;};
    void deleteVideoRecognitionResult() { this->videoRecognitionResult_ = nullptr;};
    inline const vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult> & videoRecognitionResult() const { DARABONBA_PTR_GET_CONST(videoRecognitionResult_, vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult>) };
    inline vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult> videoRecognitionResult() { DARABONBA_PTR_GET(videoRecognitionResult_, vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult>) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setVideoRecognitionResult(const vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult> & videoRecognitionResult) { DARABONBA_PTR_SET_VALUE(videoRecognitionResult_, videoRecognitionResult) };
    inline GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResult& setVideoRecognitionResult(vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult> && videoRecognitionResult) { DARABONBA_PTR_SET_RVALUE(videoRecognitionResult_, videoRecognitionResult) };


  protected:
    std::shared_ptr<string> reasonText_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> videoParts_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutputVideoSplitResultVideoRecognitionResult>> videoRecognitionResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
