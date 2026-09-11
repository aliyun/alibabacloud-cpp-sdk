// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DTS20200101_HPP_
#define ALIBABACLOUD_DTS20200101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dts20200101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Dts20200101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Configures a data migration or synchronization task.
       *
       * @description - You can perform the required pre-configurations in the console and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       * - Tasks on dedicated clusters support only the configure-before-purchase mode and do not support cross-region tasks.
       *
       * @param request ConfigureDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureDtsJobResponse
       */
      Models::ConfigureDtsJobResponse configureDtsJobWithOptions(const Models::ConfigureDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data migration or synchronization task.
       *
       * @description - You can perform the required pre-configurations in the console and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       * - Tasks on dedicated clusters support only the configure-before-purchase mode and do not support cross-region tasks.
       *
       * @param request ConfigureDtsJobRequest
       * @return ConfigureDtsJobResponse
       */
      Models::ConfigureDtsJobResponse configureDtsJob(const Models::ConfigureDtsJobRequest &request);

      Models::ConfigureDtsJobResponse configureDtsJobAdvance(const Models::ConfigureDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a legacy data migration task.
       *
       * @param request ConfigureMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureMigrationJobResponse
       */
      Models::ConfigureMigrationJobResponse configureMigrationJobWithOptions(const Models::ConfigureMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a legacy data migration task.
       *
       * @param request ConfigureMigrationJobRequest
       * @return ConfigureMigrationJobResponse
       */
      Models::ConfigureMigrationJobResponse configureMigrationJob(const Models::ConfigureMigrationJobRequest &request);

      /**
       * @summary Configures monitoring alerts to monitor the latency and exception status of a data migration task.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlertWithOptions(const Models::ConfigureMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures monitoring alerts to monitor the latency and exception status of a data migration task.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlert(const Models::ConfigureMigrationJobAlertRequest &request);

      /**
       * @summary Configures a DTS change tracking task.
       *
       * @description > You can perform the required pre-configurations in the console and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscriptionWithOptions(const Models::ConfigureSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a DTS change tracking task.
       *
       * @description > You can perform the required pre-configurations in the console and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscription(const Models::ConfigureSubscriptionRequest &request);

      /**
       * @summary Configures a change tracking channel. This is a legacy operation.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       * > In the **Advanced Settings** step of the console, move the pointer over the **Next: Save the task and perform a precheck** button, and then click **Preview OpenAPI parameters** in the tooltip to view the parameter information for configuring this instance by using API operations.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstanceWithOptions(const Models::ConfigureSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a change tracking channel. This is a legacy operation.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       * > In the **Advanced Settings** step of the console, move the pointer over the **Next: Save the task and perform a precheck** button, and then click **Preview OpenAPI parameters** in the tooltip to view the parameter information for configuring this instance by using API operations.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstance(const Models::ConfigureSubscriptionInstanceRequest &request);

      /**
       * @summary Configures monitoring and alerting to monitor the latency and exception status of a change tracking channel.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlertWithOptions(const Models::ConfigureSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures monitoring and alerting to monitor the latency and exception status of a change tracking channel.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlert(const Models::ConfigureSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Configures a data synchronization task by using the previous version.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > - After this operation is called, the data synchronization instance automatically starts and performs a precheck. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the instance.
       * - If the data synchronization instance fails to start, the precheck may have failed. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the data synchronization instance, obtain the error message of the precheck failure, and adjust the parameters. After the adjustment, you can call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJobWithOptions(const Models::ConfigureSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data synchronization task by using the previous version.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > - After this operation is called, the data synchronization instance automatically starts and performs a precheck. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the instance.
       * - If the data synchronization instance fails to start, the precheck may have failed. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the data synchronization instance, obtain the error message of the precheck failure, and adjust the parameters. After the adjustment, you can call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJob(const Models::ConfigureSynchronizationJobRequest &request);

      /**
       * @summary Configures monitoring and alerting to monitor the latency and exception status of a synchronization task.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlertWithOptions(const Models::ConfigureSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures monitoring and alerting to monitor the latency and exception status of a synchronization task.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlert(const Models::ConfigureSynchronizationJobAlertRequest &request);

      /**
       * @summary Configures the full image matching switch for a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompareWithOptions(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the full image matching switch for a data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompare(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request);

      /**
       * @summary Transfers a DTS instance to a different resource group.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroupWithOptions(const Models::ConvertInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers a DTS instance to a different resource group.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroup(const Models::ConvertInstanceResourceGroupRequest &request);

      /**
       * @summary Queries the count of tasks by conditions.
       *
       * @param request CountJobByConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByConditionWithOptions(const Models::CountJobByConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the count of tasks by conditions.
       *
       * @param request CountJobByConditionRequest
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByCondition(const Models::CountJobByConditionRequest &request);

      /**
       * @summary Creates a consumer group for a change tracking task (new version).
       *
       * @param request CreateConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerChannelResponse
       */
      Models::CreateConsumerChannelResponse createConsumerChannelWithOptions(const Models::CreateConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group for a change tracking task (new version).
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
       * @summary Creates an alert rule by calling the CreateDedicatedClusterMonitorRule operation.
       *
       * @param request CreateDedicatedClusterMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDedicatedClusterMonitorRuleResponse
       */
      Models::CreateDedicatedClusterMonitorRuleResponse createDedicatedClusterMonitorRuleWithOptions(const Models::CreateDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule by calling the CreateDedicatedClusterMonitorRule operation.
       *
       * @param request CreateDedicatedClusterMonitorRuleRequest
       * @return CreateDedicatedClusterMonitorRuleResponse
       */
      Models::CreateDedicatedClusterMonitorRuleResponse createDedicatedClusterMonitorRule(const Models::CreateDedicatedClusterMonitorRuleRequest &request);

      /**
       * @summary Creates a document parsing task.
       *
       * @description Calling this operation creates a document parsing task and returns a task ID (DtsJobId).
       * > - This operation relies on Object Storage Service (OSS) for file transfer. We recommend that you call this operation by using an SDK. The CreateDocParserJobAdvance operation automatically encapsulates the file transfer process.
       * > - After you obtain the DtsJobId response parameter, you can call the DescribeDocParserJobStatus operation to query the execution status of the document parsing task, and call the DescribeDocParserJobResult operation to obtain the output of the document parsing task.
       *
       * @param request CreateDocParserJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJobWithOptions(const Models::CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document parsing task.
       *
       * @description Calling this operation creates a document parsing task and returns a task ID (DtsJobId).
       * > - This operation relies on Object Storage Service (OSS) for file transfer. We recommend that you call this operation by using an SDK. The CreateDocParserJobAdvance operation automatically encapsulates the file transfer process.
       * > - After you obtain the DtsJobId response parameter, you can call the DescribeDocParserJobStatus operation to query the execution status of the document parsing task, and call the DescribeDocParserJobResult operation to obtain the output of the document parsing task.
       *
       * @param request CreateDocParserJobRequest
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJob(const Models::CreateDocParserJobRequest &request);

      Models::CreateDocParserJobResponse createDocParserJobAdvance(const Models::CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a DTS instance by calling the CreateDtsInstance operation.
       *
       * @description <props="china">
       * - Before invoking this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">
       * - Before invoking this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - Nodes on a dedicated cluster support only the workflow of configuring a node before purchasing an instance. You can invoke the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a node.
       *
       * @param request CreateDtsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstanceWithOptions(const Models::CreateDtsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a DTS instance by calling the CreateDtsInstance operation.
       *
       * @description <props="china">
       * - Before invoking this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">
       * - Before invoking this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - Nodes on a dedicated cluster support only the workflow of configuring a node before purchasing an instance. You can invoke the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a node.
       *
       * @param request CreateDtsInstanceRequest
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstance(const Models::CreateDtsInstanceRequest &request);

      /**
       * @summary Creates or modifies an alert rule for a DTS task.
       *
       * @description DTS currently supports the following alert metrics: **Latency**, **Migration Status**, and **Full Migration Duration**:
       * - **Latency**: Monitors incremental data migration latency. An alert is triggered when the migration latency, synchronization latency, or change tracking latency exceeds the specified threshold (in seconds).
       * - **Migration Status**: Monitors the task status. An alert is triggered when the task status is **Error** or **Recovered**.
       * - **Full Migration Duration**: Monitors the duration of full data migration. An alert is triggered when the duration exceeds the specified threshold (in hours).
       *
       * @param request CreateJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobMonitorRuleResponse
       */
      Models::CreateJobMonitorRuleResponse createJobMonitorRuleWithOptions(const Models::CreateJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule for a DTS task.
       *
       * @description DTS currently supports the following alert metrics: **Latency**, **Migration Status**, and **Full Migration Duration**:
       * - **Latency**: Monitors incremental data migration latency. An alert is triggered when the migration latency, synchronization latency, or change tracking latency exceeds the specified threshold (in seconds).
       * - **Migration Status**: Monitors the task status. An alert is triggered when the task status is **Error** or **Recovered**.
       * - **Full Migration Duration**: Monitors the duration of full data migration. An alert is triggered when the duration exceeds the specified threshold (in hours).
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
       * @summary Creates a reverse task for a specified synchronization or migration task by calling the CreateReverseDtsJob operation.
       *
       * @description The reverse task created by calling this operation immediately starts a precheck. After the precheck is passed, incremental data collection begins, but the incremental data write module does not run. You must call the **StartReverseWriter** operation to start it.
       * > The created reverse task is a synchronization task that contains only the incremental write module.
       *
       * @param request CreateReverseDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJobWithOptions(const Models::CreateReverseDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reverse task for a specified synchronization or migration task by calling the CreateReverseDtsJob operation.
       *
       * @description The reverse task created by calling this operation immediately starts a precheck. After the precheck is passed, incremental data collection begins, but the incremental data write module does not run. You must call the **StartReverseWriter** operation to start it.
       * > The created reverse task is a synchronization task that contains only the incremental write module.
       *
       * @param request CreateReverseDtsJobRequest
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJob(const Models::CreateReverseDtsJobRequest &request);

      /**
       * @summary Creates a change tracking channel. This is a legacy operation.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstanceWithOptions(const Models::CreateSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a change tracking channel. This is a legacy operation.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstance(const Models::CreateSubscriptionInstanceRequest &request);

      /**
       * @summary Creates a data synchronization job instance. This is a legacy API operation.
       *
       * @param request CreateSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJobWithOptions(const Models::CreateSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data synchronization job instance. This is a legacy API operation.
       *
       * @param request CreateSynchronizationJobRequest
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJob(const Models::CreateSynchronizationJobRequest &request);

      /**
       * @summary Deletes a consumer group of a change tracking task (new version).
       *
       * @param request DeleteConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerChannelResponse
       */
      Models::DeleteConsumerChannelResponse deleteConsumerChannelWithOptions(const Models::DeleteConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group of a change tracking task (new version).
       *
       * @param request DeleteConsumerChannelRequest
       * @return DeleteConsumerChannelResponse
       */
      Models::DeleteConsumerChannelResponse deleteConsumerChannel(const Models::DeleteConsumerChannelRequest &request);

      /**
       * @summary Deletes a consumer group from a change tracking channel.
       *
       * @param request DeleteConsumerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const Models::DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group from a change tracking channel.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const Models::DeleteConsumerGroupRequest &request);

      /**
       * @summary Releases a data migration, synchronization, or change tracking instance.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling this API operation. You can release them by unsubscribing. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>.
       *
       * @param request DeleteDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJobWithOptions(const Models::DeleteDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a data migration, synchronization, or change tracking instance.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling this API operation. You can release them by unsubscribing. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>.
       *
       * @param request DeleteDtsJobRequest
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJob(const Models::DeleteDtsJobRequest &request);

      /**
       * @summary Releases data migration, data synchronization, or change tracking tasks in batches by calling the DeleteDtsJobs operation.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling API operations. You can release them by unsubscribing. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>.
       *
       * @param request DeleteDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobsResponse
       */
      Models::DeleteDtsJobsResponse deleteDtsJobsWithOptions(const Models::DeleteDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases data migration, data synchronization, or change tracking tasks in batches by calling the DeleteDtsJobs operation.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling API operations. You can release them by unsubscribing. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>.
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
       * @summary Releases the channel of a change tracking instance.
       *
       * @param request DeleteSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubscriptionInstanceResponse
       */
      Models::DeleteSubscriptionInstanceResponse deleteSubscriptionInstanceWithOptions(const Models::DeleteSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the channel of a change tracking instance.
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
       * @summary Contains data validation tasks associated with data migration tasks and data synchronization tasks.
       *
       * @param request DescribeCheckJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobsWithOptions(const Models::DescribeCheckJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Contains data validation tasks associated with data migration tasks and data synchronization tasks.
       *
       * @param request DescribeCheckJobsRequest
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobs(const Models::DescribeCheckJobsRequest &request);

      /**
       * @summary Queries the log information of a DTS cluster by calling the DescribeClusterOperateLogs operation.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogsWithOptions(const Models::DescribeClusterOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log information of a DTS cluster by calling the DescribeClusterOperateLogs operation.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogs(const Models::DescribeClusterOperateLogsRequest &request);

      /**
       * @summary Queries the current usage of a cluster by calling the DescribeClusterUsedUtilization operation.
       *
       * @param request DescribeClusterUsedUtilizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUsedUtilizationResponse
       */
      Models::DescribeClusterUsedUtilizationResponse describeClusterUsedUtilizationWithOptions(const Models::DescribeClusterUsedUtilizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current usage of a cluster by calling the DescribeClusterUsedUtilization operation.
       *
       * @param request DescribeClusterUsedUtilizationRequest
       * @return DescribeClusterUsedUtilizationResponse
       */
      Models::DescribeClusterUsedUtilizationResponse describeClusterUsedUtilization(const Models::DescribeClusterUsedUtilizationRequest &request);

      /**
       * @summary Tests the connectivity between the execution node of a data migration task and the source and destination databases.
       *
       * @param request DescribeConnectionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConnectionStatusResponse
       */
      Models::DescribeConnectionStatusResponse describeConnectionStatusWithOptions(const Models::DescribeConnectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the connectivity between the execution node of a data migration task and the source and destination databases.
       *
       * @param request DescribeConnectionStatusRequest
       * @return DescribeConnectionStatusResponse
       */
      Models::DescribeConnectionStatusResponse describeConnectionStatus(const Models::DescribeConnectionStatusRequest &request);

      /**
       * @summary Queries the consumer group information of a DTS change tracking task, such as the consumer group ID, name, account, and consumption latency.
       *
       * @param request DescribeConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConsumerChannelResponse
       */
      Models::DescribeConsumerChannelResponse describeConsumerChannelWithOptions(const Models::DescribeConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumer group information of a DTS change tracking task, such as the consumer group ID, name, account, and consumption latency.
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
       * @summary Retrieves the DTS IP addresses that must be added to the whitelists of both the source and destination databases.
       *
       * @param request DescribeDTSIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIPWithOptions(const Models::DescribeDTSIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the DTS IP addresses that must be added to the whitelists of both the source and destination databases.
       *
       * @param request DescribeDTSIPRequest
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIP(const Models::DescribeDTSIPRequest &request);

      /**
       * @summary Obtains the download URL for the list data of inconsistent data.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrlWithOptions(const Models::DescribeDataCheckReportUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the download URL for the list data of inconsistent data.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrl(const Models::DescribeDataCheckReportUrlRequest &request);

      /**
       * @summary Queries data consistency verification results at the table level.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetailsWithOptions(const Models::DescribeDataCheckTableDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data consistency verification results at the table level.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetails(const Models::DescribeDataCheckTableDetailsRequest &request);

      /**
       * @summary Lists data inconsistency results grouped by inconsistent data.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetailsWithOptions(const Models::DescribeDataCheckTableDiffDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists data inconsistency results grouped by inconsistent data.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetails(const Models::DescribeDataCheckTableDiffDetailsRequest &request);

      /**
       * @summary Queries the details of a specified cluster by calling the DescribeDedicatedCluster operation.
       *
       * @param request DescribeDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedClusterWithOptions(const Models::DescribeDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified cluster by calling the DescribeDedicatedCluster operation.
       *
       * @param request DescribeDedicatedClusterRequest
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedCluster(const Models::DescribeDedicatedClusterRequest &request);

      /**
       * @summary Queries alert rules by calling the DescribeDedicatedClusterMonitorRule operation.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRuleWithOptions(const Models::DescribeDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert rules by calling the DescribeDedicatedClusterMonitorRule operation.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRule(const Models::DescribeDedicatedClusterMonitorRuleRequest &request);

      /**
       * @summary Retrieves the result of a document parsing task.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative call threshold per region is 100 calls per second.
       * - The call threshold per account per region is 5 calls per second.
       *
       * @param request DescribeDocParserJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResultWithOptions(const Models::DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of a document parsing task.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative call threshold per region is 100 calls per second.
       * - The call threshold per account per region is 5 calls per second.
       *
       * @param request DescribeDocParserJobResultRequest
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResult(const Models::DescribeDocParserJobResultRequest &request);

      /**
       * @summary Queries the execution status of a document parsing task.
       *
       * @description This operation has call frequency limits. Calls that exceed the limits are rejected.
       * - The cumulative call threshold for a single region is 200 calls per second.
       * - The call threshold for a single account in a single region is 20 calls per second.
       *
       * @param request DescribeDocParserJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatusWithOptions(const Models::DescribeDocParserJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of a document parsing task.
       *
       * @description This operation has call frequency limits. Calls that exceed the limits are rejected.
       * - The cumulative call threshold for a single region is 200 calls per second.
       * - The call threshold for a single account in a single region is 20 calls per second.
       *
       * @param request DescribeDocParserJobStatusRequest
       * @return DescribeDocParserJobStatusResponse
       */
      Models::DescribeDocParserJobStatusResponse describeDocParserJobStatus(const Models::DescribeDocParserJobStatusRequest &request);

      /**
       * @summary Queries the details of an ETL task.
       *
       * @param request DescribeDtsEtlJobVersionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsEtlJobVersionInfoResponse
       */
      Models::DescribeDtsEtlJobVersionInfoResponse describeDtsEtlJobVersionInfoWithOptions(const Models::DescribeDtsEtlJobVersionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an ETL task.
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
       * @summary Queries the details of a DTS task by calling DescribeDtsJobDetail.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls in a single region is 160 calls per second.
       * - The threshold for calls by a single account in a single region is 40 calls per second.
       *
       * @param request DescribeDtsJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobDetailResponse
       */
      Models::DescribeDtsJobDetailResponse describeDtsJobDetailWithOptions(const Models::DescribeDtsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a DTS task by calling DescribeDtsJobDetail.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls in a single region is 160 calls per second.
       * - The threshold for calls by a single account in a single region is 40 calls per second.
       *
       * @param request DescribeDtsJobDetailRequest
       * @return DescribeDtsJobDetailResponse
       */
      Models::DescribeDtsJobDetailResponse describeDtsJobDetail(const Models::DescribeDtsJobDetailRequest &request);

      /**
       * @summary Queries the list of DTS tasks and the execution details of each task.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls in a single region is 200 calls per second.
       * - The threshold for calls by a single account in a single region is 20 calls per second.
       *
       * @param request DescribeDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobsResponse
       */
      Models::DescribeDtsJobsResponse describeDtsJobsWithOptions(const Models::DescribeDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of DTS tasks and the execution details of each task.
       *
       * @description This operation has rate limits. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls in a single region is 200 calls per second.
       * - The threshold for calls by a single account in a single region is 20 calls per second.
       *
       * @param request DescribeDtsJobsRequest
       * @return DescribeDtsJobsResponse
       */
      Models::DescribeDtsJobsResponse describeDtsJobs(const Models::DescribeDtsJobsRequest &request);

      /**
       * @summary Queries the log information of a data migration or synchronization task.
       *
       * @param request DescribeDtsServiceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsServiceLogResponse
       */
      Models::DescribeDtsServiceLogResponse describeDtsServiceLogWithOptions(const Models::DescribeDtsServiceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log information of a data migration or synchronization task.
       *
       * @param request DescribeDtsServiceLogRequest
       * @return DescribeDtsServiceLogResponse
       */
      Models::DescribeDtsServiceLogResponse describeDtsServiceLog(const Models::DescribeDtsServiceLogRequest &request);

      /**
       * @summary Queries the execution status of a task.
       *
       * @param request DescribeEndpointSwitchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointSwitchStatusResponse
       */
      Models::DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatusWithOptions(const Models::DescribeEndpointSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of a task.
       *
       * @param request DescribeEndpointSwitchStatusRequest
       * @return DescribeEndpointSwitchStatusResponse
       */
      Models::DescribeEndpointSwitchStatusResponse describeEndpointSwitchStatus(const Models::DescribeEndpointSwitchStatusRequest &request);

      /**
       * @summary Queries the running logs of an ETL task.
       *
       * @param request DescribeEtlJobLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEtlJobLogsResponse
       */
      Models::DescribeEtlJobLogsResponse describeEtlJobLogsWithOptions(const Models::DescribeEtlJobLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running logs of an ETL task.
       *
       * @param request DescribeEtlJobLogsRequest
       * @return DescribeEtlJobLogsResponse
       */
      Models::DescribeEtlJobLogsResponse describeEtlJobLogs(const Models::DescribeEtlJobLogsRequest &request);

      /**
       * @summary Queries the running details of a full data migration task.
       *
       * @param request DescribeFullProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessListWithOptions(const Models::DescribeFullProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running details of a full data migration task.
       *
       * @param request DescribeFullProcessListRequest
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessList(const Models::DescribeFullProcessListRequest &request);

      /**
       * @summary Queries a list of Global Active Database (GAD) instances.
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Global Active Database (GAD) instances.
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary Queries the initialization status. This is an earlier version of the operation.
       *
       * @param request DescribeInitializationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatusWithOptions(const Models::DescribeInitializationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the initialization status. This is an earlier version of the operation.
       *
       * @param request DescribeInitializationStatusRequest
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatus(const Models::DescribeInitializationStatusRequest &request);

      /**
       * @summary Queries the alert rules of a DTS task by calling DescribeJobMonitorRule.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRuleWithOptions(const Models::DescribeJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert rules of a DTS task by calling DescribeJobMonitorRule.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRule(const Models::DescribeJobMonitorRuleRequest &request);

      /**
       * @summary Queries cluster monitoring information by calling the DescribeMetricList operation.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cluster monitoring information by calling the DescribeMetricList operation.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries the monitoring and alert settings of a data migration task.
       *
       * @param request DescribeMigrationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobAlertResponse
       */
      Models::DescribeMigrationJobAlertResponse describeMigrationJobAlertWithOptions(const Models::DescribeMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring and alert settings of a data migration task.
       *
       * @param request DescribeMigrationJobAlertRequest
       * @return DescribeMigrationJobAlertResponse
       */
      Models::DescribeMigrationJobAlertResponse describeMigrationJobAlert(const Models::DescribeMigrationJobAlertRequest &request);

      /**
       * @summary Queries the execution details of a data migration task. This is a legacy operation.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetailWithOptions(const Models::DescribeMigrationJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of a data migration task. This is a legacy operation.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetail(const Models::DescribeMigrationJobDetailRequest &request);

      /**
       * @summary Queries the status of a data migration task. This is a legacy operation.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatusWithOptions(const Models::DescribeMigrationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a data migration task. This is a legacy operation.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatus(const Models::DescribeMigrationJobStatusRequest &request);

      /**
       * @summary Queries the list of data migration instances and details of each migration instance.
       *
       * @param request DescribeMigrationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobsWithOptions(const Models::DescribeMigrationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data migration instances and details of each migration instance.
       *
       * @param request DescribeMigrationJobsRequest
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobs(const Models::DescribeMigrationJobsRequest &request);

      /**
       * @summary Queries the task result of a precheck for creating a Global Active Database (GAD) order node.
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResultWithOptions(const Models::DescribePreCheckCreateGadOrderResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task result of a precheck for creating a Global Active Database (GAD) order node.
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResult(const Models::DescribePreCheckCreateGadOrderResultRequest &request);

      /**
       * @summary Queries the execution details of subtasks of a DTS task, including precheck, schema migration or synchronization, full data migration or synchronization, and incremental data migration or synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatusWithOptions(const Models::DescribePreCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of subtasks of a DTS task, including precheck, schema migration or synchronization, full data migration or synchronization, and incremental data migration or synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatus(const Models::DescribePreCheckStatusRequest &request);

      /**
       * @summary Queries the monitoring and alerting settings of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlertWithOptions(const Models::DescribeSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring and alerting settings of a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlert(const Models::DescribeSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Queries the instance status details of a change tracking channel. This is a legacy operation.
       *
       * @param request DescribeSubscriptionInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceStatusResponse
       */
      Models::DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatusWithOptions(const Models::DescribeSubscriptionInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance status details of a change tracking channel. This is a legacy operation.
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
       * @summary Queries the information about subtasks of a PolarDB-X 1.0 distributed change tracking task.
       *
       * @description <props="china">
       * - Because a PolarDB-X 1.0 change tracking task is a distributed change tracking task, each ApsaraDB RDS for MySQL instance associated with the task corresponds to a change tracking subtask. You can call this operation to query the information about change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID, consumer group ID, and other information about a PolarDB-X 1.0 change tracking task.
       * <props="intl">
       * - Because a DRDS change tracking task is a distributed change tracking task, each ApsaraDB RDS for MySQL instance associated with the task corresponds to a change tracking subtask. You can call this operation to query the information about change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID, consumer group ID, and other information about a DRDS change tracking task.
       * .
       *
       * @param tmpReq DescribeSubscriptionMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionMetaResponse
       */
      Models::DescribeSubscriptionMetaResponse describeSubscriptionMetaWithOptions(const Models::DescribeSubscriptionMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about subtasks of a PolarDB-X 1.0 distributed change tracking task.
       *
       * @description <props="china">
       * - Because a PolarDB-X 1.0 change tracking task is a distributed change tracking task, each ApsaraDB RDS for MySQL instance associated with the task corresponds to a change tracking subtask. You can call this operation to query the information about change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID, consumer group ID, and other information about a PolarDB-X 1.0 change tracking task.
       * <props="intl">
       * - Because a DRDS change tracking task is a distributed change tracking task, each ApsaraDB RDS for MySQL instance associated with the task corresponds to a change tracking subtask. You can call this operation to query the information about change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the instance ID, consumer group ID, and other information about a DRDS change tracking task.
       * .
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
       * @summary Queries the monitoring and alerting settings of a synchronization task.
       *
       * @param request DescribeSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobAlertResponse
       */
      Models::DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlertWithOptions(const Models::DescribeSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring and alerting settings of a synchronization task.
       *
       * @param request DescribeSynchronizationJobAlertRequest
       * @return DescribeSynchronizationJobAlertResponse
       */
      Models::DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlert(const Models::DescribeSynchronizationJobAlertRequest &request);

      /**
       * @summary Retrieves the current image matching switch configuration. This is a legacy operation.
       *
       * @param request DescribeSynchronizationJobReplicatorCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobReplicatorCompareResponse
       */
      Models::DescribeSynchronizationJobReplicatorCompareResponse describeSynchronizationJobReplicatorCompareWithOptions(const Models::DescribeSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current image matching switch configuration. This is a legacy operation.
       *
       * @param request DescribeSynchronizationJobReplicatorCompareRequest
       * @return DescribeSynchronizationJobReplicatorCompareResponse
       */
      Models::DescribeSynchronizationJobReplicatorCompareResponse describeSynchronizationJobReplicatorCompare(const Models::DescribeSynchronizationJobReplicatorCompareRequest &request);

      /**
       * @summary Queries the running status of a data synchronization task. This is a legacy API operation.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatusWithOptions(const Models::DescribeSynchronizationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running status of a data synchronization task. This is a legacy API operation.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatus(const Models::DescribeSynchronizationJobStatusRequest &request);

      /**
       * @summary Queries the status list of synchronization jobs. This is a legacy operation.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusListWithOptions(const Models::DescribeSynchronizationJobStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status list of synchronization jobs. This is a legacy operation.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusList(const Models::DescribeSynchronizationJobStatusListRequest &request);

      /**
       * @summary Queries a list of data synchronization instances and the details of each instance by calling DescribeSynchronizationJobs.
       *
       * @param request DescribeSynchronizationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobsResponse
       */
      Models::DescribeSynchronizationJobsResponse describeSynchronizationJobsWithOptions(const Models::DescribeSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data synchronization instances and the details of each instance by calling DescribeSynchronizationJobs.
       *
       * @param request DescribeSynchronizationJobsRequest
       * @return DescribeSynchronizationJobsResponse
       */
      Models::DescribeSynchronizationJobsResponse describeSynchronizationJobs(const Models::DescribeSynchronizationJobsRequest &request);

      /**
       * @summary Queries the execution status of a task that modifies synchronization objects. This is a legacy operation.
       *
       * @param request DescribeSynchronizationObjectModifyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationObjectModifyStatusResponse
       */
      Models::DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatusWithOptions(const Models::DescribeSynchronizationObjectModifyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of a task that modifies synchronization objects. This is a legacy operation.
       *
       * @param request DescribeSynchronizationObjectModifyStatusRequest
       * @return DescribeSynchronizationObjectModifyStatusResponse
       */
      Models::DescribeSynchronizationObjectModifyStatusResponse describeSynchronizationObjectModifyStatus(const Models::DescribeSynchronizationObjectModifyStatusRequest &request);

      /**
       * @summary Queries all tags that are bound to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags that are bound to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagKeysRequest
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeys(const Models::DescribeTagKeysRequest &request);

      /**
       * @summary Queries all values of a tag key that is attached to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagValuesResponse
       */
      Models::DescribeTagValuesResponse describeTagValuesWithOptions(const Models::DescribeTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all values of a tag key that is attached to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagValuesRequest
       * @return DescribeTagValuesResponse
       */
      Models::DescribeTagValuesResponse describeTagValues(const Models::DescribeTagValuesRequest &request);

      /**
       * @summary Removes a secondary role.
       *
       * @param request DetachGadInstanceDbMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGadInstanceDbMemberResponse
       */
      Models::DetachGadInstanceDbMemberResponse detachGadInstanceDbMemberWithOptions(const Models::DetachGadInstanceDbMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a secondary role.
       *
       * @param request DetachGadInstanceDbMemberRequest
       * @return DetachGadInstanceDbMemberResponse
       */
      Models::DetachGadInstanceDbMemberResponse detachGadInstanceDbMember(const Models::DetachGadInstanceDbMemberRequest &request);

      /**
       * @summary Initializes a built-in account in a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses this account to connect to the node and perform synchronization tasks.
       *
       * @description - The unit node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database connected through Cloud Enterprise Network (CEN).
       * - This operation initializes a built-in account named rdsdt_dtsacct in a unit node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstanceWithOptions(const Models::InitDtsRdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a built-in account in a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses this account to connect to the node and perform synchronization tasks.
       *
       * @description - The unit node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database connected through Cloud Enterprise Network (CEN).
       * - This operation initializes a built-in account named rdsdt_dtsacct in a unit node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstance(const Models::InitDtsRdsInstanceRequest &request);

      /**
       * @summary Queries all clusters created by the current user. You can also filter specific clusters based on specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedClusterWithOptions(const Models::ListDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all clusters created by the current user. You can also filter specific clusters based on specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedCluster(const Models::ListDedicatedClusterRequest &request);

      /**
       * @summary Query the JobStep list
       *
       * @param request ListJobStepRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobStepResponse
       */
      Models::ListJobStepResponse listJobStepWithOptions(const Models::ListJobStepRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the JobStep list
       *
       * @param request ListJobStepRequest
       * @return ListJobStepResponse
       */
      Models::ListJobStepResponse listJobStep(const Models::ListJobStepRequest &request);

      /**
       * @summary Queries the tags bound to data migration, data synchronization, and change tracking instances. You can also query the instances bound to specific tags.
       *
       * @description ****.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to data migration, data synchronization, and change tracking instances. You can also query the instances bound to specific tags.
       *
       * @description ****.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the information of a consumer group in a change tracking channel (new version).
       *
       * @param request ModifyConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannelWithOptions(const Models::ModifyConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a consumer group in a change tracking channel (new version).
       *
       * @param request ModifyConsumerChannelRequest
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannel(const Models::ModifyConsumerChannelRequest &request);

      /**
       * @summary Modifies the password of a consumer group. This is a legacy operation.
       *
       * @param request ModifyConsumerGroupPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerGroupPasswordResponse
       */
      Models::ModifyConsumerGroupPasswordResponse modifyConsumerGroupPasswordWithOptions(const Models::ModifyConsumerGroupPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a consumer group. This is a legacy operation.
       *
       * @param request ModifyConsumerGroupPasswordRequest
       * @return ModifyConsumerGroupPasswordResponse
       */
      Models::ModifyConsumerGroupPasswordResponse modifyConsumerGroupPassword(const Models::ModifyConsumerGroupPasswordRequest &request);

      /**
       * @summary Modifies the consumption checkpoint of a change tracking instance channel.
       *
       * @param request ModifyConsumptionTimestampRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumptionTimestampResponse
       */
      Models::ModifyConsumptionTimestampResponse modifyConsumptionTimestampWithOptions(const Models::ModifyConsumptionTimestampRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the consumption checkpoint of a change tracking instance channel.
       *
       * @param request ModifyConsumptionTimestampRequest
       * @return ModifyConsumptionTimestampResponse
       */
      Models::ModifyConsumptionTimestampResponse modifyConsumptionTimestamp(const Models::ModifyConsumptionTimestampRequest &request);

      /**
       * @summary Modifies the configuration of a dedicated cluster by calling the ModifyDedicatedCluster operation.
       *
       * @description Currently, only the overcommit ratio can be modified.
       *
       * @param request ModifyDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedClusterWithOptions(const Models::ModifyDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a dedicated cluster by calling the ModifyDedicatedCluster operation.
       *
       * @description Currently, only the overcommit ratio can be modified.
       *
       * @param request ModifyDedicatedClusterRequest
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedCluster(const Models::ModifyDedicatedClusterRequest &request);

      /**
       * @summary Modifies a data synchronization task by calling the ModifyDtsJob operation.
       *
       * @description > You can preconfigure settings in the console as needed, and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param tmpReq ModifyDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJobWithOptions(const Models::ModifyDtsJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data synchronization task by calling the ModifyDtsJob operation.
       *
       * @description > You can preconfigure settings in the console as needed, and then preview the corresponding OpenAPI parameter information to help you specify request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifyDtsJobRequest
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJob(const Models::ModifyDtsJobRequest &request);

      Models::ModifyDtsJobResponse modifyDtsJobAdvance(const Models::ModifyDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a DTS task by calling the ModifyDtsJobConfig operation.
       *
       * @param request ModifyDtsJobConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfigWithOptions(const Models::ModifyDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a DTS task by calling the ModifyDtsJobConfig operation.
       *
       * @param request ModifyDtsJobConfigRequest
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfig(const Models::ModifyDtsJobConfigRequest &request);

      /**
       * @summary Changes the dedicated cluster on which a task runs.
       *
       * @description > After a migration task is changed from a dedicated cluster to a public cluster, the billing method of the task changes to pay-as-you-go, and billing starts.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedClusterWithOptions(const Models::ModifyDtsJobDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the dedicated cluster on which a task runs.
       *
       * @description > After a migration task is changed from a dedicated cluster to a public cluster, the billing method of the task changes to pay-as-you-go, and billing starts.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedCluster(const Models::ModifyDtsJobDedicatedClusterRequest &request);

      /**
       * @summary Modifies the DU upper limit of a DTS task by calling the ModifyDtsJobDuLimit operation.
       *
       * @description - DTS instances in a dedicated cluster must support specification changes. By changing the resources consumed by a task at runtime, you can dynamically adjust the number of schedulable tasks in the current cluster, thereby deducting or releasing the total number of DUs in the cluster.
       * - Before modifying the DU upper limit of a task, ensure that sufficient resources are available.
       *
       * @param request ModifyDtsJobDuLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDuLimitResponse
       */
      Models::ModifyDtsJobDuLimitResponse modifyDtsJobDuLimitWithOptions(const Models::ModifyDtsJobDuLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DU upper limit of a DTS task by calling the ModifyDtsJobDuLimit operation.
       *
       * @description - DTS instances in a dedicated cluster must support specification changes. By changing the resources consumed by a task at runtime, you can dynamically adjust the number of schedulable tasks in the current cluster, thereby deducting or releasing the total number of DUs in the cluster.
       * - Before modifying the DU upper limit of a task, ensure that sufficient resources are available.
       *
       * @param request ModifyDtsJobDuLimitRequest
       * @return ModifyDtsJobDuLimitResponse
       */
      Models::ModifyDtsJobDuLimitResponse modifyDtsJobDuLimit(const Models::ModifyDtsJobDuLimitRequest &request);

      /**
       * @summary Modifies the source or destination instance of a DTS synchronization or migration task.
       *
       * @description > After the database instance is modified, the DTS incremental write module rolls back writes by 10 seconds. If the data being synchronized or migrated does not have a primary key, stop writing data to the business associated with the source instance during the database instance replacement. Otherwise, duplicate data may occur.
       *
       * @param request ModifyDtsJobEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobEndpointResponse
       */
      Models::ModifyDtsJobEndpointResponse modifyDtsJobEndpointWithOptions(const Models::ModifyDtsJobEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the source or destination instance of a DTS synchronization or migration task.
       *
       * @description > After the database instance is modified, the DTS incremental write module rolls back writes by 10 seconds. If the data being synchronized or migrated does not have a primary key, stop writing data to the business associated with the source instance during the database instance replacement. Otherwise, duplicate data may occur.
       *
       * @param request ModifyDtsJobEndpointRequest
       * @return ModifyDtsJobEndpointResponse
       */
      Models::ModifyDtsJobEndpointResponse modifyDtsJobEndpoint(const Models::ModifyDtsJobEndpointRequest &request);

      /**
       * @summary Modifies the name of a DTS task by calling ModifyDtsJobName.
       *
       * @param request ModifyDtsJobNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobNameWithOptions(const Models::ModifyDtsJobNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a DTS task by calling ModifyDtsJobName.
       *
       * @param request ModifyDtsJobNameRequest
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobName(const Models::ModifyDtsJobNameRequest &request);

      /**
       * @summary Modifies the password of a DTS task (new version).
       *
       * @param request ModifyDtsJobPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPasswordWithOptions(const Models::ModifyDtsJobPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a DTS task (new version).
       *
       * @param request ModifyDtsJobPasswordRequest
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPassword(const Models::ModifyDtsJobPasswordRequest &request);

      /**
       * @summary Adjusts the migration rate of a data synchronization or migration instance.
       *
       * @param request ModifyDynamicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfigWithOptions(const Models::ModifyDynamicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the migration rate of a data synchronization or migration instance.
       *
       * @param request ModifyDynamicConfigRequest
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfig(const Models::ModifyDynamicConfigRequest &request);

      /**
       * @summary Modifies the name of a Global Active Database (GAD) instance.
       *
       * @param request ModifyGadInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceNameWithOptions(const Models::ModifyGadInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a Global Active Database (GAD) instance.
       *
       * @param request ModifyGadInstanceNameRequest
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceName(const Models::ModifyGadInstanceNameRequest &request);

      /**
       * @summary Modify the offset for incremental data writing.
       *
       * @param request ModifyJobStepCheckpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJobStepCheckpointResponse
       */
      Models::ModifyJobStepCheckpointResponse modifyJobStepCheckpointWithOptions(const Models::ModifyJobStepCheckpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the offset for incremental data writing.
       *
       * @param request ModifyJobStepCheckpointRequest
       * @return ModifyJobStepCheckpointResponse
       */
      Models::ModifyJobStepCheckpointResponse modifyJobStepCheckpoint(const Models::ModifyJobStepCheckpointRequest &request);

      /**
       * @summary Modifies a change tracking task (new version).
       *
       * @description > You can perform the required preconfigurations in the console and then preview the corresponding OpenAPI parameter information to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscriptionWithOptions(const Models::ModifySubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a change tracking task (new version).
       *
       * @description > You can perform the required preconfigurations in the console and then preview the corresponding OpenAPI parameter information to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscription(const Models::ModifySubscriptionRequest &request);

      /**
       * @summary Modifies the subscription objects of a change tracking task. This is a legacy operation.
       *
       * @param request ModifySubscriptionObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObjectWithOptions(const Models::ModifySubscriptionObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the subscription objects of a change tracking task. This is a legacy operation.
       *
       * @param request ModifySubscriptionObjectRequest
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObject(const Models::ModifySubscriptionObjectRequest &request);

      /**
       * @summary Modifies the synchronization objects in a data synchronization job instance. This is a legacy operation.
       *
       * @param request ModifySynchronizationObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObjectWithOptions(const Models::ModifySynchronizationObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the synchronization objects in a data synchronization job instance. This is a legacy operation.
       *
       * @param request ModifySynchronizationObjectRequest
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObject(const Models::ModifySynchronizationObjectRequest &request);

      /**
       * @summary Prechecks an order for creating a Global Active Database (GAD) instance group.
       *
       * @param request PreCheckCreateGadOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrderWithOptions(const Models::PreCheckCreateGadOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prechecks an order for creating a Global Active Database (GAD) instance group.
       *
       * @param request PreCheckCreateGadOrderRequest
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrder(const Models::PreCheckCreateGadOrderRequest &request);

      /**
       * @summary Promote a geo-disaster recovery instance from the secondary role to the primary role
       *
       * @param request PromoteToMasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromoteToMasterResponse
       */
      Models::PromoteToMasterResponse promoteToMasterWithOptions(const Models::PromoteToMasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Promote a geo-disaster recovery instance from the secondary role to the primary role
       *
       * @param request PromoteToMasterRequest
       * @return PromoteToMasterResponse
       */
      Models::PromoteToMasterResponse promoteToMaster(const Models::PromoteToMasterRequest &request);

      /**
       * @summary Renews a DTS instance. This operation is applicable only to subscription DTS instances.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a DTS instance. This operation is applicable only to subscription DTS instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description > After the configuration of a data synchronization or change tracking task is cleared, the original task is deleted. DTS creates a new unconfigured task. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJobWithOptions(const Models::ResetDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description > After the configuration of a data synchronization or change tracking task is cleared, the original task is deleted. DTS creates a new unconfigured task. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJob(const Models::ResetDtsJobRequest &request);

      /**
       * @summary Resets the configuration of a data synchronization task.
       *
       * @description > After you reset the configuration of a data synchronization task, the original synchronization task is released. You must call the **ConfigureSynchronizationJob** operation to reconfigure the synchronization task before you can start the task.
       *
       * @param request ResetSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSynchronizationJobResponse
       */
      Models::ResetSynchronizationJobResponse resetSynchronizationJobWithOptions(const Models::ResetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the configuration of a data synchronization task.
       *
       * @description > After you reset the configuration of a data synchronization task, the original synchronization task is released. You must call the **ConfigureSynchronizationJob** operation to reconfigure the synchronization task before you can start the task.
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
       * @summary Skips the precheck for a legacy data migration or synchronization task.
       *
       * @param request ShieldPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheckWithOptions(const Models::ShieldPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips the precheck for a legacy data migration or synchronization task.
       *
       * @param request ShieldPrecheckRequest
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheck(const Models::ShieldPrecheckRequest &request);

      /**
       * @summary Skips tables that do not need to be synchronized during the full data synchronization phase.
       *
       * @param request SkipFullJobTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTableWithOptions(const Models::SkipFullJobTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips tables that do not need to be synchronized during the full data synchronization phase.
       *
       * @param request SkipFullJobTableRequest
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTable(const Models::SkipFullJobTableRequest &request);

      /**
       * @summary Suppresses or unsuppresses precheck alert items.
       *
       * @param request SkipPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipPreCheckResponse
       */
      Models::SkipPreCheckResponse skipPreCheckWithOptions(const Models::SkipPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suppresses or unsuppresses precheck alert items.
       *
       * @param request SkipPreCheckRequest
       * @return SkipPreCheckResponse
       */
      Models::SkipPreCheckResponse skipPreCheck(const Models::SkipPreCheckRequest &request);

      /**
       * @summary Starts a data migration, data synchronization, or change tracking task by calling the StartDtsJob operation.
       *
       * @param request StartDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDtsJobResponse
       */
      Models::StartDtsJobResponse startDtsJobWithOptions(const Models::StartDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data migration, data synchronization, or change tracking task by calling the StartDtsJob operation.
       *
       * @param request StartDtsJobRequest
       * @return StartDtsJobResponse
       */
      Models::StartDtsJobResponse startDtsJob(const Models::StartDtsJobRequest &request);

      /**
       * @summary Starts multiple data migration or synchronization tasks in a batch by calling the StartDtsJobs operation.
       *
       * @param request StartDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDtsJobsResponse
       */
      Models::StartDtsJobsResponse startDtsJobsWithOptions(const Models::StartDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple data migration or synchronization tasks in a batch by calling the StartDtsJobs operation.
       *
       * @param request StartDtsJobsRequest
       * @return StartDtsJobsResponse
       */
      Models::StartDtsJobsResponse startDtsJobs(const Models::StartDtsJobsRequest &request);

      /**
       * @summary Starts a data migration task of Data Transmission Service (DTS).
       *
       * @param request StartMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMigrationJobResponse
       */
      Models::StartMigrationJobResponse startMigrationJobWithOptions(const Models::StartMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a data migration task of Data Transmission Service (DTS).
       *
       * @param request StartMigrationJobRequest
       * @return StartMigrationJobResponse
       */
      Models::StartMigrationJobResponse startMigrationJob(const Models::StartMigrationJobRequest &request);

      /**
       * @summary Starts a reverse task that is created by calling the CreateReverseDtsJob operation.
       *
       * @description Before you call this operation, check the status of the reverse task in the console or by calling [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html). Make sure that the task has not been released and is in the paused state.
       *
       * @param request StartReverseWriterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartReverseWriterResponse
       */
      Models::StartReverseWriterResponse startReverseWriterWithOptions(const Models::StartReverseWriterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a reverse task that is created by calling the CreateReverseDtsJob operation.
       *
       * @description Before you call this operation, check the status of the reverse task in the console or by calling [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html). Make sure that the task has not been released and is in the paused state.
       *
       * @param request StartReverseWriterRequest
       * @return StartReverseWriterResponse
       */
      Models::StartReverseWriterResponse startReverseWriter(const Models::StartReverseWriterRequest &request);

      /**
       * @summary Starts the channel of a change tracking instance. This is a legacy operation.
       *
       * @param request StartSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSubscriptionInstanceResponse
       */
      Models::StartSubscriptionInstanceResponse startSubscriptionInstanceWithOptions(const Models::StartSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the channel of a change tracking instance. This is a legacy operation.
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
       * @summary Releases a cluster by calling the StopDedicatedCluster operation.
       *
       * @param request StopDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDedicatedClusterResponse
       */
      Models::StopDedicatedClusterResponse stopDedicatedClusterWithOptions(const Models::StopDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a cluster by calling the StopDedicatedCluster operation.
       *
       * @param request StopDedicatedClusterRequest
       * @return StopDedicatedClusterResponse
       */
      Models::StopDedicatedClusterResponse stopDedicatedCluster(const Models::StopDedicatedClusterRequest &request);

      /**
       * @summary Stops a data migration, data synchronization, or change tracking task by calling StopDtsJob.
       *
       * @param request StopDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDtsJobResponse
       */
      Models::StopDtsJobResponse stopDtsJobWithOptions(const Models::StopDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a data migration, data synchronization, or change tracking task by calling StopDtsJob.
       *
       * @param request StopDtsJobRequest
       * @return StopDtsJobResponse
       */
      Models::StopDtsJobResponse stopDtsJob(const Models::StopDtsJobRequest &request);

      /**
       * @summary Stops multiple DTS tasks at a time.
       *
       * @param request StopDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobsWithOptions(const Models::StopDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple DTS tasks at a time.
       *
       * @param request StopDtsJobsRequest
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobs(const Models::StopDtsJobsRequest &request);

      /**
       * @summary Ends a data migration task that is in a migration state.
       *
       * @param request StopMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJobWithOptions(const Models::StopMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends a data migration task that is in a migration state.
       *
       * @param request StopMigrationJobRequest
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJob(const Models::StopMigrationJobRequest &request);

      /**
       * @summary Queries the number of tables migrated in a Data Transmission Service (DTS) data migration or synchronization task.
       *
       * @param request SummaryJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetailWithOptions(const Models::SummaryJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of tables migrated in a Data Transmission Service (DTS) data migration or synchronization task.
       *
       * @param request SummaryJobDetailRequest
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetail(const Models::SummaryJobDetailRequest &request);

      /**
       * @summary Suspends a data migration or synchronization task. Change tracking tasks are not supported. Change tracking instances do not support the suspend capability. Do not call this operation on change tracking instances.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJobWithOptions(const Models::SuspendDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a data migration or synchronization task. Change tracking tasks are not supported. Change tracking instances do not support the suspend capability. Do not call this operation on change tracking instances.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJob(const Models::SuspendDtsJobRequest &request);

      /**
       * @summary Suspends multiple DTS tasks at a time.
       *
       * @param request SuspendDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobsResponse
       */
      Models::SuspendDtsJobsResponse suspendDtsJobsWithOptions(const Models::SuspendDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends multiple DTS tasks at a time.
       *
       * @param request SuspendDtsJobsRequest
       * @return SuspendDtsJobsResponse
       */
      Models::SuspendDtsJobsResponse suspendDtsJobs(const Models::SuspendDtsJobsRequest &request);

      /**
       * @summary Suspends a data migration task that is in progress.
       *
       * @param request SuspendMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendMigrationJobResponse
       */
      Models::SuspendMigrationJobResponse suspendMigrationJobWithOptions(const Models::SuspendMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a data migration task that is in progress.
       *
       * @param request SuspendMigrationJobRequest
       * @return SuspendMigrationJobResponse
       */
      Models::SuspendMigrationJobResponse suspendMigrationJob(const Models::SuspendMigrationJobRequest &request);

      /**
       * @summary Pauses a data synchronization task that is in the Synchronizing state.
       *
       * @description > - When you call this operation, the synchronization task must be in the Synchronizing state.
       * - A synchronization task cannot be paused for more than 6 hours. Otherwise, the task cannot be restarted.
       * - DTS continues to charge fees for a pay-as-you-go synchronization task even if the task is paused. This is because DTS only pauses writing data to the destination instance but continues to pull logs from the source instance to ensure quick resumption when the task is restarted. Therefore, the task still consumes resources such as bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJobWithOptions(const Models::SuspendSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a data synchronization task that is in the Synchronizing state.
       *
       * @description > - When you call this operation, the synchronization task must be in the Synchronizing state.
       * - A synchronization task cannot be paused for more than 6 hours. Otherwise, the task cannot be restarted.
       * - DTS continues to charge fees for a pay-as-you-go synchronization task even if the task is paused. This is because DTS only pauses writing data to the destination instance but continues to pull logs from the source instance to ensure quick resumption when the task is restarted. Therefore, the task still consumes resources such as bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJob(const Models::SuspendSynchronizationJobRequest &request);

      /**
       * @summary Performs physical migration of an MSSQL database to Alibaba Cloud.
       *
       * @param request SwitchPhysicalDtsJobToCloudRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchPhysicalDtsJobToCloudResponse
       */
      Models::SwitchPhysicalDtsJobToCloudResponse switchPhysicalDtsJobToCloudWithOptions(const Models::SwitchPhysicalDtsJobToCloudRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs physical migration of an MSSQL database to Alibaba Cloud.
       *
       * @param request SwitchPhysicalDtsJobToCloudRequest
       * @return SwitchPhysicalDtsJobToCloudResponse
       */
      Models::SwitchPhysicalDtsJobToCloudResponse switchPhysicalDtsJobToCloud(const Models::SwitchPhysicalDtsJobToCloudRequest &request);

      /**
       * @summary Passes the connection information of the new database to DTS after a primary/secondary switchover. DTS restarts data synchronization from the checkpoint.
       *
       * @param request SwitchSynchronizationEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchSynchronizationEndpointResponse
       */
      Models::SwitchSynchronizationEndpointResponse switchSynchronizationEndpointWithOptions(const Models::SwitchSynchronizationEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Passes the connection information of the new database to DTS after a primary/secondary switchover. DTS restarts data synchronization from the checkpoint.
       *
       * @param request SwitchSynchronizationEndpointRequest
       * @return SwitchSynchronizationEndpointResponse
       */
      Models::SwitchSynchronizationEndpointResponse switchSynchronizationEndpoint(const Models::SwitchSynchronizationEndpointRequest &request);

      /**
       * @summary Binds tags to one or more data migration, synchronization, and change tracking instances by calling the TagResources operation.
       *
       * @description If you have a large number of instances, you can create multiple tags and attach different tags to instances for categorization. Then, you can filter instances by tag.
       * - A tag consists of a key-value pair. Tag keys must be unique within the same Alibaba Cloud account and region. Tag values do not have this restriction.
       * - If the specified tag does not exist, the tag is automatically created and attached to the destination instance.
       * - If the instance already has a tag with the same key, the existing tag is overwritten.
       * - You can attach up to 20 tags to each instance.
       * - You can invoke the operation to attach tags to up to 50 instances at a time.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to one or more data migration, synchronization, and change tracking instances by calling the TagResources operation.
       *
       * @description If you have a large number of instances, you can create multiple tags and attach different tags to instances for categorization. Then, you can filter instances by tag.
       * - A tag consists of a key-value pair. Tag keys must be unique within the same Alibaba Cloud account and region. Tag values do not have this restriction.
       * - If the specified tag does not exist, the tag is automatically created and attached to the destination instance.
       * - If the instance already has a tag with the same key, the existing tag is overwritten.
       * - You can attach up to 20 tags to each instance.
       * - You can invoke the operation to attach tags to up to 50 instances at a time.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Upgrades or downgrades the specifications of a DTS instance.
       *
       * @description > - Downgrading DTS instance specifications is no longer supported.
       * - If the source of a DTS instance is Redis 6.0 and incremental data updates exist, do not perform an upgrade. Otherwise, the DTS instance may fail and cannot be recovered. You must reconfigure the instance after a failure.
       *
       * @param request TransferInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferInstanceClassResponse
       */
      Models::TransferInstanceClassResponse transferInstanceClassWithOptions(const Models::TransferInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the specifications of a DTS instance.
       *
       * @description > - Downgrading DTS instance specifications is no longer supported.
       * - If the source of a DTS instance is Redis 6.0 and incremental data updates exist, do not perform an upgrade. Otherwise, the DTS instance may fail and cannot be recovered. You must reconfigure the instance after a failure.
       *
       * @param request TransferInstanceClassRequest
       * @return TransferInstanceClassResponse
       */
      Models::TransferInstanceClassResponse transferInstanceClass(const Models::TransferInstanceClassRequest &request);

      /**
       * @summary Transforms the payment method of a DTS instance.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - To avoid resource waste, confirm the payment method transformation before you perform the operation.
       * - Data migration instances support only the pay-as-you-go billing method. No transformation is required.
       * <props="china">
       * - Serverless instances do not support payment method transformation.
       *
       * @param request TransferPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayTypeWithOptions(const Models::TransferPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transforms the payment method of a DTS instance.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - To avoid resource waste, confirm the payment method transformation before you perform the operation.
       * - Data migration instances support only the pay-as-you-go billing method. No transformation is required.
       * <props="china">
       * - Serverless instances do not support payment method transformation.
       *
       * @param request TransferPayTypeRequest
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayType(const Models::TransferPayTypeRequest &request);

      /**
       * @summary Unbinds tags from data migration, synchronization, and change tracking instances.
       *
       * @description > After a tag is unbound from an instance, the tag is automatically deleted if it is not bound to any other instance.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from data migration, synchronization, and change tracking instances.
       *
       * @description > After a tag is unbound from an instance, the tag is automatically deleted if it is not bound to any other instance.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the synchronization topology of a DTS data synchronization instance from one-way synchronization to two-way synchronization.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of ApsaraDB DTS.
       * <props="intl">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of ApsaraDB DTS.
       * Before you begin:
       * - The database type of both the source instance and the destination instance of the data synchronization node must be **MySQL**.
       * - The synchronization topology of the data synchronization node must be **one-way synchronization**.
       * - The data synchronization node must be in the **Synchronizing** state.
       * - During the upgrade, data synchronization may experience a latency of approximately 5 seconds. Perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWayWithOptions(const Models::UpgradeTwoWayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the synchronization topology of a DTS data synchronization instance from one-way synchronization to two-way synchronization.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of ApsaraDB DTS.
       * <props="intl">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of ApsaraDB DTS.
       * Before you begin:
       * - The database type of both the source instance and the destination instance of the data synchronization node must be **MySQL**.
       * - The synchronization topology of the data synchronization node must be **one-way synchronization**.
       * - The data synchronization node must be in the **Synchronizing** state.
       * - During the upgrade, data synchronization may experience a latency of approximately 5 seconds. Perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWay(const Models::UpgradeTwoWayRequest &request);

      /**
       * @summary Queries the IP addresses of DTS servers by calling the WhiteIpList operation.
       *
       * @description <props="china">If the **source or destination instance** is a **self-managed database** or a **third-party ApsaraDB database**, you need to invoke this operation to query the IP addresses of DTS servers, and then add the returned IP addresses to the security settings (typically the firewall) of the source or destination instance. For more information about how to add IP addresses, see [Add the CIDR blocks of DTS servers to the whitelist of a self-managed database for migration, synchronization, or subscribe](https://help.aliyun.com/document_detail/84900.html).
       * <props="intl">If the **source or destination instance** is a **self-managed database** or a **third-party ApsaraDB database**, you need to invoke this operation to query the IP addresses of DTS servers, and then add the returned IP addresses to the security settings (typically the firewall) of the source or destination instance. For more information about how to add IP addresses, see [Add the CIDR blocks of DTS servers to the whitelist of a self-managed database](https://help.aliyun.com/document_detail/176627.html).
       * > If the **source or destination database** is an **Alibaba Cloud database instance** (such as ApsaraDB RDS or ApsaraDB for MongoDB) or a **self-managed database hosted on ECS**, the system automatically adds the IP addresses of DTS servers to the security settings of the instance when you click **Authorize Whitelist and Proceed to Next Step** during the configuration of the source or destination instance. You do not need to manually add the IP addresses.
       *
       * @param request WhiteIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpListWithOptions(const Models::WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses of DTS servers by calling the WhiteIpList operation.
       *
       * @description <props="china">If the **source or destination instance** is a **self-managed database** or a **third-party ApsaraDB database**, you need to invoke this operation to query the IP addresses of DTS servers, and then add the returned IP addresses to the security settings (typically the firewall) of the source or destination instance. For more information about how to add IP addresses, see [Add the CIDR blocks of DTS servers to the whitelist of a self-managed database for migration, synchronization, or subscribe](https://help.aliyun.com/document_detail/84900.html).
       * <props="intl">If the **source or destination instance** is a **self-managed database** or a **third-party ApsaraDB database**, you need to invoke this operation to query the IP addresses of DTS servers, and then add the returned IP addresses to the security settings (typically the firewall) of the source or destination instance. For more information about how to add IP addresses, see [Add the CIDR blocks of DTS servers to the whitelist of a self-managed database](https://help.aliyun.com/document_detail/176627.html).
       * > If the **source or destination database** is an **Alibaba Cloud database instance** (such as ApsaraDB RDS or ApsaraDB for MongoDB) or a **self-managed database hosted on ECS**, the system automatically adds the IP addresses of DTS servers to the security settings of the instance when you click **Authorize Whitelist and Proceed to Next Step** during the configuration of the source or destination instance. You do not need to manually add the IP addresses.
       *
       * @param request WhiteIpListRequest
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpList(const Models::WhiteIpListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
