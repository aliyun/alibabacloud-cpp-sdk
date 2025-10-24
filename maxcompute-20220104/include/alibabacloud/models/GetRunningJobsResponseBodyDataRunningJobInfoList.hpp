// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODYDATARUNNINGJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODYDATARUNNINGJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRunningJobsResponseBodyDataRunningJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningJobsResponseBodyDataRunningJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cuSnapshot, cuSnapshot_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(memorySnapshot, memorySnapshot_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_TO_JSON(runningAtTime, runningAtTime_);
      DARABONBA_PTR_TO_JSON(submittedAtTime, submittedAtTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningJobsResponseBodyDataRunningJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cuSnapshot, cuSnapshot_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(memorySnapshot, memorySnapshot_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(quotaNickname, quotaNickname_);
      DARABONBA_PTR_FROM_JSON(runningAtTime, runningAtTime_);
      DARABONBA_PTR_FROM_JSON(submittedAtTime, submittedAtTime_);
    };
    GetRunningJobsResponseBodyDataRunningJobInfoList() = default ;
    GetRunningJobsResponseBodyDataRunningJobInfoList(const GetRunningJobsResponseBodyDataRunningJobInfoList &) = default ;
    GetRunningJobsResponseBodyDataRunningJobInfoList(GetRunningJobsResponseBodyDataRunningJobInfoList &&) = default ;
    GetRunningJobsResponseBodyDataRunningJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningJobsResponseBodyDataRunningJobInfoList() = default ;
    GetRunningJobsResponseBodyDataRunningJobInfoList& operator=(const GetRunningJobsResponseBodyDataRunningJobInfoList &) = default ;
    GetRunningJobsResponseBodyDataRunningJobInfoList& operator=(GetRunningJobsResponseBodyDataRunningJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cuSnapshot_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobOwner_ == nullptr && return this->memorySnapshot_ == nullptr && return this->progress_ == nullptr && return this->project_ == nullptr
        && return this->quotaNickname_ == nullptr && return this->runningAtTime_ == nullptr && return this->submittedAtTime_ == nullptr; };
    // cuSnapshot Field Functions 
    bool hasCuSnapshot() const { return this->cuSnapshot_ != nullptr;};
    void deleteCuSnapshot() { this->cuSnapshot_ = nullptr;};
    inline double cuSnapshot() const { DARABONBA_PTR_GET_DEFAULT(cuSnapshot_, 0.0) };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setCuSnapshot(double cuSnapshot) { DARABONBA_PTR_SET_VALUE(cuSnapshot_, cuSnapshot) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // memorySnapshot Field Functions 
    bool hasMemorySnapshot() const { return this->memorySnapshot_ != nullptr;};
    void deleteMemorySnapshot() { this->memorySnapshot_ = nullptr;};
    inline double memorySnapshot() const { DARABONBA_PTR_GET_DEFAULT(memorySnapshot_, 0.0) };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setMemorySnapshot(double memorySnapshot) { DARABONBA_PTR_SET_VALUE(memorySnapshot_, memorySnapshot) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline double progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setProgress(double progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // quotaNickname Field Functions 
    bool hasQuotaNickname() const { return this->quotaNickname_ != nullptr;};
    void deleteQuotaNickname() { this->quotaNickname_ = nullptr;};
    inline string quotaNickname() const { DARABONBA_PTR_GET_DEFAULT(quotaNickname_, "") };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setQuotaNickname(string quotaNickname) { DARABONBA_PTR_SET_VALUE(quotaNickname_, quotaNickname) };


    // runningAtTime Field Functions 
    bool hasRunningAtTime() const { return this->runningAtTime_ != nullptr;};
    void deleteRunningAtTime() { this->runningAtTime_ = nullptr;};
    inline int64_t runningAtTime() const { DARABONBA_PTR_GET_DEFAULT(runningAtTime_, 0L) };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setRunningAtTime(int64_t runningAtTime) { DARABONBA_PTR_SET_VALUE(runningAtTime_, runningAtTime) };


    // submittedAtTime Field Functions 
    bool hasSubmittedAtTime() const { return this->submittedAtTime_ != nullptr;};
    void deleteSubmittedAtTime() { this->submittedAtTime_ = nullptr;};
    inline int64_t submittedAtTime() const { DARABONBA_PTR_GET_DEFAULT(submittedAtTime_, 0L) };
    inline GetRunningJobsResponseBodyDataRunningJobInfoList& setSubmittedAtTime(int64_t submittedAtTime) { DARABONBA_PTR_SET_VALUE(submittedAtTime_, submittedAtTime) };


  protected:
    // The compute unit (CU) snapshot proportion of the job.
    std::shared_ptr<double> cuSnapshot_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The account that submits the job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The memory snapshot proportion of the job.
    std::shared_ptr<double> memorySnapshot_ = nullptr;
    // The progress of the job.
    std::shared_ptr<double> progress_ = nullptr;
    // The name of the MaxCompute project.
    std::shared_ptr<string> project_ = nullptr;
    // The nickname of the quota that is used by the job.
    std::shared_ptr<string> quotaNickname_ = nullptr;
    // The time when the job starts to run.
    std::shared_ptr<int64_t> runningAtTime_ = nullptr;
    // The time when the job is submitted.
    std::shared_ptr<int64_t> submittedAtTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
