// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DTS20200101_HPP_
#define ALIBABACLOUD_DTS20200101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dts20200101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dts20200101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Configures a data migration or synchronization task.
       *
       * @param request ConfigureDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureDtsJobResponse
       */
      Models::ConfigureDtsJobResponse configureDtsJobWithOptions(const Models::ConfigureDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data migration or synchronization task.
       *
       * @param request ConfigureDtsJobRequest
       * @return ConfigureDtsJobResponse
       */
      Models::ConfigureDtsJobResponse configureDtsJob(const Models::ConfigureDtsJobRequest &request);

      Models::ConfigureDtsJobResponse configureDtsJobAdvance(const Models::ConfigureDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data migration task.
       *
       * @param request ConfigureMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureMigrationJobResponse
       */
      Models::ConfigureMigrationJobResponse configureMigrationJobWithOptions(const Models::ConfigureMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data migration task.
       *
       * @param request ConfigureMigrationJobRequest
       * @return ConfigureMigrationJobResponse
       */
      Models::ConfigureMigrationJobResponse configureMigrationJob(const Models::ConfigureMigrationJobRequest &request);

      /**
       * @summary Configures alert settings to monitor a data migration instance.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlertWithOptions(const Models::ConfigureMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures alert settings to monitor a data migration instance.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlert(const Models::ConfigureMigrationJobAlertRequest &request);

      /**
       * @summary Configures a change tracking task.
       *
       * @description >  You can preview related API operation parameters when you configure a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscriptionWithOptions(const Models::ConfigureSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a change tracking task.
       *
       * @description >  You can preview related API operation parameters when you configure a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscription(const Models::ConfigureSubscriptionRequest &request);

      /**
       * @summary Configures a change tracking instance of the previous version.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstanceWithOptions(const Models::ConfigureSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a change tracking instance of the previous version.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstance(const Models::ConfigureSubscriptionInstanceRequest &request);

      /**
       * @summary Configures alert settings to monitor a change tracking instance.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlertWithOptions(const Models::ConfigureSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures alert settings to monitor a change tracking instance.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlert(const Models::ConfigureSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Configures a data synchronization task.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > 
       * *   After you call this operation to configure a data synchronization task, the task will be automatically started and prechecked. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the task.
       * *   A data synchronization task may fail to be started due to precheck failures. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the task. Then, you can change parameter settings based on the error messages about the precheck failures. After you fix the issue, you must call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization task.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJobWithOptions(const Models::ConfigureSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data synchronization task.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > 
       * *   After you call this operation to configure a data synchronization task, the task will be automatically started and prechecked. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the task.
       * *   A data synchronization task may fail to be started due to precheck failures. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the task. Then, you can change parameter settings based on the error messages about the precheck failures. After you fix the issue, you must call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization task.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJob(const Models::ConfigureSynchronizationJobRequest &request);

      /**
       * @summary Configures alert settings to monitor a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlertWithOptions(const Models::ConfigureSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures alert settings to monitor a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlert(const Models::ConfigureSynchronizationJobAlertRequest &request);

      /**
       * @summary Enables or disables image matching for a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompareWithOptions(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables image matching for a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompare(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request);

      /**
       * @summary Transfers resource groups of instance resources.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroupWithOptions(const Models::ConvertInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers resource groups of instance resources.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroup(const Models::ConvertInstanceResourceGroupRequest &request);

      /**
       * @summary Counts tasks by condition.
       *
       * @param request CountJobByConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByConditionWithOptions(const Models::CountJobByConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Counts tasks by condition.
       *
       * @param request CountJobByConditionRequest
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByCondition(const Models::CountJobByConditionRequest &request);

      /**
       * @summary Creates a consumer group for a change tracking task. Downstream clients can use the consumer group to consume tracked data.
       *
       * @param request CreateConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerChannelResponse
       */
      Models::CreateConsumerChannelResponse createConsumerChannelWithOptions(const Models::CreateConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group for a change tracking task. Downstream clients can use the consumer group to consume tracked data.
       *
       * @param request CreateConsumerChannelRequest
       * @return CreateConsumerChannelResponse
       */
      Models::CreateConsumerChannelResponse createConsumerChannel(const Models::CreateConsumerChannelRequest &request);

      /**
       * @summary Creates a consumer group for a change tracking instance.
       *
       * @param request CreateConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const Models::CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group for a change tracking instance.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary Creates an alert rule.
       *
       * @param request CreateDedicatedClusterMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDedicatedClusterMonitorRuleResponse
       */
      Models::CreateDedicatedClusterMonitorRuleResponse createDedicatedClusterMonitorRuleWithOptions(const Models::CreateDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule.
       *
       * @param request CreateDedicatedClusterMonitorRuleRequest
       * @return CreateDedicatedClusterMonitorRuleResponse
       */
      Models::CreateDedicatedClusterMonitorRuleResponse createDedicatedClusterMonitorRule(const Models::CreateDedicatedClusterMonitorRuleRequest &request);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request CreateDocParserJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJobWithOptions(const Models::CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request CreateDocParserJobRequest
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJob(const Models::CreateDocParserJobRequest &request);

      Models::CreateDocParserJobResponse createDocParserJobAdvance(const Models::CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a Data Transmission Service (DTS) instance.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of DTS.
       * *   If you want to run a DTS task on a DTS dedicated cluster, you must configure the task before you purchase a DTS instance. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a DTS task.
       *
       * @param request CreateDtsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstanceWithOptions(const Models::CreateDtsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a Data Transmission Service (DTS) instance.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of DTS.
       * *   If you want to run a DTS task on a DTS dedicated cluster, you must configure the task before you purchase a DTS instance. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a DTS task.
       *
       * @param request CreateDtsInstanceRequest
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstance(const Models::CreateDtsInstanceRequest &request);

      /**
       * @summary Creates or modifies an alert rule for a Data Transmission Service (DTS) task.
       *
       * @description DTS provides the following metrics for DTS tasks:************
       * *   **Latency**: DTS monitors the latency of a DTS task. If the latency of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of seconds.
       * *   **Status**: DTS monitors the status of a DTS task. If the state of the task changes to **Error** or **Restore**, an alert is triggered.
       * *   **Full Timeout**: DTS monitors the duration of a DTS task. If the duration of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of hours.
       *
       * @param request CreateJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobMonitorRuleResponse
       */
      Models::CreateJobMonitorRuleResponse createJobMonitorRuleWithOptions(const Models::CreateJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule for a Data Transmission Service (DTS) task.
       *
       * @description DTS provides the following metrics for DTS tasks:************
       * *   **Latency**: DTS monitors the latency of a DTS task. If the latency of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of seconds.
       * *   **Status**: DTS monitors the status of a DTS task. If the state of the task changes to **Error** or **Restore**, an alert is triggered.
       * *   **Full Timeout**: DTS monitors the duration of a DTS task. If the duration of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of hours.
       *
       * @param request CreateJobMonitorRuleRequest
       * @return CreateJobMonitorRuleResponse
       */
      Models::CreateJobMonitorRuleResponse createJobMonitorRule(const Models::CreateJobMonitorRuleRequest &request);

      /**
       * @summary Purchases a data migration instance.
       *
       * @param request CreateMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMigrationJobResponse
       */
      Models::CreateMigrationJobResponse createMigrationJobWithOptions(const Models::CreateMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a data migration instance.
       *
       * @param request CreateMigrationJobRequest
       * @return CreateMigrationJobResponse
       */
      Models::CreateMigrationJobResponse createMigrationJob(const Models::CreateMigrationJobRequest &request);

      /**
       * @summary Creates a reverse task for a data synchronization or migration task.
       *
       * @description 调用接口创建的反向任务会立即进行预检查，预检查通过后会进行增量数据采集，增量数据写入模块不会运行（需要调用**StartReverseWriter**接口运行）。
       * > 创建的反向任务固定为同步任务，且只有增量写入模块。
       *
       * @param request CreateReverseDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJobWithOptions(const Models::CreateReverseDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reverse task for a data synchronization or migration task.
       *
       * @description 调用接口创建的反向任务会立即进行预检查，预检查通过后会进行增量数据采集，增量数据写入模块不会运行（需要调用**StartReverseWriter**接口运行）。
       * > 创建的反向任务固定为同步任务，且只有增量写入模块。
       *
       * @param request CreateReverseDtsJobRequest
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJob(const Models::CreateReverseDtsJobRequest &request);

      /**
       * @summary Purchases a change tracking instance.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstanceWithOptions(const Models::CreateSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a change tracking instance.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstance(const Models::CreateSubscriptionInstanceRequest &request);

      /**
       * @summary Creates a data synchronization instance.
       *
       * @param request CreateSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJobWithOptions(const Models::CreateSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization instance.
       *
       * @param request CreateSynchronizationJobRequest
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJob(const Models::CreateSynchronizationJobRequest &request);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerChannelResponse
       */
      Models::DeleteConsumerChannelResponse deleteConsumerChannelWithOptions(const Models::DeleteConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerChannelRequest
       * @return DeleteConsumerChannelResponse
       */
      Models::DeleteConsumerChannelResponse deleteConsumerChannel(const Models::DeleteConsumerChannelRequest &request);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const Models::DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const Models::DeleteConsumerGroupRequest &request);

      /**
       * @summary Deletes a data migration, data synchronization, or change tracking task.
       *
       * @param request DeleteDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJobWithOptions(const Models::DeleteDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data migration, data synchronization, or change tracking task.
       *
       * @param request DeleteDtsJobRequest
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJob(const Models::DeleteDtsJobRequest &request);

      /**
       * @summary Deletes multiple data migration, data synchronization, or change tracking tasks.
       *
       * @param request DeleteDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobsResponse
       */
      Models::DeleteDtsJobsResponse deleteDtsJobsWithOptions(const Models::DeleteDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple data migration, data synchronization, or change tracking tasks.
       *
       * @param request DeleteDtsJobsRequest
       * @return DeleteDtsJobsResponse
       */
      Models::DeleteDtsJobsResponse deleteDtsJobs(const Models::DeleteDtsJobsRequest &request);

      /**
       * @summary Releases a data migration instance.
       *
       * @param request DeleteMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMigrationJobResponse
       */
      Models::DeleteMigrationJobResponse deleteMigrationJobWithOptions(const Models::DeleteMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a data migration instance.
       *
       * @param request DeleteMigrationJobRequest
       * @return DeleteMigrationJobResponse
       */
      Models::DeleteMigrationJobResponse deleteMigrationJob(const Models::DeleteMigrationJobRequest &request);

      /**
       * @summary Releases a change tracking instance.
       *
       * @param request DeleteSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubscriptionInstanceResponse
       */
      Models::DeleteSubscriptionInstanceResponse deleteSubscriptionInstanceWithOptions(const Models::DeleteSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a change tracking instance.
       *
       * @param request DeleteSubscriptionInstanceRequest
       * @return DeleteSubscriptionInstanceResponse
       */
      Models::DeleteSubscriptionInstanceResponse deleteSubscriptionInstance(const Models::DeleteSubscriptionInstanceRequest &request);

      /**
       * @summary Releases a data synchronization instance.
       *
       * @param request DeleteSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSynchronizationJobResponse
       */
      Models::DeleteSynchronizationJobResponse deleteSynchronizationJobWithOptions(const Models::DeleteSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a data synchronization instance.
       *
       * @param request DeleteSynchronizationJobRequest
       * @return DeleteSynchronizationJobResponse
       */
      Models::DeleteSynchronizationJobResponse deleteSynchronizationJob(const Models::DeleteSynchronizationJobRequest &request);

      /**
       * @summary 查询数据投递链路store账号
       *
       * @param request DescribeChannelAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelAccountResponse
       */
      Models::DescribeChannelAccountResponse describeChannelAccountWithOptions(const Models::DescribeChannelAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据投递链路store账号
       *
       * @param request DescribeChannelAccountRequest
       * @return DescribeChannelAccountResponse
       */
      Models::DescribeChannelAccountResponse describeChannelAccount(const Models::DescribeChannelAccountRequest &request);

      /**
       * @summary 请求所有数据校验任务数据
       *
       * @param request DescribeCheckJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobsWithOptions(const Models::DescribeCheckJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 请求所有数据校验任务数据
       *
       * @param request DescribeCheckJobsRequest
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobs(const Models::DescribeCheckJobsRequest &request);

      /**
       * @summary Queries operation logs of a Data Transmission Service (DTS) dedicated cluster.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogsWithOptions(const Models::DescribeClusterOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries operation logs of a Data Transmission Service (DTS) dedicated cluster.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogs(const Models::DescribeClusterOperateLogsRequest &request);

      /**
       * @summary Queries the resource usage of a cluster.
       *
       * @param request DescribeClusterUsedUtilizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUsedUtilizationResponse
       */
      Models::DescribeClusterUsedUtilizationResponse describeClusterUsedUtilizationWithOptions(const Models::DescribeClusterUsedUtilizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage of a cluster.
       *
       * @param request DescribeClusterUsedUtilizationRequest
       * @return DescribeClusterUsedUtilizationResponse
       */
      Models::DescribeClusterUsedUtilizationResponse describeClusterUsedUtilization(const Models::DescribeClusterUsedUtilizationRequest &request);

      /**
       * @summary Queries the connectivity of Data Transmission Service (DTS) servers to the source and destination databases.
       *
       * @param request DescribeConnectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConnectionStatusResponse
       */
      Models::DescribeConnectionStatusResponse describeConnectionStatusWithOptions(const Models::DescribeConnectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the connectivity of Data Transmission Service (DTS) servers to the source and destination databases.
       *
       * @param request DescribeConnectionStatusRequest
       * @return DescribeConnectionStatusResponse
       */
      Models::DescribeConnectionStatusResponse describeConnectionStatus(const Models::DescribeConnectionStatusRequest &request);

      /**
       * @summary Queries the information of a consumer group, including the consumer group ID, consumer group name, username, and message latency.
       *
       * @param request DescribeConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConsumerChannelResponse
       */
      Models::DescribeConsumerChannelResponse describeConsumerChannelWithOptions(const Models::DescribeConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a consumer group, including the consumer group ID, consumer group name, username, and message latency.
       *
       * @param request DescribeConsumerChannelRequest
       * @return DescribeConsumerChannelResponse
       */
      Models::DescribeConsumerChannelResponse describeConsumerChannel(const Models::DescribeConsumerChannelRequest &request);

      /**
       * @summary Queries the details of consumer groups in a change tracking instance.
       *
       * @param request DescribeConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConsumerGroupResponse
       */
      Models::DescribeConsumerGroupResponse describeConsumerGroupWithOptions(const Models::DescribeConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of consumer groups in a change tracking instance.
       *
       * @param request DescribeConsumerGroupRequest
       * @return DescribeConsumerGroupResponse
       */
      Models::DescribeConsumerGroupResponse describeConsumerGroup(const Models::DescribeConsumerGroupRequest &request);

      /**
       * @summary Queries the CIDR blocks of DTS servers.
       *
       * @param request DescribeDTSIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIPWithOptions(const Models::DescribeDTSIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CIDR blocks of DTS servers.
       *
       * @param request DescribeDTSIPRequest
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIP(const Models::DescribeDTSIPRequest &request);

      /**
       * @summary Queries the download URL of the data consistency verification report.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrlWithOptions(const Models::DescribeDataCheckReportUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URL of the data consistency verification report.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrl(const Models::DescribeDataCheckReportUrlRequest &request);

      /**
       * @summary Queries the details of a data verification task.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetailsWithOptions(const Models::DescribeDataCheckTableDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data verification task.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetails(const Models::DescribeDataCheckTableDetailsRequest &request);

      /**
       * @summary Queries the information about inconsistent data in the data verification task.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetailsWithOptions(const Models::DescribeDataCheckTableDiffDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about inconsistent data in the data verification task.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetails(const Models::DescribeDataCheckTableDiffDetailsRequest &request);

      /**
       * @summary Queries the information about a dedicated cluster.
       *
       * @param request DescribeDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedClusterWithOptions(const Models::DescribeDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a dedicated cluster.
       *
       * @param request DescribeDedicatedClusterRequest
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedCluster(const Models::DescribeDedicatedClusterRequest &request);

      /**
       * @summary Queries the information about an alert rule.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRuleWithOptions(const Models::DescribeDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an alert rule.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRule(const Models::DescribeDedicatedClusterMonitorRuleRequest &request);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request DescribeDocParserJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResultWithOptions(const Models::DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request DescribeDocParserJobResultRequest
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResult(const Models::DescribeDocParserJobResultRequest &request);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request DescribeDocParserJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatusWithOptions(const Models::DescribeDocParserJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看工作流任务结果
       *
       * @param request DescribeDocParserJobStatusRequest
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatus(const Models::DescribeDocParserJobStatusRequest &request);

      /**
       * @summary Queries the details of extract, transform, and load (ETL) tasks.
       *
       * @param request DescribeDtsEtlJobVersionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsEtlJobVersionInfoResponse
       */
      Models::DescribeDtsEtlJobVersionInfoResponse describeDtsEtlJobVersionInfoWithOptions(const Models::DescribeDtsEtlJobVersionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of extract, transform, and load (ETL) tasks.
       *
       * @param request DescribeDtsEtlJobVersionInfoRequest
       * @return DescribeDtsEtlJobVersionInfoResponse
       */
      Models::DescribeDtsEtlJobVersionInfoResponse describeDtsEtlJobVersionInfo(const Models::DescribeDtsEtlJobVersionInfoRequest &request);

      /**
       * @summary 查询DTS任务配置
       *
       * @param request DescribeDtsJobConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobConfigResponse
       */
      Models::DescribeDtsJobConfigResponse describeDtsJobConfigWithOptions(const Models::DescribeDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询DTS任务配置
       *
       * @param request DescribeDtsJobConfigRequest
       * @return DescribeDtsJobConfigResponse
       */
      Models::DescribeDtsJobConfigResponse describeDtsJobConfig(const Models::DescribeDtsJobConfigRequest &request);

      /**
       * @summary The latency of incremental data migration or synchronization.
       * \\\\\\\\\\>  If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
       *
       * @param request DescribeDtsJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobDetailResponse
       */
      Models::DescribeDtsJobDetailResponse describeDtsJobDetailWithOptions(const Models::DescribeDtsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The latency of incremental data migration or synchronization.
       * \\\\\\\\\\>  If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
       *
       * @param request DescribeDtsJobDetailRequest
       * @return DescribeDtsJobDetailResponse
       */
      Models::DescribeDtsJobDetailResponse describeDtsJobDetail(const Models::DescribeDtsJobDetailRequest &request);

      /**
       * @summary Queries the list of Data Transmission Service (DTS) tasks and the details of each task.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Dts\\&api=DescribeDtsJobs\\&type=RPC\\&version=2020-01-01)
       *
       * @param request DescribeDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobsResponse
       */
      Models::DescribeDtsJobsResponse describeDtsJobsWithOptions(const Models::DescribeDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Data Transmission Service (DTS) tasks and the details of each task.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Dts\\&api=DescribeDtsJobs\\&type=RPC\\&version=2020-01-01)
       *
       * @param request DescribeDtsJobsRequest
       * @return DescribeDtsJobsResponse
       */
      Models::DescribeDtsJobsResponse describeDtsJobs(const Models::DescribeDtsJobsRequest &request);

      /**
       * @summary Queries the logs of a data migration or synchronization task.
       *
       * @param request DescribeDtsServiceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsServiceLogResponse
       */
      Models::DescribeDtsServiceLogResponse describeDtsServiceLogWithOptions(const Models::DescribeDtsServiceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a data migration or synchronization task.
       *
       * @param request DescribeDtsServiceLogRequest
       * @return DescribeDtsServiceLogResponse
       */
      Models::DescribeDtsServiceLogResponse describeDtsServiceLog(const Models::DescribeDtsServiceLogRequest &request);

      /**
       * @summary Queries the status of the task that changes the database connection settings.
       *
       * @param request DescribeEndpointSwitchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointSwitchStatusResponse
       */
      Models::DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatusWithOptions(const Models::DescribeEndpointSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the task that changes the database connection settings.
       *
       * @param request DescribeEndpointSwitchStatusRequest
       * @return DescribeEndpointSwitchStatusResponse
       */
      Models::DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatus(const Models::DescribeEndpointSwitchStatusRequest &request);

      /**
       * @summary Queries the logs of extract, transform, and load (ETL) tasks.
       *
       * @param request DescribeEtlJobLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEtlJobLogsResponse
       */
      Models::DescribeEtlJobLogsResponse describeEtlJobLogsWithOptions(const Models::DescribeEtlJobLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of extract, transform, and load (ETL) tasks.
       *
       * @param request DescribeEtlJobLogsRequest
       * @return DescribeEtlJobLogsResponse
       */
      Models::DescribeEtlJobLogsResponse describeEtlJobLogs(const Models::DescribeEtlJobLogsRequest &request);

      /**
       * @summary Queries full data migration tasks.
       *
       * @param request DescribeFullProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessListWithOptions(const Models::DescribeFullProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries full data migration tasks.
       *
       * @param request DescribeFullProcessListRequest
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessList(const Models::DescribeFullProcessListRequest &request);

      /**
       * @summary 查询GAD实例列表
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询GAD实例列表
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary Queries the details of initial data synchronization, including the information about the schemas and historical data of the object to be synchronized.
       *
       * @param request DescribeInitializationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatusWithOptions(const Models::DescribeInitializationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of initial data synchronization, including the information about the schemas and historical data of the object to be synchronized.
       *
       * @param request DescribeInitializationStatusRequest
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatus(const Models::DescribeInitializationStatusRequest &request);

      /**
       * @summary Queries the monitoring rules of a Data Transmission Service (DTS) task.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRuleWithOptions(const Models::DescribeJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring rules of a Data Transmission Service (DTS) task.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRule(const Models::DescribeJobMonitorRuleRequest &request);

      /**
       * @summary Queries the metrics of a cluster.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metrics of a cluster.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries the alert settings of a data migration instance.
       *
       * @param request DescribeMigrationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobAlertResponse
       */
      Models::DescribeMigrationJobAlertResponse describeMigrationJobAlertWithOptions(const Models::DescribeMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert settings of a data migration instance.
       *
       * @param request DescribeMigrationJobAlertRequest
       * @return DescribeMigrationJobAlertResponse
       */
      Models::DescribeMigrationJobAlertResponse describeMigrationJobAlert(const Models::DescribeMigrationJobAlertRequest &request);

      /**
       * @summary Queries the details of a data migration task.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetailWithOptions(const Models::DescribeMigrationJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data migration task.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetail(const Models::DescribeMigrationJobDetailRequest &request);

      /**
       * @summary Queries the status of a data migration task.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatusWithOptions(const Models::DescribeMigrationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a data migration task.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatus(const Models::DescribeMigrationJobStatusRequest &request);

      /**
       * @summary Queries the list of data migration instances and the details of each instance.
       *
       * @param request DescribeMigrationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobsWithOptions(const Models::DescribeMigrationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data migration instances and the details of each instance.
       *
       * @param request DescribeMigrationJobsRequest
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobs(const Models::DescribeMigrationJobsRequest &request);

      /**
       * @summary 查询预检查创建GAD订单任务结果
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResultWithOptions(const Models::DescribePreCheckCreateGadOrderResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预检查创建GAD订单任务结果
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResult(const Models::DescribePreCheckCreateGadOrderResultRequest &request);

      /**
       * @summary Queries the status of a Data Transmission Service (DTS) subtask that performs precheck, schema migration, initial schema synchronization, full data migration, initial full data synchronization, incremental data migration, or incremental data synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatusWithOptions(const Models::DescribePreCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a Data Transmission Service (DTS) subtask that performs precheck, schema migration, initial schema synchronization, full data migration, initial full data synchronization, incremental data migration, or incremental data synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatus(const Models::DescribePreCheckStatusRequest &request);

      /**
       * @summary Queries the alert settings of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlertWithOptions(const Models::DescribeSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert settings of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlert(const Models::DescribeSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Queries the status of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceStatusResponse
       */
      Models::DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatusWithOptions(const Models::DescribeSubscriptionInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceStatusRequest
       * @return DescribeSubscriptionInstanceStatusResponse
       */
      Models::DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatus(const Models::DescribeSubscriptionInstanceStatusRequest &request);

      /**
       * @summary Queries the list of change tracking instances and the details of each instance.
       *
       * @param request DescribeSubscriptionInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstancesResponse
       */
      Models::DescribeSubscriptionInstancesResponse describeSubscriptionInstancesWithOptions(const Models::DescribeSubscriptionInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of change tracking instances and the details of each instance.
       *
       * @param request DescribeSubscriptionInstancesRequest
       * @return DescribeSubscriptionInstancesResponse
       */
      Models::DescribeSubscriptionInstancesResponse describeSubscriptionInstances(const Models::DescribeSubscriptionInstancesRequest &request);

      /**
       * @summary Queries the details of the subtasks in a distributed change tracking task for a PolarDB-X 1.0 instance.
       *
       * @description *   When Data Transmission Service (DTS) tracks data changes from a PolarDB-X 1.0 instance, data is distributed across the attached ApsaraDB RDS for MySQL instances. DTS runs a subtask for each ApsaraDB RDS for MySQL instance. You can call this operation to query the details of the subtasks in a distributed change tracking task.
       * *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the ID of the change tracking instance and the ID of the consumer group.
       *
       * @param tmpReq DescribeSubscriptionMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionMetaResponse
       */
      Models::DescribeSubscriptionMetaResponse describeSubscriptionMetaWithOptions(const Models::DescribeSubscriptionMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the subtasks in a distributed change tracking task for a PolarDB-X 1.0 instance.
       *
       * @description *   When Data Transmission Service (DTS) tracks data changes from a PolarDB-X 1.0 instance, data is distributed across the attached ApsaraDB RDS for MySQL instances. DTS runs a subtask for each ApsaraDB RDS for MySQL instance. You can call this operation to query the details of the subtasks in a distributed change tracking task.
       * *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the ID of the change tracking instance and the ID of the consumer group.
       *
       * @param request DescribeSubscriptionMetaRequest
       * @return DescribeSubscriptionMetaResponse
       */
      Models::DescribeSubscriptionMetaResponse describeSubscriptionMeta(const Models::DescribeSubscriptionMetaRequest &request);

      /**
       * @summary 查看同步和迁移任务的增量写入延迟信息
       *
       * @param request DescribeSyncStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncStatusResponse
       */
      Models::DescribeSyncStatusResponse describeSyncStatusWithOptions(const Models::DescribeSyncStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看同步和迁移任务的增量写入延迟信息
       *
       * @param request DescribeSyncStatusRequest
       * @return DescribeSyncStatusResponse
       */
      Models::DescribeSyncStatusResponse describeSyncStatus(const Models::DescribeSyncStatusRequest &request);

      /**
       * @summary Queries the alert settings of a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobAlertResponse
       */
      Models::DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlertWithOptions(const Models::DescribeSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert settings of a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobAlertRequest
       * @return DescribeSynchronizationJobAlertResponse
       */
      Models::DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlert(const Models::DescribeSynchronizationJobAlertRequest &request);

      /**
       * @summary Queries whether image matching is enabled for a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobReplicatorCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobReplicatorCompareResponse
       */
      Models::DescribeSynchronizationJobReplicatorCompareResponse describeSynchronizationJobReplicatorCompareWithOptions(const Models::DescribeSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether image matching is enabled for a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobReplicatorCompareRequest
       * @return DescribeSynchronizationJobReplicatorCompareResponse
       */
      Models::DescribeSynchronizationJobReplicatorCompareResponse describeSynchronizationJobReplicatorCompare(const Models::DescribeSynchronizationJobReplicatorCompareRequest &request);

      /**
       * @summary Queries the status of a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatusWithOptions(const Models::DescribeSynchronizationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a data synchronization instance.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatus(const Models::DescribeSynchronizationJobStatusRequest &request);

      /**
       * @summary Queries the status of one or more data synchronization instances.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusListWithOptions(const Models::DescribeSynchronizationJobStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of one or more data synchronization instances.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusList(const Models::DescribeSynchronizationJobStatusListRequest &request);

      /**
       * @summary Queries the list of data synchronization instances and the details of each instance.
       *
       * @param request DescribeSynchronizationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobsResponse
       */
      Models::DescribeSynchronizationJobsResponse describeSynchronizationJobsWithOptions(const Models::DescribeSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data synchronization instances and the details of each instance.
       *
       * @param request DescribeSynchronizationJobsRequest
       * @return DescribeSynchronizationJobsResponse
       */
      Models::DescribeSynchronizationJobsResponse describeSynchronizationJobs(const Models::DescribeSynchronizationJobsRequest &request);

      /**
       * @summary Queries the status of the task that changes the objects to be synchronized.
       *
       * @param request DescribeSynchronizationObjectModifyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationObjectModifyStatusResponse
       */
      Models::DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatusWithOptions(const Models::DescribeSynchronizationObjectModifyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the task that changes the objects to be synchronized.
       *
       * @param request DescribeSynchronizationObjectModifyStatusRequest
       * @return DescribeSynchronizationObjectModifyStatusResponse
       */
      Models::DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatus(const Models::DescribeSynchronizationObjectModifyStatusRequest &request);

      /**
       * @summary Queries all the tags added to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all the tags added to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagKeysRequest
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeys(const Models::DescribeTagKeysRequest &request);

      /**
       * @summary Queries all the tag values of a tag bound to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagValuesResponse
       */
      Models::DescribeTagValuesResponse describeTagValuesWithOptions(const Models::DescribeTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all the tag values of a tag bound to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagValuesRequest
       * @return DescribeTagValuesResponse
       */
      Models::DescribeTagValuesResponse describeTagValues(const Models::DescribeTagValuesRequest &request);

      /**
       * @summary 移除从角色
       *
       * @param request DetachGadInstanceDbMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGadInstanceDbMemberResponse
       */
      Models::DetachGadInstanceDbMemberResponse detachGadInstanceDbMemberWithOptions(const Models::DetachGadInstanceDbMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除从角色
       *
       * @param request DetachGadInstanceDbMemberRequest
       * @return DetachGadInstanceDbMemberResponse
       */
      Models::DetachGadInstanceDbMemberResponse detachGadInstanceDbMember(const Models::DetachGadInstanceDbMemberRequest &request);

      /**
       * @summary Initializes a built-in account on a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses the built-in account to connect to the node and perform data synchronization tasks.
       *
       * @description *   The node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database that is connected over Cloud Enterprise Network (CEN).
       * *   This operation is used to initialize the built-in account named rdsdt_dtsacct on a node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform data synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstanceWithOptions(const Models::InitDtsRdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a built-in account on a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses the built-in account to connect to the node and perform data synchronization tasks.
       *
       * @description *   The node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database that is connected over Cloud Enterprise Network (CEN).
       * *   This operation is used to initialize the built-in account named rdsdt_dtsacct on a node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform data synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstance(const Models::InitDtsRdsInstanceRequest &request);

      /**
       * @summary Queries all clusters that are created within an Alibaba Cloud account. You can also query clusters based on the specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedClusterWithOptions(const Models::ListDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all clusters that are created within an Alibaba Cloud account. You can also query clusters based on the specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedCluster(const Models::ListDedicatedClusterRequest &request);

      /**
       * @summary Queries the tags that are bound to specific data migration, data synchronization, or change tracking instances, or queries the instances to which specific tags are bound.
       *
       * @description ****
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to specific data migration, data synchronization, or change tracking instances, or queries the instances to which specific tags are bound.
       *
       * @description ****
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the information of a consumer group, including the consumer group name, username, and password.
       *
       * @param request ModifyConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannelWithOptions(const Models::ModifyConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a consumer group, including the consumer group name, username, and password.
       *
       * @param request ModifyConsumerChannelRequest
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannel(const Models::ModifyConsumerChannelRequest &request);

      /**
       * @summary Modifies the password of a consumer group
       *
       * @param request ModifyConsumerGroupPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerGroupPasswordResponse
       */
      Models::ModifyConsumerGroupPasswordResponse modifyConsumerGroupPasswordWithOptions(const Models::ModifyConsumerGroupPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a consumer group
       *
       * @param request ModifyConsumerGroupPasswordRequest
       * @return ModifyConsumerGroupPasswordResponse
       */
      Models::ModifyConsumerGroupPasswordResponse modifyConsumerGroupPassword(const Models::ModifyConsumerGroupPasswordRequest &request);

      /**
       * @summary Modifies the consumption checkpoint of a change tracking instance.
       *
       * @param request ModifyConsumptionTimestampRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumptionTimestampResponse
       */
      Models::ModifyConsumptionTimestampResponse modifyConsumptionTimestampWithOptions(const Models::ModifyConsumptionTimestampRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the consumption checkpoint of a change tracking instance.
       *
       * @param request ModifyConsumptionTimestampRequest
       * @return ModifyConsumptionTimestampResponse
       */
      Models::ModifyConsumptionTimestampResponse modifyConsumptionTimestamp(const Models::ModifyConsumptionTimestampRequest &request);

      /**
       * @summary Modifies the configuration of a cluster.
       *
       * @description You can modify only the overcommit ratio.
       *
       * @param request ModifyDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedClusterWithOptions(const Models::ModifyDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cluster.
       *
       * @description You can modify only the overcommit ratio.
       *
       * @param request ModifyDedicatedClusterRequest
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedCluster(const Models::ModifyDedicatedClusterRequest &request);

      /**
       * @summary Modifies the configurations of a data synchronization task.
       *
       * @description When you configure a data synchronization task in the Data Transmission Service (DTS) console, you can move the pointer over **Next: Save Task Settings and Precheck** in the **Advanced Settings** step and click **Preview OpenAPI parameters** to view the parameters that are used to configure the task by calling an API operation.
       *
       * @param tmpReq ModifyDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJobWithOptions(const Models::ModifyDtsJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a data synchronization task.
       *
       * @description When you configure a data synchronization task in the Data Transmission Service (DTS) console, you can move the pointer over **Next: Save Task Settings and Precheck** in the **Advanced Settings** step and click **Preview OpenAPI parameters** to view the parameters that are used to configure the task by calling an API operation.
       *
       * @param request ModifyDtsJobRequest
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJob(const Models::ModifyDtsJobRequest &request);

      Models::ModifyDtsJobResponse modifyDtsJobAdvance(const Models::ModifyDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfigWithOptions(const Models::ModifyDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobConfigRequest
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfig(const Models::ModifyDtsJobConfigRequest &request);

      /**
       * @summary Changes the dedicated cluster on which a Data Transmission Service (DTS) task runs.
       *
       * @description > After a DTS task is migrated from a dedicated cluster to a shared cluster, the task is billed on a pay-as-you-go basis.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedClusterWithOptions(const Models::ModifyDtsJobDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the dedicated cluster on which a Data Transmission Service (DTS) task runs.
       *
       * @description > After a DTS task is migrated from a dedicated cluster to a shared cluster, the task is billed on a pay-as-you-go basis.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedCluster(const Models::ModifyDtsJobDedicatedClusterRequest &request);

      /**
       * @summary Modifies the upper limit of DTS units (DUs) for a Data Transmission Service (DTS) task.
       *
       * @description *   DTS allows you to upgrade or downgrade the configurations of DTS instances in a dedicated cluster. You can adjust the resources that are occupied for task execution to dynamically adjust the number of tasks that can be scheduled in the cluster. This way, you can reduce the total number of DUs required for the cluster or release DUs.
       * *   Before you modify the upper limit of DUs for a DTS task, make sure that sufficient DUs are available.
       *
       * @param request ModifyDtsJobDuLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDuLimitResponse
       */
      Models::ModifyDtsJobDuLimitResponse modifyDtsJobDuLimitWithOptions(const Models::ModifyDtsJobDuLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the upper limit of DTS units (DUs) for a Data Transmission Service (DTS) task.
       *
       * @description *   DTS allows you to upgrade or downgrade the configurations of DTS instances in a dedicated cluster. You can adjust the resources that are occupied for task execution to dynamically adjust the number of tasks that can be scheduled in the cluster. This way, you can reduce the total number of DUs required for the cluster or release DUs.
       * *   Before you modify the upper limit of DUs for a DTS task, make sure that sufficient DUs are available.
       *
       * @param request ModifyDtsJobDuLimitRequest
       * @return ModifyDtsJobDuLimitResponse
       */
      Models::ModifyDtsJobDuLimitResponse modifyDtsJobDuLimit(const Models::ModifyDtsJobDuLimitRequest &request);

      /**
       * @summary Changes the source or destination database instance of a data synchronization or migration task in Data Transmission Service (DTS).
       *
       * @description >  After the database is changed, Data Transmission Service (DTS) rolls back the incremental write offset for 10 seconds. If the synchronized or migrated data does not have a primary key, make sure that no data is written to the source database while the source or destination database is being replaced. Otherwise, duplicate data may exist.
       *
       * @param request ModifyDtsJobEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobEndpointResponse
       */
      Models::ModifyDtsJobEndpointResponse modifyDtsJobEndpointWithOptions(const Models::ModifyDtsJobEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the source or destination database instance of a data synchronization or migration task in Data Transmission Service (DTS).
       *
       * @description >  After the database is changed, Data Transmission Service (DTS) rolls back the incremental write offset for 10 seconds. If the synchronized or migrated data does not have a primary key, make sure that no data is written to the source database while the source or destination database is being replaced. Otherwise, duplicate data may exist.
       *
       * @param request ModifyDtsJobEndpointRequest
       * @return ModifyDtsJobEndpointResponse
       */
      Models::ModifyDtsJobEndpointResponse modifyDtsJobEndpoint(const Models::ModifyDtsJobEndpointRequest &request);

      /**
       * @summary Changes the name of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobNameWithOptions(const Models::ModifyDtsJobNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobNameRequest
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobName(const Models::ModifyDtsJobNameRequest &request);

      /**
       * @summary Changes the password of the account used to log on to the source or destination database in a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPasswordWithOptions(const Models::ModifyDtsJobPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password of the account used to log on to the source or destination database in a Data Transmission Service (DTS) task.
       *
       * @param request ModifyDtsJobPasswordRequest
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPassword(const Models::ModifyDtsJobPasswordRequest &request);

      /**
       * @summary Enables throttling for data synchronization and data migration.
       *
       * @param request ModifyDynamicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfigWithOptions(const Models::ModifyDynamicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables throttling for data synchronization and data migration.
       *
       * @param request ModifyDynamicConfigRequest
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfig(const Models::ModifyDynamicConfigRequest &request);

      /**
       * @summary 修改GAD实例名称
       *
       * @param request ModifyGadInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceNameWithOptions(const Models::ModifyGadInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改GAD实例名称
       *
       * @param request ModifyGadInstanceNameRequest
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceName(const Models::ModifyGadInstanceNameRequest &request);

      /**
       * @summary Modifies the information about a change tracking task.
       *
       * @description >  You can preview related API operation parameters when you modify the information about a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscriptionWithOptions(const Models::ModifySubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a change tracking task.
       *
       * @description >  You can preview related API operation parameters when you modify the information about a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscription(const Models::ModifySubscriptionRequest &request);

      /**
       * @summary Modifies the objects for change tracking.
       *
       * @param request ModifySubscriptionObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObjectWithOptions(const Models::ModifySubscriptionObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the objects for change tracking.
       *
       * @param request ModifySubscriptionObjectRequest
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObject(const Models::ModifySubscriptionObjectRequest &request);

      /**
       * @summary Modifies the objects to be synchronized.
       *
       * @param request ModifySynchronizationObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObjectWithOptions(const Models::ModifySynchronizationObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the objects to be synchronized.
       *
       * @param request ModifySynchronizationObjectRequest
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObject(const Models::ModifySynchronizationObjectRequest &request);

      /**
       * @summary 预检查创建GAD订单
       *
       * @param request PreCheckCreateGadOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrderWithOptions(const Models::PreCheckCreateGadOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预检查创建GAD订单
       *
       * @param request PreCheckCreateGadOrderRequest
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrder(const Models::PreCheckCreateGadOrderRequest &request);

      /**
       * @summary Renews a Data Transmission Service (DTS) instance. This API operation is available only for subscription instances.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a Data Transmission Service (DTS) instance. This API operation is available only for subscription instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description >  If you clear the configurations of a data synchronization or change tracking task, DTS deletes the task. Then, DTS creates another task. The task is in the Not Configured state. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJobWithOptions(const Models::ResetDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description >  If you clear the configurations of a data synchronization or change tracking task, DTS deletes the task. Then, DTS creates another task. The task is in the Not Configured state. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJob(const Models::ResetDtsJobRequest &request);

      /**
       * @summary Clears the configurations of a data synchronization task.
       *
       * @description >  If you clear the configurations of a data synchronization task, the task will be released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the task.
       *
       * @param request ResetSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSynchronizationJobResponse
       */
      Models::ResetSynchronizationJobResponse resetSynchronizationJobWithOptions(const Models::ResetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the configurations of a data synchronization task.
       *
       * @description >  If you clear the configurations of a data synchronization task, the task will be released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the task.
       *
       * @param request ResetSynchronizationJobRequest
       * @return ResetSynchronizationJobResponse
       */
      Models::ResetSynchronizationJobResponse resetSynchronizationJob(const Models::ResetSynchronizationJobRequest &request);

      /**
       * @summary 调转双向任务的方向
       *
       * @param request ReverseTwoWayDirectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReverseTwoWayDirectionResponse
       */
      Models::ReverseTwoWayDirectionResponse reverseTwoWayDirectionWithOptions(const Models::ReverseTwoWayDirectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调转双向任务的方向
       *
       * @param request ReverseTwoWayDirectionRequest
       * @return ReverseTwoWayDirectionResponse
       */
      Models::ReverseTwoWayDirectionResponse reverseTwoWayDirection(const Models::ReverseTwoWayDirectionRequest &request);

      /**
       * @summary Ignores the precheck items that a data migration or synchronization task may fail to pass.
       *
       * @param request ShieldPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheckWithOptions(const Models::ShieldPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ignores the precheck items that a data migration or synchronization task may fail to pass.
       *
       * @param request ShieldPrecheckRequest
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheck(const Models::ShieldPrecheckRequest &request);

      /**
       * @summary The tables that do not need to be synchronized in a full data synchronization are skipped.
       *
       * @param request SkipFullJobTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTableWithOptions(const Models::SkipFullJobTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The tables that do not need to be synchronized in a full data synchronization are skipped.
       *
       * @param request SkipFullJobTableRequest
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTable(const Models::SkipFullJobTableRequest &request);

      /**
       * @summary Skips one or more precheck items.
       *
       * @param request SkipPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipPreCheckResponse
       */
      Models::SkipPreCheckResponse skipPreCheckWithOptions(const Models::SkipPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips one or more precheck items.
       *
       * @param request SkipPreCheckRequest
       * @return SkipPreCheckResponse
       */
      Models::SkipPreCheckResponse skipPreCheck(const Models::SkipPreCheckRequest &request);

      /**
       * @summary Starts a data migration, data synchronization, or change tracking task.
       *
       * @param request StartDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDtsJobResponse
       */
      Models::StartDtsJobResponse startDtsJobWithOptions(const Models::StartDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data migration, data synchronization, or change tracking task.
       *
       * @param request StartDtsJobRequest
       * @return StartDtsJobResponse
       */
      Models::StartDtsJobResponse startDtsJob(const Models::StartDtsJobRequest &request);

      /**
       * @summary Starts multiple data migration or data synchronization tasks.
       *
       * @param request StartDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDtsJobsResponse
       */
      Models::StartDtsJobsResponse startDtsJobsWithOptions(const Models::StartDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple data migration or data synchronization tasks.
       *
       * @param request StartDtsJobsRequest
       * @return StartDtsJobsResponse
       */
      Models::StartDtsJobsResponse startDtsJobs(const Models::StartDtsJobsRequest &request);

      /**
       * @summary Starts a data migration task.
       *
       * @param request StartMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMigrationJobResponse
       */
      Models::StartMigrationJobResponse startMigrationJobWithOptions(const Models::StartMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data migration task.
       *
       * @param request StartMigrationJobRequest
       * @return StartMigrationJobResponse
       */
      Models::StartMigrationJobResponse startMigrationJob(const Models::StartMigrationJobRequest &request);

      /**
       * @summary Starts the reverse task that is created by calling the CreateReverseDtsJob operation.
       *
       * @description Before you call this operation, make sure that your instance is not released and is paused. You can check the status of the instance in the Data Transmission Service (DTS) console or by calling the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation.
       *
       * @param request StartReverseWriterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartReverseWriterResponse
       */
      Models::StartReverseWriterResponse startReverseWriterWithOptions(const Models::StartReverseWriterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the reverse task that is created by calling the CreateReverseDtsJob operation.
       *
       * @description Before you call this operation, make sure that your instance is not released and is paused. You can check the status of the instance in the Data Transmission Service (DTS) console or by calling the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation.
       *
       * @param request StartReverseWriterRequest
       * @return StartReverseWriterResponse
       */
      Models::StartReverseWriterResponse startReverseWriter(const Models::StartReverseWriterRequest &request);

      /**
       * @summary Starts a change tracking task.
       *
       * @param request StartSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSubscriptionInstanceResponse
       */
      Models::StartSubscriptionInstanceResponse startSubscriptionInstanceWithOptions(const Models::StartSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a change tracking task.
       *
       * @param request StartSubscriptionInstanceRequest
       * @return StartSubscriptionInstanceResponse
       */
      Models::StartSubscriptionInstanceResponse startSubscriptionInstance(const Models::StartSubscriptionInstanceRequest &request);

      /**
       * @summary Starts a data synchronization task.
       *
       * @param request StartSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSynchronizationJobResponse
       */
      Models::StartSynchronizationJobResponse startSynchronizationJobWithOptions(const Models::StartSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data synchronization task.
       *
       * @param request StartSynchronizationJobRequest
       * @return StartSynchronizationJobResponse
       */
      Models::StartSynchronizationJobResponse startSynchronizationJob(const Models::StartSynchronizationJobRequest &request);

      /**
       * @summary Releases a cluster.
       *
       * @param request StopDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDedicatedClusterResponse
       */
      Models::StopDedicatedClusterResponse stopDedicatedClusterWithOptions(const Models::StopDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a cluster.
       *
       * @param request StopDedicatedClusterRequest
       * @return StopDedicatedClusterResponse
       */
      Models::StopDedicatedClusterResponse stopDedicatedCluster(const Models::StopDedicatedClusterRequest &request);

      /**
       * @summary Stops a data migration, data synchronization, or change tracking task.
       *
       * @param request StopDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDtsJobResponse
       */
      Models::StopDtsJobResponse stopDtsJobWithOptions(const Models::StopDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a data migration, data synchronization, or change tracking task.
       *
       * @param request StopDtsJobRequest
       * @return StopDtsJobResponse
       */
      Models::StopDtsJobResponse stopDtsJob(const Models::StopDtsJobRequest &request);

      /**
       * @summary Stops multiple data migration or data synchronization tasks.
       *
       * @param request StopDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobsWithOptions(const Models::StopDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple data migration or data synchronization tasks.
       *
       * @param request StopDtsJobsRequest
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobs(const Models::StopDtsJobsRequest &request);

      /**
       * @summary Stops a data migration task that is in the Migrating state.
       *
       * @param request StopMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJobWithOptions(const Models::StopMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a data migration task that is in the Migrating state.
       *
       * @param request StopMigrationJobRequest
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJob(const Models::StopMigrationJobRequest &request);

      /**
       * @summary Queries the number of migrated or synchronized objects in a Data Transmission Service (DTS) task.
       *
       * @param request SummaryJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetailWithOptions(const Models::SummaryJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of migrated or synchronized objects in a Data Transmission Service (DTS) task.
       *
       * @param request SummaryJobDetailRequest
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetail(const Models::SummaryJobDetailRequest &request);

      /**
       * @summary Pauses a data migration, data synchronization, or change tracking task.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJobWithOptions(const Models::SuspendDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a data migration, data synchronization, or change tracking task.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJob(const Models::SuspendDtsJobRequest &request);

      /**
       * @summary Suspends multiple Data Transmission Service (DTS) tasks.
       *
       * @param request SuspendDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobsResponse
       */
      Models::SuspendDtsJobsResponse suspendDtsJobsWithOptions(const Models::SuspendDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends multiple Data Transmission Service (DTS) tasks.
       *
       * @param request SuspendDtsJobsRequest
       * @return SuspendDtsJobsResponse
       */
      Models::SuspendDtsJobsResponse suspendDtsJobs(const Models::SuspendDtsJobsRequest &request);

      /**
       * @summary Pauses a data migration task.
       *
       * @param request SuspendMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendMigrationJobResponse
       */
      Models::SuspendMigrationJobResponse suspendMigrationJobWithOptions(const Models::SuspendMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a data migration task.
       *
       * @param request SuspendMigrationJobRequest
       * @return SuspendMigrationJobResponse
       */
      Models::SuspendMigrationJobResponse suspendMigrationJob(const Models::SuspendMigrationJobRequest &request);

      /**
       * @summary Pauses a data synchronization task.
       *
       * @description > 
       * *   When you call this operation, the data synchronization task must be in the Synchronizing state.
       * *   We recommend that you do not pause a data synchronization task for more than 6 hours. Otherwise, the task cannot be started again.
       * *   If the billing method is pay-as-you-go, DTS charges a fee even when the task is paused. This is because DTS only stops writing data to the destination database. DTS continues to pull the logs of the source database so that the task can resume quickly after it is restarted. Therefore, data synchronization consumes resources such as the bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJobWithOptions(const Models::SuspendSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a data synchronization task.
       *
       * @description > 
       * *   When you call this operation, the data synchronization task must be in the Synchronizing state.
       * *   We recommend that you do not pause a data synchronization task for more than 6 hours. Otherwise, the task cannot be started again.
       * *   If the billing method is pay-as-you-go, DTS charges a fee even when the task is paused. This is because DTS only stops writing data to the destination database. DTS continues to pull the logs of the source database so that the task can resume quickly after it is restarted. Therefore, data synchronization consumes resources such as the bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJob(const Models::SuspendSynchronizationJobRequest &request);

      /**
       * @summary 物理迁移任务切换上云
       *
       * @param request SwitchPhysicalDtsJobToCloudRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchPhysicalDtsJobToCloudResponse
       */
      Models::SwitchPhysicalDtsJobToCloudResponse switchPhysicalDtsJobToCloudWithOptions(const Models::SwitchPhysicalDtsJobToCloudRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 物理迁移任务切换上云
       *
       * @param request SwitchPhysicalDtsJobToCloudRequest
       * @return SwitchPhysicalDtsJobToCloudResponse
       */
      Models::SwitchPhysicalDtsJobToCloudResponse switchPhysicalDtsJobToCloud(const Models::SwitchPhysicalDtsJobToCloudRequest &request);

      /**
       * @summary After you perform a primary/secondary switchover on the source or destination database, you can call the SwitchSynchronizationEndpoint operation to transfer the connection settings to Data Transmission Service (DTS). DTS will restart the data synchronization task from the breakpoint.
       *
       * @param request SwitchSynchronizationEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchSynchronizationEndpointResponse
       */
      Models::SwitchSynchronizationEndpointResponse switchSynchronizationEndpointWithOptions(const Models::SwitchSynchronizationEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you perform a primary/secondary switchover on the source or destination database, you can call the SwitchSynchronizationEndpoint operation to transfer the connection settings to Data Transmission Service (DTS). DTS will restart the data synchronization task from the breakpoint.
       *
       * @param request SwitchSynchronizationEndpointRequest
       * @return SwitchSynchronizationEndpointResponse
       */
      Models::SwitchSynchronizationEndpointResponse switchSynchronizationEndpoint(const Models::SwitchSynchronizationEndpointRequest &request);

      /**
       * @summary Adds tags to data migration, data synchronization, or change tracking instances.
       *
       * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can query instances by tag.
       * *   A tag consists of a key and a value. Each key must be unique in a region within an Alibaba Cloud account. Different keys can be mapped to the same value.
       * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
       * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
       * *   You can add up to 20 tags to an instance.
       * *   You can add tags to up to 50 instances in each request.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to data migration, data synchronization, or change tracking instances.
       *
       * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can query instances by tag.
       * *   A tag consists of a key and a value. Each key must be unique in a region within an Alibaba Cloud account. Different keys can be mapped to the same value.
       * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
       * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
       * *   You can add up to 20 tags to an instance.
       * *   You can add tags to up to 50 instances in each request.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Upgrades or downgrades a Data Transmission Service (DTS) instance.
       *
       * @param request TransferInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInstanceClassResponse
       */
      Models::TransferInstanceClassResponse transferInstanceClassWithOptions(const Models::TransferInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades a Data Transmission Service (DTS) instance.
       *
       * @param request TransferInstanceClassRequest
       * @return TransferInstanceClassResponse
       */
      Models::TransferInstanceClassResponse transferInstanceClass(const Models::TransferInstanceClassRequest &request);

      /**
       * @summary Changes the billing method of a Data Transmission Service (DTS) instance.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of DTS.
       * *   To prevent resource waste, make sure that the billing method of your DTS instances has to be changed.
       * *   Data migration instances only support the pay-as-you-go billing method.
       *
       * @param request TransferPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayTypeWithOptions(const Models::TransferPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of a Data Transmission Service (DTS) instance.
       *
       * @description Before you call this operation, make sure that you fully understand the [billing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of DTS.
       * *   To prevent resource waste, make sure that the billing method of your DTS instances has to be changed.
       * *   Data migration instances only support the pay-as-you-go billing method.
       *
       * @param request TransferPayTypeRequest
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayType(const Models::TransferPayTypeRequest &request);

      /**
       * @summary Unbinds tags from one or more data migration, data synchronization, or change tracking instances.
       *
       * @description >  If a tag is unbound from an instance and is not bound to other instances, the tag is deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from one or more data migration, data synchronization, or change tracking instances.
       *
       * @description >  If a tag is unbound from an instance and is not bound to other instances, the tag is deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization. This operation is supported only for pay-as-you-go synchronization instances.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS)
       * When you call this operation, take note of the following information:
       * *   The source and destination databases of the data synchronization task are both **MySQL** databases.
       * *   The synchronization topology of the data synchronization task is **one-way synchronization**.
       * *   The data synchronization task is in the **Synchronizing** state.
       * *   The upgrade operation causes data synchronization latency of about 5 seconds. We recommend that you perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWayWithOptions(const Models::UpgradeTwoWayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization. This operation is supported only for pay-as-you-go synchronization instances.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS)
       * When you call this operation, take note of the following information:
       * *   The source and destination databases of the data synchronization task are both **MySQL** databases.
       * *   The synchronization topology of the data synchronization task is **one-way synchronization**.
       * *   The data synchronization task is in the **Synchronizing** state.
       * *   The upgrade operation causes data synchronization latency of about 5 seconds. We recommend that you perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWay(const Models::UpgradeTwoWayRequest &request);

      /**
       * @summary If the \\\\*\\\\*source or destination instance\\\\*\\\\* is a \\\\*\\\\*self-managed database\\\\*\\\\* or a \\\\*\\\\*third-party cloud database\\\\*\\\\*, you need to call this operation to query the CIDR blocks of DTS servers. Then, you need to add the CIDR blocks of DTS servers to the security settings of the source or destination instance, for example, the firewall of your database. For more information, see \\[Add the CIDR blocks of DTS servers to the security settings of on-premises databases]\\\\(~~176627~~).
       * \\\\>  If the \\\\*\\\\*source or destination database\\\\*\\\\* is an \\\\*\\\\*ApsaraDB database instance\\\\*\\\\* (such as RDS instance and ApsaraDB for MongoDB instance) or a \\\\*\\\\*self-managed database hosted on Elastic Compute Service (ECS)\\\\*\\\\*, you do not need to add the CIDR blocks. When you click \\\\*\\\\*Set Whitelist and Next\\\\*\\\\* in the DTS console, DTS automatically adds the CIDR blocks of DTS servers to the security settings of the source or destination instance.
       *
       * @description The operation that you want to perform. Set the value to **WhiteIpList**.
       *
       * @param request WhiteIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpListWithOptions(const Models::WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If the \\\\*\\\\*source or destination instance\\\\*\\\\* is a \\\\*\\\\*self-managed database\\\\*\\\\* or a \\\\*\\\\*third-party cloud database\\\\*\\\\*, you need to call this operation to query the CIDR blocks of DTS servers. Then, you need to add the CIDR blocks of DTS servers to the security settings of the source or destination instance, for example, the firewall of your database. For more information, see \\[Add the CIDR blocks of DTS servers to the security settings of on-premises databases]\\\\(~~176627~~).
       * \\\\>  If the \\\\*\\\\*source or destination database\\\\*\\\\* is an \\\\*\\\\*ApsaraDB database instance\\\\*\\\\* (such as RDS instance and ApsaraDB for MongoDB instance) or a \\\\*\\\\*self-managed database hosted on Elastic Compute Service (ECS)\\\\*\\\\*, you do not need to add the CIDR blocks. When you click \\\\*\\\\*Set Whitelist and Next\\\\*\\\\* in the DTS console, DTS automatically adds the CIDR blocks of DTS servers to the security settings of the source or destination instance.
       *
       * @description The operation that you want to perform. Set the value to **WhiteIpList**.
       *
       * @param request WhiteIpListRequest
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpList(const Models::WhiteIpListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
