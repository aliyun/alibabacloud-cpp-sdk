// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestAttachLabels.hpp>
#include <alibabacloud/models/CreateHybridMonitorTaskRequestSLSProcessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHybridMonitorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_TO_JSON(CloudAccessId, cloudAccessId_);
      DARABONBA_PTR_TO_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_TO_JSON(CollectTargetType, collectTargetType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(TargetUserIdList, targetUserIdList_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(YARMConfig, YARMConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_FROM_JSON(CloudAccessId, cloudAccessId_);
      DARABONBA_PTR_FROM_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_FROM_JSON(CollectTargetType, collectTargetType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(TargetUserIdList, targetUserIdList_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(YARMConfig, YARMConfig_);
    };
    CreateHybridMonitorTaskRequest() = default ;
    CreateHybridMonitorTaskRequest(const CreateHybridMonitorTaskRequest &) = default ;
    CreateHybridMonitorTaskRequest(CreateHybridMonitorTaskRequest &&) = default ;
    CreateHybridMonitorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridMonitorTaskRequest() = default ;
    CreateHybridMonitorTaskRequest& operator=(const CreateHybridMonitorTaskRequest &) = default ;
    CreateHybridMonitorTaskRequest& operator=(CreateHybridMonitorTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachLabels_ == nullptr
        && return this->cloudAccessId_ == nullptr && return this->collectInterval_ == nullptr && return this->collectTargetType_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr
        && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->SLSProcessConfig_ == nullptr && return this->targetUserId_ == nullptr && return this->targetUserIdList_ == nullptr
        && return this->taskName_ == nullptr && return this->taskType_ == nullptr && return this->YARMConfig_ == nullptr; };
    // attachLabels Field Functions 
    bool hasAttachLabels() const { return this->attachLabels_ != nullptr;};
    void deleteAttachLabels() { this->attachLabels_ = nullptr;};
    inline const vector<CreateHybridMonitorTaskRequestAttachLabels> & attachLabels() const { DARABONBA_PTR_GET_CONST(attachLabels_, vector<CreateHybridMonitorTaskRequestAttachLabels>) };
    inline vector<CreateHybridMonitorTaskRequestAttachLabels> attachLabels() { DARABONBA_PTR_GET(attachLabels_, vector<CreateHybridMonitorTaskRequestAttachLabels>) };
    inline CreateHybridMonitorTaskRequest& setAttachLabels(const vector<CreateHybridMonitorTaskRequestAttachLabels> & attachLabels) { DARABONBA_PTR_SET_VALUE(attachLabels_, attachLabels) };
    inline CreateHybridMonitorTaskRequest& setAttachLabels(vector<CreateHybridMonitorTaskRequestAttachLabels> && attachLabels) { DARABONBA_PTR_SET_RVALUE(attachLabels_, attachLabels) };


    // cloudAccessId Field Functions 
    bool hasCloudAccessId() const { return this->cloudAccessId_ != nullptr;};
    void deleteCloudAccessId() { this->cloudAccessId_ = nullptr;};
    inline const vector<string> & cloudAccessId() const { DARABONBA_PTR_GET_CONST(cloudAccessId_, vector<string>) };
    inline vector<string> cloudAccessId() { DARABONBA_PTR_GET(cloudAccessId_, vector<string>) };
    inline CreateHybridMonitorTaskRequest& setCloudAccessId(const vector<string> & cloudAccessId) { DARABONBA_PTR_SET_VALUE(cloudAccessId_, cloudAccessId) };
    inline CreateHybridMonitorTaskRequest& setCloudAccessId(vector<string> && cloudAccessId) { DARABONBA_PTR_SET_RVALUE(cloudAccessId_, cloudAccessId) };


    // collectInterval Field Functions 
    bool hasCollectInterval() const { return this->collectInterval_ != nullptr;};
    void deleteCollectInterval() { this->collectInterval_ = nullptr;};
    inline string collectInterval() const { DARABONBA_PTR_GET_DEFAULT(collectInterval_, "") };
    inline CreateHybridMonitorTaskRequest& setCollectInterval(string collectInterval) { DARABONBA_PTR_SET_VALUE(collectInterval_, collectInterval) };


    // collectTargetType Field Functions 
    bool hasCollectTargetType() const { return this->collectTargetType_ != nullptr;};
    void deleteCollectTargetType() { this->collectTargetType_ = nullptr;};
    inline string collectTargetType() const { DARABONBA_PTR_GET_DEFAULT(collectTargetType_, "") };
    inline CreateHybridMonitorTaskRequest& setCollectTargetType(string collectTargetType) { DARABONBA_PTR_SET_VALUE(collectTargetType_, collectTargetType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHybridMonitorTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateHybridMonitorTaskRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateHybridMonitorTaskRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHybridMonitorTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSProcessConfig Field Functions 
    bool hasSLSProcessConfig() const { return this->SLSProcessConfig_ != nullptr;};
    void deleteSLSProcessConfig() { this->SLSProcessConfig_ = nullptr;};
    inline const CreateHybridMonitorTaskRequestSLSProcessConfig & SLSProcessConfig() const { DARABONBA_PTR_GET_CONST(SLSProcessConfig_, CreateHybridMonitorTaskRequestSLSProcessConfig) };
    inline CreateHybridMonitorTaskRequestSLSProcessConfig SLSProcessConfig() { DARABONBA_PTR_GET(SLSProcessConfig_, CreateHybridMonitorTaskRequestSLSProcessConfig) };
    inline CreateHybridMonitorTaskRequest& setSLSProcessConfig(const CreateHybridMonitorTaskRequestSLSProcessConfig & SLSProcessConfig) { DARABONBA_PTR_SET_VALUE(SLSProcessConfig_, SLSProcessConfig) };
    inline CreateHybridMonitorTaskRequest& setSLSProcessConfig(CreateHybridMonitorTaskRequestSLSProcessConfig && SLSProcessConfig) { DARABONBA_PTR_SET_RVALUE(SLSProcessConfig_, SLSProcessConfig) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline CreateHybridMonitorTaskRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // targetUserIdList Field Functions 
    bool hasTargetUserIdList() const { return this->targetUserIdList_ != nullptr;};
    void deleteTargetUserIdList() { this->targetUserIdList_ = nullptr;};
    inline string targetUserIdList() const { DARABONBA_PTR_GET_DEFAULT(targetUserIdList_, "") };
    inline CreateHybridMonitorTaskRequest& setTargetUserIdList(string targetUserIdList) { DARABONBA_PTR_SET_VALUE(targetUserIdList_, targetUserIdList) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateHybridMonitorTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateHybridMonitorTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // YARMConfig Field Functions 
    bool hasYARMConfig() const { return this->YARMConfig_ != nullptr;};
    void deleteYARMConfig() { this->YARMConfig_ = nullptr;};
    inline string YARMConfig() const { DARABONBA_PTR_GET_DEFAULT(YARMConfig_, "") };
    inline CreateHybridMonitorTaskRequest& setYARMConfig(string YARMConfig) { DARABONBA_PTR_SET_VALUE(YARMConfig_, YARMConfig) };


  protected:
    // The tags of the metric.
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_sls`.
    std::shared_ptr<vector<CreateHybridMonitorTaskRequestAttachLabels>> attachLabels_ = nullptr;
    std::shared_ptr<vector<string>> cloudAccessId_ = nullptr;
    // The collection period of the metric. Valid values:
    // 
    // *   15
    // *   60 (default)
    // 
    // Unit: seconds.
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_sls`.
    std::shared_ptr<string> collectInterval_ = nullptr;
    // The type of the collection target.
    // 
    // *   If the `TaskType` parameter is set to `aliyun_fc`, enter `aliyun_fc`.
    // *   If the `TaskType` parameter is set to `aliyun_sls`, enter the name of the Logstore group.
    // 
    // This parameter is required.
    std::shared_ptr<string> collectTargetType_ = nullptr;
    // The description of the metric import task.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the application group.
    // 
    // For information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_sls`.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the namespace.
    // 
    // For information about how to obtain the name of a namespace, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The configurations of the logs that are imported from Simple Log Service.
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_sls`.
    std::shared_ptr<CreateHybridMonitorTaskRequestSLSProcessConfig> SLSProcessConfig_ = nullptr;
    // The ID of the member account.
    // 
    // If you call this operation by using the management account of a resource directory, you can connect the Alibaba Cloud services that are activated for all members in the resource directory to Hybrid Cloud Monitoring. You can use the resource directory to monitor Alibaba Cloud services across enterprise accounts.
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_fc`.
    std::shared_ptr<string> targetUserId_ = nullptr;
    // The IDs of the member accounts. Separate multiple member account IDs with commas (,).
    // 
    // >  This parameter is required only if you call this operation by using the management account.
    std::shared_ptr<string> targetUserIdList_ = nullptr;
    // The name of the metric import task.
    // 
    // *   If the `TaskType` parameter is set to `aliyun_fc`, enter the name of the metric import task.
    // *   If the `TaskType` parameter is set to `aliyun_sls`, enter the name of the metric for logs imported from Simple Log Service.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the metric import task. Valid values:
    // 
    // *   aliyun_fc: metric import tasks for Alibaba Cloud services.
    // *   aliyun_sls: metrics for logs imported from Simple Log Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    // The configuration file of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring.
    // 
    // *   namespace: the namespace of the Alibaba Cloud service. For information about how to query the namespace of an Alibaba Cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html).
    // *   metric_list: the metrics of the Alibaba Cloud service. For information about how to query the metrics of an Alibaba Cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html).
    // 
    // The following code shows a sample configuration file:
    // 
    //     products:
    //     - namespace: acs_ecs_dashboard
    //       metric_info:
    //       - metric_list:
    //         - cpu_total
    //         - cpu_idle
    //         - diskusage_utilization
    //         - CPUUtilization
    //         - DiskReadBPS
    //         - InternetOut
    //         - IntranetOut
    //         - cpu_system
    //     - namespace: acs_rds_dashboard
    //       metric_info:
    //       - metric_list:
    //         - MySQL_QPS
    //         - MySQL_TPS
    // 
    // >  This parameter is required only if the `TaskType` parameter is set to `aliyun_fc`.
    std::shared_ptr<string> YARMConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
