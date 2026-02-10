// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODY_HPP_
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
  class ListUnfinishedOnceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnfinishedOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnfinishedOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnfinishedOnceTaskResponseBody() = default ;
    ListUnfinishedOnceTaskResponseBody(const ListUnfinishedOnceTaskResponseBody &) = default ;
    ListUnfinishedOnceTaskResponseBody(ListUnfinishedOnceTaskResponseBody &&) = default ;
    ListUnfinishedOnceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnfinishedOnceTaskResponseBody() = default ;
    ListUnfinishedOnceTaskResponseBody& operator=(const ListUnfinishedOnceTaskResponseBody &) = default ;
    ListUnfinishedOnceTaskResponseBody& operator=(ListUnfinishedOnceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnceTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnceTasks& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Finish, finish_);
        DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RealRunTime, realRunTime_);
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusText, statusText_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskImageInfo, taskImageInfo_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, OnceTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Finish, finish_);
        DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RealRunTime, realRunTime_);
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskImageInfo, taskImageInfo_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      OnceTasks() = default ;
      OnceTasks(const OnceTasks &) = default ;
      OnceTasks(OnceTasks &&) = default ;
      OnceTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnceTasks() = default ;
      OnceTasks& operator=(const OnceTasks &) = default ;
      OnceTasks& operator=(OnceTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskImageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskImageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(Digest, digest_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(NodeInstanceId, nodeInstanceId_);
          DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Pod, pod_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RepoId, repoId_);
          DARABONBA_PTR_TO_JSON(RepoName, repoName_);
          DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, TaskImageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(Digest, digest_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(NodeInstanceId, nodeInstanceId_);
          DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Pod, pod_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
          DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
          DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        TaskImageInfo() = default ;
        TaskImageInfo(const TaskImageInfo &) = default ;
        TaskImageInfo(TaskImageInfo &&) = default ;
        TaskImageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskImageInfo() = default ;
        TaskImageInfo& operator=(const TaskImageInfo &) = default ;
        TaskImageInfo& operator=(TaskImageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->digest_ == nullptr && this->image_ == nullptr && this->nodeInstanceId_ == nullptr
        && this->nodeIp_ == nullptr && this->nodeName_ == nullptr && this->pod_ == nullptr && this->regionId_ == nullptr && this->repoId_ == nullptr
        && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->repoRegionId_ == nullptr && this->tag_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline TaskImageInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline TaskImageInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline TaskImageInfo& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // digest Field Functions 
        bool hasDigest() const { return this->digest_ != nullptr;};
        void deleteDigest() { this->digest_ = nullptr;};
        inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
        inline TaskImageInfo& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline TaskImageInfo& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // nodeInstanceId Field Functions 
        bool hasNodeInstanceId() const { return this->nodeInstanceId_ != nullptr;};
        void deleteNodeInstanceId() { this->nodeInstanceId_ = nullptr;};
        inline string getNodeInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceId_, "") };
        inline TaskImageInfo& setNodeInstanceId(string nodeInstanceId) { DARABONBA_PTR_SET_VALUE(nodeInstanceId_, nodeInstanceId) };


        // nodeIp Field Functions 
        bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
        void deleteNodeIp() { this->nodeIp_ = nullptr;};
        inline string getNodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
        inline TaskImageInfo& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline TaskImageInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // pod Field Functions 
        bool hasPod() const { return this->pod_ != nullptr;};
        void deletePod() { this->pod_ = nullptr;};
        inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
        inline TaskImageInfo& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TaskImageInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // repoId Field Functions 
        bool hasRepoId() const { return this->repoId_ != nullptr;};
        void deleteRepoId() { this->repoId_ = nullptr;};
        inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
        inline TaskImageInfo& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline TaskImageInfo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


        // repoNamespace Field Functions 
        bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
        void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
        inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
        inline TaskImageInfo& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


        // repoRegionId Field Functions 
        bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
        void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
        inline string getRepoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
        inline TaskImageInfo& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline TaskImageInfo& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      protected:
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The ID of the cluster.
        shared_ptr<string> clusterId_ {};
        // The name of the cluster.
        shared_ptr<string> clusterName_ {};
        // The image digest.
        shared_ptr<string> digest_ {};
        // The container image.
        shared_ptr<string> image_ {};
        // The instance ID of the node.
        shared_ptr<string> nodeInstanceId_ {};
        // The IP address of the node.
        shared_ptr<string> nodeIp_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The pod of the image.
        shared_ptr<string> pod_ {};
        // The region ID of the server image.
        shared_ptr<string> regionId_ {};
        // The ID of the image repository.
        shared_ptr<string> repoId_ {};
        // The name of the image repository.
        shared_ptr<string> repoName_ {};
        // The namespace to which the image repository belongs.
        shared_ptr<string> repoNamespace_ {};
        // The region ID of the image repository.
        shared_ptr<string> repoRegionId_ {};
        // The image tag.
        shared_ptr<string> tag_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->finish_ == nullptr && this->finishCount_ == nullptr && this->progress_ == nullptr && this->realRunTime_ == nullptr && this->resultInfo_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusText_ == nullptr && this->target_ == nullptr && this->targetType_ == nullptr
        && this->taskId_ == nullptr && this->taskImageInfo_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline OnceTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline int32_t getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, 0) };
      inline OnceTasks& setFinish(int32_t finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // finishCount Field Functions 
      bool hasFinishCount() const { return this->finishCount_ != nullptr;};
      void deleteFinishCount() { this->finishCount_ = nullptr;};
      inline int32_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
      inline OnceTasks& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
      inline OnceTasks& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // realRunTime Field Functions 
      bool hasRealRunTime() const { return this->realRunTime_ != nullptr;};
      void deleteRealRunTime() { this->realRunTime_ = nullptr;};
      inline int64_t getRealRunTime() const { DARABONBA_PTR_GET_DEFAULT(realRunTime_, 0L) };
      inline OnceTasks& setRealRunTime(int64_t realRunTime) { DARABONBA_PTR_SET_VALUE(realRunTime_, realRunTime) };


      // resultInfo Field Functions 
      bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
      void deleteResultInfo() { this->resultInfo_ = nullptr;};
      inline string getResultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
      inline OnceTasks& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline OnceTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline OnceTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusText Field Functions 
      bool hasStatusText() const { return this->statusText_ != nullptr;};
      void deleteStatusText() { this->statusText_ = nullptr;};
      inline string getStatusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
      inline OnceTasks& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline OnceTasks& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline OnceTasks& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline OnceTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskImageInfo Field Functions 
      bool hasTaskImageInfo() const { return this->taskImageInfo_ != nullptr;};
      void deleteTaskImageInfo() { this->taskImageInfo_ = nullptr;};
      inline const OnceTasks::TaskImageInfo & getTaskImageInfo() const { DARABONBA_PTR_GET_CONST(taskImageInfo_, OnceTasks::TaskImageInfo) };
      inline OnceTasks::TaskImageInfo getTaskImageInfo() { DARABONBA_PTR_GET(taskImageInfo_, OnceTasks::TaskImageInfo) };
      inline OnceTasks& setTaskImageInfo(const OnceTasks::TaskImageInfo & taskImageInfo) { DARABONBA_PTR_SET_VALUE(taskImageInfo_, taskImageInfo) };
      inline OnceTasks& setTaskImageInfo(OnceTasks::TaskImageInfo && taskImageInfo) { DARABONBA_PTR_SET_RVALUE(taskImageInfo_, taskImageInfo) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline OnceTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline OnceTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline OnceTasks& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when the task ends.
      shared_ptr<int64_t> endTime_ {};
      // Indicates whether the task is complete. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> finish_ {};
      // The number of assets on which the task is complete.
      shared_ptr<int32_t> finishCount_ {};
      // The progress percentage of the task.
      shared_ptr<int64_t> progress_ {};
      // The execution duration of the task.
      shared_ptr<int64_t> realRunTime_ {};
      // The execution result of the task.
      shared_ptr<string> resultInfo_ {};
      // The time when the task is started.
      shared_ptr<int64_t> startTime_ {};
      // The status.
      shared_ptr<int32_t> status_ {};
      // The status of the task. Valid values:
      // 
      // *   **INIT**: The task is not started.
      // *   **START**: The task is started.
      // *   **SUCCESS**: The task is complete.
      // *   **TIMEOUT**: The task timed out.
      shared_ptr<string> statusText_ {};
      // The objective of the task.
      shared_ptr<string> target_ {};
      // The type of the assets that are scanned. Valid values:
      // 
      // *   **IMAGE_REPO**: image repository
      // *   **IMAGE**: image
      shared_ptr<string> targetType_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
      // The information about the image scan task.
      shared_ptr<OnceTasks::TaskImageInfo> taskImageInfo_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The type of the task.
      shared_ptr<string> taskType_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->onceTasks_ == nullptr
        && this->requestId_ == nullptr; };
    // onceTasks Field Functions 
    bool hasOnceTasks() const { return this->onceTasks_ != nullptr;};
    void deleteOnceTasks() { this->onceTasks_ = nullptr;};
    inline const vector<ListUnfinishedOnceTaskResponseBody::OnceTasks> & getOnceTasks() const { DARABONBA_PTR_GET_CONST(onceTasks_, vector<ListUnfinishedOnceTaskResponseBody::OnceTasks>) };
    inline vector<ListUnfinishedOnceTaskResponseBody::OnceTasks> getOnceTasks() { DARABONBA_PTR_GET(onceTasks_, vector<ListUnfinishedOnceTaskResponseBody::OnceTasks>) };
    inline ListUnfinishedOnceTaskResponseBody& setOnceTasks(const vector<ListUnfinishedOnceTaskResponseBody::OnceTasks> & onceTasks) { DARABONBA_PTR_SET_VALUE(onceTasks_, onceTasks) };
    inline ListUnfinishedOnceTaskResponseBody& setOnceTasks(vector<ListUnfinishedOnceTaskResponseBody::OnceTasks> && onceTasks) { DARABONBA_PTR_SET_RVALUE(onceTasks_, onceTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnfinishedOnceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the tasks.
    shared_ptr<vector<ListUnfinishedOnceTaskResponseBody::OnceTasks>> onceTasks_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
