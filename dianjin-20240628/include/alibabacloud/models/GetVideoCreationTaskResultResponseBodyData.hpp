// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoCreationTaskResultResponseBodyDataFileInfo.hpp>
#include <alibabacloud/models/GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetVideoCreationTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoCreationTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(mediaDetectionTaskResult, mediaDetectionTaskResult_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoCreationTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(mediaDetectionTaskResult, mediaDetectionTaskResult_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    GetVideoCreationTaskResultResponseBodyData() = default ;
    GetVideoCreationTaskResultResponseBodyData(const GetVideoCreationTaskResultResponseBodyData &) = default ;
    GetVideoCreationTaskResultResponseBodyData(GetVideoCreationTaskResultResponseBodyData &&) = default ;
    GetVideoCreationTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoCreationTaskResultResponseBodyData() = default ;
    GetVideoCreationTaskResultResponseBodyData& operator=(const GetVideoCreationTaskResultResponseBodyData &) = default ;
    GetVideoCreationTaskResultResponseBodyData& operator=(GetVideoCreationTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->estimatedWaitTimeInSeconds_ == nullptr
        && return this->fileInfo_ == nullptr && return this->finishTime_ == nullptr && return this->mediaDetectionTaskResult_ == nullptr && return this->startTime_ == nullptr && return this->taskId_ == nullptr
        && return this->taskStatus_ == nullptr && return this->videoUrl_ == nullptr; };
    // estimatedWaitTimeInSeconds Field Functions 
    bool hasEstimatedWaitTimeInSeconds() const { return this->estimatedWaitTimeInSeconds_ != nullptr;};
    void deleteEstimatedWaitTimeInSeconds() { this->estimatedWaitTimeInSeconds_ = nullptr;};
    inline int64_t estimatedWaitTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(estimatedWaitTimeInSeconds_, 0L) };
    inline GetVideoCreationTaskResultResponseBodyData& setEstimatedWaitTimeInSeconds(int64_t estimatedWaitTimeInSeconds) { DARABONBA_PTR_SET_VALUE(estimatedWaitTimeInSeconds_, estimatedWaitTimeInSeconds) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const Models::GetVideoCreationTaskResultResponseBodyDataFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Models::GetVideoCreationTaskResultResponseBodyDataFileInfo) };
    inline Models::GetVideoCreationTaskResultResponseBodyDataFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, Models::GetVideoCreationTaskResultResponseBodyDataFileInfo) };
    inline GetVideoCreationTaskResultResponseBodyData& setFileInfo(const Models::GetVideoCreationTaskResultResponseBodyDataFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline GetVideoCreationTaskResultResponseBodyData& setFileInfo(Models::GetVideoCreationTaskResultResponseBodyDataFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetVideoCreationTaskResultResponseBodyData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // mediaDetectionTaskResult Field Functions 
    bool hasMediaDetectionTaskResult() const { return this->mediaDetectionTaskResult_ != nullptr;};
    void deleteMediaDetectionTaskResult() { this->mediaDetectionTaskResult_ = nullptr;};
    inline const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult & mediaDetectionTaskResult() const { DARABONBA_PTR_GET_CONST(mediaDetectionTaskResult_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult) };
    inline Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult mediaDetectionTaskResult() { DARABONBA_PTR_GET(mediaDetectionTaskResult_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult) };
    inline GetVideoCreationTaskResultResponseBodyData& setMediaDetectionTaskResult(const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult & mediaDetectionTaskResult) { DARABONBA_PTR_SET_VALUE(mediaDetectionTaskResult_, mediaDetectionTaskResult) };
    inline GetVideoCreationTaskResultResponseBodyData& setMediaDetectionTaskResult(Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult && mediaDetectionTaskResult) { DARABONBA_PTR_SET_RVALUE(mediaDetectionTaskResult_, mediaDetectionTaskResult) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetVideoCreationTaskResultResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoCreationTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetVideoCreationTaskResultResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline GetVideoCreationTaskResultResponseBodyData& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<int64_t> estimatedWaitTimeInSeconds_ = nullptr;
    std::shared_ptr<Models::GetVideoCreationTaskResultResponseBodyDataFileInfo> fileInfo_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult> mediaDetectionTaskResult_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
