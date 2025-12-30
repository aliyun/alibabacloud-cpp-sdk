// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaProducingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaProducingJob, mediaProducingJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaProducingJob, mediaProducingJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaProducingJobResponseBody() = default ;
    GetMediaProducingJobResponseBody(const GetMediaProducingJobResponseBody &) = default ;
    GetMediaProducingJobResponseBody(GetMediaProducingJobResponseBody &&) = default ;
    GetMediaProducingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaProducingJobResponseBody() = default ;
    GetMediaProducingJobResponseBody& operator=(const GetMediaProducingJobResponseBody &) = default ;
    GetMediaProducingJobResponseBody& operator=(GetMediaProducingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaProducingJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaProducingJob& obj) { 
        DARABONBA_PTR_TO_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubJobMaterials, subJobMaterials_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Timeline, timeline_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VodMediaId, vodMediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaProducingJob& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipsParam, clipsParam_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubJobMaterials, subJobMaterials_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VodMediaId, vodMediaId_);
      };
      MediaProducingJob() = default ;
      MediaProducingJob(const MediaProducingJob &) = default ;
      MediaProducingJob(MediaProducingJob &&) = default ;
      MediaProducingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaProducingJob() = default ;
      MediaProducingJob& operator=(const MediaProducingJob &) = default ;
      MediaProducingJob& operator=(MediaProducingJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clipsParam_ == nullptr
        && this->code_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->duration_ == nullptr && this->jobId_ == nullptr
        && this->mediaId_ == nullptr && this->mediaURL_ == nullptr && this->message_ == nullptr && this->modifiedTime_ == nullptr && this->progress_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr && this->subJobMaterials_ == nullptr && this->templateId_ == nullptr && this->timeline_ == nullptr
        && this->userData_ == nullptr && this->vodMediaId_ == nullptr; };
      // clipsParam Field Functions 
      bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
      void deleteClipsParam() { this->clipsParam_ = nullptr;};
      inline string getClipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
      inline MediaProducingJob& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline MediaProducingJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline MediaProducingJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MediaProducingJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline MediaProducingJob& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaProducingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaProducingJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaURL Field Functions 
      bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
      void deleteMediaURL() { this->mediaURL_ = nullptr;};
      inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
      inline MediaProducingJob& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline MediaProducingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline MediaProducingJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline MediaProducingJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline MediaProducingJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaProducingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subJobMaterials Field Functions 
      bool hasSubJobMaterials() const { return this->subJobMaterials_ != nullptr;};
      void deleteSubJobMaterials() { this->subJobMaterials_ = nullptr;};
      inline string getSubJobMaterials() const { DARABONBA_PTR_GET_DEFAULT(subJobMaterials_, "") };
      inline MediaProducingJob& setSubJobMaterials(string subJobMaterials) { DARABONBA_PTR_SET_VALUE(subJobMaterials_, subJobMaterials) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline MediaProducingJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline string getTimeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
      inline MediaProducingJob& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaProducingJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // vodMediaId Field Functions 
      bool hasVodMediaId() const { return this->vodMediaId_ != nullptr;};
      void deleteVodMediaId() { this->vodMediaId_ = nullptr;};
      inline string getVodMediaId() const { DARABONBA_PTR_GET_DEFAULT(vodMediaId_, "") };
      inline MediaProducingJob& setVodMediaId(string vodMediaId) { DARABONBA_PTR_SET_VALUE(vodMediaId_, vodMediaId) };


    protected:
      // The template parameters of the media editing and production job.
      shared_ptr<string> clipsParam_ {};
      // The response code
      // 
      // Note: Pay attention to this parameter if the job failed.
      shared_ptr<string> code_ {};
      // The time when the media editing and production job was complete.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the media editing and production job was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The duration of the output file.
      // 
      // Note: This parameter has a value if the job is successful and the output file is an audio or video file.
      shared_ptr<float> duration_ {};
      // The ID of the media editing and production job.
      shared_ptr<string> jobId_ {};
      // The media asset ID of the output file.
      shared_ptr<string> mediaId_ {};
      // The URL of the output file.
      shared_ptr<string> mediaURL_ {};
      // The returned message.
      // 
      // Note: Pay attention to this parameter if the job failed.
      shared_ptr<string> message_ {};
      // The time when the media editing and production job was last modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<int32_t> progress_ {};
      // The ID of the online editing project.
      shared_ptr<string> projectId_ {};
      // The state of the media editing and production job. Valid values:
      // 
      // Init
      // 
      // Queuing
      // 
      // Processing
      // 
      // Success
      // 
      // Failed
      shared_ptr<string> status_ {};
      // The materials of the media editing and production job if the job is a subjob of a quick video production job, including the broadcast text and title.
      shared_ptr<string> subJobMaterials_ {};
      // The ID of the template used by the media editing and production job.
      shared_ptr<string> templateId_ {};
      // The timeline of the media editing and production job.
      shared_ptr<string> timeline_ {};
      // The user-defined data in the JSON format.
      shared_ptr<string> userData_ {};
      // The media asset ID of the output file in ApsaraVideo VOD if the output file is stored in ApsaraVideo VOD.
      shared_ptr<string> vodMediaId_ {};
    };

    virtual bool empty() const override { return this->mediaProducingJob_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaProducingJob Field Functions 
    bool hasMediaProducingJob() const { return this->mediaProducingJob_ != nullptr;};
    void deleteMediaProducingJob() { this->mediaProducingJob_ = nullptr;};
    inline const GetMediaProducingJobResponseBody::MediaProducingJob & getMediaProducingJob() const { DARABONBA_PTR_GET_CONST(mediaProducingJob_, GetMediaProducingJobResponseBody::MediaProducingJob) };
    inline GetMediaProducingJobResponseBody::MediaProducingJob getMediaProducingJob() { DARABONBA_PTR_GET(mediaProducingJob_, GetMediaProducingJobResponseBody::MediaProducingJob) };
    inline GetMediaProducingJobResponseBody& setMediaProducingJob(const GetMediaProducingJobResponseBody::MediaProducingJob & mediaProducingJob) { DARABONBA_PTR_SET_VALUE(mediaProducingJob_, mediaProducingJob) };
    inline GetMediaProducingJobResponseBody& setMediaProducingJob(GetMediaProducingJobResponseBody::MediaProducingJob && mediaProducingJob) { DARABONBA_PTR_SET_RVALUE(mediaProducingJob_, mediaProducingJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaProducingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the online editing project.
    shared_ptr<GetMediaProducingJobResponseBody::MediaProducingJob> mediaProducingJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
