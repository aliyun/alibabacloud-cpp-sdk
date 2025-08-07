// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyJobListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AppExtraInfo, appExtraInfo_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
      DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppExtraInfo, appExtraInfo_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
      DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
    };
    ListJobsResponseBodyJobList() = default ;
    ListJobsResponseBodyJobList(const ListJobsResponseBodyJobList &) = default ;
    ListJobsResponseBodyJobList(ListJobsResponseBodyJobList &&) = default ;
    ListJobsResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobList() = default ;
    ListJobsResponseBodyJobList& operator=(const ListJobsResponseBodyJobList &) = default ;
    ListJobsResponseBodyJobList& operator=(ListJobsResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appExtraInfo_ != nullptr
        && this->appName_ != nullptr && this->createTime_ != nullptr && this->endTime_ != nullptr && this->executorCount_ != nullptr && this->jobDescription_ != nullptr
        && this->jobId_ != nullptr && this->jobName_ != nullptr && this->ownerUid_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->taskCount_ != nullptr && this->taskSustainable_ != nullptr; };
    // appExtraInfo Field Functions 
    bool hasAppExtraInfo() const { return this->appExtraInfo_ != nullptr;};
    void deleteAppExtraInfo() { this->appExtraInfo_ = nullptr;};
    inline string appExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(appExtraInfo_, "") };
    inline ListJobsResponseBodyJobList& setAppExtraInfo(string appExtraInfo) { DARABONBA_PTR_SET_VALUE(appExtraInfo_, appExtraInfo) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListJobsResponseBodyJobList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobsResponseBodyJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobsResponseBodyJobList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executorCount Field Functions 
    bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
    void deleteExecutorCount() { this->executorCount_ = nullptr;};
    inline int32_t executorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, 0) };
    inline ListJobsResponseBodyJobList& setExecutorCount(int32_t executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline ListJobsResponseBodyJobList& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsResponseBodyJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListJobsResponseBodyJobList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline ListJobsResponseBodyJobList& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobsResponseBodyJobList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsResponseBodyJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListJobsResponseBodyJobListTags>) };
    inline vector<Models::ListJobsResponseBodyJobListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListJobsResponseBodyJobListTags>) };
    inline ListJobsResponseBodyJobList& setTags(const vector<Models::ListJobsResponseBodyJobListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListJobsResponseBodyJobList& setTags(vector<Models::ListJobsResponseBodyJobListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskCount Field Functions 
    bool hasTaskCount() const { return this->taskCount_ != nullptr;};
    void deleteTaskCount() { this->taskCount_ = nullptr;};
    inline int32_t taskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
    inline ListJobsResponseBodyJobList& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


    // taskSustainable Field Functions 
    bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
    void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
    inline bool taskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
    inline ListJobsResponseBodyJobList& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


  protected:
    std::shared_ptr<string> appExtraInfo_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> executorCount_ = nullptr;
    std::shared_ptr<string> jobDescription_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> ownerUid_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobListTags>> tags_ = nullptr;
    std::shared_ptr<int32_t> taskCount_ = nullptr;
    std::shared_ptr<bool> taskSustainable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
