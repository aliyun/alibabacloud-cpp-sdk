// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels.hpp>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress.hpp>
#include <alibabacloud/models/DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorTaskListResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorTaskListResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_TO_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_TO_JSON(CollectTargetEndpoint, collectTargetEndpoint_);
      DARABONBA_PTR_TO_JSON(CollectTargetPath, collectTargetPath_);
      DARABONBA_PTR_TO_JSON(CollectTargetType, collectTargetType_);
      DARABONBA_PTR_TO_JSON(CollectTimout, collectTimout_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(LogFilePath, logFilePath_);
      DARABONBA_PTR_TO_JSON(LogProcess, logProcess_);
      DARABONBA_PTR_TO_JSON(LogSample, logSample_);
      DARABONBA_PTR_TO_JSON(LogSplit, logSplit_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressRelation, matchExpressRelation_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SLSProcess, SLSProcess_);
      DARABONBA_PTR_TO_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UploadRegion, uploadRegion_);
      DARABONBA_PTR_TO_JSON(YARMConfig, YARMConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorTaskListResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_FROM_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_FROM_JSON(CollectTargetEndpoint, collectTargetEndpoint_);
      DARABONBA_PTR_FROM_JSON(CollectTargetPath, collectTargetPath_);
      DARABONBA_PTR_FROM_JSON(CollectTargetType, collectTargetType_);
      DARABONBA_PTR_FROM_JSON(CollectTimout, collectTimout_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(LogFilePath, logFilePath_);
      DARABONBA_PTR_FROM_JSON(LogProcess, logProcess_);
      DARABONBA_PTR_FROM_JSON(LogSample, logSample_);
      DARABONBA_PTR_FROM_JSON(LogSplit, logSplit_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressRelation, matchExpressRelation_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SLSProcess, SLSProcess_);
      DARABONBA_PTR_FROM_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UploadRegion, uploadRegion_);
      DARABONBA_PTR_FROM_JSON(YARMConfig, YARMConfig_);
    };
    DescribeHybridMonitorTaskListResponseBodyTaskList() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskList(const DescribeHybridMonitorTaskListResponseBodyTaskList &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskList(DescribeHybridMonitorTaskListResponseBodyTaskList &&) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorTaskListResponseBodyTaskList() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskList& operator=(const DescribeHybridMonitorTaskListResponseBodyTaskList &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskList& operator=(DescribeHybridMonitorTaskListResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachLabels_ != nullptr
        && this->collectInterval_ != nullptr && this->collectTargetEndpoint_ != nullptr && this->collectTargetPath_ != nullptr && this->collectTargetType_ != nullptr && this->collectTimout_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->extraInfo_ != nullptr && this->groupId_ != nullptr && this->instances_ != nullptr
        && this->logFilePath_ != nullptr && this->logProcess_ != nullptr && this->logSample_ != nullptr && this->logSplit_ != nullptr && this->matchExpress_ != nullptr
        && this->matchExpressRelation_ != nullptr && this->namespace_ != nullptr && this->networkType_ != nullptr && this->SLSProcess_ != nullptr && this->SLSProcessConfig_ != nullptr
        && this->targetUserId_ != nullptr && this->taskId_ != nullptr && this->taskName_ != nullptr && this->taskType_ != nullptr && this->uploadRegion_ != nullptr
        && this->YARMConfig_ != nullptr; };
    // attachLabels Field Functions 
    bool hasAttachLabels() const { return this->attachLabels_ != nullptr;};
    void deleteAttachLabels() { this->attachLabels_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels> & attachLabels() const { DARABONBA_PTR_GET_CONST(attachLabels_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels>) };
    inline vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels> attachLabels() { DARABONBA_PTR_GET(attachLabels_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setAttachLabels(const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels> & attachLabels) { DARABONBA_PTR_SET_VALUE(attachLabels_, attachLabels) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setAttachLabels(vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels> && attachLabels) { DARABONBA_PTR_SET_RVALUE(attachLabels_, attachLabels) };


    // collectInterval Field Functions 
    bool hasCollectInterval() const { return this->collectInterval_ != nullptr;};
    void deleteCollectInterval() { this->collectInterval_ = nullptr;};
    inline int32_t collectInterval() const { DARABONBA_PTR_GET_DEFAULT(collectInterval_, 0) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCollectInterval(int32_t collectInterval) { DARABONBA_PTR_SET_VALUE(collectInterval_, collectInterval) };


    // collectTargetEndpoint Field Functions 
    bool hasCollectTargetEndpoint() const { return this->collectTargetEndpoint_ != nullptr;};
    void deleteCollectTargetEndpoint() { this->collectTargetEndpoint_ = nullptr;};
    inline string collectTargetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(collectTargetEndpoint_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCollectTargetEndpoint(string collectTargetEndpoint) { DARABONBA_PTR_SET_VALUE(collectTargetEndpoint_, collectTargetEndpoint) };


    // collectTargetPath Field Functions 
    bool hasCollectTargetPath() const { return this->collectTargetPath_ != nullptr;};
    void deleteCollectTargetPath() { this->collectTargetPath_ = nullptr;};
    inline string collectTargetPath() const { DARABONBA_PTR_GET_DEFAULT(collectTargetPath_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCollectTargetPath(string collectTargetPath) { DARABONBA_PTR_SET_VALUE(collectTargetPath_, collectTargetPath) };


    // collectTargetType Field Functions 
    bool hasCollectTargetType() const { return this->collectTargetType_ != nullptr;};
    void deleteCollectTargetType() { this->collectTargetType_ = nullptr;};
    inline string collectTargetType() const { DARABONBA_PTR_GET_DEFAULT(collectTargetType_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCollectTargetType(string collectTargetType) { DARABONBA_PTR_SET_VALUE(collectTargetType_, collectTargetType) };


    // collectTimout Field Functions 
    bool hasCollectTimout() const { return this->collectTimout_ != nullptr;};
    void deleteCollectTimout() { this->collectTimout_ = nullptr;};
    inline int32_t collectTimout() const { DARABONBA_PTR_GET_DEFAULT(collectTimout_, 0) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCollectTimout(int32_t collectTimout) { DARABONBA_PTR_SET_VALUE(collectTimout_, collectTimout) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // logFilePath Field Functions 
    bool hasLogFilePath() const { return this->logFilePath_ != nullptr;};
    void deleteLogFilePath() { this->logFilePath_ = nullptr;};
    inline string logFilePath() const { DARABONBA_PTR_GET_DEFAULT(logFilePath_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setLogFilePath(string logFilePath) { DARABONBA_PTR_SET_VALUE(logFilePath_, logFilePath) };


    // logProcess Field Functions 
    bool hasLogProcess() const { return this->logProcess_ != nullptr;};
    void deleteLogProcess() { this->logProcess_ = nullptr;};
    inline string logProcess() const { DARABONBA_PTR_GET_DEFAULT(logProcess_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setLogProcess(string logProcess) { DARABONBA_PTR_SET_VALUE(logProcess_, logProcess) };


    // logSample Field Functions 
    bool hasLogSample() const { return this->logSample_ != nullptr;};
    void deleteLogSample() { this->logSample_ = nullptr;};
    inline string logSample() const { DARABONBA_PTR_GET_DEFAULT(logSample_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setLogSample(string logSample) { DARABONBA_PTR_SET_VALUE(logSample_, logSample) };


    // logSplit Field Functions 
    bool hasLogSplit() const { return this->logSplit_ != nullptr;};
    void deleteLogSplit() { this->logSplit_ = nullptr;};
    inline string logSplit() const { DARABONBA_PTR_GET_DEFAULT(logSplit_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setLogSplit(string logSplit) { DARABONBA_PTR_SET_VALUE(logSplit_, logSplit) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress> & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress>) };
    inline vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress> matchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress>) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setMatchExpress(const vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setMatchExpress(vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressRelation Field Functions 
    bool hasMatchExpressRelation() const { return this->matchExpressRelation_ != nullptr;};
    void deleteMatchExpressRelation() { this->matchExpressRelation_ = nullptr;};
    inline string matchExpressRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressRelation_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setMatchExpressRelation(string matchExpressRelation) { DARABONBA_PTR_SET_VALUE(matchExpressRelation_, matchExpressRelation) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // SLSProcess Field Functions 
    bool hasSLSProcess() const { return this->SLSProcess_ != nullptr;};
    void deleteSLSProcess() { this->SLSProcess_ = nullptr;};
    inline string SLSProcess() const { DARABONBA_PTR_GET_DEFAULT(SLSProcess_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setSLSProcess(string SLSProcess) { DARABONBA_PTR_SET_VALUE(SLSProcess_, SLSProcess) };


    // SLSProcessConfig Field Functions 
    bool hasSLSProcessConfig() const { return this->SLSProcessConfig_ != nullptr;};
    void deleteSLSProcessConfig() { this->SLSProcessConfig_ = nullptr;};
    inline const Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig & SLSProcessConfig() const { DARABONBA_PTR_GET_CONST(SLSProcessConfig_, Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig) };
    inline Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig SLSProcessConfig() { DARABONBA_PTR_GET(SLSProcessConfig_, Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setSLSProcessConfig(const Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig & SLSProcessConfig) { DARABONBA_PTR_SET_VALUE(SLSProcessConfig_, SLSProcessConfig) };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setSLSProcessConfig(Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig && SLSProcessConfig) { DARABONBA_PTR_SET_RVALUE(SLSProcessConfig_, SLSProcessConfig) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // uploadRegion Field Functions 
    bool hasUploadRegion() const { return this->uploadRegion_ != nullptr;};
    void deleteUploadRegion() { this->uploadRegion_ = nullptr;};
    inline string uploadRegion() const { DARABONBA_PTR_GET_DEFAULT(uploadRegion_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setUploadRegion(string uploadRegion) { DARABONBA_PTR_SET_VALUE(uploadRegion_, uploadRegion) };


    // YARMConfig Field Functions 
    bool hasYARMConfig() const { return this->YARMConfig_ != nullptr;};
    void deleteYARMConfig() { this->YARMConfig_ = nullptr;};
    inline string YARMConfig() const { DARABONBA_PTR_GET_DEFAULT(YARMConfig_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskList& setYARMConfig(string YARMConfig) { DARABONBA_PTR_SET_VALUE(YARMConfig_, YARMConfig) };


  protected:
    // The tags of the metric import task.
    std::shared_ptr<vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListAttachLabels>> attachLabels_ = nullptr;
    // The interval at which the CloudMonitor agent collects host monitoring data. Valid values:
    // 
    // *   15
    // *   30
    // *   60
    // 
    // Unit: seconds.
    std::shared_ptr<int32_t> collectInterval_ = nullptr;
    // The URL of the destination from which the CloudMonitor agent collects host monitoring data.
    std::shared_ptr<string> collectTargetEndpoint_ = nullptr;
    // The relative path from which the CloudMonitor agent collects monitoring data.
    std::shared_ptr<string> collectTargetPath_ = nullptr;
    // The type of the monitoring data. Valid values: Spring, Tomcat, Nginx, Tengine, JVM, Redis, and MySQL.
    std::shared_ptr<string> collectTargetType_ = nullptr;
    // The timeout period during which the CloudMonitor agent collects host monitoring data. Valid values:
    // 
    // *   0
    // *   15
    // *   30
    // *   60
    // 
    // Unit: seconds.
    std::shared_ptr<int32_t> collectTimout_ = nullptr;
    // The timestamp when the metric import task was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the metric import task.
    std::shared_ptr<string> description_ = nullptr;
    // The additional information of the instance.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The instances where monitoring data is collected in batches.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    std::shared_ptr<string> logFilePath_ = nullptr;
    // The method that is used to aggregate on-premises log data.
    std::shared_ptr<string> logProcess_ = nullptr;
    // The sample on-premises log.
    std::shared_ptr<string> logSample_ = nullptr;
    // The result that is returned after on-premises log data is split based on the specified matching mode.
    // 
    // > The matching modes of on-premises log data include full regex mode, delimiter mode, and JSON mode.
    std::shared_ptr<string> logSplit_ = nullptr;
    // The conditions that are used to match the instances in the application group.
    std::shared_ptr<vector<Models::DescribeHybridMonitorTaskListResponseBodyTaskListMatchExpress>> matchExpress_ = nullptr;
    // The relationship between the conditions that are used to filter metric import tasks. Valid values:
    // 
    // *   or
    // *   and
    std::shared_ptr<string> matchExpressRelation_ = nullptr;
    // The namespace to which the host belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The network type of the host. Valid values:
    // 
    // *   `vpc`
    // *   `Internet`
    std::shared_ptr<string> networkType_ = nullptr;
    // The configurations of the logs that are imported from Log Service.
    std::shared_ptr<string> SLSProcess_ = nullptr;
    // The configurations of the logs that are imported from Log Service.
    // 
    // > This parameter is returned only if the `TaskType` parameter is set to `aliyun_sls`.
    std::shared_ptr<Models::DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfig> SLSProcessConfig_ = nullptr;
    // The ID of the member account.
    // 
    // > This parameter is displayed only when you call this operation by using a management account.
    std::shared_ptr<string> targetUserId_ = nullptr;
    // The ID of the metric import task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the metric import task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the metric import task. Valid values:
    // 
    // *   aliyun_fc: metric import tasks for Alibaba Cloud services
    // *   aliyun_sls: metrics for logs imported from Log Service
    std::shared_ptr<string> taskType_ = nullptr;
    // The region where the host resides.
    std::shared_ptr<string> uploadRegion_ = nullptr;
    // The configuration file of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring.
    // 
    // *   namespace: the namespace of the Alibaba Cloud service.
    // *   metric_list: the metrics of the Alibaba Cloud service.
    std::shared_ptr<string> YARMConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
