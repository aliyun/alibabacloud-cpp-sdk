// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYAIJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILRESPONSEBODYAIJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailResponseBodyAIJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailResponseBodyAIJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailResponseBodyAIJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetJobDetailResponseBodyAIJobDetail() = default ;
    GetJobDetailResponseBodyAIJobDetail(const GetJobDetailResponseBodyAIJobDetail &) = default ;
    GetJobDetailResponseBodyAIJobDetail(GetJobDetailResponseBodyAIJobDetail &&) = default ;
    GetJobDetailResponseBodyAIJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailResponseBodyAIJobDetail() = default ;
    GetJobDetailResponseBodyAIJobDetail& operator=(const GetJobDetailResponseBodyAIJobDetail &) = default ;
    GetJobDetailResponseBodyAIJobDetail& operator=(GetJobDetailResponseBodyAIJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->createTime_ != nullptr && this->jobId_ != nullptr && this->jobType_ != nullptr && this->mediaId_ != nullptr && this->status_ != nullptr
        && this->templateConfig_ != nullptr && this->trigger_ != nullptr && this->userId_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline GetJobDetailResponseBodyAIJobDetail& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetJobDetailResponseBodyAIJobDetail& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The end time of the task.
    std::shared_ptr<string> completeTime_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The type of the AI task.
    std::shared_ptr<string> jobType_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   reserved
    // *   init
    // *   success
    // *   fail
    // *   processing
    // *   analysing
    std::shared_ptr<string> status_ = nullptr;
    // The template configuration.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The trigger mode. Valid values:
    // 
    // *   Auto
    // *   Manual
    std::shared_ptr<string> trigger_ = nullptr;
    // The ID of the user who submitted the task.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
