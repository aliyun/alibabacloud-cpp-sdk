// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODYMEDIAINFOJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobInput.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoJobResponseBodyMediaInfoJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMediaInfoJobResponseBodyMediaInfoJob& obj) { 
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
    GetMediaInfoJobResponseBodyMediaInfoJob() = default ;
    GetMediaInfoJobResponseBodyMediaInfoJob(const GetMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJob(GetMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoJobResponseBodyMediaInfoJob() = default ;
    GetMediaInfoJobResponseBodyMediaInfoJob& operator=(const GetMediaInfoJobResponseBodyMediaInfoJob &) = default ;
    GetMediaInfoJobResponseBodyMediaInfoJob& operator=(GetMediaInfoJobResponseBodyMediaInfoJob &&) = default ;
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
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetMediaInfoJobResponseBodyMediaInfoJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline Models::GetMediaInfoJobResponseBodyMediaInfoJobInput input() { DARABONBA_PTR_GET(input_, Models::GetMediaInfoJobResponseBodyMediaInfoJobInput) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setInput(const Models::GetMediaInfoJobResponseBodyMediaInfoJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setInput(Models::GetMediaInfoJobResponseBodyMediaInfoJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaInfoProperty Field Functions 
    bool hasMediaInfoProperty() const { return this->mediaInfoProperty_ != nullptr;};
    void deleteMediaInfoProperty() { this->mediaInfoProperty_ = nullptr;};
    inline const Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty() const { DARABONBA_PTR_GET_CONST(mediaInfoProperty_, Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty mediaInfoProperty() { DARABONBA_PTR_GET(mediaInfoProperty_, Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(const Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty & mediaInfoProperty) { DARABONBA_PTR_SET_VALUE(mediaInfoProperty_, mediaInfoProperty) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setMediaInfoProperty(Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty && mediaInfoProperty) { DARABONBA_PTR_SET_RVALUE(mediaInfoProperty_, mediaInfoProperty) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(const Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setScheduleConfig(Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitResultJson Field Functions 
    bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
    void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
    inline     const Darabonba::Json & submitResultJson() const { DARABONBA_GET(submitResultJson_) };
    Darabonba::Json & submitResultJson() { DARABONBA_GET(submitResultJson_) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setSubmitResultJson(Darabonba::Json & submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetMediaInfoJobResponseBodyMediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether asynchronous processing was performed.
    std::shared_ptr<bool> async_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input of the job.
    std::shared_ptr<Models::GetMediaInfoJobResponseBodyMediaInfoJobInput> input_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The details of the media information.
    std::shared_ptr<Models::GetMediaInfoJobResponseBodyMediaInfoJobMediaInfoProperty> mediaInfoProperty_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling information.
    std::shared_ptr<Models::GetMediaInfoJobResponseBodyMediaInfoJobScheduleConfig> scheduleConfig_ = nullptr;
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
