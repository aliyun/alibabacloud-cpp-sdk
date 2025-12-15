// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFO_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoResources.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoResourcesUsed.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetJobResponseBodyJobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayJobId, arrayJobId_);
      DARABONBA_PTR_TO_JSON(ArrayJobSubId, arrayJobSubId_);
      DARABONBA_PTR_TO_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorLog, errorLog_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(OutputLog, outputLog_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ResourcesUsed, resourcesUsed_);
      DARABONBA_PTR_TO_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayJobId, arrayJobId_);
      DARABONBA_PTR_FROM_JSON(ArrayJobSubId, arrayJobSubId_);
      DARABONBA_PTR_FROM_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorLog, errorLog_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(OutputLog, outputLog_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ResourcesUsed, resourcesUsed_);
      DARABONBA_PTR_FROM_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetJobResponseBodyJobInfo() = default ;
    GetJobResponseBodyJobInfo(const GetJobResponseBodyJobInfo &) = default ;
    GetJobResponseBodyJobInfo(GetJobResponseBodyJobInfo &&) = default ;
    GetJobResponseBodyJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfo() = default ;
    GetJobResponseBodyJobInfo& operator=(const GetJobResponseBodyJobInfo &) = default ;
    GetJobResponseBodyJobInfo& operator=(GetJobResponseBodyJobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayJobId_ == nullptr
        && return this->arrayJobSubId_ == nullptr && return this->arrayRequest_ == nullptr && return this->commandLine_ == nullptr && return this->createTime_ == nullptr && return this->errorLog_ == nullptr
        && return this->extraInfo_ == nullptr && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->jobQueue_ == nullptr && return this->lastModifyTime_ == nullptr
        && return this->nodeList_ == nullptr && return this->outputLog_ == nullptr && return this->priority_ == nullptr && return this->resources_ == nullptr && return this->resourcesUsed_ == nullptr
        && return this->runasUser_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->variables_ == nullptr; };
    // arrayJobId Field Functions 
    bool hasArrayJobId() const { return this->arrayJobId_ != nullptr;};
    void deleteArrayJobId() { this->arrayJobId_ = nullptr;};
    inline string arrayJobId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobId_, "") };
    inline GetJobResponseBodyJobInfo& setArrayJobId(string arrayJobId) { DARABONBA_PTR_SET_VALUE(arrayJobId_, arrayJobId) };


    // arrayJobSubId Field Functions 
    bool hasArrayJobSubId() const { return this->arrayJobSubId_ != nullptr;};
    void deleteArrayJobSubId() { this->arrayJobSubId_ = nullptr;};
    inline string arrayJobSubId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobSubId_, "") };
    inline GetJobResponseBodyJobInfo& setArrayJobSubId(string arrayJobSubId) { DARABONBA_PTR_SET_VALUE(arrayJobSubId_, arrayJobSubId) };


    // arrayRequest Field Functions 
    bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
    void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
    inline string arrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
    inline GetJobResponseBodyJobInfo& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


    // commandLine Field Functions 
    bool hasCommandLine() const { return this->commandLine_ != nullptr;};
    void deleteCommandLine() { this->commandLine_ = nullptr;};
    inline string commandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
    inline GetJobResponseBodyJobInfo& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobResponseBodyJobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorLog Field Functions 
    bool hasErrorLog() const { return this->errorLog_ != nullptr;};
    void deleteErrorLog() { this->errorLog_ = nullptr;};
    inline string errorLog() const { DARABONBA_PTR_GET_DEFAULT(errorLog_, "") };
    inline GetJobResponseBodyJobInfo& setErrorLog(string errorLog) { DARABONBA_PTR_SET_VALUE(errorLog_, errorLog) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GetJobResponseBodyJobInfo& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBodyJobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetJobResponseBodyJobInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobQueue Field Functions 
    bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
    void deleteJobQueue() { this->jobQueue_ = nullptr;};
    inline string jobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
    inline GetJobResponseBodyJobInfo& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline GetJobResponseBodyJobInfo& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline string nodeList() const { DARABONBA_PTR_GET_DEFAULT(nodeList_, "") };
    inline GetJobResponseBodyJobInfo& setNodeList(string nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };


    // outputLog Field Functions 
    bool hasOutputLog() const { return this->outputLog_ != nullptr;};
    void deleteOutputLog() { this->outputLog_ = nullptr;};
    inline string outputLog() const { DARABONBA_PTR_GET_DEFAULT(outputLog_, "") };
    inline GetJobResponseBodyJobInfo& setOutputLog(string outputLog) { DARABONBA_PTR_SET_VALUE(outputLog_, outputLog) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetJobResponseBodyJobInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::GetJobResponseBodyJobInfoResources) };
    inline Models::GetJobResponseBodyJobInfoResources resources() { DARABONBA_PTR_GET(resources_, Models::GetJobResponseBodyJobInfoResources) };
    inline GetJobResponseBodyJobInfo& setResources(const Models::GetJobResponseBodyJobInfoResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetJobResponseBodyJobInfo& setResources(Models::GetJobResponseBodyJobInfoResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // resourcesUsed Field Functions 
    bool hasResourcesUsed() const { return this->resourcesUsed_ != nullptr;};
    void deleteResourcesUsed() { this->resourcesUsed_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoResourcesUsed & resourcesUsed() const { DARABONBA_PTR_GET_CONST(resourcesUsed_, Models::GetJobResponseBodyJobInfoResourcesUsed) };
    inline Models::GetJobResponseBodyJobInfoResourcesUsed resourcesUsed() { DARABONBA_PTR_GET(resourcesUsed_, Models::GetJobResponseBodyJobInfoResourcesUsed) };
    inline GetJobResponseBodyJobInfo& setResourcesUsed(const Models::GetJobResponseBodyJobInfoResourcesUsed & resourcesUsed) { DARABONBA_PTR_SET_VALUE(resourcesUsed_, resourcesUsed) };
    inline GetJobResponseBodyJobInfo& setResourcesUsed(Models::GetJobResponseBodyJobInfoResourcesUsed && resourcesUsed) { DARABONBA_PTR_SET_RVALUE(resourcesUsed_, resourcesUsed) };


    // runasUser Field Functions 
    bool hasRunasUser() const { return this->runasUser_ != nullptr;};
    void deleteRunasUser() { this->runasUser_ = nullptr;};
    inline string runasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
    inline GetJobResponseBodyJobInfo& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobResponseBodyJobInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetJobResponseBodyJobInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::GetJobResponseBodyJobInfoVariables>) };
    inline vector<Models::GetJobResponseBodyJobInfoVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::GetJobResponseBodyJobInfoVariables>) };
    inline GetJobResponseBodyJobInfo& setVariables(const vector<Models::GetJobResponseBodyJobInfoVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetJobResponseBodyJobInfo& setVariables(vector<Models::GetJobResponseBodyJobInfoVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The parent job ID. If the return value is a non-empty string, the job is an array job.
    std::shared_ptr<string> arrayJobId_ = nullptr;
    // The sub-job ID. This parameter is valid when the ArrayJobId parameter is a non-empty string.
    std::shared_ptr<string> arrayJobSubId_ = nullptr;
    // The job queue. If the job is not in a queue, the output is empty.
    // 
    // The format is X-Y:Z. X indicates the first index, Y indicates the final index, and Z indicates the step size. For example, 2-7:2 indicates three sub-jobs numbered 2, 4, and 6.
    std::shared_ptr<string> arrayRequest_ = nullptr;
    // The command that is used to run the job.
    std::shared_ptr<string> commandLine_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error log file of the job.
    std::shared_ptr<string> errorLog_ = nullptr;
    // Additional information.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // The queue to which the job belongs.
    std::shared_ptr<string> jobQueue_ = nullptr;
    // The time when the job was last modified.
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // The compute nodes that are used to run the job.
    std::shared_ptr<string> nodeList_ = nullptr;
    // The standard output log file of the job.
    std::shared_ptr<string> outputLog_ = nullptr;
    // The priority of the job.
    std::shared_ptr<string> priority_ = nullptr;
    // The resources that were requested when the job was submitted.
    std::shared_ptr<Models::GetJobResponseBodyJobInfoResources> resources_ = nullptr;
    // The resources that are actually used by the job.
    std::shared_ptr<Models::GetJobResponseBodyJobInfoResourcesUsed> resourcesUsed_ = nullptr;
    // The user to which the job belongs or that is used to submit the job. This user is a cluster-side user.
    std::shared_ptr<string> runasUser_ = nullptr;
    // The time when the job was started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The job state.
    std::shared_ptr<string> state_ = nullptr;
    // The variables of the job.
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
