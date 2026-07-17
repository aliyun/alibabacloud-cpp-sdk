// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OPENSEARCH20171225_HPP_
#define ALIBABACLOUD_OPENSEARCH20171225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OpenSearch20171225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OpenSearch20171225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Binds a custom analyzer to an Elasticsearch instance.
       *
       * @param request BindESUserAnalyzerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindESUserAnalyzerResponse
       */
      Models::BindESUserAnalyzerResponse bindESUserAnalyzerWithOptions(const string &appGroupIdentity, const string &esInstanceId, const Models::BindESUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a custom analyzer to an Elasticsearch instance.
       *
       * @param request BindESUserAnalyzerRequest
       * @return BindESUserAnalyzerResponse
       */
      Models::BindESUserAnalyzerResponse bindESUserAnalyzer(const string &appGroupIdentity, const string &esInstanceId, const Models::BindESUserAnalyzerRequest &request);

      /**
       * @summary Binds an Elasticsearch instance as a dependency.
       *
       * @param request BindEsInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindEsInstanceResponse
       */
      Models::BindEsInstanceResponse bindEsInstanceWithOptions(const string &appGroupIdentity, const Models::BindEsInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an Elasticsearch instance as a dependency.
       *
       * @param request BindEsInstanceRequest
       * @return BindEsInstanceResponse
       */
      Models::BindEsInstanceResponse bindEsInstance(const string &appGroupIdentity, const Models::BindEsInstanceRequest &request);

      /**
       * @summary Compiles a sort script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompileSortScriptResponse
       */
      Models::CompileSortScriptResponse compileSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compiles a sort script.
       *
       * @return CompileSortScriptResponse
       */
      Models::CompileSortScriptResponse compileSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId);

      /**
       * @summary Creates an experiment.
       *
       * @param request CreateABTestExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABTestExperimentResponse
       */
      Models::CreateABTestExperimentResponse createABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const Models::CreateABTestExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment.
       *
       * @param request CreateABTestExperimentRequest
       * @return CreateABTestExperimentResponse
       */
      Models::CreateABTestExperimentResponse createABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const Models::CreateABTestExperimentRequest &request);

      /**
       * @summary Creates an experiment group.
       *
       * @param request CreateABTestGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABTestGroupResponse
       */
      Models::CreateABTestGroupResponse createABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const Models::CreateABTestGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment group.
       *
       * @param request CreateABTestGroupRequest
       * @return CreateABTestGroupResponse
       */
      Models::CreateABTestGroupResponse createABTestGroup(const string &appGroupIdentity, const string &sceneId, const Models::CreateABTestGroupRequest &request);

      /**
       * @summary Creates an experiment scenario.
       *
       * @param request CreateABTestSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABTestSceneResponse
       */
      Models::CreateABTestSceneResponse createABTestSceneWithOptions(const string &appGroupIdentity, const Models::CreateABTestSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment scenario.
       *
       * @param request CreateABTestSceneRequest
       * @return CreateABTestSceneResponse
       */
      Models::CreateABTestSceneResponse createABTestScene(const string &appGroupIdentity, const Models::CreateABTestSceneRequest &request);

      /**
       * @summary Creates a new version of an OpenSearch application.
       *
       * @description - If a Standard Edition application with the same name already exists, a new version is created.
       * - The autoSwitch and realtimeShared parameters are required to create a new version.
       * - The quota for the new version is automatically inherited from the previous version.
       * - You cannot modify the quota when you create the new version.
       *
       * @param request CreateAppRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const string &appGroupIdentity, const Models::CreateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new version of an OpenSearch application.
       *
       * @description - If a Standard Edition application with the same name already exists, a new version is created.
       * - The autoSwitch and realtimeShared parameters are required to create a new version.
       * - The quota for the new version is automatically inherited from the previous version.
       * - You cannot modify the quota when you create the new version.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const string &appGroupIdentity, const Models::CreateAppRequest &request);

      /**
       * @summary Creates an OpenSearch application.
       *
       * @param request CreateAppGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppGroupResponse
       */
      Models::CreateAppGroupResponse createAppGroupWithOptions(const Models::CreateAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an OpenSearch application.
       *
       * @param request CreateAppGroupRequest
       * @return CreateAppGroupResponse
       */
      Models::CreateAppGroupResponse createAppGroup(const Models::CreateAppGroupRequest &request);

      /**
       * @summary Creates access credentials for a specified application group. This operation supports a dry run to preview the results.
       *
       * @param request CreateAppGroupCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppGroupCredentialsResponse
       */
      Models::CreateAppGroupCredentialsResponse createAppGroupCredentialsWithOptions(const string &appGroupIdentity, const Models::CreateAppGroupCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates access credentials for a specified application group. This operation supports a dry run to preview the results.
       *
       * @param request CreateAppGroupCredentialsRequest
       * @return CreateAppGroupCredentialsResponse
       */
      Models::CreateAppGroupCredentialsResponse createAppGroupCredentials(const string &appGroupIdentity, const Models::CreateAppGroupCredentialsRequest &request);

      /**
       * @summary 创建弹性计划
       *
       * @param request CreateElasticPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlanWithOptions(const string &appGroupIdentity, const Models::CreateElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建弹性计划
       *
       * @param request CreateElasticPlanRequest
       * @return CreateElasticPlanResponse
       */
      Models::CreateElasticPlanResponse createElasticPlan(const string &appGroupIdentity, const Models::CreateElasticPlanRequest &request);

      /**
       * @summary Creates a rough sort expression for a version of an OpenSearch application. If you set `dryRun` to true, this operation validates the specified rough sort expression. By default, the value of `dryRun` is `false`.
       *
       * @param request CreateFirstRankRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFirstRankResponse
       */
      Models::CreateFirstRankResponse createFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const Models::CreateFirstRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rough sort expression for a version of an OpenSearch application. If you set `dryRun` to true, this operation validates the specified rough sort expression. By default, the value of `dryRun` is `false`.
       *
       * @param request CreateFirstRankRequest
       * @return CreateFirstRankResponse
       */
      Models::CreateFirstRankResponse createFirstRank(const string &appGroupIdentity, const string &appId, const Models::CreateFirstRankRequest &request);

      /**
       * @summary Creates an algorithm instance of a feature.
       *
       * @description You can call the [GetFunctionCurrentVersion](https://help.aliyun.com/document_detail/421377.html) operation to query the latest version of a feature. The response of the operation includes the createParameters parameter that is used to create an algorithm instance, the usageParameters parameter, and the requirements for setting these parameters.
       *
       * @param request CreateFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionInstanceResponse
       */
      Models::CreateFunctionInstanceResponse createFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const Models::CreateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an algorithm instance of a feature.
       *
       * @description You can call the [GetFunctionCurrentVersion](https://help.aliyun.com/document_detail/421377.html) operation to query the latest version of a feature. The response of the operation includes the createParameters parameter that is used to create an algorithm instance, the usageParameters parameter, and the requirements for setting these parameters.
       *
       * @param request CreateFunctionInstanceRequest
       * @return CreateFunctionInstanceResponse
       */
      Models::CreateFunctionInstanceResponse createFunctionInstance(const string &appGroupIdentity, const string &functionName, const Models::CreateFunctionInstanceRequest &request);

      /**
       * @summary Creates an algorithm resource for a specified feature.
       *
       * @param request CreateFunctionResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResourceResponse
       */
      Models::CreateFunctionResourceResponse createFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const Models::CreateFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an algorithm resource for a specified feature.
       *
       * @param request CreateFunctionResourceRequest
       * @return CreateFunctionResourceResponse
       */
      Models::CreateFunctionResourceResponse createFunctionResource(const string &appGroupIdentity, const string &functionName, const Models::CreateFunctionResourceRequest &request);

      /**
       * @summary Starts a training task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionTaskResponse
       */
      Models::CreateFunctionTaskResponse createFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a training task.
       *
       * @return CreateFunctionTaskResponse
       */
      Models::CreateFunctionTaskResponse createFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName);

      /**
       * @summary Creates an intervention dictionary.
       *
       * @param request CreateInterventionDictionaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInterventionDictionaryResponse
       */
      Models::CreateInterventionDictionaryResponse createInterventionDictionaryWithOptions(const Models::CreateInterventionDictionaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intervention dictionary.
       *
       * @param request CreateInterventionDictionaryRequest
       * @return CreateInterventionDictionaryResponse
       */
      Models::CreateInterventionDictionaryResponse createInterventionDictionary(const Models::CreateInterventionDictionaryRequest &request);

      /**
       * @summary Creates a query analysis rule. If you set dryRun to true, this operation checks the specified query analysis rule. By default, the value of dryRun is false if you do not set this parameter.
       *
       * @param request CreateQueryProcessorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueryProcessorResponse
       */
      Models::CreateQueryProcessorResponse createQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const Models::CreateQueryProcessorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a query analysis rule. If you set dryRun to true, this operation checks the specified query analysis rule. By default, the value of dryRun is false if you do not set this parameter.
       *
       * @param request CreateQueryProcessorRequest
       * @return CreateQueryProcessorResponse
       */
      Models::CreateQueryProcessorResponse createQueryProcessor(const string &appGroupIdentity, const string &appId, const Models::CreateQueryProcessorRequest &request);

      /**
       * @summary Creates a scheduled task for an OpenSearch application.
       *
       * @param request CreateScheduledTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const string &appGroupIdentity, const Models::CreateScheduledTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task for an OpenSearch application.
       *
       * @param request CreateScheduledTaskRequest
       * @return CreateScheduledTaskResponse
       */
      Models::CreateScheduledTaskResponse createScheduledTask(const string &appGroupIdentity, const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary Creates a search strategy.
       *
       * @param request CreateSearchStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSearchStrategyResponse
       */
      Models::CreateSearchStrategyResponse createSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const Models::CreateSearchStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a search strategy.
       *
       * @param request CreateSearchStrategyRequest
       * @return CreateSearchStrategyResponse
       */
      Models::CreateSearchStrategyResponse createSearchStrategy(const string &appGroupIdentity, const string &appId, const Models::CreateSearchStrategyRequest &request);

      /**
       * @summary Creates a fine sort expression for a version of an OpenSearch application. If you set the dryRun parameter to true, this operation validates the specified fine sort expression. The default value of this parameter is false.
       *
       * @param request CreateSecondRankRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecondRankResponse
       */
      Models::CreateSecondRankResponse createSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const Models::CreateSecondRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a fine sort expression for a version of an OpenSearch application. If you set the dryRun parameter to true, this operation validates the specified fine sort expression. The default value of this parameter is false.
       *
       * @param request CreateSecondRankRequest
       * @return CreateSecondRankResponse
       */
      Models::CreateSecondRankResponse createSecondRank(const string &appGroupIdentity, const string &appId, const Models::CreateSecondRankRequest &request);

      /**
       * @summary Creates a sort script.
       *
       * @param request CreateSortScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSortScriptResponse
       */
      Models::CreateSortScriptResponse createSortScriptWithOptions(const string &appGroupIdentity, const string &appVersionId, const Models::CreateSortScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sort script.
       *
       * @param request CreateSortScriptRequest
       * @return CreateSortScriptResponse
       */
      Models::CreateSortScriptResponse createSortScript(const string &appGroupIdentity, const string &appVersionId, const Models::CreateSortScriptRequest &request);

      /**
       * @summary Creates a custom analyzer.
       *
       * @param request CreateUserAnalyzerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserAnalyzerResponse
       */
      Models::CreateUserAnalyzerResponse createUserAnalyzerWithOptions(const Models::CreateUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom analyzer.
       *
       * @param request CreateUserAnalyzerRequest
       * @return CreateUserAnalyzerResponse
       */
      Models::CreateUserAnalyzerResponse createUserAnalyzer(const Models::CreateUserAnalyzerRequest &request);

      /**
       * @summary Deletes an experiment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABTestExperimentResponse
       */
      Models::DeleteABTestExperimentResponse deleteABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an experiment.
       *
       * @return DeleteABTestExperimentResponse
       */
      Models::DeleteABTestExperimentResponse deleteABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId);

      /**
       * @summary Deletes an A/B test group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABTestGroupResponse
       */
      Models::DeleteABTestGroupResponse deleteABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an A/B test group.
       *
       * @return DeleteABTestGroupResponse
       */
      Models::DeleteABTestGroupResponse deleteABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId);

      /**
       * @summary Deletes an A/B test scenario.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABTestSceneResponse
       */
      Models::DeleteABTestSceneResponse deleteABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an A/B test scenario.
       *
       * @return DeleteABTestSceneResponse
       */
      Models::DeleteABTestSceneResponse deleteABTestScene(const string &appGroupIdentity, const string &sceneId);

      /**
       * @summary Deletes an algorithm instance. Before you delete an instance, ensure that it is not in use to prevent service interruptions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionInstanceResponse
       */
      Models::DeleteFunctionInstanceResponse deleteFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an algorithm instance. Before you delete an instance, ensure that it is not in use to prevent service interruptions.
       *
       * @return DeleteFunctionInstanceResponse
       */
      Models::DeleteFunctionInstanceResponse deleteFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName);

      /**
       * @summary Deletes a specified algorithm resource.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionResourceResponse
       */
      Models::DeleteFunctionResourceResponse deleteFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified algorithm resource.
       *
       * @return DeleteFunctionResourceResponse
       */
      Models::DeleteFunctionResourceResponse deleteFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName);

      /**
       * @summary Deletes a training record. A training record that is in progress cannot be deleted.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionTaskResponse
       */
      Models::DeleteFunctionTaskResponse deleteFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a training record. A training record that is in progress cannot be deleted.
       *
       * @return DeleteFunctionTaskResponse
       */
      Models::DeleteFunctionTaskResponse deleteFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation);

      /**
       * @summary Deletes a sort script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSortScriptResponse
       */
      Models::DeleteSortScriptResponse deleteSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a sort script.
       *
       * @return DeleteSortScriptResponse
       */
      Models::DeleteSortScriptResponse deleteSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId);

      /**
       * @summary Deletes a script file.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSortScriptFileResponse
       */
      Models::DeleteSortScriptFileResponse deleteSortScriptFileWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const string &fileName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a script file.
       *
       * @return DeleteSortScriptFileResponse
       */
      Models::DeleteSortScriptFileResponse deleteSortScriptFile(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const string &fileName);

      /**
       * @summary Retrieves the details of an experiment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeABTestExperimentResponse
       */
      Models::DescribeABTestExperimentResponse describeABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an experiment.
       *
       * @return DescribeABTestExperimentResponse
       */
      Models::DescribeABTestExperimentResponse describeABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId);

      /**
       * @summary Retrieves the details of an A/B test group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeABTestGroupResponse
       */
      Models::DescribeABTestGroupResponse describeABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an A/B test group.
       *
       * @return DescribeABTestGroupResponse
       */
      Models::DescribeABTestGroupResponse describeABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId);

      /**
       * @summary Query an A/B test scenario.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeABTestSceneResponse
       */
      Models::DescribeABTestSceneResponse describeABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query an A/B test scenario.
       *
       * @return DescribeABTestSceneResponse
       */
      Models::DescribeABTestSceneResponse describeABTestScene(const string &appGroupIdentity, const string &sceneId);

      /**
       * @summary Queries the information about a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppResponse
       */
      Models::DescribeAppResponse describeAppWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a version of an OpenSearch application.
       *
       * @return DescribeAppResponse
       */
      Models::DescribeAppResponse describeApp(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Query an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppGroupResponse
       */
      Models::DescribeAppGroupResponse describeAppGroupWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query an OpenSearch application.
       *
       * @return DescribeAppGroupResponse
       */
      Models::DescribeAppGroupResponse describeAppGroup(const string &appGroupIdentity);

      /**
       * @summary Queries the statistics about a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppStatisticsResponse
       */
      Models::DescribeAppStatisticsResponse describeAppStatisticsWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics about a version of an OpenSearch application.
       *
       * @return DescribeAppStatisticsResponse
       */
      Models::DescribeAppStatisticsResponse describeAppStatistics(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Queries the versions of an OpenSearch application.
       *
       * @description - If a Standard Edition application with the same name exists, a new version is created.
       * - When you create a new version, the autoSwitch and realtimeShared parameters are required.
       * - When you create a new version, the quota is inherited from the previous version.
       * - When you create a new version, modifications to the quota do not take effect.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeAppsWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of an OpenSearch application.
       *
       * @description - If a Standard Edition application with the same name exists, a new version is created.
       * - When you create a new version, the autoSwitch and realtimeShared parameters are required.
       * - When you create a new version, the quota is inherited from the previous version.
       * - When you create a new version, modifications to the quota do not take effect.
       *
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeApps(const string &appGroupIdentity);

      /**
       * @summary Retrieves the details of a data collection for a specified application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataCollctionResponse
       */
      Models::DescribeDataCollctionResponse describeDataCollctionWithOptions(const string &appGroupIdentity, const string &dataCollectionIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data collection for a specified application.
       *
       * @return DescribeDataCollctionResponse
       */
      Models::DescribeDataCollctionResponse describeDataCollction(const string &appGroupIdentity, const string &dataCollectionIdentity);

      /**
       * @summary 获取弹性计划详情
       *
       * @description - 若已存在同名标准版应用，则创建新版本；
       * - 在新建版本情况下，autoSwitch 和 realtimeShared 也是必填的；
       * - 在新建版本情况下，quota 是自动从上一个版本继承的；
       * - 在新建版本情况下，修改 quota 是无效的。
       *
       * @param request DescribeElasticPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticPlanResponse
       */
      Models::DescribeElasticPlanResponse describeElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const Models::DescribeElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取弹性计划详情
       *
       * @description - 若已存在同名标准版应用，则创建新版本；
       * - 在新建版本情况下，autoSwitch 和 realtimeShared 也是必填的；
       * - 在新建版本情况下，quota 是自动从上一个版本继承的；
       * - 在新建版本情况下，修改 quota 是无效的。
       *
       * @param request DescribeElasticPlanRequest
       * @return DescribeElasticPlanResponse
       */
      Models::DescribeElasticPlanResponse describeElasticPlan(const string &appGroupIdentity, const string &planId, const Models::DescribeElasticPlanRequest &request);

      /**
       * @summary Queries the rough sort expression configured for an OpenSearch application version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirstRankResponse
       */
      Models::DescribeFirstRankResponse describeFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rough sort expression configured for an OpenSearch application version.
       *
       * @return DescribeFirstRankResponse
       */
      Models::DescribeFirstRankResponse describeFirstRank(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Retrieves the details of an intervention dictionary.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInterventionDictionaryResponse
       */
      Models::DescribeInterventionDictionaryResponse describeInterventionDictionaryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an intervention dictionary.
       *
       * @return DescribeInterventionDictionaryResponse
       */
      Models::DescribeInterventionDictionaryResponse describeInterventionDictionary(const string &name);

      /**
       * @summary Describes a query analysis rule for a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQueryProcessorResponse
       */
      Models::DescribeQueryProcessorResponse describeQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes a query analysis rule for a version of an OpenSearch application.
       *
       * @return DescribeQueryProcessorResponse
       */
      Models::DescribeQueryProcessorResponse describeQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Retrieves the endpoints for all regions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the endpoints for all regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Query a scheduled task for an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduledTaskResponse
       */
      Models::DescribeScheduledTaskResponse describeScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a scheduled task for an OpenSearch application.
       *
       * @return DescribeScheduledTaskResponse
       */
      Models::DescribeScheduledTaskResponse describeScheduledTask(const string &appGroupIdentity, const string &taskId);

      /**
       * @summary Queries the fine sort expression for a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecondRankResponse
       */
      Models::DescribeSecondRankResponse describeSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fine sort expression for a version of an OpenSearch application.
       *
       * @return DescribeSecondRankResponse
       */
      Models::DescribeSecondRankResponse describeSecondRank(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Queries the status of the slow query feature.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowQueryStatusResponse
       */
      Models::DescribeSlowQueryStatusResponse describeSlowQueryStatusWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the slow query feature.
       *
       * @return DescribeSlowQueryStatusResponse
       */
      Models::DescribeSlowQueryStatusResponse describeSlowQueryStatus(const string &appGroupIdentity);

      /**
       * @summary Retrieves the details of a custom analyzer.
       *
       * @param request DescribeUserAnalyzerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAnalyzerResponse
       */
      Models::DescribeUserAnalyzerResponse describeUserAnalyzerWithOptions(const string &name, const Models::DescribeUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a custom analyzer.
       *
       * @param request DescribeUserAnalyzerRequest
       * @return DescribeUserAnalyzerResponse
       */
      Models::DescribeUserAnalyzerResponse describeUserAnalyzer(const string &name, const Models::DescribeUserAnalyzerRequest &request);

      /**
       * @summary Disables the slow query service for Search Diagnoser.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSlowQueryResponse
       */
      Models::DisableSlowQueryResponse disableSlowQueryWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the slow query service for Search Diagnoser.
       *
       * @return DisableSlowQueryResponse
       */
      Models::DisableSlowQueryResponse disableSlowQuery(const string &appGroupIdentity);

      /**
       * @summary Enables the slow query service for the optimizer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSlowQueryResponse
       */
      Models::EnableSlowQueryResponse enableSlowQueryWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the slow query service for the optimizer.
       *
       * @return EnableSlowQueryResponse
       */
      Models::EnableSlowQueryResponse enableSlowQuery(const string &appGroupIdentity);

      /**
       * @summary Queries the information about a wide table that is generated after a JOIN operation is performed on multiple tables.
       *
       * @param request GenerateMergedTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateMergedTableResponse
       */
      Models::GenerateMergedTableResponse generateMergedTableWithOptions(const Models::GenerateMergedTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a wide table that is generated after a JOIN operation is performed on multiple tables.
       *
       * @param request GenerateMergedTableRequest
       * @return GenerateMergedTableResponse
       */
      Models::GenerateMergedTableResponse generateMergedTable(const Models::GenerateMergedTableRequest &request);

      /**
       * @summary Retrieves the industry type.
       *
       * @param request GetDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomainWithOptions(const string &domainName, const Models::GetDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the industry type.
       *
       * @param request GetDomainRequest
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomain(const string &domainName, const Models::GetDomainRequest &request);

      /**
       * @summary Retrieves the version information of the feature that is used to create an instance.
       *
       * @param request GetFunctionCurrentVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionCurrentVersionResponse
       */
      Models::GetFunctionCurrentVersionResponse getFunctionCurrentVersionWithOptions(const string &functionName, const Models::GetFunctionCurrentVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the version information of the feature that is used to create an instance.
       *
       * @param request GetFunctionCurrentVersionRequest
       * @return GetFunctionCurrentVersionResponse
       */
      Models::GetFunctionCurrentVersionResponse getFunctionCurrentVersion(const string &functionName, const Models::GetFunctionCurrentVersionRequest &request);

      /**
       * @summary Queries the default algorithm instance for an application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionDefaultInstanceResponse
       */
      Models::GetFunctionDefaultInstanceResponse getFunctionDefaultInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default algorithm instance for an application.
       *
       * @return GetFunctionDefaultInstanceResponse
       */
      Models::GetFunctionDefaultInstanceResponse getFunctionDefaultInstance(const string &appGroupIdentity, const string &functionName);

      /**
       * @summary Query an algorithm instance by instance name.
       *
       * @param request GetFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionInstanceResponse
       */
      Models::GetFunctionInstanceResponse getFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::GetFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query an algorithm instance by instance name.
       *
       * @param request GetFunctionInstanceRequest
       * @return GetFunctionInstanceResponse
       */
      Models::GetFunctionInstanceResponse getFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::GetFunctionInstanceRequest &request);

      /**
       * @summary Retrieves the specified algorithm resource.
       *
       * @param request GetFunctionResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionResourceResponse
       */
      Models::GetFunctionResourceResponse getFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const Models::GetFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the specified algorithm resource.
       *
       * @param request GetFunctionResourceRequest
       * @return GetFunctionResourceResponse
       */
      Models::GetFunctionResourceResponse getFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName, const Models::GetFunctionResourceRequest &request);

      /**
       * @summary Queries the details of a training task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionTaskResponse
       */
      Models::GetFunctionTaskResponse getFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a training task.
       *
       * @return GetFunctionTaskResponse
       */
      Models::GetFunctionTaskResponse getFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation);

      /**
       * @summary Queries the information about a function version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionVersionResponse
       */
      Models::GetFunctionVersionResponse getFunctionVersionWithOptions(const string &functionName, const string &versionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a function version.
       *
       * @return GetFunctionVersionResponse
       */
      Models::GetFunctionVersionResponse getFunctionVersion(const string &functionName, const string &versionId);

      /**
       * @summary Retrieves the names of all files in a specified script for a specific application version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptFileNamesResponse
       */
      Models::GetScriptFileNamesResponse getScriptFileNamesWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the names of all files in a specified script for a specific application version.
       *
       * @return GetScriptFileNamesResponse
       */
      Models::GetScriptFileNamesResponse getScriptFileNames(const string &appGroupIdentity, const string &appVersionId, const string &scriptName);

      /**
       * @summary Retrieves the details of a query policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSearchStrategyResponse
       */
      Models::GetSearchStrategyResponse getSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a query policy.
       *
       * @return GetSearchStrategyResponse
       */
      Models::GetSearchStrategyResponse getSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName);

      /**
       * @summary Retrieves the details of a sort script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSortScriptResponse
       */
      Models::GetSortScriptResponse getSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a sort script.
       *
       * @return GetSortScriptResponse
       */
      Models::GetSortScriptResponse getSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId);

      /**
       * @summary Retrieves the content of a sort script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSortScriptFileResponse
       */
      Models::GetSortScriptFileResponse getSortScriptFileWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content of a sort script.
       *
       * @return GetSortScriptFileResponse
       */
      Models::GetSortScriptFileResponse getSortScriptFile(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName);

      /**
       * @summary Queries a list of experiments.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABTestExperimentsResponse
       */
      Models::ListABTestExperimentsResponse listABTestExperimentsWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of experiments.
       *
       * @return ListABTestExperimentsResponse
       */
      Models::ListABTestExperimentsResponse listABTestExperiments(const string &appGroupIdentity, const string &sceneId, const string &groupId);

      /**
       * @summary Lists whitelists.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABTestFixedFlowDividersResponse
       */
      Models::ListABTestFixedFlowDividersResponse listABTestFixedFlowDividersWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists whitelists.
       *
       * @return ListABTestFixedFlowDividersResponse
       */
      Models::ListABTestFixedFlowDividersResponse listABTestFixedFlowDividers(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId);

      /**
       * @summary Retrieves a list of test groups.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABTestGroupsResponse
       */
      Models::ListABTestGroupsResponse listABTestGroupsWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of test groups.
       *
       * @return ListABTestGroupsResponse
       */
      Models::ListABTestGroupsResponse listABTestGroups(const string &appGroupIdentity, const string &sceneId);

      /**
       * @summary Queries test scenarios.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABTestScenesResponse
       */
      Models::ListABTestScenesResponse listABTestScenesWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries test scenarios.
       *
       * @return ListABTestScenesResponse
       */
      Models::ListABTestScenesResponse listABTestScenes(const string &appGroupIdentity);

      /**
       * @summary Queries a list of OpenSearch applications.
       *
       * @description - Filters applications by name, instance ID, and type.
       * - Sorts applications by their creation time.
       * - Supports paging.
       *
       * @param tmpReq ListAppGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppGroupsResponse
       */
      Models::ListAppGroupsResponse listAppGroupsWithOptions(const Models::ListAppGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of OpenSearch applications.
       *
       * @description - Filters applications by name, instance ID, and type.
       * - Sorts applications by their creation time.
       * - Supports paging.
       *
       * @param request ListAppGroupsRequest
       * @return ListAppGroupsResponse
       */
      Models::ListAppGroupsResponse listAppGroups(const Models::ListAppGroupsRequest &request);

      /**
       * @summary Lists the data collections for an OpenSearch application.
       *
       * @param request ListDataCollectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataCollectionsResponse
       */
      Models::ListDataCollectionsResponse listDataCollectionsWithOptions(const string &appGroupIdentity, const Models::ListDataCollectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the data collections for an OpenSearch application.
       *
       * @param request ListDataCollectionsRequest
       * @return ListDataCollectionsResponse
       */
      Models::ListDataCollectionsResponse listDataCollections(const string &appGroupIdentity, const Models::ListDataCollectionsRequest &request);

      /**
       * @summary This internal API retrieves all fields from a specified data table.
       *
       * @param request ListDataSourceTableFieldsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTableFieldsResponse
       */
      Models::ListDataSourceTableFieldsResponse listDataSourceTableFieldsWithOptions(const string &dataSourceType, const Models::ListDataSourceTableFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This internal API retrieves all fields from a specified data table.
       *
       * @param request ListDataSourceTableFieldsRequest
       * @return ListDataSourceTableFieldsResponse
       */
      Models::ListDataSourceTableFieldsResponse listDataSourceTableFields(const string &dataSourceType, const Models::ListDataSourceTableFieldsRequest &request);

      /**
       * @summary Retrieves all data from a specified data source.
       *
       * @param request ListDataSourceTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTablesResponse
       */
      Models::ListDataSourceTablesResponse listDataSourceTablesWithOptions(const string &dataSourceType, const Models::ListDataSourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all data from a specified data source.
       *
       * @param request ListDataSourceTablesRequest
       * @return ListDataSourceTablesResponse
       */
      Models::ListDataSourceTablesResponse listDataSourceTables(const string &dataSourceType, const Models::ListDataSourceTablesRequest &request);

      /**
       * @summary 获取弹性计划列表
       *
       * @param request ListElasticPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListElasticPlansResponse
       */
      Models::ListElasticPlansResponse listElasticPlansWithOptions(const string &appGroupIdentity, const Models::ListElasticPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取弹性计划列表
       *
       * @param request ListElasticPlansRequest
       * @return ListElasticPlansResponse
       */
      Models::ListElasticPlansResponse listElasticPlans(const string &appGroupIdentity, const Models::ListElasticPlansRequest &request);

      /**
       * @summary Queries the rough sort expressions that are configured for a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFirstRanksResponse
       */
      Models::ListFirstRanksResponse listFirstRanksWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rough sort expressions that are configured for a version of an OpenSearch application.
       *
       * @return ListFirstRanksResponse
       */
      Models::ListFirstRanksResponse listFirstRanks(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Lists all instances that match the specified conditions.
       *
       * @param request ListFunctionInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionInstancesResponse
       */
      Models::ListFunctionInstancesResponse listFunctionInstancesWithOptions(const string &appGroupIdentity, const string &functionName, const Models::ListFunctionInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all instances that match the specified conditions.
       *
       * @param request ListFunctionInstancesRequest
       * @return ListFunctionInstancesResponse
       */
      Models::ListFunctionInstancesResponse listFunctionInstances(const string &appGroupIdentity, const string &functionName, const Models::ListFunctionInstancesRequest &request);

      /**
       * @summary Lists the algorithm resources.
       *
       * @param request ListFunctionResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionResourcesResponse
       */
      Models::ListFunctionResourcesResponse listFunctionResourcesWithOptions(const string &appGroupIdentity, const string &functionName, const Models::ListFunctionResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the algorithm resources.
       *
       * @param request ListFunctionResourcesRequest
       * @return ListFunctionResourcesResponse
       */
      Models::ListFunctionResourcesResponse listFunctionResources(const string &appGroupIdentity, const string &functionName, const Models::ListFunctionResourcesRequest &request);

      /**
       * @summary Queries the training tasks. The results are sorted in descending order by start time.
       *
       * @param request ListFunctionTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionTasksResponse
       */
      Models::ListFunctionTasksResponse listFunctionTasksWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::ListFunctionTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the training tasks. The results are sorted in descending order by start time.
       *
       * @param request ListFunctionTasksRequest
       * @return ListFunctionTasksResponse
       */
      Models::ListFunctionTasksResponse listFunctionTasks(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::ListFunctionTasksRequest &request);

      /**
       * @summary Retrieves a list of intervention dictionaries.
       *
       * @param request ListInterventionDictionariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterventionDictionariesResponse
       */
      Models::ListInterventionDictionariesResponse listInterventionDictionariesWithOptions(const Models::ListInterventionDictionariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of intervention dictionaries.
       *
       * @param request ListInterventionDictionariesRequest
       * @return ListInterventionDictionariesResponse
       */
      Models::ListInterventionDictionariesResponse listInterventionDictionaries(const Models::ListInterventionDictionariesRequest &request);

      /**
       * @summary Queries the intervention entries in an intervention dictionary.
       *
       * @param request ListInterventionDictionaryEntriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterventionDictionaryEntriesResponse
       */
      Models::ListInterventionDictionaryEntriesResponse listInterventionDictionaryEntriesWithOptions(const string &name, const Models::ListInterventionDictionaryEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the intervention entries in an intervention dictionary.
       *
       * @param request ListInterventionDictionaryEntriesRequest
       * @return ListInterventionDictionaryEntriesResponse
       */
      Models::ListInterventionDictionaryEntriesResponse listInterventionDictionaryEntries(const string &name, const Models::ListInterventionDictionaryEntriesRequest &request);

      /**
       * @summary Retrieves the Named Entity Recognition (NER) results.
       *
       * @param request ListInterventionDictionaryNerResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterventionDictionaryNerResultsResponse
       */
      Models::ListInterventionDictionaryNerResultsResponse listInterventionDictionaryNerResultsWithOptions(const string &name, const Models::ListInterventionDictionaryNerResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Named Entity Recognition (NER) results.
       *
       * @param request ListInterventionDictionaryNerResultsRequest
       * @return ListInterventionDictionaryNerResultsResponse
       */
      Models::ListInterventionDictionaryNerResultsResponse listInterventionDictionaryNerResults(const string &name, const Models::ListInterventionDictionaryNerResultsRequest &request);

      /**
       * @summary Queries the list of resources associated with an intervention dictionary. If a query processor (QP) references the dictionary, the operation returns all associated applications and information about the QP.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterventionDictionaryRelatedEntitiesResponse
       */
      Models::ListInterventionDictionaryRelatedEntitiesResponse listInterventionDictionaryRelatedEntitiesWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resources associated with an intervention dictionary. If a query processor (QP) references the dictionary, the operation returns all associated applications and information about the QP.
       *
       * @return ListInterventionDictionaryRelatedEntitiesResponse
       */
      Models::ListInterventionDictionaryRelatedEntitiesResponse listInterventionDictionaryRelatedEntities(const string &name);

      /**
       * @summary Lists the current proceedings.
       *
       * @param request ListProceedingsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProceedingsResponse
       */
      Models::ListProceedingsResponse listProceedingsWithOptions(const string &appGroupIdentity, const Models::ListProceedingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the current proceedings.
       *
       * @param request ListProceedingsRequest
       * @return ListProceedingsResponse
       */
      Models::ListProceedingsResponse listProceedings(const string &appGroupIdentity, const Models::ListProceedingsRequest &request);

      /**
       * @summary Tests the results of query analysis. This operation can be called only for existing applications of the Open Source-compatible Edition.
       *
       * @param request ListQueryProcessorAnalyzerResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueryProcessorAnalyzerResultsResponse
       */
      Models::ListQueryProcessorAnalyzerResultsResponse listQueryProcessorAnalyzerResultsWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const Models::ListQueryProcessorAnalyzerResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the results of query analysis. This operation can be called only for existing applications of the Open Source-compatible Edition.
       *
       * @param request ListQueryProcessorAnalyzerResultsRequest
       * @return ListQueryProcessorAnalyzerResultsResponse
       */
      Models::ListQueryProcessorAnalyzerResultsResponse listQueryProcessorAnalyzerResults(const string &appGroupIdentity, const string &appId, const string &name, const Models::ListQueryProcessorAnalyzerResultsRequest &request);

      /**
       * @summary Queries the recommended priority settings for entity types in Named Entity Recognition (NER).
       *
       * @param request ListQueryProcessorNersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueryProcessorNersResponse
       */
      Models::ListQueryProcessorNersResponse listQueryProcessorNersWithOptions(const Models::ListQueryProcessorNersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recommended priority settings for entity types in Named Entity Recognition (NER).
       *
       * @param request ListQueryProcessorNersRequest
       * @return ListQueryProcessorNersResponse
       */
      Models::ListQueryProcessorNersResponse listQueryProcessorNers(const Models::ListQueryProcessorNersRequest &request);

      /**
       * @summary Queries a list of query analysis rules configured for a specific version of an OpenSearch application.
       *
       * @param request ListQueryProcessorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueryProcessorsResponse
       */
      Models::ListQueryProcessorsResponse listQueryProcessorsWithOptions(const string &appGroupIdentity, const string &appId, const Models::ListQueryProcessorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of query analysis rules configured for a specific version of an OpenSearch application.
       *
       * @param request ListQueryProcessorsRequest
       * @return ListQueryProcessorsResponse
       */
      Models::ListQueryProcessorsResponse listQueryProcessors(const string &appGroupIdentity, const string &appId, const Models::ListQueryProcessorsRequest &request);

      /**
       * @summary Lists the quota approval tickets for a specified OpenSearch application.
       *
       * @param request ListQuotaReviewTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaReviewTasksResponse
       */
      Models::ListQuotaReviewTasksResponse listQuotaReviewTasksWithOptions(const string &appGroupIdentity, const Models::ListQuotaReviewTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the quota approval tickets for a specified OpenSearch application.
       *
       * @param request ListQuotaReviewTasksRequest
       * @return ListQuotaReviewTasksResponse
       */
      Models::ListQuotaReviewTasksResponse listQuotaReviewTasks(const string &appGroupIdentity, const Models::ListQuotaReviewTasksRequest &request);

      /**
       * @summary Queries a list of scheduled tasks for an OpenSearch application.
       *
       * @param request ListScheduledTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasksWithOptions(const string &appGroupIdentity, const Models::ListScheduledTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of scheduled tasks for an OpenSearch application.
       *
       * @param request ListScheduledTasksRequest
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasks(const string &appGroupIdentity, const Models::ListScheduledTasksRequest &request);

      /**
       * @summary Retrieves the details of query policies.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchStrategiesResponse
       */
      Models::ListSearchStrategiesResponse listSearchStrategiesWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of query policies.
       *
       * @return ListSearchStrategiesResponse
       */
      Models::ListSearchStrategiesResponse listSearchStrategies(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Lists the fine sort expressions for a specific version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecondRanksResponse
       */
      Models::ListSecondRanksResponse listSecondRanksWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the fine sort expressions for a specific version of an OpenSearch application.
       *
       * @return ListSecondRanksResponse
       */
      Models::ListSecondRanksResponse listSecondRanks(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Lists the optimization suggestions for slow queries from Search Diagnosis.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSlowQueryCategoriesResponse
       */
      Models::ListSlowQueryCategoriesResponse listSlowQueryCategoriesWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the optimization suggestions for slow queries from Search Diagnosis.
       *
       * @return ListSlowQueryCategoriesResponse
       */
      Models::ListSlowQueryCategoriesResponse listSlowQueryCategories(const string &appGroupIdentity);

      /**
       * @summary Lists the slow queries from the Query Optimizer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSlowQueryQueriesResponse
       */
      Models::ListSlowQueryQueriesResponse listSlowQueryQueriesWithOptions(const string &appGroupIdentity, const string &categoryIndex, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the slow queries from the Query Optimizer.
       *
       * @return ListSlowQueryQueriesResponse
       */
      Models::ListSlowQueryQueriesResponse listSlowQueryQueries(const string &appGroupIdentity, const string &categoryIndex);

      /**
       * @summary Lists the sort expressions that are configured for a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSortExpressionsResponse
       */
      Models::ListSortExpressionsResponse listSortExpressionsWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the sort expressions that are configured for a version of an OpenSearch application.
       *
       * @return ListSortExpressionsResponse
       */
      Models::ListSortExpressionsResponse listSortExpressions(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Lists all sort scripts for a specified application version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSortScriptsResponse
       */
      Models::ListSortScriptsResponse listSortScriptsWithOptions(const string &appGroupIdentity, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all sort scripts for a specified application version.
       *
       * @return ListSortScriptsResponse
       */
      Models::ListSortScriptsResponse listSortScripts(const string &appGroupIdentity, const string &appVersionId);

      /**
       * @summary Queries log statistics, such as application error logs, hotword rankings, and slow query logs.
       *
       * @param request ListStatisticLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStatisticLogsResponse
       */
      Models::ListStatisticLogsResponse listStatisticLogsWithOptions(const string &appGroupIdentity, const string &moduleName, const Models::ListStatisticLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries log statistics, such as application error logs, hotword rankings, and slow query logs.
       *
       * @param request ListStatisticLogsRequest
       * @return ListStatisticLogsResponse
       */
      Models::ListStatisticLogsResponse listStatisticLogs(const string &appGroupIdentity, const string &moduleName, const Models::ListStatisticLogsRequest &request);

      /**
       * @summary Queries statistical reports, such as application, drop-down suggestion, top search hint, A/B test, and data quality reports.
       *
       * @param request ListStatisticReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStatisticReportResponse
       */
      Models::ListStatisticReportResponse listStatisticReportWithOptions(const string &appGroupIdentity, const string &moduleName, const Models::ListStatisticReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistical reports, such as application, drop-down suggestion, top search hint, A/B test, and data quality reports.
       *
       * @param request ListStatisticReportRequest
       * @return ListStatisticReportResponse
       */
      Models::ListStatisticReportResponse listStatisticReport(const string &appGroupIdentity, const string &moduleName, const Models::ListStatisticReportRequest &request);

      /**
       * @summary Queries the tags of specified resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of specified resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the entries of a custom analyzer.
       *
       * @param request ListUserAnalyzerEntriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAnalyzerEntriesResponse
       */
      Models::ListUserAnalyzerEntriesResponse listUserAnalyzerEntriesWithOptions(const string &name, const Models::ListUserAnalyzerEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entries of a custom analyzer.
       *
       * @param request ListUserAnalyzerEntriesRequest
       * @return ListUserAnalyzerEntriesResponse
       */
      Models::ListUserAnalyzerEntriesResponse listUserAnalyzerEntries(const string &name, const Models::ListUserAnalyzerEntriesRequest &request);

      /**
       * @summary Retrieves a list of custom analyzers for your account.
       *
       * @param request ListUserAnalyzersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAnalyzersResponse
       */
      Models::ListUserAnalyzersResponse listUserAnalyzersWithOptions(const Models::ListUserAnalyzersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of custom analyzers for your account.
       *
       * @param request ListUserAnalyzersRequest
       * @return ListUserAnalyzersResponse
       */
      Models::ListUserAnalyzersResponse listUserAnalyzers(const Models::ListUserAnalyzersRequest &request);

      /**
       * @summary Modifies the properties of an OpenSearch application or sets its online version.
       *
       * @param request ModifyAppGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppGroupResponse
       */
      Models::ModifyAppGroupResponse modifyAppGroupWithOptions(const string &appGroupIdentity, const Models::ModifyAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of an OpenSearch application or sets its online version.
       *
       * @param request ModifyAppGroupRequest
       * @return ModifyAppGroupResponse
       */
      Models::ModifyAppGroupResponse modifyAppGroup(const string &appGroupIdentity, const Models::ModifyAppGroupRequest &request);

      /**
       * @summary Modifies the quota of an OpenSearch application.
       *
       * @param request ModifyAppGroupQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppGroupQuotaResponse
       */
      Models::ModifyAppGroupQuotaResponse modifyAppGroupQuotaWithOptions(const string &appGroupIdentity, const Models::ModifyAppGroupQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the quota of an OpenSearch application.
       *
       * @param request ModifyAppGroupQuotaRequest
       * @return ModifyAppGroupQuotaResponse
       */
      Models::ModifyAppGroupQuotaResponse modifyAppGroupQuota(const string &appGroupIdentity, const Models::ModifyAppGroupQuotaRequest &request);

      /**
       * @summary 更新弹性计划
       *
       * @param request ModifyElasticPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const Models::ModifyElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新弹性计划
       *
       * @param request ModifyElasticPlanRequest
       * @return ModifyElasticPlanResponse
       */
      Models::ModifyElasticPlanResponse modifyElasticPlan(const string &appGroupIdentity, const string &planId, const Models::ModifyElasticPlanRequest &request);

      /**
       * @summary Modifies the rough sort expression for an OpenSearch application version. If you set the dryRun parameter to true, this operation validates the modified rough sort expression. The default value of this parameter is false.
       *
       * @param request ModifyFirstRankRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirstRankResponse
       */
      Models::ModifyFirstRankResponse modifyFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifyFirstRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the rough sort expression for an OpenSearch application version. If you set the dryRun parameter to true, this operation validates the modified rough sort expression. The default value of this parameter is false.
       *
       * @param request ModifyFirstRankRequest
       * @return ModifyFirstRankResponse
       */
      Models::ModifyFirstRankResponse modifyFirstRank(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifyFirstRankRequest &request);

      /**
       * @summary Modifies a query analysis rule for a specific application version. If you set the dryRun parameter to true, this operation checks the specified query analysis rule. If you do not specify the dryRun parameter, the default value is false.
       *
       * @param request ModifyQueryProcessorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQueryProcessorResponse
       */
      Models::ModifyQueryProcessorResponse modifyQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifyQueryProcessorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a query analysis rule for a specific application version. If you set the dryRun parameter to true, this operation checks the specified query analysis rule. If you do not specify the dryRun parameter, the default value is false.
       *
       * @param request ModifyQueryProcessorRequest
       * @return ModifyQueryProcessorResponse
       */
      Models::ModifyQueryProcessorResponse modifyQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifyQueryProcessorRequest &request);

      /**
       * @summary Modifies a scheduled task.
       *
       * @param request ModifyScheduledTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const Models::ModifyScheduledTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled task.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const string &appGroupIdentity, const string &taskId, const Models::ModifyScheduledTaskRequest &request);

      /**
       * @summary Modifies a fine sort expression for an OpenSearch application version. If you set `dryRun` to `true`, the modified fine sort expression is validated. The `dryRun` parameter is `false` by default.
       *
       * @param request ModifySecondRankRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecondRankResponse
       */
      Models::ModifySecondRankResponse modifySecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifySecondRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a fine sort expression for an OpenSearch application version. If you set `dryRun` to `true`, the modified fine sort expression is validated. The `dryRun` parameter is `false` by default.
       *
       * @param request ModifySecondRankRequest
       * @return ModifySecondRankResponse
       */
      Models::ModifySecondRankResponse modifySecondRank(const string &appGroupIdentity, const string &appId, const string &name, const Models::ModifySecondRankRequest &request);

      /**
       * @summary Applies changes to intervention dictionary entries.
       *
       * @param request PushInterventionDictionaryEntriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushInterventionDictionaryEntriesResponse
       */
      Models::PushInterventionDictionaryEntriesResponse pushInterventionDictionaryEntriesWithOptions(const string &name, const Models::PushInterventionDictionaryEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies changes to intervention dictionary entries.
       *
       * @param request PushInterventionDictionaryEntriesRequest
       * @return PushInterventionDictionaryEntriesResponse
       */
      Models::PushInterventionDictionaryEntriesResponse pushInterventionDictionaryEntries(const string &name, const Models::PushInterventionDictionaryEntriesRequest &request);

      /**
       * @summary Applies changes to the entries of a custom analyzer.
       *
       * @param request PushUserAnalyzerEntriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushUserAnalyzerEntriesResponse
       */
      Models::PushUserAnalyzerEntriesResponse pushUserAnalyzerEntriesWithOptions(const string &name, const Models::PushUserAnalyzerEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies changes to the entries of a custom analyzer.
       *
       * @param request PushUserAnalyzerEntriesRequest
       * @return PushUserAnalyzerEntriesResponse
       */
      Models::PushUserAnalyzerEntriesResponse pushUserAnalyzerEntries(const string &name, const Models::PushUserAnalyzerEntriesRequest &request);

      /**
       * @summary Releases a sort script.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseSortScriptResponse
       */
      Models::ReleaseSortScriptResponse releaseSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a sort script.
       *
       * @return ReleaseSortScriptResponse
       */
      Models::ReleaseSortScriptResponse releaseSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId);

      /**
       * @summary Deletes a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAppResponse
       */
      Models::RemoveAppResponse removeAppWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a version of an OpenSearch application.
       *
       * @return RemoveAppResponse
       */
      Models::RemoveAppResponse removeApp(const string &appGroupIdentity, const string &appId);

      /**
       * @summary Deletes an OpenSearch application.
       *
       * @description You can only delete pay-as-you-go applications. Subscription applications cannot be deleted.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAppGroupResponse
       */
      Models::RemoveAppGroupResponse removeAppGroupWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an OpenSearch application.
       *
       * @description You can only delete pay-as-you-go applications. Subscription applications cannot be deleted.
       *
       * @return RemoveAppGroupResponse
       */
      Models::RemoveAppGroupResponse removeAppGroup(const string &appGroupIdentity);

      /**
       * @summary Disables data collection.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDataCollectionResponse
       */
      Models::RemoveDataCollectionResponse removeDataCollectionWithOptions(const string &appGroupIdentity, const string &dataCollectionIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables data collection.
       *
       * @return RemoveDataCollectionResponse
       */
      Models::RemoveDataCollectionResponse removeDataCollection(const string &appGroupIdentity, const string &dataCollectionIdentity);

      /**
       * @summary 获取弹性计划详情
       *
       * @param request RemoveElasticPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveElasticPlanResponse
       */
      Models::RemoveElasticPlanResponse removeElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const Models::RemoveElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取弹性计划详情
       *
       * @param request RemoveElasticPlanRequest
       * @return RemoveElasticPlanResponse
       */
      Models::RemoveElasticPlanResponse removeElasticPlan(const string &appGroupIdentity, const string &planId, const Models::RemoveElasticPlanRequest &request);

      /**
       * @summary Deletes the rough sort configuration of an OpenSearch application version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFirstRankResponse
       */
      Models::RemoveFirstRankResponse removeFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the rough sort configuration of an OpenSearch application version.
       *
       * @return RemoveFirstRankResponse
       */
      Models::RemoveFirstRankResponse removeFirstRank(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Deletes an intervention dictionary.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInterventionDictionaryResponse
       */
      Models::RemoveInterventionDictionaryResponse removeInterventionDictionaryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an intervention dictionary.
       *
       * @return RemoveInterventionDictionaryResponse
       */
      Models::RemoveInterventionDictionaryResponse removeInterventionDictionary(const string &name);

      /**
       * @summary Removes a query analysis rule from an OpenSearch application version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveQueryProcessorResponse
       */
      Models::RemoveQueryProcessorResponse removeQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a query analysis rule from an OpenSearch application version.
       *
       * @return RemoveQueryProcessorResponse
       */
      Models::RemoveQueryProcessorResponse removeQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Deletes a scheduled task from an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveScheduledTaskResponse
       */
      Models::RemoveScheduledTaskResponse removeScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled task from an OpenSearch application.
       *
       * @return RemoveScheduledTaskResponse
       */
      Models::RemoveScheduledTaskResponse removeScheduledTask(const string &appGroupIdentity, const string &taskId);

      /**
       * @summary Deletes a search strategy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSearchStrategyResponse
       */
      Models::RemoveSearchStrategyResponse removeSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a search strategy.
       *
       * @return RemoveSearchStrategyResponse
       */
      Models::RemoveSearchStrategyResponse removeSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName);

      /**
       * @summary Deletes a fine sort expression from a version of an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSecondRankResponse
       */
      Models::RemoveSecondRankResponse removeSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a fine sort expression from a version of an OpenSearch application.
       *
       * @return RemoveSecondRankResponse
       */
      Models::RemoveSecondRankResponse removeSecondRank(const string &appGroupIdentity, const string &appId, const string &name);

      /**
       * @summary Deletes a custom analyzer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserAnalyzerResponse
       */
      Models::RemoveUserAnalyzerResponse removeUserAnalyzerWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom analyzer.
       *
       * @return RemoveUserAnalyzerResponse
       */
      Models::RemoveUserAnalyzerResponse removeUserAnalyzer(const string &name);

      /**
       * @summary Renews an application. This API operation is unavailable. To renew an application, use the OpenSearch console.
       *
       * @param request RenewAppGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewAppGroupResponse
       */
      Models::RenewAppGroupResponse renewAppGroupWithOptions(const string &appGroupIdentity, const Models::RenewAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews an application. This API operation is unavailable. To renew an application, use the OpenSearch console.
       *
       * @param request RenewAppGroupRequest
       * @return RenewAppGroupResponse
       */
      Models::RenewAppGroupResponse renewAppGroup(const string &appGroupIdentity, const Models::RenewAppGroupRequest &request);

      /**
       * @summary Converts a service-based application to an instance-based application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceAppGroupCommodityCodeResponse
       */
      Models::ReplaceAppGroupCommodityCodeResponse replaceAppGroupCommodityCodeWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a service-based application to an instance-based application.
       *
       * @return ReplaceAppGroupCommodityCodeResponse
       */
      Models::ReplaceAppGroupCommodityCodeResponse replaceAppGroupCommodityCode(const string &appGroupIdentity);

      /**
       * @summary Uploads a sort script.
       *
       * @param request SaveSortScriptFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSortScriptFileResponse
       */
      Models::SaveSortScriptFileResponse saveSortScriptFileWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const Models::SaveSortScriptFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a sort script.
       *
       * @param request SaveSortScriptFileRequest
       * @return SaveSortScriptFileResponse
       */
      Models::SaveSortScriptFileResponse saveSortScriptFile(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const Models::SaveSortScriptFileRequest &request);

      /**
       * @summary Starts a slow query analysis task.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSlowQueryAnalyzerResponse
       */
      Models::StartSlowQueryAnalyzerResponse startSlowQueryAnalyzerWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a slow query analysis task.
       *
       * @return StartSlowQueryAnalyzerResponse
       */
      Models::StartSlowQueryAnalyzerResponse startSlowQueryAnalyzer(const string &appGroupIdentity);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Detaches a custom analyzer from an Elasticsearch instance.
       *
       * @description Use this operation to detach a custom analyzer from an Elasticsearch instance.
       *
       * @param request UnbindESUserAnalyzerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindESUserAnalyzerResponse
       */
      Models::UnbindESUserAnalyzerResponse unbindESUserAnalyzerWithOptions(const string &appGroupIdentity, const string &esInstanceId, const Models::UnbindESUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a custom analyzer from an Elasticsearch instance.
       *
       * @description Use this operation to detach a custom analyzer from an Elasticsearch instance.
       *
       * @param request UnbindESUserAnalyzerRequest
       * @return UnbindESUserAnalyzerResponse
       */
      Models::UnbindESUserAnalyzerResponse unbindESUserAnalyzer(const string &appGroupIdentity, const string &esInstanceId, const Models::UnbindESUserAnalyzerRequest &request);

      /**
       * @summary Unbinds an Elasticsearch instance from an OpenSearch application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindEsInstanceResponse
       */
      Models::UnbindEsInstanceResponse unbindEsInstanceWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an Elasticsearch instance from an OpenSearch application.
       *
       * @return UnbindEsInstanceResponse
       */
      Models::UnbindEsInstanceResponse unbindEsInstance(const string &appGroupIdentity);

      /**
       * @summary Removes tags from resources.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the parameters of an A/B test experiment.
       *
       * @param request UpdateABTestExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABTestExperimentResponse
       */
      Models::UpdateABTestExperimentResponse updateABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const Models::UpdateABTestExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the parameters of an A/B test experiment.
       *
       * @param request UpdateABTestExperimentRequest
       * @return UpdateABTestExperimentResponse
       */
      Models::UpdateABTestExperimentResponse updateABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const Models::UpdateABTestExperimentRequest &request);

      /**
       * @summary Updates the whitelist data.
       *
       * @param request UpdateABTestFixedFlowDividersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABTestFixedFlowDividersResponse
       */
      Models::UpdateABTestFixedFlowDividersResponse updateABTestFixedFlowDividersWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const Models::UpdateABTestFixedFlowDividersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the whitelist data.
       *
       * @param request UpdateABTestFixedFlowDividersRequest
       * @return UpdateABTestFixedFlowDividersResponse
       */
      Models::UpdateABTestFixedFlowDividersResponse updateABTestFixedFlowDividers(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const Models::UpdateABTestFixedFlowDividersRequest &request);

      /**
       * @summary Modifies a test group.
       *
       * @param request UpdateABTestGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABTestGroupResponse
       */
      Models::UpdateABTestGroupResponse updateABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const Models::UpdateABTestGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a test group.
       *
       * @param request UpdateABTestGroupRequest
       * @return UpdateABTestGroupResponse
       */
      Models::UpdateABTestGroupResponse updateABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId, const Models::UpdateABTestGroupRequest &request);

      /**
       * @summary Modifies an experiment scenario.
       *
       * @param request UpdateABTestSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABTestSceneResponse
       */
      Models::UpdateABTestSceneResponse updateABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const Models::UpdateABTestSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an experiment scenario.
       *
       * @param request UpdateABTestSceneRequest
       * @return UpdateABTestSceneResponse
       */
      Models::UpdateABTestSceneResponse updateABTestScene(const string &appGroupIdentity, const string &sceneId, const Models::UpdateABTestSceneRequest &request);

      /**
       * @summary Updates the delete protection status for an application group.
       *
       * @param request UpdateAppGroupDeleteProtectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppGroupDeleteProtectionResponse
       */
      Models::UpdateAppGroupDeleteProtectionResponse updateAppGroupDeleteProtectionWithOptions(const string &appGroupIdentity, const Models::UpdateAppGroupDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the delete protection status for an application group.
       *
       * @param request UpdateAppGroupDeleteProtectionRequest
       * @return UpdateAppGroupDeleteProtectionResponse
       */
      Models::UpdateAppGroupDeleteProtectionResponse updateAppGroupDeleteProtection(const string &appGroupIdentity, const Models::UpdateAppGroupDeleteProtectionRequest &request);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateFetchFieldsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFetchFieldsResponse
       */
      Models::UpdateFetchFieldsResponse updateFetchFieldsWithOptions(const string &appGroupIdentity, const string &appId, const Models::UpdateFetchFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateFetchFieldsRequest
       * @return UpdateFetchFieldsResponse
       */
      Models::UpdateFetchFieldsResponse updateFetchFields(const string &appGroupIdentity, const string &appId, const Models::UpdateFetchFieldsRequest &request);

      /**
       * @summary Sets the default algorithm instance for the specified application. The new algorithm instance automatically overwrites the previously set default instance. If no instance is specified, the default instance is canceled.
       *
       * @param request UpdateFunctionDefaultInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionDefaultInstanceResponse
       */
      Models::UpdateFunctionDefaultInstanceResponse updateFunctionDefaultInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const Models::UpdateFunctionDefaultInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the default algorithm instance for the specified application. The new algorithm instance automatically overwrites the previously set default instance. If no instance is specified, the default instance is canceled.
       *
       * @param request UpdateFunctionDefaultInstanceRequest
       * @return UpdateFunctionDefaultInstanceResponse
       */
      Models::UpdateFunctionDefaultInstanceResponse updateFunctionDefaultInstance(const string &appGroupIdentity, const string &functionName, const Models::UpdateFunctionDefaultInstanceRequest &request);

      /**
       * @summary Updates the configuration of a function instance.
       *
       * @param request UpdateFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionInstanceResponse
       */
      Models::UpdateFunctionInstanceResponse updateFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::UpdateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a function instance.
       *
       * @param request UpdateFunctionInstanceRequest
       * @return UpdateFunctionInstanceResponse
       */
      Models::UpdateFunctionInstanceResponse updateFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName, const Models::UpdateFunctionInstanceRequest &request);

      /**
       * @summary Updates an algorithm resource.
       *
       * @description Updates the information of a resource specified by its name. You can modify only the data and description of the resource.
       *
       * @param request UpdateFunctionResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionResourceResponse
       */
      Models::UpdateFunctionResourceResponse updateFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const Models::UpdateFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an algorithm resource.
       *
       * @description Updates the information of a resource specified by its name. You can modify only the data and description of the resource.
       *
       * @param request UpdateFunctionResourceRequest
       * @return UpdateFunctionResourceResponse
       */
      Models::UpdateFunctionResourceResponse updateFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName, const Models::UpdateFunctionResourceRequest &request);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateSearchStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSearchStrategyResponse
       */
      Models::UpdateSearchStrategyResponse updateSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const Models::UpdateSearchStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateSearchStrategyRequest
       * @return UpdateSearchStrategyResponse
       */
      Models::UpdateSearchStrategyResponse updateSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName, const Models::UpdateSearchStrategyRequest &request);

      /**
       * @summary Modifies the description of a sort script.
       *
       * @description Modifies the description of a sort script.
       *
       * @param request UpdateSortScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSortScriptResponse
       */
      Models::UpdateSortScriptResponse updateSortScriptWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const Models::UpdateSortScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a sort script.
       *
       * @description Modifies the description of a sort script.
       *
       * @param request UpdateSortScriptRequest
       * @return UpdateSortScriptResponse
       */
      Models::UpdateSortScriptResponse updateSortScript(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const Models::UpdateSortScriptRequest &request);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateSummariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSummariesResponse
       */
      Models::UpdateSummariesResponse updateSummariesWithOptions(const string &appGroupIdentity, const string &appId, const Models::UpdateSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation supports dry runs.
       *
       * @param request UpdateSummariesRequest
       * @return UpdateSummariesResponse
       */
      Models::UpdateSummariesResponse updateSummaries(const string &appGroupIdentity, const string &appId, const Models::UpdateSummariesRequest &request);

      /**
       * @summary Validates data sources.
       *
       * @param request ValidateDataSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateDataSourcesResponse
       */
      Models::ValidateDataSourcesResponse validateDataSourcesWithOptions(const Models::ValidateDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates data sources.
       *
       * @param request ValidateDataSourcesRequest
       * @return ValidateDataSourcesResponse
       */
      Models::ValidateDataSourcesResponse validateDataSources(const Models::ValidateDataSourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
