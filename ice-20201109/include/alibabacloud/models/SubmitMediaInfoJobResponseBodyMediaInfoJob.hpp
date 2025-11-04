// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobInput.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaInfoJobResponseBodyMediaInfoJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    SubmitMediaInfoJobResponseBodyMediaInfoJob() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJob(const SubmitMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJob(SubmitMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBodyMediaInfoJob() = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJob& operator=(const SubmitMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    SubmitMediaInfoJobResponseBodyMediaInfoJob& operator=(SubmitMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
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
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput input() { DARABONBA_PTR_GET(input_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setInput(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setInput(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaInfoProperty Field Functions 
    bool hasMediaInfoProperty() const { return this->mediaInfoProperty_ != nullptr;};
    void deleteMediaInfoProperty() { this->mediaInfoProperty_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty() const { DARABONBA_PTR_GET_CONST(mediaInfoProperty_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty mediaInfoProperty() { DARABONBA_PTR_GET(mediaInfoProperty_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty) { DARABONBA_PTR_SET_VALUE(mediaInfoProperty_, mediaInfoProperty) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty && mediaInfoProperty) { DARABONBA_PTR_SET_RVALUE(mediaInfoProperty_, mediaInfoProperty) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(const Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitResultJson Field Functions 
    bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
    void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
    inline     const Darabonba::Json & submitResultJson() const { DARABONBA_GET(submitResultJson_) };
    Darabonba::Json & submitResultJson() { DARABONBA_GET(submitResultJson_) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(Darabonba::Json & submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether asynchronous processing was performed.
    std::shared_ptr<bool> async_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The details of the media information.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty> mediaInfoProperty_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling information.
    std::shared_ptr<Models::SubmitMediaInfoJobResponseBodyMediaInfoJobScheduleConfig> scheduleConfig_ = nullptr;
    // The state of the job. Valid values: Init (the job is submitted), Success (the job is successful), and Fail (the job failed).
    std::shared_ptr<string> status_ = nullptr;
    // The job submission information.
    Darabonba::Json submitResultJson_ = nullptr;
    // The time when the job was submitted.
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
