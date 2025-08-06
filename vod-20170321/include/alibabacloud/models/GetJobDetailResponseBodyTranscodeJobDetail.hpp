// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYTRANSCODEJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYTRANSCODEJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBodyTranscodeJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBodyTranscodeJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBodyTranscodeJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetJobDetailResponseBodyTranscodeJobDetail() = default ;
    GetJobDetailResponseBodyTranscodeJobDetail(const GetJobDetailResponseBodyTranscodeJobDetail &) = default ;
    GetJobDetailResponseBodyTranscodeJobDetail(GetJobDetailResponseBodyTranscodeJobDetail &&) = default ;
    GetJobDetailResponseBodyTranscodeJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBodyTranscodeJobDetail() = default ;
    GetJobDetailResponseBodyTranscodeJobDetail& operator=(const GetJobDetailResponseBodyTranscodeJobDetail &) = default ;
    GetJobDetailResponseBodyTranscodeJobDetail& operator=(GetJobDetailResponseBodyTranscodeJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->createTime_ != nullptr && this->definition_ != nullptr && this->jobId_ != nullptr && this->status_ != nullptr && this->templateId_ != nullptr
        && this->userId_ != nullptr && this->videoId_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetJobDetailResponseBodyTranscodeJobDetail& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The time when the task was complete.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The definition.
    std::shared_ptr<string> definition_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   Submitted
    // *   Transcoding
    // *   TranscodeSuccess
    // *   TranscodeFail
    // *   TranscodeCancelled
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the user who submitted the task.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
