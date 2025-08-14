// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsInputGroup.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroup.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_TO_JSON(JobCount, jobCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_FROM_JSON(JobCount, jobCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputGroup, outputGroup_);
      DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ListTranscodeJobsResponseBodyJobs() = default ;
    ListTranscodeJobsResponseBodyJobs(const ListTranscodeJobsResponseBodyJobs &) = default ;
    ListTranscodeJobsResponseBodyJobs(ListTranscodeJobsResponseBodyJobs &&) = default ;
    ListTranscodeJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobs() = default ;
    ListTranscodeJobsResponseBodyJobs& operator=(const ListTranscodeJobsResponseBodyJobs &) = default ;
    ListTranscodeJobsResponseBodyJobs& operator=(ListTranscodeJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->inputGroup_ != nullptr && this->jobCount_ != nullptr && this->name_ != nullptr && this->outputGroup_ != nullptr
        && this->parentJobId_ != nullptr && this->percent_ != nullptr && this->requestId_ != nullptr && this->scheduleConfig_ != nullptr && this->status_ != nullptr
        && this->submitTime_ != nullptr && this->triggerSource_ != nullptr && this->userData_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inputGroup Field Functions 
    bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
    void deleteInputGroup() { this->inputGroup_ = nullptr;};
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup> & inputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup> inputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup>) };
    inline ListTranscodeJobsResponseBodyJobs& setInputGroup(const vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
    inline ListTranscodeJobsResponseBodyJobs& setInputGroup(vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


    // jobCount Field Functions 
    bool hasJobCount() const { return this->jobCount_ != nullptr;};
    void deleteJobCount() { this->jobCount_ = nullptr;};
    inline int32_t jobCount() const { DARABONBA_PTR_GET_DEFAULT(jobCount_, 0) };
    inline ListTranscodeJobsResponseBodyJobs& setJobCount(int32_t jobCount) { DARABONBA_PTR_SET_VALUE(jobCount_, jobCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputGroup Field Functions 
    bool hasOutputGroup() const { return this->outputGroup_ != nullptr;};
    void deleteOutputGroup() { this->outputGroup_ = nullptr;};
    inline const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup> & outputGroup() const { DARABONBA_PTR_GET_CONST(outputGroup_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup>) };
    inline vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup> outputGroup() { DARABONBA_PTR_GET(outputGroup_, vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup>) };
    inline ListTranscodeJobsResponseBodyJobs& setOutputGroup(const vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup> & outputGroup) { DARABONBA_PTR_SET_VALUE(outputGroup_, outputGroup) };
    inline ListTranscodeJobsResponseBodyJobs& setOutputGroup(vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup> && outputGroup) { DARABONBA_PTR_SET_RVALUE(outputGroup_, outputGroup) };


    // parentJobId Field Functions 
    bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
    void deleteParentJobId() { this->parentJobId_ = nullptr;};
    inline string parentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline ListTranscodeJobsResponseBodyJobs& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::ListTranscodeJobsResponseBodyJobsScheduleConfig) };
    inline Models::ListTranscodeJobsResponseBodyJobsScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::ListTranscodeJobsResponseBodyJobsScheduleConfig) };
    inline ListTranscodeJobsResponseBodyJobs& setScheduleConfig(const Models::ListTranscodeJobsResponseBodyJobsScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline ListTranscodeJobsResponseBodyJobs& setScheduleConfig(Models::ListTranscodeJobsResponseBodyJobsScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string triggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListTranscodeJobsResponseBodyJobs& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsInputGroup>> inputGroup_ = nullptr;
    // The number of subjobs.
    std::shared_ptr<int32_t> jobCount_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The output group of the job.
    std::shared_ptr<vector<Models::ListTranscodeJobsResponseBodyJobsOutputGroup>> outputGroup_ = nullptr;
    // The main job ID.
    std::shared_ptr<string> parentJobId_ = nullptr;
    // The completion percentage of the job.
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The ID of the request that submitted the job.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling configuration of the job.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsScheduleConfig> scheduleConfig_ = nullptr;
    // The state of the job.
    // 
    // *   Success: At least one of the subjobs is successful.
    // *   Fail: All subjobs failed.
    std::shared_ptr<string> status_ = nullptr;
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
