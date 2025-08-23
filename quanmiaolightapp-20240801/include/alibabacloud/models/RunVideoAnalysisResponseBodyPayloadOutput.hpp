// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(resultJsonFileUrl, resultJsonFileUrl_);
      DARABONBA_PTR_TO_JSON(videoAnalysisResult, videoAnalysisResult_);
      DARABONBA_PTR_TO_JSON(videoCaptionResult, videoCaptionResult_);
      DARABONBA_PTR_TO_JSON(videoGenerateResult, videoGenerateResult_);
      DARABONBA_PTR_TO_JSON(videoGenerateResults, videoGenerateResults_);
      DARABONBA_PTR_TO_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
      DARABONBA_PTR_TO_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
      DARABONBA_PTR_TO_JSON(videoShotSnapshotResult, videoShotSnapshotResult_);
      DARABONBA_PTR_TO_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(resultJsonFileUrl, resultJsonFileUrl_);
      DARABONBA_PTR_FROM_JSON(videoAnalysisResult, videoAnalysisResult_);
      DARABONBA_PTR_FROM_JSON(videoCaptionResult, videoCaptionResult_);
      DARABONBA_PTR_FROM_JSON(videoGenerateResult, videoGenerateResult_);
      DARABONBA_PTR_FROM_JSON(videoGenerateResults, videoGenerateResults_);
      DARABONBA_PTR_FROM_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
      DARABONBA_PTR_FROM_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
      DARABONBA_PTR_FROM_JSON(videoShotSnapshotResult, videoShotSnapshotResult_);
      DARABONBA_PTR_FROM_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
    };
    RunVideoAnalysisResponseBodyPayloadOutput() = default ;
    RunVideoAnalysisResponseBodyPayloadOutput(const RunVideoAnalysisResponseBodyPayloadOutput &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutput(RunVideoAnalysisResponseBodyPayloadOutput &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutput() = default ;
    RunVideoAnalysisResponseBodyPayloadOutput& operator=(const RunVideoAnalysisResponseBodyPayloadOutput &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutput& operator=(RunVideoAnalysisResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultJsonFileUrl_ != nullptr
        && this->videoAnalysisResult_ != nullptr && this->videoCaptionResult_ != nullptr && this->videoGenerateResult_ != nullptr && this->videoGenerateResults_ != nullptr && this->videoMindMappingGenerateResult_ != nullptr
        && this->videoRoleRecognitionResult_ != nullptr && this->videoShotSnapshotResult_ != nullptr && this->videoTitleGenerateResult_ != nullptr; };
    // resultJsonFileUrl Field Functions 
    bool hasResultJsonFileUrl() const { return this->resultJsonFileUrl_ != nullptr;};
    void deleteResultJsonFileUrl() { this->resultJsonFileUrl_ = nullptr;};
    inline string resultJsonFileUrl() const { DARABONBA_PTR_GET_DEFAULT(resultJsonFileUrl_, "") };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setResultJsonFileUrl(string resultJsonFileUrl) { DARABONBA_PTR_SET_VALUE(resultJsonFileUrl_, resultJsonFileUrl) };


    // videoAnalysisResult Field Functions 
    bool hasVideoAnalysisResult() const { return this->videoAnalysisResult_ != nullptr;};
    void deleteVideoAnalysisResult() { this->videoAnalysisResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult & videoAnalysisResult() const { DARABONBA_PTR_GET_CONST(videoAnalysisResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult videoAnalysisResult() { DARABONBA_PTR_GET(videoAnalysisResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoAnalysisResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult & videoAnalysisResult) { DARABONBA_PTR_SET_VALUE(videoAnalysisResult_, videoAnalysisResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoAnalysisResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult && videoAnalysisResult) { DARABONBA_PTR_SET_RVALUE(videoAnalysisResult_, videoAnalysisResult) };


    // videoCaptionResult Field Functions 
    bool hasVideoCaptionResult() const { return this->videoCaptionResult_ != nullptr;};
    void deleteVideoCaptionResult() { this->videoCaptionResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult & videoCaptionResult() const { DARABONBA_PTR_GET_CONST(videoCaptionResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult videoCaptionResult() { DARABONBA_PTR_GET(videoCaptionResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoCaptionResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult & videoCaptionResult) { DARABONBA_PTR_SET_VALUE(videoCaptionResult_, videoCaptionResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoCaptionResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult && videoCaptionResult) { DARABONBA_PTR_SET_RVALUE(videoCaptionResult_, videoCaptionResult) };


    // videoGenerateResult Field Functions 
    bool hasVideoGenerateResult() const { return this->videoGenerateResult_ != nullptr;};
    void deleteVideoGenerateResult() { this->videoGenerateResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult & videoGenerateResult() const { DARABONBA_PTR_GET_CONST(videoGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult videoGenerateResult() { DARABONBA_PTR_GET(videoGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoGenerateResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult & videoGenerateResult) { DARABONBA_PTR_SET_VALUE(videoGenerateResult_, videoGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoGenerateResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult && videoGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoGenerateResult_, videoGenerateResult) };


    // videoGenerateResults Field Functions 
    bool hasVideoGenerateResults() const { return this->videoGenerateResults_ != nullptr;};
    void deleteVideoGenerateResults() { this->videoGenerateResults_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults> & videoGenerateResults() const { DARABONBA_PTR_GET_CONST(videoGenerateResults_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults> videoGenerateResults() { DARABONBA_PTR_GET(videoGenerateResults_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults>) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoGenerateResults(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults> & videoGenerateResults) { DARABONBA_PTR_SET_VALUE(videoGenerateResults_, videoGenerateResults) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoGenerateResults(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults> && videoGenerateResults) { DARABONBA_PTR_SET_RVALUE(videoGenerateResults_, videoGenerateResults) };


    // videoMindMappingGenerateResult Field Functions 
    bool hasVideoMindMappingGenerateResult() const { return this->videoMindMappingGenerateResult_ != nullptr;};
    void deleteVideoMindMappingGenerateResult() { this->videoMindMappingGenerateResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult & videoMindMappingGenerateResult() const { DARABONBA_PTR_GET_CONST(videoMindMappingGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult videoMindMappingGenerateResult() { DARABONBA_PTR_GET(videoMindMappingGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoMindMappingGenerateResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult & videoMindMappingGenerateResult) { DARABONBA_PTR_SET_VALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoMindMappingGenerateResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult && videoMindMappingGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };


    // videoRoleRecognitionResult Field Functions 
    bool hasVideoRoleRecognitionResult() const { return this->videoRoleRecognitionResult_ != nullptr;};
    void deleteVideoRoleRecognitionResult() { this->videoRoleRecognitionResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult & videoRoleRecognitionResult() const { DARABONBA_PTR_GET_CONST(videoRoleRecognitionResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult videoRoleRecognitionResult() { DARABONBA_PTR_GET(videoRoleRecognitionResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoRoleRecognitionResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult & videoRoleRecognitionResult) { DARABONBA_PTR_SET_VALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoRoleRecognitionResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult && videoRoleRecognitionResult) { DARABONBA_PTR_SET_RVALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };


    // videoShotSnapshotResult Field Functions 
    bool hasVideoShotSnapshotResult() const { return this->videoShotSnapshotResult_ != nullptr;};
    void deleteVideoShotSnapshotResult() { this->videoShotSnapshotResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult & videoShotSnapshotResult() const { DARABONBA_PTR_GET_CONST(videoShotSnapshotResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult videoShotSnapshotResult() { DARABONBA_PTR_GET(videoShotSnapshotResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoShotSnapshotResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult & videoShotSnapshotResult) { DARABONBA_PTR_SET_VALUE(videoShotSnapshotResult_, videoShotSnapshotResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoShotSnapshotResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult && videoShotSnapshotResult) { DARABONBA_PTR_SET_RVALUE(videoShotSnapshotResult_, videoShotSnapshotResult) };


    // videoTitleGenerateResult Field Functions 
    bool hasVideoTitleGenerateResult() const { return this->videoTitleGenerateResult_ != nullptr;};
    void deleteVideoTitleGenerateResult() { this->videoTitleGenerateResult_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult & videoTitleGenerateResult() const { DARABONBA_PTR_GET_CONST(videoTitleGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult videoTitleGenerateResult() { DARABONBA_PTR_GET(videoTitleGenerateResult_, Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoTitleGenerateResult(const Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult & videoTitleGenerateResult) { DARABONBA_PTR_SET_VALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };
    inline RunVideoAnalysisResponseBodyPayloadOutput& setVideoTitleGenerateResult(Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult && videoTitleGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };


  protected:
    std::shared_ptr<string> resultJsonFileUrl_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult> videoAnalysisResult_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult> videoCaptionResult_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult> videoGenerateResult_ = nullptr;
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults>> videoGenerateResults_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult> videoMindMappingGenerateResult_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoRoleRecognitionResult> videoRoleRecognitionResult_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult> videoShotSnapshotResult_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult> videoTitleGenerateResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
