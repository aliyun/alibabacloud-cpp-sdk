// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobIndex, jobIndex_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutFileMeta, outFileMeta_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_TO_JSON(ProcessConfig, processConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(SubmitResultJson, submitResultJson_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InputGroup, inputGroup_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobIndex, jobIndex_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutFileMeta, outFileMeta_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_FROM_JSON(ProcessConfig, processConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(SubmitResultJson, submitResultJson_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& operator=(GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->finishTime_ != nullptr && this->inputGroup_ != nullptr && this->jobId_ != nullptr && this->jobIndex_ != nullptr && this->name_ != nullptr
        && this->outFileMeta_ != nullptr && this->output_ != nullptr && this->parentJobId_ != nullptr && this->processConfig_ != nullptr && this->requestId_ != nullptr
        && this->scheduleConfig_ != nullptr && this->status_ != nullptr && this->submitResultJson_ != nullptr && this->submitTime_ != nullptr && this->userData_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inputGroup Field Functions 
    bool hasInputGroup() const { return this->inputGroup_ != nullptr;};
    void deleteInputGroup() { this->inputGroup_ = nullptr;};
    inline const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup> & inputGroup() const { DARABONBA_PTR_GET_CONST(inputGroup_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup>) };
    inline vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup> inputGroup() { DARABONBA_PTR_GET(inputGroup_, vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup>) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setInputGroup(const vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup> & inputGroup) { DARABONBA_PTR_SET_VALUE(inputGroup_, inputGroup) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setInputGroup(vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup> && inputGroup) { DARABONBA_PTR_SET_RVALUE(inputGroup_, inputGroup) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobIndex Field Functions 
    bool hasJobIndex() const { return this->jobIndex_ != nullptr;};
    void deleteJobIndex() { this->jobIndex_ = nullptr;};
    inline int32_t jobIndex() const { DARABONBA_PTR_GET_DEFAULT(jobIndex_, 0) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setJobIndex(int32_t jobIndex) { DARABONBA_PTR_SET_VALUE(jobIndex_, jobIndex) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outFileMeta Field Functions 
    bool hasOutFileMeta() const { return this->outFileMeta_ != nullptr;};
    void deleteOutFileMeta() { this->outFileMeta_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta & outFileMeta() const { DARABONBA_PTR_GET_CONST(outFileMeta_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta outFileMeta() { DARABONBA_PTR_GET(outFileMeta_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setOutFileMeta(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta & outFileMeta) { DARABONBA_PTR_SET_VALUE(outFileMeta_, outFileMeta) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setOutFileMeta(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta && outFileMeta) { DARABONBA_PTR_SET_RVALUE(outFileMeta_, outFileMeta) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput output() { DARABONBA_PTR_GET(output_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setOutput(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setOutput(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // parentJobId Field Functions 
    bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
    void deleteParentJobId() { this->parentJobId_ = nullptr;};
    inline string parentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


    // processConfig Field Functions 
    bool hasProcessConfig() const { return this->processConfig_ != nullptr;};
    void deleteProcessConfig() { this->processConfig_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig & processConfig() const { DARABONBA_PTR_GET_CONST(processConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig processConfig() { DARABONBA_PTR_GET(processConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setProcessConfig(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig & processConfig) { DARABONBA_PTR_SET_VALUE(processConfig_, processConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setProcessConfig(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig && processConfig) { DARABONBA_PTR_SET_RVALUE(processConfig_, processConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setScheduleConfig(const Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setScheduleConfig(Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitResultJson Field Functions 
    bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
    void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
    inline     const Darabonba::Json & submitResultJson() const { DARABONBA_GET(submitResultJson_) };
    Darabonba::Json & submitResultJson() { DARABONBA_GET(submitResultJson_) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setSubmitResultJson(Darabonba::Json & submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input group of the job. An input of a single file indicates a transcoding job. An input of multiple files indicates an audio and video stream merge job.
    std::shared_ptr<vector<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListInputGroup>> inputGroup_ = nullptr;
    // The subjob ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The index number of the subjob in the entire job.
    std::shared_ptr<int32_t> jobIndex_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The media information about the video generated by the job.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutFileMeta> outFileMeta_ = nullptr;
    // The output file configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListOutput> output_ = nullptr;
    // The main job ID.
    std::shared_ptr<string> parentJobId_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfig> processConfig_ = nullptr;
    // The ID of the request that submitted the job.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling information about the job.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListScheduleConfig> scheduleConfig_ = nullptr;
    // The state of the transcoding job. Valid values: Init (the job is submitted), Success (the job is successful), Fail (the job failed), and Deleted (the job is deleted).
    std::shared_ptr<string> status_ = nullptr;
    // The job submission result.
    Darabonba::Json submitResultJson_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
