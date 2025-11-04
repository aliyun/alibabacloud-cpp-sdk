// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOB_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODYLIVEEDITINGJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig.hpp>
#include <alibabacloud/models/GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig.hpp>
#include <alibabacloud/models/GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBodyLiveEditingJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBodyLiveEditingJob& obj) { 
      DARABONBA_PTR_TO_JSON(Clips, clips_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(LiveStreamConfig, liveStreamConfig_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaProduceConfig, mediaProduceConfig_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBodyLiveEditingJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Clips, clips_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(LiveStreamConfig, liveStreamConfig_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaProduceConfig, mediaProduceConfig_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OutputMediaConfig, outputMediaConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetLiveEditingJobResponseBodyLiveEditingJob() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJob(const GetLiveEditingJobResponseBodyLiveEditingJob &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJob(GetLiveEditingJobResponseBodyLiveEditingJob &&) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBodyLiveEditingJob() = default ;
    GetLiveEditingJobResponseBodyLiveEditingJob& operator=(const GetLiveEditingJobResponseBodyLiveEditingJob &) = default ;
    GetLiveEditingJobResponseBodyLiveEditingJob& operator=(GetLiveEditingJobResponseBodyLiveEditingJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clips_ == nullptr
        && return this->code_ == nullptr && return this->completeTime_ == nullptr && return this->creationTime_ == nullptr && return this->jobId_ == nullptr && return this->liveStreamConfig_ == nullptr
        && return this->mediaId_ == nullptr && return this->mediaProduceConfig_ == nullptr && return this->mediaURL_ == nullptr && return this->message_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->outputMediaConfig_ == nullptr && return this->projectId_ == nullptr && return this->status_ == nullptr && return this->userData_ == nullptr; };
    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline string clips() const { DARABONBA_PTR_GET_DEFAULT(clips_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setClips(string clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // liveStreamConfig Field Functions 
    bool hasLiveStreamConfig() const { return this->liveStreamConfig_ != nullptr;};
    void deleteLiveStreamConfig() { this->liveStreamConfig_ = nullptr;};
    inline const Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig & liveStreamConfig() const { DARABONBA_PTR_GET_CONST(liveStreamConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig) };
    inline Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig liveStreamConfig() { DARABONBA_PTR_GET(liveStreamConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setLiveStreamConfig(const Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig & liveStreamConfig) { DARABONBA_PTR_SET_VALUE(liveStreamConfig_, liveStreamConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setLiveStreamConfig(Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig && liveStreamConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamConfig_, liveStreamConfig) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaProduceConfig Field Functions 
    bool hasMediaProduceConfig() const { return this->mediaProduceConfig_ != nullptr;};
    void deleteMediaProduceConfig() { this->mediaProduceConfig_ = nullptr;};
    inline const Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig & mediaProduceConfig() const { DARABONBA_PTR_GET_CONST(mediaProduceConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig) };
    inline Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig mediaProduceConfig() { DARABONBA_PTR_GET(mediaProduceConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setMediaProduceConfig(const Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig & mediaProduceConfig) { DARABONBA_PTR_SET_VALUE(mediaProduceConfig_, mediaProduceConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setMediaProduceConfig(Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig && mediaProduceConfig) { DARABONBA_PTR_SET_RVALUE(mediaProduceConfig_, mediaProduceConfig) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // outputMediaConfig Field Functions 
    bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
    void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
    inline const Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig & outputMediaConfig() const { DARABONBA_PTR_GET_CONST(outputMediaConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig) };
    inline Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig outputMediaConfig() { DARABONBA_PTR_GET(outputMediaConfig_, Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setOutputMediaConfig(const Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig & outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setOutputMediaConfig(Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig && outputMediaConfig) { DARABONBA_PTR_SET_RVALUE(outputMediaConfig_, outputMediaConfig) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetLiveEditingJobResponseBodyLiveEditingJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The clips.
    std::shared_ptr<string> clips_ = nullptr;
    // The response code. Note: Pay attention to this parameter if the job failed.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the live editing job was completed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the live editing job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the live editing job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The live editing configurations.
    std::shared_ptr<Models::GetLiveEditingJobResponseBodyLiveEditingJobLiveStreamConfig> liveStreamConfig_ = nullptr;
    // The media asset ID of the output file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The production configurations.
    std::shared_ptr<Models::GetLiveEditingJobResponseBodyLiveEditingJobMediaProduceConfig> mediaProduceConfig_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The returned message. Note: Pay attention to this parameter if the job failed.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the live editing job was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The storage configurations of the output file.
    std::shared_ptr<Models::GetLiveEditingJobResponseBodyLiveEditingJobOutputMediaConfig> outputMediaConfig_ = nullptr;
    // The ID of the live editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The state of the live editing job. Valid values: Init, Queuing, Processing, Success, and Failed.
    std::shared_ptr<string> status_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
