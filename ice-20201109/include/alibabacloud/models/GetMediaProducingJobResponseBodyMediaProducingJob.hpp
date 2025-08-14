// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODYMEDIAPRODUCINGJOB_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODYMEDIAPRODUCINGJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaProducingJobResponseBodyMediaProducingJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaProducingJobResponseBodyMediaProducingJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMediaProducingJobResponseBodyMediaProducingJob& obj) { 
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
    GetMediaProducingJobResponseBodyMediaProducingJob() = default ;
    GetMediaProducingJobResponseBodyMediaProducingJob(const GetMediaProducingJobResponseBodyMediaProducingJob &) = default ;
    GetMediaProducingJobResponseBodyMediaProducingJob(GetMediaProducingJobResponseBodyMediaProducingJob &&) = default ;
    GetMediaProducingJobResponseBodyMediaProducingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaProducingJobResponseBodyMediaProducingJob() = default ;
    GetMediaProducingJobResponseBodyMediaProducingJob& operator=(const GetMediaProducingJobResponseBodyMediaProducingJob &) = default ;
    GetMediaProducingJobResponseBodyMediaProducingJob& operator=(GetMediaProducingJobResponseBodyMediaProducingJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clipsParam_ != nullptr
        && this->code_ != nullptr && this->completeTime_ != nullptr && this->createTime_ != nullptr && this->duration_ != nullptr && this->jobId_ != nullptr
        && this->mediaId_ != nullptr && this->mediaURL_ != nullptr && this->message_ != nullptr && this->modifiedTime_ != nullptr && this->progress_ != nullptr
        && this->projectId_ != nullptr && this->status_ != nullptr && this->subJobMaterials_ != nullptr && this->templateId_ != nullptr && this->timeline_ != nullptr
        && this->userData_ != nullptr && this->vodMediaId_ != nullptr; };
    // clipsParam Field Functions 
    bool hasClipsParam() const { return this->clipsParam_ != nullptr;};
    void deleteClipsParam() { this->clipsParam_ = nullptr;};
    inline string clipsParam() const { DARABONBA_PTR_GET_DEFAULT(clipsParam_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setClipsParam(string clipsParam) { DARABONBA_PTR_SET_VALUE(clipsParam_, clipsParam) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobMaterials Field Functions 
    bool hasSubJobMaterials() const { return this->subJobMaterials_ != nullptr;};
    void deleteSubJobMaterials() { this->subJobMaterials_ = nullptr;};
    inline string subJobMaterials() const { DARABONBA_PTR_GET_DEFAULT(subJobMaterials_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setSubJobMaterials(string subJobMaterials) { DARABONBA_PTR_SET_VALUE(subJobMaterials_, subJobMaterials) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vodMediaId Field Functions 
    bool hasVodMediaId() const { return this->vodMediaId_ != nullptr;};
    void deleteVodMediaId() { this->vodMediaId_ = nullptr;};
    inline string vodMediaId() const { DARABONBA_PTR_GET_DEFAULT(vodMediaId_, "") };
    inline GetMediaProducingJobResponseBodyMediaProducingJob& setVodMediaId(string vodMediaId) { DARABONBA_PTR_SET_VALUE(vodMediaId_, vodMediaId) };


  protected:
    // The template parameters of the media editing and production job.
    std::shared_ptr<string> clipsParam_ = nullptr;
    // The response code
    // 
    // Note: Pay attention to this parameter if the job failed.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the media editing and production job was complete.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the media editing and production job was created.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The duration of the output file.
    // 
    // Note: This parameter has a value if the job is successful and the output file is an audio or video file.
    std::shared_ptr<float> duration_ = nullptr;
    // The ID of the media editing and production job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The media asset ID of the output file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The returned message.
    // 
    // Note: Pay attention to this parameter if the job failed.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the media editing and production job was last modified.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The materials of the media editing and production job if the job is a subjob of a quick video production job, including the broadcast text and title.
    std::shared_ptr<string> subJobMaterials_ = nullptr;
    // The ID of the template used by the media editing and production job.
    std::shared_ptr<string> templateId_ = nullptr;
    // The timeline of the media editing and production job.
    std::shared_ptr<string> timeline_ = nullptr;
    // The user-defined data in the JSON format.
    std::shared_ptr<string> userData_ = nullptr;
    // The media asset ID of the output file in ApsaraVideo VOD if the output file is stored in ApsaraVideo VOD.
    std::shared_ptr<string> vodMediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
