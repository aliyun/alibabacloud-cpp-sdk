// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobResponseBodyMediaInfoJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob(SubmitSyncMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobResponseBodyMediaInfoJob() = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& operator=(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& operator=(SubmitSyncMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->finishTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->mediaInfoProperty_ == nullptr && return this->name_ == nullptr
        && return this->requestId_ == nullptr && return this->scheduleConfig_ == nullptr && return this->status_ == nullptr && return this->submitResultJson_ == nullptr && return this->submitTime_ == nullptr
        && return this->triggerSource_ == nullptr && return this->userData_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput input() { DARABONBA_PTR_GET(input_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setInput(const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setInput(Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaInfoProperty Field Functions 
    bool hasMediaInfoProperty() const { return this->mediaInfoProperty_ != nullptr;};
    void deleteMediaInfoProperty() { this->mediaInfoProperty_ = nullptr;};
    inline const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty() const { DARABONBA_PTR_GET_CONST(mediaInfoProperty_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty mediaInfoProperty() { DARABONBA_PTR_GET(mediaInfoProperty_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty) { DARABONBA_PTR_SET_VALUE(mediaInfoProperty_, mediaInfoProperty) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty && mediaInfoProperty) { DARABONBA_PTR_SET_RVALUE(mediaInfoProperty_, mediaInfoProperty) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(const Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitResultJson Field Functions 
    bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
    void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
    inline     const Darabonba::Json & submitResultJson() const { DARABONBA_GET(submitResultJson_) };
    Darabonba::Json & submitResultJson() { DARABONBA_GET(submitResultJson_) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(Darabonba::Json & submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether asynchronous processing was performed.
    std::shared_ptr<bool> async_ = nullptr;
    // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The details of the media information.
    std::shared_ptr<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty> mediaInfoProperty_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling information.
    std::shared_ptr<Models::SubmitSyncMediaInfoJobResponseBodyMediaInfoJobScheduleConfig> scheduleConfig_ = nullptr;
    // The state of the job. Valid values: Init (the job is submitted), Success (the job is successful), and Fail (the job failed).
    std::shared_ptr<string> status_ = nullptr;
    // The job submission information.
    Darabonba::Json submitResultJson_ = nullptr;
    // The time when the job was submitted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The source of the job. Valid values: API, WorkFlow, and Console.
    std::shared_ptr<string> triggerSource_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
