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
       * @description - You can preconfigure the task in the console based on your requirements and then preview the OpenAPI parameters for the configuration to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       * - Tasks in dedicated clusters only support the configure-then-purchase mode and do not support cross-region tasks.
       *
       * @param request ConfigureDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureDtsJobResponse
       */
      Models::ConfigureDtsJobResponse configureDtsJobWithOptions(const Models::ConfigureDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a data migration or synchronization task.
       *
       * @description - You can preconfigure the task in the console based on your requirements and then preview the OpenAPI parameters for the configuration to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       * - Tasks in dedicated clusters only support the configure-then-purchase mode and do not support cross-region tasks.
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
       * @summary Configures monitoring alerts for the latency and abnormal status of a migration task.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlertWithOptions(const Models::ConfigureMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures monitoring alerts for the latency and abnormal status of a migration task.
       *
       * @param request ConfigureMigrationJobAlertRequest
       * @return ConfigureMigrationJobAlertResponse
       */
      Models::ConfigureMigrationJobAlertResponse configureMigrationJobAlert(const Models::ConfigureMigrationJobAlertRequest &request);

      /**
       * @summary Configures a DTS change tracking task.
       *
       * @description > You can preconfigure settings in the console as needed and then preview the OpenAPI parameters for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscriptionWithOptions(const Models::ConfigureSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a DTS change tracking task.
       *
       * @description > You can preconfigure settings in the console as needed and then preview the OpenAPI parameters for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ConfigureSubscriptionRequest
       * @return ConfigureSubscriptionResponse
       */
      Models::ConfigureSubscriptionResponse configureSubscription(const Models::ConfigureSubscriptionRequest &request);

      /**
       * @summary Configures a legacy change tracking channel.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       * > In the **Advanced Settings** step of the console, move the pointer over the **Save Task and Precheck** button, and then click **Preview OpenAPI Call** in the tooltip to view the parameter settings for configuring the instance by using API operations.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstanceWithOptions(const Models::ConfigureSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a legacy change tracking channel.
       *
       * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
       * > In the **Advanced Settings** step of the console, move the pointer over the **Save Task and Precheck** button, and then click **Preview OpenAPI Call** in the tooltip to view the parameter settings for configuring the instance by using API operations.
       *
       * @param request ConfigureSubscriptionInstanceRequest
       * @return ConfigureSubscriptionInstanceResponse
       */
      Models::ConfigureSubscriptionInstanceResponse configureSubscriptionInstance(const Models::ConfigureSubscriptionInstanceRequest &request);

      /**
       * @summary Configures monitoring alerts to monitor the latency and abnormal status of a change tracking channel.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlertWithOptions(const Models::ConfigureSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures monitoring alerts to monitor the latency and abnormal status of a change tracking channel.
       *
       * @param request ConfigureSubscriptionInstanceAlertRequest
       * @return ConfigureSubscriptionInstanceAlertResponse
       */
      Models::ConfigureSubscriptionInstanceAlertResponse configureSubscriptionInstanceAlert(const Models::ConfigureSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Configures a legacy data synchronization task.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > - After this operation is called, the data synchronization instance automatically starts and runs a precheck. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the instance.
       * - If the data synchronization instance fails to start, the precheck may have failed. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the data synchronization instance, obtain the error message for the precheck failure, and adjust the parameters. After the adjustment, you can call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJobWithOptions(const Models::ConfigureSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a legacy data synchronization task.
       *
       * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
       * > - After this operation is called, the data synchronization instance automatically starts and runs a precheck. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the instance.
       * - If the data synchronization instance fails to start, the precheck may have failed. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the data synchronization instance, obtain the error message for the precheck failure, and adjust the parameters. After the adjustment, you can call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization instance.
       *
       * @param request ConfigureSynchronizationJobRequest
       * @return ConfigureSynchronizationJobResponse
       */
      Models::ConfigureSynchronizationJobResponse configureSynchronizationJob(const Models::ConfigureSynchronizationJobRequest &request);

      /**
       * @summary Configures alert rules to monitor the latency and abnormal status of a data synchronization task.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlertWithOptions(const Models::ConfigureSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures alert rules to monitor the latency and abnormal status of a data synchronization task.
       *
       * @param request ConfigureSynchronizationJobAlertRequest
       * @return ConfigureSynchronizationJobAlertResponse
       */
      Models::ConfigureSynchronizationJobAlertResponse configureSynchronizationJobAlert(const Models::ConfigureSynchronizationJobAlertRequest &request);

      /**
       * @summary Configures the full-image matching switch for synchronization.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompareWithOptions(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the full-image matching switch for synchronization.
       *
       * @param request ConfigureSynchronizationJobReplicatorCompareRequest
       * @return ConfigureSynchronizationJobReplicatorCompareResponse
       */
      Models::ConfigureSynchronizationJobReplicatorCompareResponse configureSynchronizationJobReplicatorCompare(const Models::ConfigureSynchronizationJobReplicatorCompareRequest &request);

      /**
       * @summary Changes the resource group of a DTS instance.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroupWithOptions(const Models::ConvertInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a DTS instance.
       *
       * @param request ConvertInstanceResourceGroupRequest
       * @return ConvertInstanceResourceGroupResponse
       */
      Models::ConvertInstanceResourceGroupResponse convertInstanceResourceGroup(const Models::ConvertInstanceResourceGroupRequest &request);

      /**
       * @summary Queries task statistics based on specified conditions.
       *
       * @param request CountJobByConditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByConditionWithOptions(const Models::CountJobByConditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task statistics based on specified conditions.
       *
       * @param request CountJobByConditionRequest
       * @return CountJobByConditionResponse
       */
      Models::CountJobByConditionResponse countJobByCondition(const Models::CountJobByConditionRequest &request);

      /**
       * @summary Creates a consumer group for a change tracking task.
       *
       * @param request CreateConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerChannelResponse
       */
      Models::CreateConsumerChannelResponse createConsumerChannelWithOptions(const Models::CreateConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group for a change tracking task.
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
       * @description Creates a document parsing task and returns a task ID (DtsJobId).
       * > - This operation relies on Object Storage Service (OSS) for file transfer. Use an SDK to call this operation. Calling the CreateDocParserJobAdvance operation automatically encapsulates the file transfer process.
       * > - After you obtain the DtsJobId response parameter, you can call the DescribeDocParserJobStatus operation to query the execution status of the document parsing task and call the DescribeDocParserJobResult operation to obtain the document parsing results.
       *
       * @param request CreateDocParserJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJobWithOptions(const Models::CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a document parsing task.
       *
       * @description Creates a document parsing task and returns a task ID (DtsJobId).
       * > - This operation relies on Object Storage Service (OSS) for file transfer. Use an SDK to call this operation. Calling the CreateDocParserJobAdvance operation automatically encapsulates the file transfer process.
       * > - After you obtain the DtsJobId response parameter, you can call the DescribeDocParserJobStatus operation to query the execution status of the document parsing task and call the DescribeDocParserJobResult operation to obtain the document parsing results.
       *
       * @param request CreateDocParserJobRequest
       * @return CreateDocParserJobResponse
       */
      Models::CreateDocParserJobResponse createDocParserJob(const Models::CreateDocParserJobRequest &request);

      Models::CreateDocParserJobResponse createDocParserJobAdvance(const Models::CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a DTS instance.
       *
       * @description <props="china">
       * - Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of the cloud database DTS product.
       * <props="intl">
       * - Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/product/data-transmission-service/pricing) of the cloud database DTS product.
       * - For nodes in a dedicated cluster, you must configure the node before you purchase the instance. You can invoke the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure the node.
       *
       * @param request CreateDtsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstanceWithOptions(const Models::CreateDtsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a DTS instance.
       *
       * @description <props="china">
       * - Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of the cloud database DTS product.
       * <props="intl">
       * - Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/product/data-transmission-service/pricing) of the cloud database DTS product.
       * - For nodes in a dedicated cluster, you must configure the node before you purchase the instance. You can invoke the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure the node.
       *
       * @param request CreateDtsInstanceRequest
       * @return CreateDtsInstanceResponse
       */
      Models::CreateDtsInstanceResponse createDtsInstance(const Models::CreateDtsInstanceRequest &request);

      /**
       * @summary Creates a GAD instance.
       *
       * @param request CreateGadInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGadInstanceResponse
       */
      Models::CreateGadInstanceResponse createGadInstanceWithOptions(const Models::CreateGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a GAD instance.
       *
       * @param request CreateGadInstanceRequest
       * @return CreateGadInstanceResponse
       */
      Models::CreateGadInstanceResponse createGadInstance(const Models::CreateGadInstanceRequest &request);

      /**
       * @summary Creates a globally active database (GAD) instance group for ApsaraDB RDS.
       *
       * @description When NeedCreateSlave is set to true, the following additional parameters are required: DbInstanceClass, DbInstanceStorage, DbInstanceStorageType, ZoneId, ZoneIdSlave1, ZoneIdSlave2, VpcId, VSwitchId, SecurityIPList, PayType, Port, Amount, AutoRenew, Period, UsedTime, Category, EngineVersion, DbInstanceDescription, and AutoCreateProxy. These parameters have the same meanings as those in the CreateDBInstance operation.
       *
       * @param tmpReq CreateGadOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGadOrderResponse
       */
      Models::CreateGadOrderResponse createGadOrderWithOptions(const Models::CreateGadOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a globally active database (GAD) instance group for ApsaraDB RDS.
       *
       * @description When NeedCreateSlave is set to true, the following additional parameters are required: DbInstanceClass, DbInstanceStorage, DbInstanceStorageType, ZoneId, ZoneIdSlave1, ZoneIdSlave2, VpcId, VSwitchId, SecurityIPList, PayType, Port, Amount, AutoRenew, Period, UsedTime, Category, EngineVersion, DbInstanceDescription, and AutoCreateProxy. These parameters have the same meanings as those in the CreateDBInstance operation.
       *
       * @param request CreateGadOrderRequest
       * @return CreateGadOrderResponse
       */
      Models::CreateGadOrderResponse createGadOrder(const Models::CreateGadOrderRequest &request);

      /**
       * @summary Creates or modifies an alert rule for a task.
       *
       * @description Data Transmission Service (DTS) currently supports the following monitoring metrics: **latency**, **migration status**, and **full run duration**:
       * - **Latency**: Monitors the latency of incremental data migration. An alert is triggered when the migration latency, synchronization latency, or change tracking latency exceeds the specified threshold in seconds.
       * - **Migration status**: Monitors the status of the task. An alert is triggered when the task status is **Abnormal** or **Recovered**.
       * - **Full run duration**: Monitors the duration of the full run. An alert is triggered when the duration exceeds the specified threshold in hours.
       *
       * @param request CreateJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobMonitorRuleResponse
       */
      Models::CreateJobMonitorRuleResponse createJobMonitorRuleWithOptions(const Models::CreateJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule for a task.
       *
       * @description Data Transmission Service (DTS) currently supports the following monitoring metrics: **latency**, **migration status**, and **full run duration**:
       * - **Latency**: Monitors the latency of incremental data migration. An alert is triggered when the migration latency, synchronization latency, or change tracking latency exceeds the specified threshold in seconds.
       * - **Migration status**: Monitors the status of the task. An alert is triggered when the task status is **Abnormal** or **Recovered**.
       * - **Full run duration**: Monitors the duration of the full run. An alert is triggered when the duration exceeds the specified threshold in hours.
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
       * @summary Creates a reverse task for a specified synchronization or migration task.
       *
       * @description A reverse task created by calling this operation immediately undergoes a precheck. After the precheck is passed, incremental data collection starts, but the incremental data writer does not run. You must call the **StartReverseWriter** operation to start the incremental data writer.
       * > A created reverse task is always a synchronization task and includes only the incremental data writer.
       *
       * @param request CreateReverseDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJobWithOptions(const Models::CreateReverseDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a reverse task for a specified synchronization or migration task.
       *
       * @description A reverse task created by calling this operation immediately undergoes a precheck. After the precheck is passed, incremental data collection starts, but the incremental data writer does not run. You must call the **StartReverseWriter** operation to start the incremental data writer.
       * > A created reverse task is always a synchronization task and includes only the incremental data writer.
       *
       * @param request CreateReverseDtsJobRequest
       * @return CreateReverseDtsJobResponse
       */
      Models::CreateReverseDtsJobResponse createReverseDtsJob(const Models::CreateReverseDtsJobRequest &request);

      /**
       * @summary Creates a legacy change tracking instance.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstanceWithOptions(const Models::CreateSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a legacy change tracking instance.
       *
       * @param request CreateSubscriptionInstanceRequest
       * @return CreateSubscriptionInstanceResponse
       */
      Models::CreateSubscriptionInstanceResponse createSubscriptionInstance(const Models::CreateSubscriptionInstanceRequest &request);

      /**
       * @summary Creates a legacy data synchronization job instance.
       *
       * @param request CreateSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJobWithOptions(const Models::CreateSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a legacy data synchronization job instance.
       *
       * @param request CreateSynchronizationJobRequest
       * @return CreateSynchronizationJobResponse
       */
      Models::CreateSynchronizationJobResponse createSynchronizationJob(const Models::CreateSynchronizationJobRequest &request);

      /**
       * @summary Deletes a consumer group for a change tracking task.
       *
       * @param request DeleteConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerChannelResponse
       */
      Models::DeleteConsumerChannelResponse deleteConsumerChannelWithOptions(const Models::DeleteConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group for a change tracking task.
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
       * @summary Releases a data migration, data synchronization, or change tracking instance.
       *
       * @description > <props="china"><ph>You cannot release subscription DTS instances by calling API operations. You can release them by unsubscribing from the instances. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>
       *
       * @param request DeleteDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJobWithOptions(const Models::DeleteDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a data migration, data synchronization, or change tracking instance.
       *
       * @description > <props="china"><ph>You cannot release subscription DTS instances by calling API operations. You can release them by unsubscribing from the instances. For more information, see [Release a DTS instance](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>
       *
       * @param request DeleteDtsJobRequest
       * @return DeleteDtsJobResponse
       */
      Models::DeleteDtsJobResponse deleteDtsJob(const Models::DeleteDtsJobRequest &request);

      /**
       * @summary Releases multiple data migration, data synchronization, or change tracking tasks.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling API operations. You can release them by unsubscribing from the instances. For more information, see [Release DTS instances](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>
       *
       * @param request DeleteDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDtsJobsResponse
       */
      Models::DeleteDtsJobsResponse deleteDtsJobsWithOptions(const Models::DeleteDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases multiple data migration, data synchronization, or change tracking tasks.
       *
       * @description > <props="china"><ph>Subscription DTS instances cannot be released by calling API operations. You can release them by unsubscribing from the instances. For more information, see [Release DTS instances](https://help.aliyun.com/document_detail/289054.html).</ph><props="intl"><ph>Subscription DTS instances cannot be released.</ph>
       *
       * @param request DeleteDtsJobsRequest
       * @return DeleteDtsJobsResponse
       */
      Models::DeleteDtsJobsResponse deleteDtsJobs(const Models::DeleteDtsJobsRequest &request);

      /**
       * @summary Deletes a GAD instance.
       *
       * @param request DeleteGadInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstanceWithOptions(const Models::DeleteGadInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a GAD instance.
       *
       * @param request DeleteGadInstanceRequest
       * @return DeleteGadInstanceResponse
       */
      Models::DeleteGadInstanceResponse deleteGadInstance(const Models::DeleteGadInstanceRequest &request);

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
       * @summary Releases a data synchronization job instance.
       *
       * @param request DeleteSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSynchronizationJobResponse
       */
      Models::DeleteSynchronizationJobResponse deleteSynchronizationJobWithOptions(const Models::DeleteSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a data synchronization job instance.
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
       * @summary Queries the verification tasks associated with data migration tasks and data synchronization tasks.
       *
       * @param request DescribeCheckJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobsWithOptions(const Models::DescribeCheckJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification tasks associated with data migration tasks and data synchronization tasks.
       *
       * @param request DescribeCheckJobsRequest
       * @return DescribeCheckJobsResponse
       */
      Models::DescribeCheckJobsResponse describeCheckJobs(const Models::DescribeCheckJobsRequest &request);

      /**
       * @summary Queries the operation logs of a DTS cluster.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogsWithOptions(const Models::DescribeClusterOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of a DTS cluster.
       *
       * @param request DescribeClusterOperateLogsRequest
       * @return DescribeClusterOperateLogsResponse
       */
      Models::DescribeClusterOperateLogsResponse describeClusterOperateLogs(const Models::DescribeClusterOperateLogsRequest &request);

      /**
       * @summary Queries the current usage of a cluster.
       *
       * @param request DescribeClusterUsedUtilizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUsedUtilizationResponse
       */
      Models::DescribeClusterUsedUtilizationResponse describeClusterUsedUtilizationWithOptions(const Models::DescribeClusterUsedUtilizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current usage of a cluster.
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
       * @summary Queries the DTS IP addresses that must be added to the whitelists of both the source and destination databases.
       *
       * @param request DescribeDTSIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIPWithOptions(const Models::DescribeDTSIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DTS IP addresses that must be added to the whitelists of both the source and destination databases.
       *
       * @param request DescribeDTSIPRequest
       * @return DescribeDTSIPResponse
       */
      Models::DescribeDTSIPResponse describeDTSIP(const Models::DescribeDTSIPRequest &request);

      /**
       * @summary Retrieves the download link for the list of inconsistent data.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrlWithOptions(const Models::DescribeDataCheckReportUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download link for the list of inconsistent data.
       *
       * @param request DescribeDataCheckReportUrlRequest
       * @return DescribeDataCheckReportUrlResponse
       */
      Models::DescribeDataCheckReportUrlResponse describeDataCheckReportUrl(const Models::DescribeDataCheckReportUrlRequest &request);

      /**
       * @summary Lists the verification results by table.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetailsWithOptions(const Models::DescribeDataCheckTableDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the verification results by table.
       *
       * @param request DescribeDataCheckTableDetailsRequest
       * @return DescribeDataCheckTableDetailsResponse
       */
      Models::DescribeDataCheckTableDetailsResponse describeDataCheckTableDetails(const Models::DescribeDataCheckTableDetailsRequest &request);

      /**
       * @summary Lists the data inconsistency check results.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetailsWithOptions(const Models::DescribeDataCheckTableDiffDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the data inconsistency check results.
       *
       * @param request DescribeDataCheckTableDiffDetailsRequest
       * @return DescribeDataCheckTableDiffDetailsResponse
       */
      Models::DescribeDataCheckTableDiffDetailsResponse describeDataCheckTableDiffDetails(const Models::DescribeDataCheckTableDiffDetailsRequest &request);

      /**
       * @summary Queries the details of a dedicated cluster.
       *
       * @param request DescribeDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedClusterWithOptions(const Models::DescribeDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a dedicated cluster.
       *
       * @param request DescribeDedicatedClusterRequest
       * @return DescribeDedicatedClusterResponse
       */
      Models::DescribeDedicatedClusterResponse describeDedicatedCluster(const Models::DescribeDedicatedClusterRequest &request);

      /**
       * @summary Queries the alert rules.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRuleWithOptions(const Models::DescribeDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert rules.
       *
       * @param request DescribeDedicatedClusterMonitorRuleRequest
       * @return DescribeDedicatedClusterMonitorRuleResponse
       */
      Models::DescribeDedicatedClusterMonitorRuleResponse describeDedicatedClusterMonitorRule(const Models::DescribeDedicatedClusterMonitorRuleRequest &request);

      /**
       * @summary Retrieves the results of a document parsing task.
       *
       * @description This operation has call limits. Calls that exceed the limits are rejected.
       * - The cumulative call limit per region is 100 calls per second.
       * - The call limit per account per region is 5 calls per second.
       *
       * @param request DescribeDocParserJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResultWithOptions(const Models::DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the results of a document parsing task.
       *
       * @description This operation has call limits. Calls that exceed the limits are rejected.
       * - The cumulative call limit per region is 100 calls per second.
       * - The call limit per account per region is 5 calls per second.
       *
       * @param request DescribeDocParserJobResultRequest
       * @return DescribeDocParserJobResultResponse
       */
      Models::DescribeDocParserJobResultResponse describeDocParserJobResult(const Models::DescribeDocParserJobResultRequest &request);

      /**
       * @summary Queries the execution status of a document parsing task.
       *
       * @description This operation has a limit on the number of calls. Calls that exceed the limit are rejected.
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
       * @description This operation has a limit on the number of calls. Calls that exceed the limit are rejected.
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
       * @summary Queries the details of a DTS task.
       *
       * @description This operation has limits on the number of calls. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls allowed in a single region is 160 calls per second.
       * - The threshold for calls allowed per account in a single region is 40 calls per second.
       *
       * @param request DescribeDtsJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDtsJobDetailResponse
       */
      Models::DescribeDtsJobDetailResponse describeDtsJobDetailWithOptions(const Models::DescribeDtsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a DTS task.
       *
       * @description This operation has limits on the number of calls. Calls that exceed the limits are rejected.
       * - The cumulative threshold for calls allowed in a single region is 160 calls per second.
       * - The threshold for calls allowed per account in a single region is 40 calls per second.
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
       * @summary Queries the execution details of a full data migration task.
       *
       * @param request DescribeFullProcessListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessListWithOptions(const Models::DescribeFullProcessListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of a full data migration task.
       *
       * @param request DescribeFullProcessListRequest
       * @return DescribeFullProcessListResponse
       */
      Models::DescribeFullProcessListResponse describeFullProcessList(const Models::DescribeFullProcessListRequest &request);

      /**
       * @summary Queries the database instances of a GAD instance.
       *
       * @param request DescribeGadInstanceDbMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstanceDbMembersResponse
       */
      Models::DescribeGadInstanceDbMembersResponse describeGadInstanceDbMembersWithOptions(const Models::DescribeGadInstanceDbMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the database instances of a GAD instance.
       *
       * @param request DescribeGadInstanceDbMembersRequest
       * @return DescribeGadInstanceDbMembersResponse
       */
      Models::DescribeGadInstanceDbMembersResponse describeGadInstanceDbMembers(const Models::DescribeGadInstanceDbMembersRequest &request);

      /**
       * @summary Queries the details of a GAD instance.
       *
       * @param request DescribeGadInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstanceDetailResponse
       */
      Models::DescribeGadInstanceDetailResponse describeGadInstanceDetailWithOptions(const Models::DescribeGadInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a GAD instance.
       *
       * @param request DescribeGadInstanceDetailRequest
       * @return DescribeGadInstanceDetailResponse
       */
      Models::DescribeGadInstanceDetailResponse describeGadInstanceDetail(const Models::DescribeGadInstanceDetailRequest &request);

      /**
       * @summary Queries the list of DTS tasks for a GAD instance.
       *
       * @param request DescribeGadInstanceDtsMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstanceDtsMembersResponse
       */
      Models::DescribeGadInstanceDtsMembersResponse describeGadInstanceDtsMembersWithOptions(const Models::DescribeGadInstanceDtsMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of DTS tasks for a GAD instance.
       *
       * @param request DescribeGadInstanceDtsMembersRequest
       * @return DescribeGadInstanceDtsMembersResponse
       */
      Models::DescribeGadInstanceDtsMembersResponse describeGadInstanceDtsMembers(const Models::DescribeGadInstanceDtsMembersRequest &request);

      /**
       * @summary Queries a list of GAD instances.
       *
       * @param request DescribeGadInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstancesWithOptions(const Models::DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of GAD instances.
       *
       * @param request DescribeGadInstancesRequest
       * @return DescribeGadInstancesResponse
       */
      Models::DescribeGadInstancesResponse describeGadInstances(const Models::DescribeGadInstancesRequest &request);

      /**
       * @summary Queries the initialization status of the legacy version.
       *
       * @param request DescribeInitializationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatusWithOptions(const Models::DescribeInitializationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the initialization status of the legacy version.
       *
       * @param request DescribeInitializationStatusRequest
       * @return DescribeInitializationStatusResponse
       */
      Models::DescribeInitializationStatusResponse describeInitializationStatus(const Models::DescribeInitializationStatusRequest &request);

      /**
       * @summary Queries the alert rules of a DTS task.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRuleWithOptions(const Models::DescribeJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert rules of a DTS task.
       *
       * @param request DescribeJobMonitorRuleRequest
       * @return DescribeJobMonitorRuleResponse
       */
      Models::DescribeJobMonitorRuleResponse describeJobMonitorRule(const Models::DescribeJobMonitorRuleRequest &request);

      /**
       * @summary Queries the monitoring information of a cluster.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring information of a cluster.
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
       * @summary Queries the execution details of a legacy data migration task.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetailWithOptions(const Models::DescribeMigrationJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of a legacy data migration task.
       *
       * @param request DescribeMigrationJobDetailRequest
       * @return DescribeMigrationJobDetailResponse
       */
      Models::DescribeMigrationJobDetailResponse describeMigrationJobDetail(const Models::DescribeMigrationJobDetailRequest &request);

      /**
       * @summary Queries the status of a legacy data migration task.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatusWithOptions(const Models::DescribeMigrationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a legacy data migration task.
       *
       * @param request DescribeMigrationJobStatusRequest
       * @return DescribeMigrationJobStatusResponse
       */
      Models::DescribeMigrationJobStatusResponse describeMigrationJobStatus(const Models::DescribeMigrationJobStatusRequest &request);

      /**
       * @summary Queries a list of data migration instances and their details.
       *
       * @param request DescribeMigrationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobsWithOptions(const Models::DescribeMigrationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data migration instances and their details.
       *
       * @param request DescribeMigrationJobsRequest
       * @return DescribeMigrationJobsResponse
       */
      Models::DescribeMigrationJobsResponse describeMigrationJobs(const Models::DescribeMigrationJobsRequest &request);

      /**
       * @summary Queries the result of the precheck task for creating a GAD order.
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResultWithOptions(const Models::DescribePreCheckCreateGadOrderResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of the precheck task for creating a GAD order.
       *
       * @param request DescribePreCheckCreateGadOrderResultRequest
       * @return DescribePreCheckCreateGadOrderResultResponse
       */
      Models::DescribePreCheckCreateGadOrderResultResponse describePreCheckCreateGadOrderResult(const Models::DescribePreCheckCreateGadOrderResultRequest &request);

      /**
       * @summary Queries the execution details of subtasks for a DTS task, including the precheck, schema migration or initial schema synchronization, full data migration or initial full data synchronization, and incremental data migration or synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatusWithOptions(const Models::DescribePreCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution details of subtasks for a DTS task, including the precheck, schema migration or initial schema synchronization, full data migration or initial full data synchronization, and incremental data migration or synchronization.
       *
       * @param request DescribePreCheckStatusRequest
       * @return DescribePreCheckStatusResponse
       */
      Models::DescribePreCheckStatusResponse describePreCheckStatus(const Models::DescribePreCheckStatusRequest &request);

      /**
       * @summary Queries the details of the monitoring and alerting settings for a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlertWithOptions(const Models::DescribeSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the monitoring and alerting settings for a change tracking instance.
       *
       * @param request DescribeSubscriptionInstanceAlertRequest
       * @return DescribeSubscriptionInstanceAlertResponse
       */
      Models::DescribeSubscriptionInstanceAlertResponse describeSubscriptionInstanceAlert(const Models::DescribeSubscriptionInstanceAlertRequest &request);

      /**
       * @summary Queries the instance status details of a legacy change tracking channel.
       *
       * @param request DescribeSubscriptionInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubscriptionInstanceStatusResponse
       */
      Models::DescribeSubscriptionInstanceStatusResponse describeSubscriptionInstanceStatusWithOptions(const Models::DescribeSubscriptionInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance status details of a legacy change tracking channel.
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
       * - Because a PolarDB-X 1.0 change tracking task is a distributed change tracking task, each attached ApsaraDB RDS for MySQL instance corresponds to a change tracking subtask. You can call this operation to query the information about the change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query information such as the instance ID and consumer group ID of the PolarDB-X 1.0 change tracking task.
       * <props="intl">
       * - Because a DRDS change tracking task is a distributed change tracking task, each attached ApsaraDB RDS for MySQL instance corresponds to a change tracking subtask. You can call this operation to query the information about the change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query information such as the instance ID and consumer group ID of the DRDS change tracking task.
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
       * - Because a PolarDB-X 1.0 change tracking task is a distributed change tracking task, each attached ApsaraDB RDS for MySQL instance corresponds to a change tracking subtask. You can call this operation to query the information about the change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query information such as the instance ID and consumer group ID of the PolarDB-X 1.0 change tracking task.
       * <props="intl">
       * - Because a DRDS change tracking task is a distributed change tracking task, each attached ApsaraDB RDS for MySQL instance corresponds to a change tracking subtask. You can call this operation to query the information about the change tracking subtasks.
       * - You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query information such as the instance ID and consumer group ID of the DRDS change tracking task.
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
       * @summary Queries the details of the monitoring and alerting settings for a synchronization task.
       *
       * @param request DescribeSynchronizationJobAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobAlertResponse
       */
      Models::DescribeSynchronizationJobAlertResponse describeSynchronizationJobAlertWithOptions(const Models::DescribeSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the monitoring and alerting settings for a synchronization task.
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
       * @summary Queries the running status of a legacy synchronization task.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatusWithOptions(const Models::DescribeSynchronizationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running status of a legacy synchronization task.
       *
       * @param request DescribeSynchronizationJobStatusRequest
       * @return DescribeSynchronizationJobStatusResponse
       */
      Models::DescribeSynchronizationJobStatusResponse describeSynchronizationJobStatus(const Models::DescribeSynchronizationJobStatusRequest &request);

      /**
       * @summary Queries the status list of synchronization jobs in the legacy version.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusListWithOptions(const Models::DescribeSynchronizationJobStatusListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status list of synchronization jobs in the legacy version.
       *
       * @param request DescribeSynchronizationJobStatusListRequest
       * @return DescribeSynchronizationJobStatusListResponse
       */
      Models::DescribeSynchronizationJobStatusListResponse describeSynchronizationJobStatusList(const Models::DescribeSynchronizationJobStatusListRequest &request);

      /**
       * @summary Queries the list of data synchronization instances and the details of each synchronization instance.
       *
       * @param request DescribeSynchronizationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSynchronizationJobsResponse
       */
      Models::DescribeSynchronizationJobsResponse describeSynchronizationJobsWithOptions(const Models::DescribeSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data synchronization instances and the details of each synchronization instance.
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
       * @summary Queries all tags bound to a data migration, data synchronization, or change tracking instance.
       *
       * @param request DescribeTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeysResponse
       */
      Models::DescribeTagKeysResponse describeTagKeysWithOptions(const Models::DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags bound to a data migration, data synchronization, or change tracking instance.
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
       * @summary Initializes a built-in account in a node of a global active-active database cluster. Data Transmission Service (DTS) uses this account to connect to the node and perform synchronization tasks.
       *
       * @description - The unit node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database connected through Cloud Enterprise Network (CEN).
       * - This operation initializes a built-in account named rdsdt_dtsacct in a unit node of a global active-active database cluster. DTS uses this account to connect to the node and perform synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstanceWithOptions(const Models::InitDtsRdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a built-in account in a node of a global active-active database cluster. Data Transmission Service (DTS) uses this account to connect to the node and perform synchronization tasks.
       *
       * @description - The unit node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database connected through Cloud Enterprise Network (CEN).
       * - This operation initializes a built-in account named rdsdt_dtsacct in a unit node of a global active-active database cluster. DTS uses this account to connect to the node and perform synchronization tasks.
       *
       * @param request InitDtsRdsInstanceRequest
       * @return InitDtsRdsInstanceResponse
       */
      Models::InitDtsRdsInstanceResponse initDtsRdsInstance(const Models::InitDtsRdsInstanceRequest &request);

      /**
       * @summary Queries all clusters created by the current user, or filters specific clusters based on specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedClusterWithOptions(const Models::ListDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all clusters created by the current user, or filters specific clusters based on specified conditions.
       *
       * @param request ListDedicatedClusterRequest
       * @return ListDedicatedClusterResponse
       */
      Models::ListDedicatedClusterResponse listDedicatedCluster(const Models::ListDedicatedClusterRequest &request);

      /**
       * @summary Queries the list of job steps.
       *
       * @param request ListJobStepRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobStepResponse
       */
      Models::ListJobStepResponse listJobStepWithOptions(const Models::ListJobStepRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of job steps.
       *
       * @param request ListJobStepRequest
       * @return ListJobStepResponse
       */
      Models::ListJobStepResponse listJobStep(const Models::ListJobStepRequest &request);

      /**
       * @summary Queries the tags bound to data migration, data synchronization, and change tracking instances, or queries the instances bound to specific tags.
       *
       * @description ****
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to data migration, data synchronization, and change tracking instances, or queries the instances bound to specific tags.
       *
       * @description ****
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the information about a consumer group in a change tracking channel.
       *
       * @param request ModifyConsumerChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannelWithOptions(const Models::ModifyConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a consumer group in a change tracking channel.
       *
       * @param request ModifyConsumerChannelRequest
       * @return ModifyConsumerChannelResponse
       */
      Models::ModifyConsumerChannelResponse modifyConsumerChannel(const Models::ModifyConsumerChannelRequest &request);

      /**
       * @summary Modifies the password of a consumer group.
       *
       * @param request ModifyConsumerGroupPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyConsumerGroupPasswordResponse
       */
      Models::ModifyConsumerGroupPasswordResponse modifyConsumerGroupPasswordWithOptions(const Models::ModifyConsumerGroupPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a consumer group.
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
       * @summary Modifies the configuration of a dedicated cluster.
       *
       * @description Currently, only the oversubscription ratio can be modified.
       *
       * @param request ModifyDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedClusterWithOptions(const Models::ModifyDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a dedicated cluster.
       *
       * @description Currently, only the oversubscription ratio can be modified.
       *
       * @param request ModifyDedicatedClusterRequest
       * @return ModifyDedicatedClusterResponse
       */
      Models::ModifyDedicatedClusterResponse modifyDedicatedCluster(const Models::ModifyDedicatedClusterRequest &request);

      /**
       * @summary Modifies a data synchronization task.
       *
       * @description > You can perform the corresponding preconfigurations in the console based on your requirements and then preview the OpenAPI parameter information for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param tmpReq ModifyDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJobWithOptions(const Models::ModifyDtsJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data synchronization task.
       *
       * @description > You can perform the corresponding preconfigurations in the console based on your requirements and then preview the OpenAPI parameter information for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifyDtsJobRequest
       * @return ModifyDtsJobResponse
       */
      Models::ModifyDtsJobResponse modifyDtsJob(const Models::ModifyDtsJobRequest &request);

      Models::ModifyDtsJobResponse modifyDtsJobAdvance(const Models::ModifyDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a DTS task.
       *
       * @param request ModifyDtsJobConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfigWithOptions(const Models::ModifyDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the parameters of a DTS task.
       *
       * @param request ModifyDtsJobConfigRequest
       * @return ModifyDtsJobConfigResponse
       */
      Models::ModifyDtsJobConfigResponse modifyDtsJobConfig(const Models::ModifyDtsJobConfigRequest &request);

      /**
       * @summary Changes the dedicated cluster on which a task runs.
       *
       * @description > After a data migration task is changed from running in a dedicated cluster to running in a public cluster, the billing method of the task changes to pay-as-you-go, and billing starts.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedClusterWithOptions(const Models::ModifyDtsJobDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the dedicated cluster on which a task runs.
       *
       * @description > After a data migration task is changed from running in a dedicated cluster to running in a public cluster, the billing method of the task changes to pay-as-you-go, and billing starts.
       *
       * @param request ModifyDtsJobDedicatedClusterRequest
       * @return ModifyDtsJobDedicatedClusterResponse
       */
      Models::ModifyDtsJobDedicatedClusterResponse modifyDtsJobDedicatedCluster(const Models::ModifyDtsJobDedicatedClusterRequest &request);

      /**
       * @summary Modifies the DU limit for a task.
       *
       * @description - DTS instances in dedicated clusters support specification upgrades and downgrades. By changing the resources consumed during task execution, you can dynamically adjust the number of schedulable tasks in the cluster, which deducts or releases the total DUs of the cluster.
       * - Before modifying the DU limit for a task, ensure that sufficient resources are available.
       *
       * @param request ModifyDtsJobDuLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobDuLimitResponse
       */
      Models::ModifyDtsJobDuLimitResponse modifyDtsJobDuLimitWithOptions(const Models::ModifyDtsJobDuLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the DU limit for a task.
       *
       * @description - DTS instances in dedicated clusters support specification upgrades and downgrades. By changing the resources consumed during task execution, you can dynamically adjust the number of schedulable tasks in the cluster, which deducts or releases the total DUs of the cluster.
       * - Before modifying the DU limit for a task, ensure that sufficient resources are available.
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
       * @summary Modifies the name of a DTS task.
       *
       * @param request ModifyDtsJobNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobNameWithOptions(const Models::ModifyDtsJobNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a DTS task.
       *
       * @param request ModifyDtsJobNameRequest
       * @return ModifyDtsJobNameResponse
       */
      Models::ModifyDtsJobNameResponse modifyDtsJobName(const Models::ModifyDtsJobNameRequest &request);

      /**
       * @summary Modifies the password of a job.
       *
       * @param request ModifyDtsJobPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPasswordWithOptions(const Models::ModifyDtsJobPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password of a job.
       *
       * @param request ModifyDtsJobPasswordRequest
       * @return ModifyDtsJobPasswordResponse
       */
      Models::ModifyDtsJobPasswordResponse modifyDtsJobPassword(const Models::ModifyDtsJobPasswordRequest &request);

      /**
       * @summary Adjusts the migration rate of a synchronization or migration instance.
       *
       * @param request ModifyDynamicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfigWithOptions(const Models::ModifyDynamicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the migration rate of a synchronization or migration instance.
       *
       * @param request ModifyDynamicConfigRequest
       * @return ModifyDynamicConfigResponse
       */
      Models::ModifyDynamicConfigResponse modifyDynamicConfig(const Models::ModifyDynamicConfigRequest &request);

      /**
       * @summary Modifies the name of a GAD instance.
       *
       * @param request ModifyGadInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceNameWithOptions(const Models::ModifyGadInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a GAD instance.
       *
       * @param request ModifyGadInstanceNameRequest
       * @return ModifyGadInstanceNameResponse
       */
      Models::ModifyGadInstanceNameResponse modifyGadInstanceName(const Models::ModifyGadInstanceNameRequest &request);

      /**
       * @summary Modifies the checkpoint for incremental writes.
       *
       * @param request ModifyJobStepCheckpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJobStepCheckpointResponse
       */
      Models::ModifyJobStepCheckpointResponse modifyJobStepCheckpointWithOptions(const Models::ModifyJobStepCheckpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the checkpoint for incremental writes.
       *
       * @param request ModifyJobStepCheckpointRequest
       * @return ModifyJobStepCheckpointResponse
       */
      Models::ModifyJobStepCheckpointResponse modifyJobStepCheckpoint(const Models::ModifyJobStepCheckpointRequest &request);

      /**
       * @summary Modifies a change tracking task.
       *
       * @description > You can preconfigure settings in the console as needed and preview the OpenAPI parameters for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscriptionWithOptions(const Models::ModifySubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a change tracking task.
       *
       * @description > You can preconfigure settings in the console as needed and preview the OpenAPI parameters for the configurations to help you fill in the request parameters. For more information, see [Preview OpenAPI request parameters](https://help.aliyun.com/document_detail/2851612.html).
       *
       * @param request ModifySubscriptionRequest
       * @return ModifySubscriptionResponse
       */
      Models::ModifySubscriptionResponse modifySubscription(const Models::ModifySubscriptionRequest &request);

      /**
       * @summary Modifies the subscription objects of a legacy change tracking instance.
       *
       * @param request ModifySubscriptionObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObjectWithOptions(const Models::ModifySubscriptionObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the subscription objects of a legacy change tracking instance.
       *
       * @param request ModifySubscriptionObjectRequest
       * @return ModifySubscriptionObjectResponse
       */
      Models::ModifySubscriptionObjectResponse modifySubscriptionObject(const Models::ModifySubscriptionObjectRequest &request);

      /**
       * @summary Modifies the synchronization objects in a legacy data synchronization job instance.
       *
       * @param request ModifySynchronizationObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObjectWithOptions(const Models::ModifySynchronizationObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the synchronization objects in a legacy data synchronization job instance.
       *
       * @param request ModifySynchronizationObjectRequest
       * @return ModifySynchronizationObjectResponse
       */
      Models::ModifySynchronizationObjectResponse modifySynchronizationObject(const Models::ModifySynchronizationObjectRequest &request);

      /**
       * @summary Prechecks the creation of a GAD order.
       *
       * @param request PreCheckCreateGadOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrderWithOptions(const Models::PreCheckCreateGadOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prechecks the creation of a GAD order.
       *
       * @param request PreCheckCreateGadOrderRequest
       * @return PreCheckCreateGadOrderResponse
       */
      Models::PreCheckCreateGadOrderResponse preCheckCreateGadOrder(const Models::PreCheckCreateGadOrderRequest &request);

      /**
       * @summary Promotes a secondary geo-disaster recovery instance to the primary role.
       *
       * @param request PromoteToMasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromoteToMasterResponse
       */
      Models::PromoteToMasterResponse promoteToMasterWithOptions(const Models::PromoteToMasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Promotes a secondary geo-disaster recovery instance to the primary role.
       *
       * @param request PromoteToMasterRequest
       * @return PromoteToMasterResponse
       */
      Models::PromoteToMasterResponse promoteToMaster(const Models::PromoteToMasterRequest &request);

      /**
       * @summary Renews a Data Transmission Service (DTS) instance. This operation is applicable only to subscription DTS instances.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a Data Transmission Service (DTS) instance. This operation is applicable only to subscription DTS instances.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description > After you clear the configurations of a data synchronization or change tracking task, the original task is deleted and DTS creates an unconfigured task. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJobWithOptions(const Models::ResetDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a data synchronization or change tracking task.
       *
       * @description > After you clear the configurations of a data synchronization or change tracking task, the original task is deleted and DTS creates an unconfigured task. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to reconfigure the task.
       *
       * @param request ResetDtsJobRequest
       * @return ResetDtsJobResponse
       */
      Models::ResetDtsJobResponse resetDtsJob(const Models::ResetDtsJobRequest &request);

      /**
       * @summary Clears the configuration of a data synchronization task.
       *
       * @description > After you clear the configuration of a data synchronization task, the original synchronization task is released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the synchronization task.
       *
       * @param request ResetSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSynchronizationJobResponse
       */
      Models::ResetSynchronizationJobResponse resetSynchronizationJobWithOptions(const Models::ResetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the configuration of a data synchronization task.
       *
       * @description > After you clear the configuration of a data synchronization task, the original synchronization task is released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the synchronization task.
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
       * @summary Masks precheck items.
       *
       * @param request ShieldPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheckWithOptions(const Models::ShieldPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Masks precheck items.
       *
       * @param request ShieldPrecheckRequest
       * @return ShieldPrecheckResponse
       */
      Models::ShieldPrecheckResponse shieldPrecheck(const Models::ShieldPrecheckRequest &request);

      /**
       * @summary Skips tables that do not need to be synchronized during the full data phase.
       *
       * @param request SkipFullJobTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTableWithOptions(const Models::SkipFullJobTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips tables that do not need to be synchronized during the full data phase.
       *
       * @param request SkipFullJobTableRequest
       * @return SkipFullJobTableResponse
       */
      Models::SkipFullJobTableResponse skipFullJobTable(const Models::SkipFullJobTableRequest &request);

      /**
       * @summary Skips or unskips precheck alert items.
       *
       * @param request SkipPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipPreCheckResponse
       */
      Models::SkipPreCheckResponse skipPreCheckWithOptions(const Models::SkipPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips or unskips precheck alert items.
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
       * @summary Starts the channel for a legacy change tracking instance.
       *
       * @param request StartSubscriptionInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSubscriptionInstanceResponse
       */
      Models::StartSubscriptionInstanceResponse startSubscriptionInstanceWithOptions(const Models::StartSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the channel for a legacy change tracking instance.
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
       * @summary Releases a dedicated cluster.
       *
       * @param request StopDedicatedClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDedicatedClusterResponse
       */
      Models::StopDedicatedClusterResponse stopDedicatedClusterWithOptions(const Models::StopDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a dedicated cluster.
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
       * @summary Stops multiple DTS tasks.
       *
       * @param request StopDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobsWithOptions(const Models::StopDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple DTS tasks.
       *
       * @param request StopDtsJobsRequest
       * @return StopDtsJobsResponse
       */
      Models::StopDtsJobsResponse stopDtsJobs(const Models::StopDtsJobsRequest &request);

      /**
       * @summary Ends a data migration task that is in the migrating state.
       *
       * @param request StopMigrationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJobWithOptions(const Models::StopMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends a data migration task that is in the migrating state.
       *
       * @param request StopMigrationJobRequest
       * @return StopMigrationJobResponse
       */
      Models::StopMigrationJobResponse stopMigrationJob(const Models::StopMigrationJobRequest &request);

      /**
       * @summary Queries the number of migrated tables in a Data Transmission Service (DTS) data migration or synchronization task.
       *
       * @param request SummaryJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetailWithOptions(const Models::SummaryJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of migrated tables in a Data Transmission Service (DTS) data migration or synchronization task.
       *
       * @param request SummaryJobDetailRequest
       * @return SummaryJobDetailResponse
       */
      Models::SummaryJobDetailResponse summaryJobDetail(const Models::SummaryJobDetailRequest &request);

      /**
       * @summary Suspends a data migration or synchronization task. Change tracking tasks are not supported. Change tracking instances do not support suspension. Do not call this operation on change tracking instances.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJobWithOptions(const Models::SuspendDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a data migration or synchronization task. Change tracking tasks are not supported. Change tracking instances do not support suspension. Do not call this operation on change tracking instances.
       *
       * @description ****
       *
       * @param request SuspendDtsJobRequest
       * @return SuspendDtsJobResponse
       */
      Models::SuspendDtsJobResponse suspendDtsJob(const Models::SuspendDtsJobRequest &request);

      /**
       * @summary Pauses multiple DTS tasks.
       *
       * @param request SuspendDtsJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendDtsJobsResponse
       */
      Models::SuspendDtsJobsResponse suspendDtsJobsWithOptions(const Models::SuspendDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses multiple DTS tasks.
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
       * @summary Suspends a data synchronization task that is in the synchronizing state.
       *
       * @description > - When you call this operation, the data synchronization task must be in the Synchronizing state.
       * - You can suspend a data synchronization task for up to 6 hours. If the suspension exceeds 6 hours, the task cannot be restarted.
       * - You are still charged for a pay-as-you-go data synchronization task even when it is suspended. This is because DTS only stops writing data to the destination database but continues to pull logs from the source database to ensure fast recovery after the task is restarted. As a result, the task still consumes resources such as the bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJobWithOptions(const Models::SuspendSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a data synchronization task that is in the synchronizing state.
       *
       * @description > - When you call this operation, the data synchronization task must be in the Synchronizing state.
       * - You can suspend a data synchronization task for up to 6 hours. If the suspension exceeds 6 hours, the task cannot be restarted.
       * - You are still charged for a pay-as-you-go data synchronization task even when it is suspended. This is because DTS only stops writing data to the destination database but continues to pull logs from the source database to ensure fast recovery after the task is restarted. As a result, the task still consumes resources such as the bandwidth of the source database.
       *
       * @param request SuspendSynchronizationJobRequest
       * @return SuspendSynchronizationJobResponse
       */
      Models::SuspendSynchronizationJobResponse suspendSynchronizationJob(const Models::SuspendSynchronizationJobRequest &request);

      /**
       * @summary Migrates an SQL Server database to the cloud by using physical migration.
       *
       * @param request SwitchPhysicalDtsJobToCloudRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchPhysicalDtsJobToCloudResponse
       */
      Models::SwitchPhysicalDtsJobToCloudResponse switchPhysicalDtsJobToCloudWithOptions(const Models::SwitchPhysicalDtsJobToCloudRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an SQL Server database to the cloud by using physical migration.
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
       * @summary Changes the billing method.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - To prevent resource waste, confirm the billing method change before you proceed.
       * - Data migration instances support only the pay-as-you-go billing method and do not require billing method changes.
       * <props="china">
       * - Serverless instances do not support billing method changes.
       *
       * @param request TransferPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayTypeWithOptions(const Models::TransferPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of Data Transmission Service (DTS).
       * <props="intl">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS).
       * - To prevent resource waste, confirm the billing method change before you proceed.
       * - Data migration instances support only the pay-as-you-go billing method and do not require billing method changes.
       * <props="china">
       * - Serverless instances do not support billing method changes.
       *
       * @param request TransferPayTypeRequest
       * @return TransferPayTypeResponse
       */
      Models::TransferPayTypeResponse transferPayType(const Models::TransferPayTypeRequest &request);

      /**
       * @summary Removes tags from data migration, data synchronization, and change tracking instances.
       *
       * @description > If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from data migration, data synchronization, and change tracking instances.
       *
       * @description > If a tag is removed from an instance and is not attached to any other instances, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization.
       *
       * @description <props="china">Make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of ApsaraDB DTS before you call this operation.
       * <props="intl">Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of ApsaraDB DTS before you call this operation.
       * When you call this operation, take note of the following items:
       * - The database engines of the source instance and destination instance for the data synchronization node must be **MySQL**.
       * - The synchronization topology of the data synchronization node must be **one-way synchronization**.
       * - The status of the data synchronization node must be **Synchronizing**.
       * - Data synchronization may be delayed by about 5 seconds while the upgrade takes effect. Perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWayWithOptions(const Models::UpgradeTwoWayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization.
       *
       * @description <props="china">Make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/dts/detail) of ApsaraDB DTS before you call this operation.
       * <props="intl">Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of ApsaraDB DTS before you call this operation.
       * When you call this operation, take note of the following items:
       * - The database engines of the source instance and destination instance for the data synchronization node must be **MySQL**.
       * - The synchronization topology of the data synchronization node must be **one-way synchronization**.
       * - The status of the data synchronization node must be **Synchronizing**.
       * - Data synchronization may be delayed by about 5 seconds while the upgrade takes effect. Perform this operation during off-peak hours.
       *
       * @param request UpgradeTwoWayRequest
       * @return UpgradeTwoWayResponse
       */
      Models::UpgradeTwoWayResponse upgradeTwoWay(const Models::UpgradeTwoWayRequest &request);

      /**
       * @summary Queries the IP addresses of Data Transmission Service (DTS) servers.
       *
       * @description <props="china">If the **source or destination instance** is a **self-managed database** or a **third-party cloud database**, you must call this operation to query the IP addresses of DTS servers, and then add the queried IP addresses to the security settings of the source or destination instance, such as the firewall of the database. For more information, see [IP address whitelist required when you migrate, synchronize, or subscribe to a local database](https://help.aliyun.com/document_detail/84900.html).
       * <props="intl">If the **source or destination instance** is a **self-managed database** or a **third-party cloud database**, you must call this operation to query the IP addresses of DTS servers, and then add the queried IP addresses to the security settings of the source or destination instance, such as the firewall of the database. For more information, see [Add the CIDR blocks of DTS servers to the IP address whitelist of a self-managed database](https://help.aliyun.com/document_detail/176627.html).
       * > If the **source or destination database** is an **Alibaba Cloud database instance** (such as ApsaraDB RDS or MongoDB) or a **self-managed database on an ECS instance**, the system automatically adds the IP addresses of DTS servers to the security settings of the instance when you configure the source or destination instance information and click **Authorize Whitelist and Proceed to Next Step**. You do not need to manually add the IP addresses.
       *
       * @param request WhiteIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpListWithOptions(const Models::WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses of Data Transmission Service (DTS) servers.
       *
       * @description <props="china">If the **source or destination instance** is a **self-managed database** or a **third-party cloud database**, you must call this operation to query the IP addresses of DTS servers, and then add the queried IP addresses to the security settings of the source or destination instance, such as the firewall of the database. For more information, see [IP address whitelist required when you migrate, synchronize, or subscribe to a local database](https://help.aliyun.com/document_detail/84900.html).
       * <props="intl">If the **source or destination instance** is a **self-managed database** or a **third-party cloud database**, you must call this operation to query the IP addresses of DTS servers, and then add the queried IP addresses to the security settings of the source or destination instance, such as the firewall of the database. For more information, see [Add the CIDR blocks of DTS servers to the IP address whitelist of a self-managed database](https://help.aliyun.com/document_detail/176627.html).
       * > If the **source or destination database** is an **Alibaba Cloud database instance** (such as ApsaraDB RDS or MongoDB) or a **self-managed database on an ECS instance**, the system automatically adds the IP addresses of DTS servers to the security settings of the instance when you configure the source or destination instance information and click **Authorize Whitelist and Proceed to Next Step**. You do not need to manually add the IP addresses.
       *
       * @param request WhiteIpListRequest
       * @return WhiteIpListResponse
       */
      Models::WhiteIpListResponse whiteIpList(const Models::WhiteIpListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
