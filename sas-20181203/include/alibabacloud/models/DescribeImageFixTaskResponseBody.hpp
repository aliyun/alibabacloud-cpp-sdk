// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageFixTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFixTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTasks, buildTasks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFixTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTasks, buildTasks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageFixTaskResponseBody() = default ;
    DescribeImageFixTaskResponseBody(const DescribeImageFixTaskResponseBody &) = default ;
    DescribeImageFixTaskResponseBody(DescribeImageFixTaskResponseBody &&) = default ;
    DescribeImageFixTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFixTaskResponseBody() = default ;
    DescribeImageFixTaskResponseBody& operator=(const DescribeImageFixTaskResponseBody &) = default ;
    DescribeImageFixTaskResponseBody& operator=(DescribeImageFixTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of tasks returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page. Default value: **1**
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**
      shared_ptr<int32_t> pageSize_ {};
      // The total number of tasks returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BuildTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildTasks& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BuildTasks& obj) { 
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
      BuildTasks() = default ;
      BuildTasks(const BuildTasks &) = default ;
      BuildTasks(BuildTasks &&) = default ;
      BuildTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildTasks() = default ;
      BuildTasks& operator=(const BuildTasks &) = default ;
      BuildTasks& operator=(BuildTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buildTaskId_ == nullptr
        && this->finishTime_ == nullptr && this->fixTime_ == nullptr && this->newTag_ == nullptr && this->newUuid_ == nullptr && this->oldTag_ == nullptr
        && this->oldUuid_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->status_ == nullptr
        && this->taskType_ == nullptr && this->vulAlias_ == nullptr; };
      // buildTaskId Field Functions 
      bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
      void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
      inline string getBuildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
      inline BuildTasks& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline BuildTasks& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // fixTime Field Functions 
      bool hasFixTime() const { return this->fixTime_ != nullptr;};
      void deleteFixTime() { this->fixTime_ = nullptr;};
      inline string getFixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, "") };
      inline BuildTasks& setFixTime(string fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


      // newTag Field Functions 
      bool hasNewTag() const { return this->newTag_ != nullptr;};
      void deleteNewTag() { this->newTag_ = nullptr;};
      inline string getNewTag() const { DARABONBA_PTR_GET_DEFAULT(newTag_, "") };
      inline BuildTasks& setNewTag(string newTag) { DARABONBA_PTR_SET_VALUE(newTag_, newTag) };


      // newUuid Field Functions 
      bool hasNewUuid() const { return this->newUuid_ != nullptr;};
      void deleteNewUuid() { this->newUuid_ = nullptr;};
      inline string getNewUuid() const { DARABONBA_PTR_GET_DEFAULT(newUuid_, "") };
      inline BuildTasks& setNewUuid(string newUuid) { DARABONBA_PTR_SET_VALUE(newUuid_, newUuid) };


      // oldTag Field Functions 
      bool hasOldTag() const { return this->oldTag_ != nullptr;};
      void deleteOldTag() { this->oldTag_ = nullptr;};
      inline string getOldTag() const { DARABONBA_PTR_GET_DEFAULT(oldTag_, "") };
      inline BuildTasks& setOldTag(string oldTag) { DARABONBA_PTR_SET_VALUE(oldTag_, oldTag) };


      // oldUuid Field Functions 
      bool hasOldUuid() const { return this->oldUuid_ != nullptr;};
      void deleteOldUuid() { this->oldUuid_ = nullptr;};
      inline string getOldUuid() const { DARABONBA_PTR_GET_DEFAULT(oldUuid_, "") };
      inline BuildTasks& setOldUuid(string oldUuid) { DARABONBA_PTR_SET_VALUE(oldUuid_, oldUuid) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BuildTasks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline BuildTasks& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline BuildTasks& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline BuildTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline BuildTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // vulAlias Field Functions 
      bool hasVulAlias() const { return this->vulAlias_ != nullptr;};
      void deleteVulAlias() { this->vulAlias_ = nullptr;};
      inline string getVulAlias() const { DARABONBA_PTR_GET_DEFAULT(vulAlias_, "") };
      inline BuildTasks& setVulAlias(string vulAlias) { DARABONBA_PTR_SET_VALUE(vulAlias_, vulAlias) };


    protected:
      // The ID of the task.
      shared_ptr<string> buildTaskId_ {};
      // The timestamp when the task starts. Unit: milliseconds.
      shared_ptr<string> finishTime_ {};
      // The timestamp when the task ends. Unit: milliseconds.
      shared_ptr<string> fixTime_ {};
      // The version of the image after image risks are fixed.
      shared_ptr<string> newTag_ {};
      // The UUID of the image after image risks are fixed.
      shared_ptr<string> newUuid_ {};
      // The version of the image.
      shared_ptr<string> oldTag_ {};
      // The UUID of the image.
      shared_ptr<string> oldUuid_ {};
      // The region of the image.
      shared_ptr<string> regionId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace of the image.
      shared_ptr<string> repoNamespace_ {};
      // The status of the task. Valid values:
      // 
      // *   **1**: The task is running.
      // *   **2**: The task is successful.
      // *   **3**: The task failed.
      shared_ptr<int32_t> status_ {};
      // The type of the task. The value is fixed as IMAGE_REPAIR. The value indicates a task that fixes image risks.
      shared_ptr<string> taskType_ {};
      // The alias of the fixed vulnerability.
      shared_ptr<string> vulAlias_ {};
    };

    virtual bool empty() const override { return this->buildTasks_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // buildTasks Field Functions 
    bool hasBuildTasks() const { return this->buildTasks_ != nullptr;};
    void deleteBuildTasks() { this->buildTasks_ = nullptr;};
    inline const vector<DescribeImageFixTaskResponseBody::BuildTasks> & getBuildTasks() const { DARABONBA_PTR_GET_CONST(buildTasks_, vector<DescribeImageFixTaskResponseBody::BuildTasks>) };
    inline vector<DescribeImageFixTaskResponseBody::BuildTasks> getBuildTasks() { DARABONBA_PTR_GET(buildTasks_, vector<DescribeImageFixTaskResponseBody::BuildTasks>) };
    inline DescribeImageFixTaskResponseBody& setBuildTasks(const vector<DescribeImageFixTaskResponseBody::BuildTasks> & buildTasks) { DARABONBA_PTR_SET_VALUE(buildTasks_, buildTasks) };
    inline DescribeImageFixTaskResponseBody& setBuildTasks(vector<DescribeImageFixTaskResponseBody::BuildTasks> && buildTasks) { DARABONBA_PTR_SET_RVALUE(buildTasks_, buildTasks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageFixTaskResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageFixTaskResponseBody::PageInfo) };
    inline DescribeImageFixTaskResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageFixTaskResponseBody::PageInfo) };
    inline DescribeImageFixTaskResponseBody& setPageInfo(const DescribeImageFixTaskResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageFixTaskResponseBody& setPageInfo(DescribeImageFixTaskResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageFixTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tasks returned.
    shared_ptr<vector<DescribeImageFixTaskResponseBody::BuildTasks>> buildTasks_ {};
    // The pagination information.
    shared_ptr<DescribeImageFixTaskResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
