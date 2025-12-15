// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPEC_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSJOBSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsJobSpecResources.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsJobSpecResourcesActualOccupied.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsResponseBodyJobsJobSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsJobSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayJobId, arrayJobId_);
      DARABONBA_PTR_TO_JSON(ArrayJobSubId, arrayJobSubId_);
      DARABONBA_PTR_TO_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ResourcesActualOccupied, resourcesActualOccupied_);
      DARABONBA_PTR_TO_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StderrPath, stderrPath_);
      DARABONBA_PTR_TO_JSON(StdoutPath, stdoutPath_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsJobSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayJobId, arrayJobId_);
      DARABONBA_PTR_FROM_JSON(ArrayJobSubId, arrayJobSubId_);
      DARABONBA_PTR_FROM_JSON(ArrayRequest, arrayRequest_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobQueue, jobQueue_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ResourcesActualOccupied, resourcesActualOccupied_);
      DARABONBA_PTR_FROM_JSON(RunasUser, runasUser_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StderrPath, stderrPath_);
      DARABONBA_PTR_FROM_JSON(StdoutPath, stdoutPath_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListJobsResponseBodyJobsJobSpec() = default ;
    ListJobsResponseBodyJobsJobSpec(const ListJobsResponseBodyJobsJobSpec &) = default ;
    ListJobsResponseBodyJobsJobSpec(ListJobsResponseBodyJobsJobSpec &&) = default ;
    ListJobsResponseBodyJobsJobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsJobSpec() = default ;
    ListJobsResponseBodyJobsJobSpec& operator=(const ListJobsResponseBodyJobsJobSpec &) = default ;
    ListJobsResponseBodyJobsJobSpec& operator=(ListJobsResponseBodyJobsJobSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayJobId_ == nullptr
        && return this->arrayJobSubId_ == nullptr && return this->arrayRequest_ == nullptr && return this->comment_ == nullptr && return this->id_ == nullptr && return this->jobQueue_ == nullptr
        && return this->lastModifyTime_ == nullptr && return this->nodeList_ == nullptr && return this->priority_ == nullptr && return this->resources_ == nullptr && return this->resourcesActualOccupied_ == nullptr
        && return this->runasUser_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->stderrPath_ == nullptr && return this->stdoutPath_ == nullptr
        && return this->submitTime_ == nullptr && return this->variables_ == nullptr; };
    // arrayJobId Field Functions 
    bool hasArrayJobId() const { return this->arrayJobId_ != nullptr;};
    void deleteArrayJobId() { this->arrayJobId_ = nullptr;};
    inline string arrayJobId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobId_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setArrayJobId(string arrayJobId) { DARABONBA_PTR_SET_VALUE(arrayJobId_, arrayJobId) };


    // arrayJobSubId Field Functions 
    bool hasArrayJobSubId() const { return this->arrayJobSubId_ != nullptr;};
    void deleteArrayJobSubId() { this->arrayJobSubId_ = nullptr;};
    inline string arrayJobSubId() const { DARABONBA_PTR_GET_DEFAULT(arrayJobSubId_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setArrayJobSubId(string arrayJobSubId) { DARABONBA_PTR_SET_VALUE(arrayJobSubId_, arrayJobSubId) };


    // arrayRequest Field Functions 
    bool hasArrayRequest() const { return this->arrayRequest_ != nullptr;};
    void deleteArrayRequest() { this->arrayRequest_ = nullptr;};
    inline string arrayRequest() const { DARABONBA_PTR_GET_DEFAULT(arrayRequest_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setArrayRequest(string arrayRequest) { DARABONBA_PTR_SET_VALUE(arrayRequest_, arrayRequest) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobQueue Field Functions 
    bool hasJobQueue() const { return this->jobQueue_ != nullptr;};
    void deleteJobQueue() { this->jobQueue_ = nullptr;};
    inline string jobQueue() const { DARABONBA_PTR_GET_DEFAULT(jobQueue_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setJobQueue(string jobQueue) { DARABONBA_PTR_SET_VALUE(jobQueue_, jobQueue) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline string nodeList() const { DARABONBA_PTR_GET_DEFAULT(nodeList_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setNodeList(string nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::ListJobsResponseBodyJobsJobSpecResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::ListJobsResponseBodyJobsJobSpecResources) };
    inline Models::ListJobsResponseBodyJobsJobSpecResources resources() { DARABONBA_PTR_GET(resources_, Models::ListJobsResponseBodyJobsJobSpecResources) };
    inline ListJobsResponseBodyJobsJobSpec& setResources(const Models::ListJobsResponseBodyJobsJobSpecResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListJobsResponseBodyJobsJobSpec& setResources(Models::ListJobsResponseBodyJobsJobSpecResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // resourcesActualOccupied Field Functions 
    bool hasResourcesActualOccupied() const { return this->resourcesActualOccupied_ != nullptr;};
    void deleteResourcesActualOccupied() { this->resourcesActualOccupied_ = nullptr;};
    inline const Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied & resourcesActualOccupied() const { DARABONBA_PTR_GET_CONST(resourcesActualOccupied_, Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied) };
    inline Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied resourcesActualOccupied() { DARABONBA_PTR_GET(resourcesActualOccupied_, Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied) };
    inline ListJobsResponseBodyJobsJobSpec& setResourcesActualOccupied(const Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied & resourcesActualOccupied) { DARABONBA_PTR_SET_VALUE(resourcesActualOccupied_, resourcesActualOccupied) };
    inline ListJobsResponseBodyJobsJobSpec& setResourcesActualOccupied(Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied && resourcesActualOccupied) { DARABONBA_PTR_SET_RVALUE(resourcesActualOccupied_, resourcesActualOccupied) };


    // runasUser Field Functions 
    bool hasRunasUser() const { return this->runasUser_ != nullptr;};
    void deleteRunasUser() { this->runasUser_ = nullptr;};
    inline string runasUser() const { DARABONBA_PTR_GET_DEFAULT(runasUser_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setRunasUser(string runasUser) { DARABONBA_PTR_SET_VALUE(runasUser_, runasUser) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stderrPath Field Functions 
    bool hasStderrPath() const { return this->stderrPath_ != nullptr;};
    void deleteStderrPath() { this->stderrPath_ = nullptr;};
    inline string stderrPath() const { DARABONBA_PTR_GET_DEFAULT(stderrPath_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setStderrPath(string stderrPath) { DARABONBA_PTR_SET_VALUE(stderrPath_, stderrPath) };


    // stdoutPath Field Functions 
    bool hasStdoutPath() const { return this->stdoutPath_ != nullptr;};
    void deleteStdoutPath() { this->stdoutPath_ = nullptr;};
    inline string stdoutPath() const { DARABONBA_PTR_GET_DEFAULT(stdoutPath_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setStdoutPath(string stdoutPath) { DARABONBA_PTR_SET_VALUE(stdoutPath_, stdoutPath) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string variables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline ListJobsResponseBodyJobsJobSpec& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


  protected:
    // The array job ID.
    std::shared_ptr<string> arrayJobId_ = nullptr;
    // The ID of the job in the array.
    std::shared_ptr<string> arrayJobSubId_ = nullptr;
    // The queue format of the job.
    // 
    // *   If the job is not in a queue, the output is empty.
    // *   The format is X-Y:Z. X indicates the first index, Y indicates the final index, and Z indicates the step size. For example, 2-7:2 indicates three sub-jobs numbered 2, 4, and 6.
    std::shared_ptr<string> arrayRequest_ = nullptr;
    // The job description.
    std::shared_ptr<string> comment_ = nullptr;
    // The job ID.
    std::shared_ptr<string> id_ = nullptr;
    // The queue name.
    std::shared_ptr<string> jobQueue_ = nullptr;
    // The time when the job was last updated.
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // The compute nodes that were used to run the job.
    std::shared_ptr<string> nodeList_ = nullptr;
    // The job priority. Valid values: 0 to 9. A larger value indicates a higher priority.
    std::shared_ptr<string> priority_ = nullptr;
    // The information about the resources required to run the job.
    std::shared_ptr<Models::ListJobsResponseBodyJobsJobSpecResources> resources_ = nullptr;
    // Actual resource usage of the job program
    std::shared_ptr<Models::ListJobsResponseBodyJobsJobSpecResourcesActualOccupied> resourcesActualOccupied_ = nullptr;
    // The user that ran the job.
    std::shared_ptr<string> runasUser_ = nullptr;
    // Job start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The job state. Valid values: (PBS cluster and Slurm cluster)
    // 
    // *   FINISHED/Completed
    // *   RUNNING/Running
    // *   QUEUED/Pending
    // *   FAILED/Failed
    std::shared_ptr<string> state_ = nullptr;
    // The error output path.
    std::shared_ptr<string> stderrPath_ = nullptr;
    // The standard output path.
    std::shared_ptr<string> stdoutPath_ = nullptr;
    // The time when the job was submitted.
    std::shared_ptr<string> submitTime_ = nullptr;
    // The variables of the job.
    std::shared_ptr<string> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
