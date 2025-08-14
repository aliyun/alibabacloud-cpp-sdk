// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAINFOJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsInput.hpp>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsMediaInfoProperty.hpp>
#include <alibabacloud/models/ListMediaInfoJobsResponseBodyJobsScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaInfoJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaInfoJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaInfoProperty, mediaInfoProperty_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(SubmitResultJson, submitResultJson_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaInfoJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaInfoProperty, mediaInfoProperty_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(SubmitResultJson, submitResultJson_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListMediaInfoJobsResponseBodyJobs() = default ;
    ListMediaInfoJobsResponseBodyJobs(const ListMediaInfoJobsResponseBodyJobs &) = default ;
    ListMediaInfoJobsResponseBodyJobs(ListMediaInfoJobsResponseBodyJobs &&) = default ;
    ListMediaInfoJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaInfoJobsResponseBodyJobs() = default ;
    ListMediaInfoJobsResponseBodyJobs& operator=(const ListMediaInfoJobsResponseBodyJobs &) = default ;
    ListMediaInfoJobsResponseBodyJobs& operator=(ListMediaInfoJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->async_ != nullptr
        && this->finishTime_ != nullptr && this->input_ != nullptr && this->jobId_ != nullptr && this->mediaInfoProperty_ != nullptr && this->name_ != nullptr
        && this->requestId_ != nullptr && this->scheduleConfig_ != nullptr && this->status_ != nullptr && this->submitResultJson_ != nullptr && this->submitTime_ != nullptr
        && this->triggerSource_ != nullptr && this->userData_ != nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline ListMediaInfoJobsResponseBodyJobs& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListMediaInfoJobsResponseBodyJobsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListMediaInfoJobsResponseBodyJobsInput) };
    inline Models::ListMediaInfoJobsResponseBodyJobsInput input() { DARABONBA_PTR_GET(input_, Models::ListMediaInfoJobsResponseBodyJobsInput) };
    inline ListMediaInfoJobsResponseBodyJobs& setInput(const Models::ListMediaInfoJobsResponseBodyJobsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListMediaInfoJobsResponseBodyJobs& setInput(Models::ListMediaInfoJobsResponseBodyJobsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaInfoProperty Field Functions 
    bool hasMediaInfoProperty() const { return this->mediaInfoProperty_ != nullptr;};
    void deleteMediaInfoProperty() { this->mediaInfoProperty_ = nullptr;};
    inline const Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty & mediaInfoProperty() const { DARABONBA_PTR_GET_CONST(mediaInfoProperty_, Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty) };
    inline Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty mediaInfoProperty() { DARABONBA_PTR_GET(mediaInfoProperty_, Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty) };
    inline ListMediaInfoJobsResponseBodyJobs& setMediaInfoProperty(const Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty & mediaInfoProperty) { DARABONBA_PTR_SET_VALUE(mediaInfoProperty_, mediaInfoProperty) };
    inline ListMediaInfoJobsResponseBodyJobs& setMediaInfoProperty(Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty && mediaInfoProperty) { DARABONBA_PTR_SET_RVALUE(mediaInfoProperty_, mediaInfoProperty) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig) };
    inline Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig) };
    inline ListMediaInfoJobsResponseBodyJobs& setScheduleConfig(const Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline ListMediaInfoJobsResponseBodyJobs& setScheduleConfig(Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitResultJson Field Functions 
    bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
    void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
    inline     const Darabonba::Json & submitResultJson() const { DARABONBA_GET(submitResultJson_) };
    Darabonba::Json & submitResultJson() { DARABONBA_GET(submitResultJson_) };
    inline ListMediaInfoJobsResponseBodyJobs& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
    inline ListMediaInfoJobsResponseBodyJobs& setSubmitResultJson(Darabonba::Json & submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListMediaInfoJobsResponseBodyJobs& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether asynchronous processing was performed.
    std::shared_ptr<bool> async_ = nullptr;
    // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::ListMediaInfoJobsResponseBodyJobsInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The details of the media information.
    std::shared_ptr<Models::ListMediaInfoJobsResponseBodyJobsMediaInfoProperty> mediaInfoProperty_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling information.
    std::shared_ptr<Models::ListMediaInfoJobsResponseBodyJobsScheduleConfig> scheduleConfig_ = nullptr;
    // The state of the job. Valid values:
    // 
    // *   Init: The job is submitted.
    // *   Success: The job is successful.
    // *   Fail: The job failed.
    std::shared_ptr<string> status_ = nullptr;
    // The job submission information.
    Darabonba::Json submitResultJson_ = nullptr;
    // The time when the job was submitted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The source of the job. Valid values:
    // 
    // *   API
    // *   WorkFlow
    // *   Console
    std::shared_ptr<string> triggerSource_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
