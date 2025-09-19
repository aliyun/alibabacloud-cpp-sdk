// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODYBUILDTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODYBUILDTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageFixTaskResponseBodyBuildTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFixTaskResponseBodyBuildTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
      DARABONBA_PTR_TO_JSON(NewTag, newTag_);
      DARABONBA_PTR_TO_JSON(NewUuid, newUuid_);
      DARABONBA_PTR_TO_JSON(OldTag, oldTag_);
      DARABONBA_PTR_TO_JSON(OldUuid, oldUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VulAlias, vulAlias_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFixTaskResponseBodyBuildTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
      DARABONBA_PTR_FROM_JSON(NewTag, newTag_);
      DARABONBA_PTR_FROM_JSON(NewUuid, newUuid_);
      DARABONBA_PTR_FROM_JSON(OldTag, oldTag_);
      DARABONBA_PTR_FROM_JSON(OldUuid, oldUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VulAlias, vulAlias_);
    };
    DescribeImageFixTaskResponseBodyBuildTasks() = default ;
    DescribeImageFixTaskResponseBodyBuildTasks(const DescribeImageFixTaskResponseBodyBuildTasks &) = default ;
    DescribeImageFixTaskResponseBodyBuildTasks(DescribeImageFixTaskResponseBodyBuildTasks &&) = default ;
    DescribeImageFixTaskResponseBodyBuildTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFixTaskResponseBodyBuildTasks() = default ;
    DescribeImageFixTaskResponseBodyBuildTasks& operator=(const DescribeImageFixTaskResponseBodyBuildTasks &) = default ;
    DescribeImageFixTaskResponseBodyBuildTasks& operator=(DescribeImageFixTaskResponseBodyBuildTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildTaskId_ != nullptr
        && this->finishTime_ != nullptr && this->fixTime_ != nullptr && this->newTag_ != nullptr && this->newUuid_ != nullptr && this->oldTag_ != nullptr
        && this->oldUuid_ != nullptr && this->regionId_ != nullptr && this->repoName_ != nullptr && this->repoNamespace_ != nullptr && this->status_ != nullptr
        && this->taskType_ != nullptr && this->vulAlias_ != nullptr; };
    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string buildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // fixTime Field Functions 
    bool hasFixTime() const { return this->fixTime_ != nullptr;};
    void deleteFixTime() { this->fixTime_ = nullptr;};
    inline string fixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setFixTime(string fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


    // newTag Field Functions 
    bool hasNewTag() const { return this->newTag_ != nullptr;};
    void deleteNewTag() { this->newTag_ = nullptr;};
    inline string newTag() const { DARABONBA_PTR_GET_DEFAULT(newTag_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setNewTag(string newTag) { DARABONBA_PTR_SET_VALUE(newTag_, newTag) };


    // newUuid Field Functions 
    bool hasNewUuid() const { return this->newUuid_ != nullptr;};
    void deleteNewUuid() { this->newUuid_ = nullptr;};
    inline string newUuid() const { DARABONBA_PTR_GET_DEFAULT(newUuid_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setNewUuid(string newUuid) { DARABONBA_PTR_SET_VALUE(newUuid_, newUuid) };


    // oldTag Field Functions 
    bool hasOldTag() const { return this->oldTag_ != nullptr;};
    void deleteOldTag() { this->oldTag_ = nullptr;};
    inline string oldTag() const { DARABONBA_PTR_GET_DEFAULT(oldTag_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setOldTag(string oldTag) { DARABONBA_PTR_SET_VALUE(oldTag_, oldTag) };


    // oldUuid Field Functions 
    bool hasOldUuid() const { return this->oldUuid_ != nullptr;};
    void deleteOldUuid() { this->oldUuid_ = nullptr;};
    inline string oldUuid() const { DARABONBA_PTR_GET_DEFAULT(oldUuid_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setOldUuid(string oldUuid) { DARABONBA_PTR_SET_VALUE(oldUuid_, oldUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // vulAlias Field Functions 
    bool hasVulAlias() const { return this->vulAlias_ != nullptr;};
    void deleteVulAlias() { this->vulAlias_ = nullptr;};
    inline string vulAlias() const { DARABONBA_PTR_GET_DEFAULT(vulAlias_, "") };
    inline DescribeImageFixTaskResponseBodyBuildTasks& setVulAlias(string vulAlias) { DARABONBA_PTR_SET_VALUE(vulAlias_, vulAlias) };


  protected:
    // The ID of the task.
    std::shared_ptr<string> buildTaskId_ = nullptr;
    // The timestamp when the task starts. Unit: milliseconds.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The timestamp when the task ends. Unit: milliseconds.
    std::shared_ptr<string> fixTime_ = nullptr;
    // The version of the image after image risks are fixed.
    std::shared_ptr<string> newTag_ = nullptr;
    // The UUID of the image after image risks are fixed.
    std::shared_ptr<string> newUuid_ = nullptr;
    // The version of the image.
    std::shared_ptr<string> oldTag_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> oldUuid_ = nullptr;
    // The region of the image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace of the image.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **1**: The task is running.
    // *   **2**: The task is successful.
    // *   **3**: The task failed.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the task. The value is fixed as IMAGE_REPAIR. The value indicates a task that fixes image risks.
    std::shared_ptr<string> taskType_ = nullptr;
    // The alias of the fixed vulnerability.
    std::shared_ptr<string> vulAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
