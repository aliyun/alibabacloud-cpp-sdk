// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(resultJsonFileUrl, resultJsonFileUrl_);
      DARABONBA_PTR_TO_JSON(videoAnalysisResult, videoAnalysisResult_);
      DARABONBA_PTR_TO_JSON(videoCaptionResult, videoCaptionResult_);
      DARABONBA_PTR_TO_JSON(videoGenerateResult, videoGenerateResult_);
      DARABONBA_PTR_TO_JSON(videoGenerateResults, videoGenerateResults_);
      DARABONBA_PTR_TO_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
      DARABONBA_PTR_TO_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
      DARABONBA_PTR_TO_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(resultJsonFileUrl, resultJsonFileUrl_);
      DARABONBA_PTR_FROM_JSON(videoAnalysisResult, videoAnalysisResult_);
      DARABONBA_PTR_FROM_JSON(videoCaptionResult, videoCaptionResult_);
      DARABONBA_PTR_FROM_JSON(videoGenerateResult, videoGenerateResult_);
      DARABONBA_PTR_FROM_JSON(videoGenerateResults, videoGenerateResults_);
      DARABONBA_PTR_FROM_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
      DARABONBA_PTR_FROM_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
      DARABONBA_PTR_FROM_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput(const GetVideoAnalysisTaskResponseBodyDataPayloadOutput &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput(GetVideoAnalysisTaskResponseBodyDataPayloadOutput &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutput() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutput &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutput& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultJsonFileUrl_ == nullptr
        && return this->videoAnalysisResult_ == nullptr && return this->videoCaptionResult_ == nullptr && return this->videoGenerateResult_ == nullptr && return this->videoGenerateResults_ == nullptr && return this->videoMindMappingGenerateResult_ == nullptr
        && return this->videoRoleRecognitionResult_ == nullptr && return this->videoTitleGenerateResult_ == nullptr; };
    // resultJsonFileUrl Field Functions 
    bool hasResultJsonFileUrl() const { return this->resultJsonFileUrl_ != nullptr;};
    void deleteResultJsonFileUrl() { this->resultJsonFileUrl_ = nullptr;};
    inline string resultJsonFileUrl() const { DARABONBA_PTR_GET_DEFAULT(resultJsonFileUrl_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setResultJsonFileUrl(string resultJsonFileUrl) { DARABONBA_PTR_SET_VALUE(resultJsonFileUrl_, resultJsonFileUrl) };


    // videoAnalysisResult Field Functions 
    bool hasVideoAnalysisResult() const { return this->videoAnalysisResult_ != nullptr;};
    void deleteVideoAnalysisResult() { this->videoAnalysisResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult & videoAnalysisResult() const { DARABONBA_PTR_GET_CONST(videoAnalysisResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult videoAnalysisResult() { DARABONBA_PTR_GET(videoAnalysisResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoAnalysisResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult & videoAnalysisResult) { DARABONBA_PTR_SET_VALUE(videoAnalysisResult_, videoAnalysisResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoAnalysisResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult && videoAnalysisResult) { DARABONBA_PTR_SET_RVALUE(videoAnalysisResult_, videoAnalysisResult) };


    // videoCaptionResult Field Functions 
    bool hasVideoCaptionResult() const { return this->videoCaptionResult_ != nullptr;};
    void deleteVideoCaptionResult() { this->videoCaptionResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult & videoCaptionResult() const { DARABONBA_PTR_GET_CONST(videoCaptionResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult videoCaptionResult() { DARABONBA_PTR_GET(videoCaptionResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoCaptionResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult & videoCaptionResult) { DARABONBA_PTR_SET_VALUE(videoCaptionResult_, videoCaptionResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoCaptionResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult && videoCaptionResult) { DARABONBA_PTR_SET_RVALUE(videoCaptionResult_, videoCaptionResult) };


    // videoGenerateResult Field Functions 
    bool hasVideoGenerateResult() const { return this->videoGenerateResult_ != nullptr;};
    void deleteVideoGenerateResult() { this->videoGenerateResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult & videoGenerateResult() const { DARABONBA_PTR_GET_CONST(videoGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult videoGenerateResult() { DARABONBA_PTR_GET(videoGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoGenerateResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult & videoGenerateResult) { DARABONBA_PTR_SET_VALUE(videoGenerateResult_, videoGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoGenerateResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult && videoGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoGenerateResult_, videoGenerateResult) };


    // videoGenerateResults Field Functions 
    bool hasVideoGenerateResults() const { return this->videoGenerateResults_ != nullptr;};
    void deleteVideoGenerateResults() { this->videoGenerateResults_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults> & videoGenerateResults() const { DARABONBA_PTR_GET_CONST(videoGenerateResults_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults> videoGenerateResults() { DARABONBA_PTR_GET(videoGenerateResults_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoGenerateResults(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults> & videoGenerateResults) { DARABONBA_PTR_SET_VALUE(videoGenerateResults_, videoGenerateResults) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoGenerateResults(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults> && videoGenerateResults) { DARABONBA_PTR_SET_RVALUE(videoGenerateResults_, videoGenerateResults) };


    // videoMindMappingGenerateResult Field Functions 
    bool hasVideoMindMappingGenerateResult() const { return this->videoMindMappingGenerateResult_ != nullptr;};
    void deleteVideoMindMappingGenerateResult() { this->videoMindMappingGenerateResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult & videoMindMappingGenerateResult() const { DARABONBA_PTR_GET_CONST(videoMindMappingGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult videoMindMappingGenerateResult() { DARABONBA_PTR_GET(videoMindMappingGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoMindMappingGenerateResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult & videoMindMappingGenerateResult) { DARABONBA_PTR_SET_VALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoMindMappingGenerateResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult && videoMindMappingGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };


    // videoRoleRecognitionResult Field Functions 
    bool hasVideoRoleRecognitionResult() const { return this->videoRoleRecognitionResult_ != nullptr;};
    void deleteVideoRoleRecognitionResult() { this->videoRoleRecognitionResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult & videoRoleRecognitionResult() const { DARABONBA_PTR_GET_CONST(videoRoleRecognitionResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult videoRoleRecognitionResult() { DARABONBA_PTR_GET(videoRoleRecognitionResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoRoleRecognitionResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult & videoRoleRecognitionResult) { DARABONBA_PTR_SET_VALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoRoleRecognitionResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult && videoRoleRecognitionResult) { DARABONBA_PTR_SET_RVALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };


    // videoTitleGenerateResult Field Functions 
    bool hasVideoTitleGenerateResult() const { return this->videoTitleGenerateResult_ != nullptr;};
    void deleteVideoTitleGenerateResult() { this->videoTitleGenerateResult_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult & videoTitleGenerateResult() const { DARABONBA_PTR_GET_CONST(videoTitleGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult videoTitleGenerateResult() { DARABONBA_PTR_GET(videoTitleGenerateResult_, Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoTitleGenerateResult(const Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult & videoTitleGenerateResult) { DARABONBA_PTR_SET_VALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutput& setVideoTitleGenerateResult(Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult && videoTitleGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };


  protected:
    std::shared_ptr<string> resultJsonFileUrl_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult> videoAnalysisResult_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult> videoCaptionResult_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult> videoGenerateResult_ = nullptr;
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults>> videoGenerateResults_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult> videoMindMappingGenerateResult_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResult> videoRoleRecognitionResult_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult> videoTitleGenerateResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
