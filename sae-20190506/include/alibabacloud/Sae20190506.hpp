// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAE20190506_HPP_
#define ALIBABACLOUD_SAE20190506_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sae20190506Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sae20190506.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Terminates a change order and rolls back the corresponding application.
       *
       * @param request AbortAndRollbackChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortAndRollbackChangeOrderResponse
       */
      Models::AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrderWithOptions(const Models::AbortAndRollbackChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a change order and rolls back the corresponding application.
       *
       * @param request AbortAndRollbackChangeOrderRequest
       * @return AbortAndRollbackChangeOrderResponse
       */
      Models::AbortAndRollbackChangeOrderResponse abortAndRollbackChangeOrder(const Models::AbortAndRollbackChangeOrderRequest &request);

      /**
       * @summary Terminate a change order.
       *
       * @param request AbortChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortChangeOrderResponse
       */
      Models::AbortChangeOrderResponse abortChangeOrderWithOptions(const Models::AbortChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminate a change order.
       *
       * @param request AbortChangeOrderRequest
       * @return AbortChangeOrderResponse
       */
      Models::AbortChangeOrderResponse abortChangeOrder(const Models::AbortChangeOrderRequest &request);

      /**
       * @summary Restarts applications in batches.
       *
       * @param request BatchRestartApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRestartApplicationsResponse
       */
      Models::BatchRestartApplicationsResponse batchRestartApplicationsWithOptions(const Models::BatchRestartApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts applications in batches.
       *
       * @param request BatchRestartApplicationsRequest
       * @return BatchRestartApplicationsResponse
       */
      Models::BatchRestartApplicationsResponse batchRestartApplications(const Models::BatchRestartApplicationsRequest &request);

      /**
       * @summary Starts multiple applications at a time.
       *
       * @param request BatchStartApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartApplicationsResponse
       */
      Models::BatchStartApplicationsResponse batchStartApplicationsWithOptions(const Models::BatchStartApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple applications at a time.
       *
       * @param request BatchStartApplicationsRequest
       * @return BatchStartApplicationsResponse
       */
      Models::BatchStartApplicationsResponse batchStartApplications(const Models::BatchStartApplicationsRequest &request);

      /**
       * @summary Stop applications in batches.
       *
       * @param request BatchStopApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopApplicationsResponse
       */
      Models::BatchStopApplicationsResponse batchStopApplicationsWithOptions(const Models::BatchStopApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop applications in batches.
       *
       * @param request BatchStopApplicationsRequest
       * @return BatchStopApplicationsResponse
       */
      Models::BatchStopApplicationsResponse batchStopApplications(const Models::BatchStopApplicationsRequest &request);

      /**
       * @summary Associates a Network Load Balancer (NLB) instance with an application.
       *
       * @param request BindNlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindNlbResponse
       */
      Models::BindNlbResponse bindNlbWithOptions(const Models::BindNlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Network Load Balancer (NLB) instance with an application.
       *
       * @param request BindNlbRequest
       * @return BindNlbResponse
       */
      Models::BindNlbResponse bindNlb(const Models::BindNlbRequest &request);

      /**
       * @param request BindSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindSlbResponse
       */
      Models::BindSlbResponse bindSlbWithOptions(const Models::BindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindSlbRequest
       * @return BindSlbResponse
       */
      Models::BindSlbResponse bindSlb(const Models::BindSlbRequest &request);

      /**
       * @summary Confirms whether to start the next batch.
       *
       * @param request ConfirmPipelineBatchRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmPipelineBatchResponse
       */
      Models::ConfirmPipelineBatchResponse confirmPipelineBatchWithOptions(const Models::ConfirmPipelineBatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms whether to start the next batch.
       *
       * @param request ConfirmPipelineBatchRequest
       * @return ConfirmPipelineBatchResponse
       */
      Models::ConfirmPipelineBatchResponse confirmPipelineBatch(const Models::ConfirmPipelineBatchRequest &request);

      /**
       * @summary Creates an application.
       *
       * @param tmpReq CreateApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates an auto scaling policy for an application.
       *
       * @description ## [](#)Precautions
       * *   You can create up to five auto scaling policies for one application.
       * *   You can create up to 20 trigger points within one day in a scheduled auto scaling policy.
       * *   If an auto scaling policy is enabled for an application, you cannot manually manage the lifecycle of the application. For example, you cannot scale, deploy (including single-batch release, phased release, and canary release), stop, or restart the application, or change the instance type. If you want to perform the preceding operations on the application, disable the auto scaling policy and then manually perform the operations.
       * *   If an application is in the process of scale-out, scale-in, deployment (including single-batch release, phased release, and canary release), instance type change, restart, or stop, you cannot add or enable an auto scaling policy for the application.
       * *   If you want to configure more than 50 instances for an application, you must contact SAE technical support to add your account to the whitelist. For more information, see [Contact us](https://help.aliyun.com/document_detail/146530.html).
       *
       * @param request CreateApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationScalingRuleResponse
       */
      Models::CreateApplicationScalingRuleResponse createApplicationScalingRuleWithOptions(const Models::CreateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an auto scaling policy for an application.
       *
       * @description ## [](#)Precautions
       * *   You can create up to five auto scaling policies for one application.
       * *   You can create up to 20 trigger points within one day in a scheduled auto scaling policy.
       * *   If an auto scaling policy is enabled for an application, you cannot manually manage the lifecycle of the application. For example, you cannot scale, deploy (including single-batch release, phased release, and canary release), stop, or restart the application, or change the instance type. If you want to perform the preceding operations on the application, disable the auto scaling policy and then manually perform the operations.
       * *   If an application is in the process of scale-out, scale-in, deployment (including single-batch release, phased release, and canary release), instance type change, restart, or stop, you cannot add or enable an auto scaling policy for the application.
       * *   If you want to configure more than 50 instances for an application, you must contact SAE technical support to add your account to the whitelist. For more information, see [Contact us](https://help.aliyun.com/document_detail/146530.html).
       *
       * @param request CreateApplicationScalingRuleRequest
       * @return CreateApplicationScalingRuleResponse
       */
      Models::CreateApplicationScalingRuleResponse createApplicationScalingRule(const Models::CreateApplicationScalingRuleRequest &request);

      /**
       * @summary Create a ConfigMap in a namespace.
       *
       * @param request CreateConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigMapResponse
       */
      Models::CreateConfigMapResponse createConfigMapWithOptions(const Models::CreateConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a ConfigMap in a namespace.
       *
       * @param request CreateConfigMapRequest
       * @return CreateConfigMapResponse
       */
      Models::CreateConfigMapResponse createConfigMap(const Models::CreateConfigMapRequest &request);

      /**
       * @summary Creates a canary release rule for a Spring Cloud or Dubbo application.
       *
       * @description >  You can configure only one canary release rule for each application.
       *
       * @param request CreateGreyTagRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGreyTagRouteResponse
       */
      Models::CreateGreyTagRouteResponse createGreyTagRouteWithOptions(const Models::CreateGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a canary release rule for a Spring Cloud or Dubbo application.
       *
       * @description >  You can configure only one canary release rule for each application.
       *
       * @param request CreateGreyTagRouteRequest
       * @return CreateGreyTagRouteResponse
       */
      Models::CreateGreyTagRouteResponse createGreyTagRoute(const Models::CreateGreyTagRouteRequest &request);

      /**
       * @summary Creates a routing rule.
       *
       * @param request CreateIngressRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIngressResponse
       */
      Models::CreateIngressResponse createIngressWithOptions(const Models::CreateIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing rule.
       *
       * @param request CreateIngressRequest
       * @return CreateIngressResponse
       */
      Models::CreateIngressResponse createIngress(const Models::CreateIngressRequest &request);

      /**
       * @summary Create a job template.
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a job template.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Create a namespace.
       *
       * @param request CreateNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a namespace.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Creates or updates a lane.
       *
       * @param tmpReq CreateOrUpdateSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateSwimmingLaneResponse
       */
      Models::CreateOrUpdateSwimmingLaneResponse createOrUpdateSwimmingLaneWithOptions(const Models::CreateOrUpdateSwimmingLaneRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a lane.
       *
       * @param request CreateOrUpdateSwimmingLaneRequest
       * @return CreateOrUpdateSwimmingLaneResponse
       */
      Models::CreateOrUpdateSwimmingLaneResponse createOrUpdateSwimmingLane(const Models::CreateOrUpdateSwimmingLaneRequest &request);

      /**
       * @summary Creates or updates a lane group.
       *
       * @param tmpReq CreateOrUpdateSwimmingLaneGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateSwimmingLaneGroupResponse
       */
      Models::CreateOrUpdateSwimmingLaneGroupResponse createOrUpdateSwimmingLaneGroupWithOptions(const Models::CreateOrUpdateSwimmingLaneGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a lane group.
       *
       * @param request CreateOrUpdateSwimmingLaneGroupRequest
       * @return CreateOrUpdateSwimmingLaneGroupResponse
       */
      Models::CreateOrUpdateSwimmingLaneGroupResponse createOrUpdateSwimmingLaneGroup(const Models::CreateOrUpdateSwimmingLaneGroupRequest &request);

      /**
       * @summary Creates a Secret in a namespace.
       *
       * @param tmpReq CreateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Secret in a namespace.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Create a web application
       *
       * @description Call the CreateWebApplication operation to create a web application.
       *
       * @param request CreateWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebApplicationResponse
       */
      Models::CreateWebApplicationResponse createWebApplicationWithOptions(const Models::CreateWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a web application
       *
       * @description Call the CreateWebApplication operation to create a web application.
       *
       * @param request CreateWebApplicationRequest
       * @return CreateWebApplicationResponse
       */
      Models::CreateWebApplicationResponse createWebApplication(const Models::CreateWebApplicationRequest &request);

      /**
       * @summary Create a custom domain name for the web application.
       *
       * @description Create a custom domain name for the web application.
       *
       * @param request CreateWebCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebCustomDomainResponse
       */
      Models::CreateWebCustomDomainResponse createWebCustomDomainWithOptions(const Models::CreateWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a custom domain name for the web application.
       *
       * @description Create a custom domain name for the web application.
       *
       * @param request CreateWebCustomDomainRequest
       * @return CreateWebCustomDomainResponse
       */
      Models::CreateWebCustomDomainResponse createWebCustomDomain(const Models::CreateWebCustomDomainRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary 7171a6ca-d1cd-4928-8642-7d5cfe69\\*\\*\\*\\*
       *
       * @param request DeleteApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationScalingRuleResponse
       */
      Models::DeleteApplicationScalingRuleResponse deleteApplicationScalingRuleWithOptions(const Models::DeleteApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 7171a6ca-d1cd-4928-8642-7d5cfe69\\*\\*\\*\\*
       *
       * @param request DeleteApplicationScalingRuleRequest
       * @return DeleteApplicationScalingRuleResponse
       */
      Models::DeleteApplicationScalingRuleResponse deleteApplicationScalingRule(const Models::DeleteApplicationScalingRuleRequest &request);

      /**
       * @summary Deletes a ConfigMap.
       *
       * @param request DeleteConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigMapResponse
       */
      Models::DeleteConfigMapResponse deleteConfigMapWithOptions(const Models::DeleteConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a ConfigMap.
       *
       * @param request DeleteConfigMapRequest
       * @return DeleteConfigMapResponse
       */
      Models::DeleteConfigMapResponse deleteConfigMap(const Models::DeleteConfigMapRequest &request);

      /**
       * @summary Deletes a canary release rule based on the specified rule ID.
       *
       * @param request DeleteGreyTagRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGreyTagRouteResponse
       */
      Models::DeleteGreyTagRouteResponse deleteGreyTagRouteWithOptions(const Models::DeleteGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a canary release rule based on the specified rule ID.
       *
       * @param request DeleteGreyTagRouteRequest
       * @return DeleteGreyTagRouteResponse
       */
      Models::DeleteGreyTagRouteResponse deleteGreyTagRoute(const Models::DeleteGreyTagRouteRequest &request);

      /**
       * @summary Delete a job.
       *
       * @param request DeleteHistoryJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHistoryJobResponse
       */
      Models::DeleteHistoryJobResponse deleteHistoryJobWithOptions(const Models::DeleteHistoryJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a job.
       *
       * @param request DeleteHistoryJobRequest
       * @return DeleteHistoryJobResponse
       */
      Models::DeleteHistoryJobResponse deleteHistoryJob(const Models::DeleteHistoryJobRequest &request);

      /**
       * @summary Deletes a routing rule.
       *
       * @param request DeleteIngressRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIngressResponse
       */
      Models::DeleteIngressResponse deleteIngressWithOptions(const Models::DeleteIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routing rule.
       *
       * @param request DeleteIngressRequest
       * @return DeleteIngressResponse
       */
      Models::DeleteIngressResponse deleteIngress(const Models::DeleteIngressRequest &request);

      /**
       * @summary Deletes an application instance.
       *
       * @param request DeleteInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstancesWithOptions(const Models::DeleteInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application instance.
       *
       * @param request DeleteInstancesRequest
       * @return DeleteInstancesResponse
       */
      Models::DeleteInstancesResponse deleteInstances(const Models::DeleteInstancesRequest &request);

      /**
       * @summary Delete a job template.
       *
       * @param request DeleteJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJobWithOptions(const Models::DeleteJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a job template.
       *
       * @param request DeleteJobRequest
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJob(const Models::DeleteJobRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes a Secret.
       *
       * @param request DeleteSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const Models::DeleteSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Secret.
       *
       * @param request DeleteSecretRequest
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const Models::DeleteSecretRequest &request);

      /**
       * @summary Deletes a lane group.
       *
       * @param request DeleteSwimmingLaneGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimmingLaneGroupResponse
       */
      Models::DeleteSwimmingLaneGroupResponse deleteSwimmingLaneGroupWithOptions(const Models::DeleteSwimmingLaneGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane group.
       *
       * @param request DeleteSwimmingLaneGroupRequest
       * @return DeleteSwimmingLaneGroupResponse
       */
      Models::DeleteSwimmingLaneGroupResponse deleteSwimmingLaneGroup(const Models::DeleteSwimmingLaneGroupRequest &request);

      /**
       * @summary Delete a web application.
       *
       * @description Call the DeleteWebApplication operation to delete a web application.
       *
       * @param request DeleteWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebApplicationResponse
       */
      Models::DeleteWebApplicationResponse deleteWebApplicationWithOptions(const string &ApplicationId, const Models::DeleteWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a web application.
       *
       * @description Call the DeleteWebApplication operation to delete a web application.
       *
       * @param request DeleteWebApplicationRequest
       * @return DeleteWebApplicationResponse
       */
      Models::DeleteWebApplicationResponse deleteWebApplication(const string &ApplicationId, const Models::DeleteWebApplicationRequest &request);

      /**
       * @summary Delete a web application version.
       *
       * @description Delete a web application version.
       *
       * @param request DeleteWebApplicationRevisionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebApplicationRevisionResponse
       */
      Models::DeleteWebApplicationRevisionResponse deleteWebApplicationRevisionWithOptions(const string &ApplicationId, const string &RevisionId, const Models::DeleteWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a web application version.
       *
       * @description Delete a web application version.
       *
       * @param request DeleteWebApplicationRevisionRequest
       * @return DeleteWebApplicationRevisionResponse
       */
      Models::DeleteWebApplicationRevisionResponse deleteWebApplicationRevision(const string &ApplicationId, const string &RevisionId, const Models::DeleteWebApplicationRevisionRequest &request);

      /**
       * @summary Delete a custom domain name.
       *
       * @description Delete a custom domain name.
       *
       * @param request DeleteWebCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebCustomDomainResponse
       */
      Models::DeleteWebCustomDomainResponse deleteWebCustomDomainWithOptions(const string &DomainName, const Models::DeleteWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a custom domain name.
       *
       * @description Delete a custom domain name.
       *
       * @param request DeleteWebCustomDomainRequest
       * @return DeleteWebCustomDomainResponse
       */
      Models::DeleteWebCustomDomainResponse deleteWebCustomDomain(const string &DomainName, const Models::DeleteWebCustomDomainRequest &request);

      /**
       * @summary Deploys an application.
       *
       * @param tmpReq DeployApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplicationWithOptions(const Models::DeployApplicationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an application.
       *
       * @param request DeployApplicationRequest
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplication(const Models::DeployApplicationRequest &request);

      /**
       * @summary Queries the metadata details of the service of an application.
       *
       * @param request DescribeAppServiceDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppServiceDetailResponse
       */
      Models::DescribeAppServiceDetailResponse describeAppServiceDetailWithOptions(const Models::DescribeAppServiceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata details of the service of an application.
       *
       * @param request DescribeAppServiceDetailRequest
       * @return DescribeAppServiceDetailResponse
       */
      Models::DescribeAppServiceDetailResponse describeAppServiceDetail(const Models::DescribeAppServiceDetailRequest &request);

      /**
       * @summary Queries the configurations of an application.
       *
       * @param request DescribeApplicationConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationConfigResponse
       */
      Models::DescribeApplicationConfigResponse describeApplicationConfigWithOptions(const Models::DescribeApplicationConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an application.
       *
       * @param request DescribeApplicationConfigRequest
       * @return DescribeApplicationConfigResponse
       */
      Models::DescribeApplicationConfigResponse describeApplicationConfig(const Models::DescribeApplicationConfigRequest &request);

      /**
       * @summary Queries the instance groups of an application.
       *
       * @param request DescribeApplicationGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationGroupsResponse
       */
      Models::DescribeApplicationGroupsResponse describeApplicationGroupsWithOptions(const Models::DescribeApplicationGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance groups of an application.
       *
       * @param request DescribeApplicationGroupsRequest
       * @return DescribeApplicationGroupsResponse
       */
      Models::DescribeApplicationGroupsResponse describeApplicationGroups(const Models::DescribeApplicationGroupsRequest &request);

      /**
       * @summary Queries the information about the image of an application.
       *
       * @param request DescribeApplicationImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationImageResponse
       */
      Models::DescribeApplicationImageResponse describeApplicationImageWithOptions(const Models::DescribeApplicationImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the image of an application.
       *
       * @param request DescribeApplicationImageRequest
       * @return DescribeApplicationImageResponse
       */
      Models::DescribeApplicationImageResponse describeApplicationImage(const Models::DescribeApplicationImageRequest &request);

      /**
       * @summary Queries a list of application instances.
       *
       * @param request DescribeApplicationInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationInstancesResponse
       */
      Models::DescribeApplicationInstancesResponse describeApplicationInstancesWithOptions(const Models::DescribeApplicationInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application instances.
       *
       * @param request DescribeApplicationInstancesRequest
       * @return DescribeApplicationInstancesResponse
       */
      Models::DescribeApplicationInstancesResponse describeApplicationInstances(const Models::DescribeApplicationInstancesRequest &request);

      /**
       * @summary Queries the information of the associated MSE microservice governance application.
       *
       * @param request DescribeApplicationMseServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationMseServiceResponse
       */
      Models::DescribeApplicationMseServiceResponse describeApplicationMseServiceWithOptions(const Models::DescribeApplicationMseServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of the associated MSE microservice governance application.
       *
       * @param request DescribeApplicationMseServiceRequest
       * @return DescribeApplicationMseServiceResponse
       */
      Models::DescribeApplicationMseServiceResponse describeApplicationMseService(const Models::DescribeApplicationMseServiceRequest &request);

      /**
       * @summary Queries the Network Load Balancer (NLB) instances bound to an application and their listeners.
       *
       * @param request DescribeApplicationNlbsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationNlbsResponse
       */
      Models::DescribeApplicationNlbsResponse describeApplicationNlbsWithOptions(const Models::DescribeApplicationNlbsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Network Load Balancer (NLB) instances bound to an application and their listeners.
       *
       * @param request DescribeApplicationNlbsRequest
       * @return DescribeApplicationNlbsResponse
       */
      Models::DescribeApplicationNlbsResponse describeApplicationNlbs(const Models::DescribeApplicationNlbsRequest &request);

      /**
       * @summary Queries an Auto Scaling policy of an application.
       *
       * @param request DescribeApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationScalingRuleResponse
       */
      Models::DescribeApplicationScalingRuleResponse describeApplicationScalingRuleWithOptions(const Models::DescribeApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an Auto Scaling policy of an application.
       *
       * @param request DescribeApplicationScalingRuleRequest
       * @return DescribeApplicationScalingRuleResponse
       */
      Models::DescribeApplicationScalingRuleResponse describeApplicationScalingRule(const Models::DescribeApplicationScalingRuleRequest &request);

      /**
       * @summary Queries the auto scaling policies of an application.
       *
       * @param request DescribeApplicationScalingRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationScalingRulesResponse
       */
      Models::DescribeApplicationScalingRulesResponse describeApplicationScalingRulesWithOptions(const Models::DescribeApplicationScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto scaling policies of an application.
       *
       * @param request DescribeApplicationScalingRulesRequest
       * @return DescribeApplicationScalingRulesResponse
       */
      Models::DescribeApplicationScalingRulesResponse describeApplicationScalingRules(const Models::DescribeApplicationScalingRulesRequest &request);

      /**
       * @summary 017f39b8-dfa4-4e16-a84b-1dcee4b1\\*\\*\\*\\*
       *
       * @param request DescribeApplicationSlbsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationSlbsResponse
       */
      Models::DescribeApplicationSlbsResponse describeApplicationSlbsWithOptions(const Models::DescribeApplicationSlbsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 017f39b8-dfa4-4e16-a84b-1dcee4b1\\*\\*\\*\\*
       *
       * @param request DescribeApplicationSlbsRequest
       * @return DescribeApplicationSlbsResponse
       */
      Models::DescribeApplicationSlbsResponse describeApplicationSlbs(const Models::DescribeApplicationSlbsRequest &request);

      /**
       * @summary Queries the status of an application.
       *
       * @param request DescribeApplicationStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationStatusResponse
       */
      Models::DescribeApplicationStatusResponse describeApplicationStatusWithOptions(const Models::DescribeApplicationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an application.
       *
       * @param request DescribeApplicationStatusRequest
       * @return DescribeApplicationStatusResponse
       */
      Models::DescribeApplicationStatusResponse describeApplicationStatus(const Models::DescribeApplicationStatusRequest &request);

      /**
       * @summary Queries the information of a change order.
       *
       * @param request DescribeChangeOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChangeOrderResponse
       */
      Models::DescribeChangeOrderResponse describeChangeOrderWithOptions(const Models::DescribeChangeOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a change order.
       *
       * @param request DescribeChangeOrderRequest
       * @return DescribeChangeOrderResponse
       */
      Models::DescribeChangeOrderResponse describeChangeOrder(const Models::DescribeChangeOrderRequest &request);

      /**
       * @summary Queries the version of the component that is required when you create and deploy an application.
       *
       * @param request DescribeComponentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComponentsResponse
       */
      Models::DescribeComponentsResponse describeComponentsWithOptions(const Models::DescribeComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of the component that is required when you create and deploy an application.
       *
       * @param request DescribeComponentsRequest
       * @return DescribeComponentsResponse
       */
      Models::DescribeComponentsResponse describeComponents(const Models::DescribeComponentsRequest &request);

      /**
       * @summary Queries the details of a ConfigMap.
       *
       * @param request DescribeConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigMapResponse
       */
      Models::DescribeConfigMapResponse describeConfigMapWithOptions(const Models::DescribeConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a ConfigMap.
       *
       * @param request DescribeConfigMapRequest
       * @return DescribeConfigMapResponse
       */
      Models::DescribeConfigMapResponse describeConfigMap(const Models::DescribeConfigMapRequest &request);

      /**
       * @summary Query configuration price.
       *
       * @param request DescribeConfigurationPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigurationPriceResponse
       */
      Models::DescribeConfigurationPriceResponse describeConfigurationPriceWithOptions(const Models::DescribeConfigurationPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query configuration price.
       *
       * @param request DescribeConfigurationPriceRequest
       * @return DescribeConfigurationPriceResponse
       */
      Models::DescribeConfigurationPriceResponse describeConfigurationPrice(const Models::DescribeConfigurationPriceRequest &request);

      /**
       * @summary Queries the container components of a microservices application.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEdasContainersResponse
       */
      Models::DescribeEdasContainersResponse describeEdasContainersWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the container components of a microservices application.
       *
       * @return DescribeEdasContainersResponse
       */
      Models::DescribeEdasContainersResponse describeEdasContainers();

      /**
       * @summary Queries the details of a canary release rule based on the specified rule ID.
       *
       * @param request DescribeGreyTagRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGreyTagRouteResponse
       */
      Models::DescribeGreyTagRouteResponse describeGreyTagRouteWithOptions(const Models::DescribeGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a canary release rule based on the specified rule ID.
       *
       * @param request DescribeGreyTagRouteRequest
       * @return DescribeGreyTagRouteResponse
       */
      Models::DescribeGreyTagRouteResponse describeGreyTagRoute(const Models::DescribeGreyTagRouteRequest &request);

      /**
       * @summary Call the DescribeIngress operation to query the details of an Ingress.
       *
       * @param request DescribeIngressRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIngressResponse
       */
      Models::DescribeIngressResponse describeIngressWithOptions(const Models::DescribeIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeIngress operation to query the details of an Ingress.
       *
       * @param request DescribeIngressRequest
       * @return DescribeIngressResponse
       */
      Models::DescribeIngressResponse describeIngress(const Models::DescribeIngressRequest &request);

      /**
       * @summary Queries the logs of a sidecar container instance.
       *
       * @param request DescribeInstanceLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceLogResponse
       */
      Models::DescribeInstanceLogResponse describeInstanceLogWithOptions(const Models::DescribeInstanceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a sidecar container instance.
       *
       * @param request DescribeInstanceLogRequest
       * @return DescribeInstanceLogResponse
       */
      Models::DescribeInstanceLogResponse describeInstanceLog(const Models::DescribeInstanceLogRequest &request);

      /**
       * @summary Queries all instance types.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecificationsResponse
       */
      Models::DescribeInstanceSpecificationsResponse describeInstanceSpecificationsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all instance types.
       *
       * @return DescribeInstanceSpecificationsResponse
       */
      Models::DescribeInstanceSpecificationsResponse describeInstanceSpecifications();

      /**
       * @summary Queries the configurations of a job template.
       *
       * @param request DescribeJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJobWithOptions(const Models::DescribeJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a job template.
       *
       * @param request DescribeJobRequest
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJob(const Models::DescribeJobRequest &request);

      /**
       * @summary Query the information about jobs.
       *
       * @param request DescribeJobHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobHistoryResponse
       */
      Models::DescribeJobHistoryResponse describeJobHistoryWithOptions(const Models::DescribeJobHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the information about jobs.
       *
       * @param request DescribeJobHistoryRequest
       * @return DescribeJobHistoryResponse
       */
      Models::DescribeJobHistoryResponse describeJobHistory(const Models::DescribeJobHistoryRequest &request);

      /**
       * @summary Queries the status of a job.
       *
       * @param request DescribeJobStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobStatusResponse
       */
      Models::DescribeJobStatusResponse describeJobStatusWithOptions(const Models::DescribeJobStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a job.
       *
       * @param request DescribeJobStatusRequest
       * @return DescribeJobStatusResponse
       */
      Models::DescribeJobStatusResponse describeJobStatus(const Models::DescribeJobStatusRequest &request);

      /**
       * @summary Queries the details of a namespace.
       *
       * @param request DescribeNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespaceResponse
       */
      Models::DescribeNamespaceResponse describeNamespaceWithOptions(const Models::DescribeNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a namespace.
       *
       * @param request DescribeNamespaceRequest
       * @return DescribeNamespaceResponse
       */
      Models::DescribeNamespaceResponse describeNamespace(const Models::DescribeNamespaceRequest &request);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request DescribeNamespaceListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespaceListResponse
       */
      Models::DescribeNamespaceListResponse describeNamespaceListWithOptions(const Models::DescribeNamespaceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request DescribeNamespaceListRequest
       * @return DescribeNamespaceListResponse
       */
      Models::DescribeNamespaceListResponse describeNamespaceList(const Models::DescribeNamespaceListRequest &request);

      /**
       * @summary Query the information about resources in a namespace.
       *
       * @param request DescribeNamespaceResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespaceResourcesResponse
       */
      Models::DescribeNamespaceResourcesResponse describeNamespaceResourcesWithOptions(const Models::DescribeNamespaceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the information about resources in a namespace.
       *
       * @param request DescribeNamespaceResourcesRequest
       * @return DescribeNamespaceResourcesResponse
       */
      Models::DescribeNamespaceResourcesResponse describeNamespaceResources(const Models::DescribeNamespaceResourcesRequest &request);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request DescribeNamespacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespacesWithOptions(const Models::DescribeNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of namespaces.
       *
       * @param request DescribeNamespacesRequest
       * @return DescribeNamespacesResponse
       */
      Models::DescribeNamespacesResponse describeNamespaces(const Models::DescribeNamespacesRequest &request);

      /**
       * @summary View batch information
       *
       * @param request DescribePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipelineWithOptions(const Models::DescribePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View batch information
       *
       * @param request DescribePipelineRequest
       * @return DescribePipelineResponse
       */
      Models::DescribePipelineResponse describePipeline(const Models::DescribePipelineRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Queries the details of a Secret.
       *
       * @param request DescribeSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecretWithOptions(const Models::DescribeSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Secret.
       *
       * @param request DescribeSecretRequest
       * @return DescribeSecretResponse
       */
      Models::DescribeSecretResponse describeSecret(const Models::DescribeSecretRequest &request);

      /**
       * @summary Queries details about swimlanes.
       *
       * @param request DescribeSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSwimmingLaneResponse
       */
      Models::DescribeSwimmingLaneResponse describeSwimmingLaneWithOptions(const Models::DescribeSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about swimlanes.
       *
       * @param request DescribeSwimmingLaneRequest
       * @return DescribeSwimmingLaneResponse
       */
      Models::DescribeSwimmingLaneResponse describeSwimmingLane(const Models::DescribeSwimmingLaneRequest &request);

      /**
       * @summary Query web applications.
       *
       * @description Call the DescribeWebApplication operation to query web applications.
       *
       * @param request DescribeWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebApplicationResponse
       */
      Models::DescribeWebApplicationResponse describeWebApplicationWithOptions(const string &ApplicationId, const Models::DescribeWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query web applications.
       *
       * @description Call the DescribeWebApplication operation to query web applications.
       *
       * @param request DescribeWebApplicationRequest
       * @return DescribeWebApplicationResponse
       */
      Models::DescribeWebApplicationResponse describeWebApplication(const string &ApplicationId, const Models::DescribeWebApplicationRequest &request);

      /**
       * @summary Query the resource usage of a web application.
       *
       * @description Query the resource usage of a web application.
       *
       * @param request DescribeWebApplicationResourceStaticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebApplicationResourceStaticsResponse
       */
      Models::DescribeWebApplicationResourceStaticsResponse describeWebApplicationResourceStaticsWithOptions(const string &ApplicationId, const Models::DescribeWebApplicationResourceStaticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the resource usage of a web application.
       *
       * @description Query the resource usage of a web application.
       *
       * @param request DescribeWebApplicationResourceStaticsRequest
       * @return DescribeWebApplicationResourceStaticsResponse
       */
      Models::DescribeWebApplicationResourceStaticsResponse describeWebApplicationResourceStatics(const string &ApplicationId, const Models::DescribeWebApplicationResourceStaticsRequest &request);

      /**
       * @summary Describe a web application version.
       *
       * @description Describe a web application version.
       *
       * @param request DescribeWebApplicationRevisionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebApplicationRevisionResponse
       */
      Models::DescribeWebApplicationRevisionResponse describeWebApplicationRevisionWithOptions(const string &ApplicationId, const string &RevisionId, const Models::DescribeWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describe a web application version.
       *
       * @description Describe a web application version.
       *
       * @param request DescribeWebApplicationRevisionRequest
       * @return DescribeWebApplicationRevisionResponse
       */
      Models::DescribeWebApplicationRevisionResponse describeWebApplicationRevision(const string &ApplicationId, const string &RevisionId, const Models::DescribeWebApplicationRevisionRequest &request);

      /**
       * @summary Describe the scaling configuration of a web application.
       *
       * @description Call the DescribeWebApplicationScalingConfig operation to obtain the scaling configuration of a web application.
       *
       * @param request DescribeWebApplicationScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebApplicationScalingConfigResponse
       */
      Models::DescribeWebApplicationScalingConfigResponse describeWebApplicationScalingConfigWithOptions(const string &ApplicationId, const Models::DescribeWebApplicationScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describe the scaling configuration of a web application.
       *
       * @description Call the DescribeWebApplicationScalingConfig operation to obtain the scaling configuration of a web application.
       *
       * @param request DescribeWebApplicationScalingConfigRequest
       * @return DescribeWebApplicationScalingConfigResponse
       */
      Models::DescribeWebApplicationScalingConfigResponse describeWebApplicationScalingConfig(const string &ApplicationId, const Models::DescribeWebApplicationScalingConfigRequest &request);

      /**
       * @summary Query the traffic configurations of a web application.
       *
       * @description Call the DescribeWebApplicationTrafficConfig operation to query the traffic configurations of a web application.
       *
       * @param request DescribeWebApplicationTrafficConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebApplicationTrafficConfigResponse
       */
      Models::DescribeWebApplicationTrafficConfigResponse describeWebApplicationTrafficConfigWithOptions(const string &ApplicationId, const Models::DescribeWebApplicationTrafficConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the traffic configurations of a web application.
       *
       * @description Call the DescribeWebApplicationTrafficConfig operation to query the traffic configurations of a web application.
       *
       * @param request DescribeWebApplicationTrafficConfigRequest
       * @return DescribeWebApplicationTrafficConfigResponse
       */
      Models::DescribeWebApplicationTrafficConfigResponse describeWebApplicationTrafficConfig(const string &ApplicationId, const Models::DescribeWebApplicationTrafficConfigRequest &request);

      /**
       * @summary Query the details of a custom domain name for a web application.
       *
       * @description Query the details of a custom domain name for a web application.
       *
       * @param request DescribeWebCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebCustomDomainResponse
       */
      Models::DescribeWebCustomDomainResponse describeWebCustomDomainWithOptions(const string &DomainName, const Models::DescribeWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a custom domain name for a web application.
       *
       * @description Query the details of a custom domain name for a web application.
       *
       * @param request DescribeWebCustomDomainRequest
       * @return DescribeWebCustomDomainResponse
       */
      Models::DescribeWebCustomDomainResponse describeWebCustomDomain(const string &DomainName, const Models::DescribeWebCustomDomainRequest &request);

      /**
       * @summary Obtain the logs of web application instances.
       *
       * @description Obtain the logs of web application instances.
       *
       * @param request DescribeWebInstanceLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWebInstanceLogsResponse
       */
      Models::DescribeWebInstanceLogsResponse describeWebInstanceLogsWithOptions(const string &ApplicationId, const string &InstanceId, const Models::DescribeWebInstanceLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the logs of web application instances.
       *
       * @description Obtain the logs of web application instances.
       *
       * @param request DescribeWebInstanceLogsRequest
       * @return DescribeWebInstanceLogsResponse
       */
      Models::DescribeWebInstanceLogsResponse describeWebInstanceLogs(const string &ApplicationId, const string &InstanceId, const Models::DescribeWebInstanceLogsRequest &request);

      /**
       * @param request DisableApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationScalingRuleResponse
       */
      Models::DisableApplicationScalingRuleResponse disableApplicationScalingRuleWithOptions(const Models::DisableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableApplicationScalingRuleRequest
       * @return DisableApplicationScalingRuleResponse
       */
      Models::DisableApplicationScalingRuleResponse disableApplicationScalingRule(const Models::DisableApplicationScalingRuleRequest &request);

      /**
       * @summary Disables ARMS monitoring.
       *
       * @param request DisableArmsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableArmsResponse
       */
      Models::DisableArmsResponse disableArmsWithOptions(const Models::DisableArmsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables ARMS monitoring.
       *
       * @param request DisableArmsRequest
       * @return DisableArmsResponse
       */
      Models::DisableArmsResponse disableArms(const Models::DisableArmsRequest &request);

      /**
       * @summary Disable ARMS Advanced Edition monitoring.
       *
       * @param request DowngradeApplicationApmServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DowngradeApplicationApmServiceResponse
       */
      Models::DowngradeApplicationApmServiceResponse downgradeApplicationApmServiceWithOptions(const Models::DowngradeApplicationApmServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable ARMS Advanced Edition monitoring.
       *
       * @param request DowngradeApplicationApmServiceRequest
       * @return DowngradeApplicationApmServiceResponse
       */
      Models::DowngradeApplicationApmServiceResponse downgradeApplicationApmService(const Models::DowngradeApplicationApmServiceRequest &request);

      /**
       * @summary Enables an auto scaling policy for an application.
       *
       * @param request EnableApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationScalingRuleResponse
       */
      Models::EnableApplicationScalingRuleResponse enableApplicationScalingRuleWithOptions(const Models::EnableApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an auto scaling policy for an application.
       *
       * @param request EnableApplicationScalingRuleRequest
       * @return EnableApplicationScalingRuleResponse
       */
      Models::EnableApplicationScalingRuleResponse enableApplicationScalingRule(const Models::EnableApplicationScalingRuleRequest &request);

      /**
       * @summary Executes a job.
       *
       * @param request ExecJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecJobResponse
       */
      Models::ExecJobResponse execJobWithOptions(const Models::ExecJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a job.
       *
       * @param request ExecJobRequest
       * @return ExecJobResponse
       */
      Models::ExecJobResponse execJob(const Models::ExecJobRequest &request);

      /**
       * @summary Queries the basic information of an application.
       *
       * @param request GetApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of an application.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary The application name.
       *
       * @param request GetArmsTopNMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArmsTopNMetricResponse
       */
      Models::GetArmsTopNMetricResponse getArmsTopNMetricWithOptions(const Models::GetArmsTopNMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The application name.
       *
       * @param request GetArmsTopNMetricRequest
       * @return GetArmsTopNMetricResponse
       */
      Models::GetArmsTopNMetricResponse getArmsTopNMetric(const Models::GetArmsTopNMetricRequest &request);

      /**
       * @summary Queries the top N applications in which abnormal instances exist. The applications are sorted by the total number of abnormal instances.
       *
       * @param request GetAvailabilityMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailabilityMetricResponse
       */
      Models::GetAvailabilityMetricResponse getAvailabilityMetricWithOptions(const Models::GetAvailabilityMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N applications in which abnormal instances exist. The applications are sorted by the total number of abnormal instances.
       *
       * @param request GetAvailabilityMetricRequest
       * @return GetAvailabilityMetricResponse
       */
      Models::GetAvailabilityMetricResponse getAvailabilityMetric(const Models::GetAvailabilityMetricRequest &request);

      /**
       * @summary Queries top N applications in abnormal change orders.
       *
       * @param request GetChangeOrderMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChangeOrderMetricResponse
       */
      Models::GetChangeOrderMetricResponse getChangeOrderMetricWithOptions(const Models::GetChangeOrderMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries top N applications in abnormal change orders.
       *
       * @param request GetChangeOrderMetricRequest
       * @return GetChangeOrderMetricResponse
       */
      Models::GetChangeOrderMetricResponse getChangeOrderMetric(const Models::GetChangeOrderMetricRequest &request);

      /**
       * @summary Queries the top N applications in which auto scaling takes effect.
       *
       * @param request GetScaleAppMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScaleAppMetricResponse
       */
      Models::GetScaleAppMetricResponse getScaleAppMetricWithOptions(const Models::GetScaleAppMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N applications in which auto scaling takes effect.
       *
       * @param request GetScaleAppMetricRequest
       * @return GetScaleAppMetricResponse
       */
      Models::GetScaleAppMetricResponse getScaleAppMetric(const Models::GetScaleAppMetricRequest &request);

      /**
       * @summary The number of Warning events.
       *
       * @param request GetWarningEventMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWarningEventMetricResponse
       */
      Models::GetWarningEventMetricResponse getWarningEventMetricWithOptions(const Models::GetWarningEventMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of Warning events.
       *
       * @param request GetWarningEventMetricRequest
       * @return GetWarningEventMetricResponse
       */
      Models::GetWarningEventMetricResponse getWarningEventMetric(const Models::GetWarningEventMetricRequest &request);

      /**
       * @summary Obtains the token used to remotely log on to the Webshell of an instance.
       *
       * @param request GetWebshellTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWebshellTokenResponse
       */
      Models::GetWebshellTokenResponse getWebshellTokenWithOptions(const Models::GetWebshellTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the token used to remotely log on to the Webshell of an instance.
       *
       * @param request GetWebshellTokenRequest
       * @return GetWebshellTokenResponse
       */
      Models::GetWebshellTokenResponse getWebshellToken(const Models::GetWebshellTokenRequest &request);

      /**
       * @summary Queries all lane groups.
       *
       * @param request ListAllSwimmingLaneGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllSwimmingLaneGroupsResponse
       */
      Models::ListAllSwimmingLaneGroupsResponse listAllSwimmingLaneGroupsWithOptions(const Models::ListAllSwimmingLaneGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all lane groups.
       *
       * @param request ListAllSwimmingLaneGroupsRequest
       * @return ListAllSwimmingLaneGroupsResponse
       */
      Models::ListAllSwimmingLaneGroupsResponse listAllSwimmingLaneGroups(const Models::ListAllSwimmingLaneGroupsRequest &request);

      /**
       * @summary Queries all swimlanes.
       *
       * @param request ListAllSwimmingLanesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllSwimmingLanesResponse
       */
      Models::ListAllSwimmingLanesResponse listAllSwimmingLanesWithOptions(const Models::ListAllSwimmingLanesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all swimlanes.
       *
       * @param request ListAllSwimmingLanesRequest
       * @return ListAllSwimmingLanesResponse
       */
      Models::ListAllSwimmingLanesResponse listAllSwimmingLanes(const Models::ListAllSwimmingLanesRequest &request);

      /**
       * @summary Queries the events that occurred in an application.
       *
       * @param request ListAppEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppEventsResponse
       */
      Models::ListAppEventsResponse listAppEventsWithOptions(const Models::ListAppEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the events that occurred in an application.
       *
       * @param request ListAppEventsRequest
       * @return ListAppEventsResponse
       */
      Models::ListAppEventsResponse listAppEvents(const Models::ListAppEventsRequest &request);

      /**
       * @summary Queries the list of microservices.
       *
       * @param request ListAppServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppServicesResponse
       */
      Models::ListAppServicesResponse listAppServicesWithOptions(const Models::ListAppServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of microservices.
       *
       * @param request ListAppServicesRequest
       * @return ListAppServicesResponse
       */
      Models::ListAppServicesResponse listAppServices(const Models::ListAppServicesRequest &request);

      /**
       * @summary Queries the services of an application.
       *
       * @param request ListAppServicesPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppServicesPageResponse
       */
      Models::ListAppServicesPageResponse listAppServicesPageWithOptions(const Models::ListAppServicesPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services of an application.
       *
       * @param request ListAppServicesPageRequest
       * @return ListAppServicesPageResponse
       */
      Models::ListAppServicesPageResponse listAppServicesPage(const Models::ListAppServicesPageRequest &request);

      /**
       * @summary Queries the deployment versions of an application.
       *
       * @param request ListAppVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppVersionsResponse
       */
      Models::ListAppVersionsResponse listAppVersionsWithOptions(const Models::ListAppVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment versions of an application.
       *
       * @param request ListAppVersionsRequest
       * @return ListAppVersionsResponse
       */
      Models::ListAppVersionsResponse listAppVersions(const Models::ListAppVersionsRequest &request);

      /**
       * @summary 查询服务实例列表
       *
       * @param request ListApplicationCenterServiceInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationCenterServiceInstancesResponse
       */
      Models::ListApplicationCenterServiceInstancesResponse listApplicationCenterServiceInstancesWithOptions(const Models::ListApplicationCenterServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务实例列表
       *
       * @param request ListApplicationCenterServiceInstancesRequest
       * @return ListApplicationCenterServiceInstancesResponse
       */
      Models::ListApplicationCenterServiceInstancesResponse listApplicationCenterServiceInstances(const Models::ListApplicationCenterServiceInstancesRequest &request);

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary Obtains the application list for the end-to-end grayscale pull application list.
       *
       * @param request ListApplicationsForSwimmingLaneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForSwimmingLaneResponse
       */
      Models::ListApplicationsForSwimmingLaneResponse listApplicationsForSwimmingLaneWithOptions(const Models::ListApplicationsForSwimmingLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the application list for the end-to-end grayscale pull application list.
       *
       * @param request ListApplicationsForSwimmingLaneRequest
       * @return ListApplicationsForSwimmingLaneResponse
       */
      Models::ListApplicationsForSwimmingLaneResponse listApplicationsForSwimmingLane(const Models::ListApplicationsForSwimmingLaneRequest &request);

      /**
       * @summary Query a list of change orders.
       *
       * @param request ListChangeOrdersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChangeOrdersResponse
       */
      Models::ListChangeOrdersResponse listChangeOrdersWithOptions(const Models::ListChangeOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query a list of change orders.
       *
       * @param request ListChangeOrdersRequest
       * @return ListChangeOrdersResponse
       */
      Models::ListChangeOrdersResponse listChangeOrders(const Models::ListChangeOrdersRequest &request);

      /**
       * @summary Queries a list of microservices that are subscribed.
       *
       * @param request ListConsumedServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumedServicesResponse
       */
      Models::ListConsumedServicesResponse listConsumedServicesWithOptions(const Models::ListConsumedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of microservices that are subscribed.
       *
       * @param request ListConsumedServicesRequest
       * @return ListConsumedServicesResponse
       */
      Models::ListConsumedServicesResponse listConsumedServices(const Models::ListConsumedServicesRequest &request);

      /**
       * @summary Queries the details of a canary release rule based on an application ID.
       *
       * @description >  You can configure only one canary release rule for each application.
       *
       * @param request ListGreyTagRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGreyTagRouteResponse
       */
      Models::ListGreyTagRouteResponse listGreyTagRouteWithOptions(const Models::ListGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a canary release rule based on an application ID.
       *
       * @description >  You can configure only one canary release rule for each application.
       *
       * @param request ListGreyTagRouteRequest
       * @return ListGreyTagRouteResponse
       */
      Models::ListGreyTagRouteResponse listGreyTagRoute(const Models::ListGreyTagRouteRequest &request);

      /**
       * @summary Use ListIngress API call to query Ingress list
       *
       * @param request ListIngressesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIngressesResponse
       */
      Models::ListIngressesResponse listIngressesWithOptions(const Models::ListIngressesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use ListIngress API call to query Ingress list
       *
       * @param request ListIngressesRequest
       * @return ListIngressesResponse
       */
      Models::ListIngressesResponse listIngresses(const Models::ListIngressesRequest &request);

      /**
       * @summary Queries the information about job templates.
       *
       * @param request ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about job templates.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries a list of application logs.
       *
       * @param request ListLogConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogConfigsResponse
       */
      Models::ListLogConfigsResponse listLogConfigsWithOptions(const Models::ListLogConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application logs.
       *
       * @param request ListLogConfigsRequest
       * @return ListLogConfigsResponse
       */
      Models::ListLogConfigsResponse listLogConfigs(const Models::ListLogConfigsRequest &request);

      /**
       * @summary Queries a list of change orders in a namespace.
       *
       * @param request ListNamespaceChangeOrdersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespaceChangeOrdersResponse
       */
      Models::ListNamespaceChangeOrdersResponse listNamespaceChangeOrdersWithOptions(const Models::ListNamespaceChangeOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of change orders in a namespace.
       *
       * @param request ListNamespaceChangeOrdersRequest
       * @return ListNamespaceChangeOrdersResponse
       */
      Models::ListNamespaceChangeOrdersResponse listNamespaceChangeOrders(const Models::ListNamespaceChangeOrdersRequest &request);

      /**
       * @summary Queries the ConfigMap instances in a namespace.
       *
       * @param request ListNamespacedConfigMapsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacedConfigMapsResponse
       */
      Models::ListNamespacedConfigMapsResponse listNamespacedConfigMapsWithOptions(const Models::ListNamespacedConfigMapsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ConfigMap instances in a namespace.
       *
       * @param request ListNamespacedConfigMapsRequest
       * @return ListNamespacedConfigMapsResponse
       */
      Models::ListNamespacedConfigMapsResponse listNamespacedConfigMaps(const Models::ListNamespacedConfigMapsRequest &request);

      /**
       * @summary Queries a list of microservices that are published.
       *
       * @param request ListPublishedServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedServicesResponse
       */
      Models::ListPublishedServicesResponse listPublishedServicesWithOptions(const Models::ListPublishedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of microservices that are published.
       *
       * @param request ListPublishedServicesRequest
       * @return ListPublishedServicesResponse
       */
      Models::ListPublishedServicesResponse listPublishedServices(const Models::ListPublishedServicesRequest &request);

      /**
       * @summary Queries the information about Secrets in a namespace.
       *
       * @param request ListSecretsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Secrets in a namespace.
       *
       * @param request ListSecretsRequest
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecrets(const Models::ListSecretsRequest &request);

      /**
       * @summary Query the gateway routes that are available for a lane
       *
       * @param request ListSwimmingLaneGatewayRoutesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSwimmingLaneGatewayRoutesResponse
       */
      Models::ListSwimmingLaneGatewayRoutesResponse listSwimmingLaneGatewayRoutesWithOptions(const Models::ListSwimmingLaneGatewayRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the gateway routes that are available for a lane
       *
       * @param request ListSwimmingLaneGatewayRoutesRequest
       * @return ListSwimmingLaneGatewayRoutesResponse
       */
      Models::ListSwimmingLaneGatewayRoutesResponse listSwimmingLaneGatewayRoutes(const Models::ListSwimmingLaneGatewayRoutesRequest &request);

      /**
       * @summary Queries all lane tags.
       *
       * @param request ListSwimmingLaneGroupTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSwimmingLaneGroupTagsResponse
       */
      Models::ListSwimmingLaneGroupTagsResponse listSwimmingLaneGroupTagsWithOptions(const Models::ListSwimmingLaneGroupTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all lane tags.
       *
       * @param request ListSwimmingLaneGroupTagsRequest
       * @return ListSwimmingLaneGroupTagsResponse
       */
      Models::ListSwimmingLaneGroupTagsResponse listSwimmingLaneGroupTags(const Models::ListSwimmingLaneGroupTagsRequest &request);

      /**
       * @summary Queries the mapping relationships between applications and tags.
       *
       * @param request ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mapping relationships between applications and tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Query the list of web application instances.
       *
       * @description Query the list of web application instances.
       *
       * @param tmpReq ListWebApplicationInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebApplicationInstancesResponse
       */
      Models::ListWebApplicationInstancesResponse listWebApplicationInstancesWithOptions(const string &ApplicationId, const Models::ListWebApplicationInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of web application instances.
       *
       * @description Query the list of web application instances.
       *
       * @param request ListWebApplicationInstancesRequest
       * @return ListWebApplicationInstancesResponse
       */
      Models::ListWebApplicationInstancesResponse listWebApplicationInstances(const string &ApplicationId, const Models::ListWebApplicationInstancesRequest &request);

      /**
       * @summary Query the list of web application versions.
       *
       * @description Query the list of web application versions.
       *
       * @param request ListWebApplicationRevisionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebApplicationRevisionsResponse
       */
      Models::ListWebApplicationRevisionsResponse listWebApplicationRevisionsWithOptions(const string &ApplicationId, const Models::ListWebApplicationRevisionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of web application versions.
       *
       * @description Query the list of web application versions.
       *
       * @param request ListWebApplicationRevisionsRequest
       * @return ListWebApplicationRevisionsResponse
       */
      Models::ListWebApplicationRevisionsResponse listWebApplicationRevisions(const string &ApplicationId, const Models::ListWebApplicationRevisionsRequest &request);

      /**
       * @summary Query the list of web applications.
       *
       * @description Call the ListWebApplications operation to query the list of web applications.
       *
       * @param request ListWebApplicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebApplicationsResponse
       */
      Models::ListWebApplicationsResponse listWebApplicationsWithOptions(const Models::ListWebApplicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of web applications.
       *
       * @description Call the ListWebApplications operation to query the list of web applications.
       *
       * @param request ListWebApplicationsRequest
       * @return ListWebApplicationsResponse
       */
      Models::ListWebApplicationsResponse listWebApplications(const Models::ListWebApplicationsRequest &request);

      /**
       * @summary Query available custom domain names.
       *
       * @description Query available custom domain names.
       *
       * @param request ListWebCustomDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebCustomDomainsResponse
       */
      Models::ListWebCustomDomainsResponse listWebCustomDomainsWithOptions(const Models::ListWebCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query available custom domain names.
       *
       * @description Query available custom domain names.
       *
       * @param request ListWebCustomDomainsRequest
       * @return ListWebCustomDomainsResponse
       */
      Models::ListWebCustomDomainsResponse listWebCustomDomains(const Models::ListWebCustomDomainsRequest &request);

      /**
       * @summary Activates Serverless App Engine (SAE) for free.
       *
       * @description > Make sure that your account balance is greater than 0. Otherwise, the SAE service cannot be activated.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenSaeServiceResponse
       */
      Models::OpenSaeServiceResponse openSaeServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Serverless App Engine (SAE) for free.
       *
       * @description > Make sure that your account balance is greater than 0. Otherwise, the SAE service cannot be activated.
       *
       * @return OpenSaeServiceResponse
       */
      Models::OpenSaeServiceResponse openSaeService();

      /**
       * @summary Publish a web application version.
       *
       * @description Publish a web application version. You can change the configurations of the version and create a new version.
       *
       * @param request PublishWebApplicationRevisionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishWebApplicationRevisionResponse
       */
      Models::PublishWebApplicationRevisionResponse publishWebApplicationRevisionWithOptions(const string &ApplicationId, const Models::PublishWebApplicationRevisionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publish a web application version.
       *
       * @description Publish a web application version. You can change the configurations of the version and create a new version.
       *
       * @param request PublishWebApplicationRevisionRequest
       * @return PublishWebApplicationRevisionResponse
       */
      Models::PublishWebApplicationRevisionResponse publishWebApplicationRevision(const string &ApplicationId, const Models::PublishWebApplicationRevisionRequest &request);

      /**
       * @summary Queries whether ARMS monitoring is enabled for a specified application.
       *
       * @param request QueryArmsEnableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryArmsEnableResponse
       */
      Models::QueryArmsEnableResponse queryArmsEnableWithOptions(const Models::QueryArmsEnableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether ARMS monitoring is enabled for a specified application.
       *
       * @param request QueryArmsEnableRequest
       * @return QueryArmsEnableResponse
       */
      Models::QueryArmsEnableResponse queryArmsEnable(const Models::QueryArmsEnableRequest &request);

      /**
       * @summary Queries the resource usage of an application.
       *
       * @param request QueryResourceStaticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryResourceStaticsResponse
       */
      Models::QueryResourceStaticsResponse queryResourceStaticsWithOptions(const Models::QueryResourceStaticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage of an application.
       *
       * @param request QueryResourceStaticsRequest
       * @return QueryResourceStaticsResponse
       */
      Models::QueryResourceStaticsResponse queryResourceStatics(const Models::QueryResourceStaticsRequest &request);

      /**
       * @summary Scales in an application based on instance IDs.
       *
       * @param request ReduceApplicationCapacityByInstanceIdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReduceApplicationCapacityByInstanceIdsResponse
       */
      Models::ReduceApplicationCapacityByInstanceIdsResponse reduceApplicationCapacityByInstanceIdsWithOptions(const Models::ReduceApplicationCapacityByInstanceIdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales in an application based on instance IDs.
       *
       * @param request ReduceApplicationCapacityByInstanceIdsRequest
       * @return ReduceApplicationCapacityByInstanceIdsResponse
       */
      Models::ReduceApplicationCapacityByInstanceIdsResponse reduceApplicationCapacityByInstanceIds(const Models::ReduceApplicationCapacityByInstanceIdsRequest &request);

      /**
       * @summary Rescale an application.
       *
       * @param request RescaleApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplicationWithOptions(const Models::RescaleApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rescale an application.
       *
       * @param request RescaleApplicationRequest
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplication(const Models::RescaleApplicationRequest &request);

      /**
       * @summary Changes the instance specifications of an application.
       *
       * @param request RescaleApplicationVerticallyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleApplicationVerticallyResponse
       */
      Models::RescaleApplicationVerticallyResponse rescaleApplicationVerticallyWithOptions(const Models::RescaleApplicationVerticallyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the instance specifications of an application.
       *
       * @param request RescaleApplicationVerticallyRequest
       * @return RescaleApplicationVerticallyResponse
       */
      Models::RescaleApplicationVerticallyResponse rescaleApplicationVertically(const Models::RescaleApplicationVerticallyRequest &request);

      /**
       * @summary Restarts an application.
       *
       * @param request RestartApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartApplicationResponse
       */
      Models::RestartApplicationResponse restartApplicationWithOptions(const Models::RestartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an application.
       *
       * @param request RestartApplicationRequest
       * @return RestartApplicationResponse
       */
      Models::RestartApplicationResponse restartApplication(const Models::RestartApplicationRequest &request);

      /**
       * @summary Restarts one or more instances in an application.
       *
       * @param request RestartInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstancesResponse
       */
      Models::RestartInstancesResponse restartInstancesWithOptions(const Models::RestartInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts one or more instances in an application.
       *
       * @param request RestartInstancesRequest
       * @return RestartInstancesResponse
       */
      Models::RestartInstancesResponse restartInstances(const Models::RestartInstancesRequest &request);

      /**
       * @summary Resumes traffic from Classic Load Balancer (CLB) application access, Network Load Balancer (NLB) application access, CLB gateway routing, Application Load Balancer (ALB) gateway routing, and Kubernetes Services on an instance.
       *
       * @param request ResumeTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeTrafficResponse
       */
      Models::ResumeTrafficResponse resumeTrafficWithOptions(const Models::ResumeTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes traffic from Classic Load Balancer (CLB) application access, Network Load Balancer (NLB) application access, CLB gateway routing, Application Load Balancer (ALB) gateway routing, and Kubernetes Services on an instance.
       *
       * @param request ResumeTrafficRequest
       * @return ResumeTrafficResponse
       */
      Models::ResumeTrafficResponse resumeTraffic(const Models::ResumeTrafficRequest &request);

      /**
       * @summary Rolls back an application.
       *
       * @param request RollbackApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplicationWithOptions(const Models::RollbackApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back an application.
       *
       * @param request RollbackApplicationRequest
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplication(const Models::RollbackApplicationRequest &request);

      /**
       * @summary Starts an application.
       *
       * @param request StartApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartApplicationResponse
       */
      Models::StartApplicationResponse startApplicationWithOptions(const Models::StartApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an application.
       *
       * @param request StartApplicationRequest
       * @return StartApplicationResponse
       */
      Models::StartApplicationResponse startApplication(const Models::StartApplicationRequest &request);

      /**
       * @summary Start a web application.
       *
       * @description Call the StartWebApplication operation to start a web application.
       *
       * @param request StartWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartWebApplicationResponse
       */
      Models::StartWebApplicationResponse startWebApplicationWithOptions(const string &ApplicationId, const Models::StartWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start a web application.
       *
       * @description Call the StartWebApplication operation to start a web application.
       *
       * @param request StartWebApplicationRequest
       * @return StartWebApplicationResponse
       */
      Models::StartWebApplicationResponse startWebApplication(const string &ApplicationId, const Models::StartWebApplicationRequest &request);

      /**
       * @summary Stops an application.
       *
       * @param request StopApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopApplicationResponse
       */
      Models::StopApplicationResponse stopApplicationWithOptions(const Models::StopApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an application.
       *
       * @param request StopApplicationRequest
       * @return StopApplicationResponse
       */
      Models::StopApplicationResponse stopApplication(const Models::StopApplicationRequest &request);

      /**
       * @summary Stop a web application.
       *
       * @description Call the StopWebApplication operation to stop a web application.
       *
       * @param request StopWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopWebApplicationResponse
       */
      Models::StopWebApplicationResponse stopWebApplicationWithOptions(const string &ApplicationId, const Models::StopWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop a web application.
       *
       * @description Call the StopWebApplication operation to stop a web application.
       *
       * @param request StopWebApplicationRequest
       * @return StopWebApplicationResponse
       */
      Models::StopWebApplicationResponse stopWebApplication(const string &ApplicationId, const Models::StopWebApplicationRequest &request);

      /**
       * @summary Suspends one or more jobs.
       *
       * @param request SuspendJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendJobResponse
       */
      Models::SuspendJobResponse suspendJobWithOptions(const Models::SuspendJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends one or more jobs.
       *
       * @param request SuspendJobRequest
       * @return SuspendJobResponse
       */
      Models::SuspendJobResponse suspendJob(const Models::SuspendJobRequest &request);

      /**
       * @summary Removes traffic routed from Classic Load Balancer (CLB) application access, Network Load Balancer (NLB) application access, CLB gateway routes, Application Load Balancer (ALB) gateway routes, or Kubernetes (K8s) services.
       *
       * @param request SuspendTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendTrafficResponse
       */
      Models::SuspendTrafficResponse suspendTrafficWithOptions(const Models::SuspendTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes traffic routed from Classic Load Balancer (CLB) application access, Network Load Balancer (NLB) application access, CLB gateway routes, Application Load Balancer (ALB) gateway routes, or Kubernetes (K8s) services.
       *
       * @param request SuspendTrafficRequest
       * @return SuspendTrafficResponse
       */
      Models::SuspendTrafficResponse suspendTraffic(const Models::SuspendTrafficRequest &request);

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
       * @summary Calls the UnbindNlb operation to delete an NLB listener bound for application access
       *
       * @param request UnbindNlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindNlbResponse
       */
      Models::UnbindNlbResponse unbindNlbWithOptions(const Models::UnbindNlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UnbindNlb operation to delete an NLB listener bound for application access
       *
       * @param request UnbindNlbRequest
       * @return UnbindNlbResponse
       */
      Models::UnbindNlbResponse unbindNlb(const Models::UnbindNlbRequest &request);

      /**
       * @summary Disassociates an internal-facing or Internet-facing SLB instance from an application.
       *
       * @param request UnbindSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSlbResponse
       */
      Models::UnbindSlbResponse unbindSlbWithOptions(const Models::UnbindSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an internal-facing or Internet-facing SLB instance from an application.
       *
       * @param request UnbindSlbRequest
       * @return UnbindSlbResponse
       */
      Models::UnbindSlbResponse unbindSlb(const Models::UnbindSlbRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Application Idle Mode Update
       *
       * @param request UpdateAppModeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppModeResponse
       */
      Models::UpdateAppModeResponse updateAppModeWithOptions(const Models::UpdateAppModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Application Idle Mode Update
       *
       * @param request UpdateAppModeRequest
       * @return UpdateAppModeResponse
       */
      Models::UpdateAppModeResponse updateAppMode(const Models::UpdateAppModeRequest &request);

      /**
       * @summary Updates the security group of an application.
       *
       * @param request UpdateAppSecurityGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppSecurityGroupResponse
       */
      Models::UpdateAppSecurityGroupResponse updateAppSecurityGroupWithOptions(const Models::UpdateAppSecurityGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the security group of an application.
       *
       * @param request UpdateAppSecurityGroupRequest
       * @return UpdateAppSecurityGroupResponse
       */
      Models::UpdateAppSecurityGroupResponse updateAppSecurityGroup(const Models::UpdateAppSecurityGroupRequest &request);

      /**
       * @summary Updates the description of an application.
       *
       * @param request UpdateApplicationDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationDescriptionResponse
       */
      Models::UpdateApplicationDescriptionResponse updateApplicationDescriptionWithOptions(const Models::UpdateApplicationDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of an application.
       *
       * @param request UpdateApplicationDescriptionRequest
       * @return UpdateApplicationDescriptionResponse
       */
      Models::UpdateApplicationDescriptionResponse updateApplicationDescription(const Models::UpdateApplicationDescriptionRequest &request);

      /**
       * @summary Updates the auto scaling policy of an application.
       *
       * @description ##
       * If you want to configure more than 50 instances for an application, you must submit a [ticket](https://workorder.console.aliyun.com/#/ticket/createIndex) to add your account to the whitelist.
       *
       * @param request UpdateApplicationScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationScalingRuleResponse
       */
      Models::UpdateApplicationScalingRuleResponse updateApplicationScalingRuleWithOptions(const Models::UpdateApplicationScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the auto scaling policy of an application.
       *
       * @description ##
       * If you want to configure more than 50 instances for an application, you must submit a [ticket](https://workorder.console.aliyun.com/#/ticket/createIndex) to add your account to the whitelist.
       *
       * @param request UpdateApplicationScalingRuleRequest
       * @return UpdateApplicationScalingRuleResponse
       */
      Models::UpdateApplicationScalingRuleResponse updateApplicationScalingRule(const Models::UpdateApplicationScalingRuleRequest &request);

      /**
       * @summary Update the configuration of a vSwitch.
       *
       * @param request UpdateApplicationVswitchesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationVswitchesResponse
       */
      Models::UpdateApplicationVswitchesResponse updateApplicationVswitchesWithOptions(const Models::UpdateApplicationVswitchesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the configuration of a vSwitch.
       *
       * @param request UpdateApplicationVswitchesRequest
       * @return UpdateApplicationVswitchesResponse
       */
      Models::UpdateApplicationVswitchesResponse updateApplicationVswitches(const Models::UpdateApplicationVswitchesRequest &request);

      /**
       * @summary Updates a ConfigMap instance.
       *
       * @param request UpdateConfigMapRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigMapResponse
       */
      Models::UpdateConfigMapResponse updateConfigMapWithOptions(const Models::UpdateConfigMapRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a ConfigMap instance.
       *
       * @param request UpdateConfigMapRequest
       * @return UpdateConfigMapResponse
       */
      Models::UpdateConfigMapResponse updateConfigMap(const Models::UpdateConfigMapRequest &request);

      /**
       * @summary Updates a canary release rule.
       *
       * @param request UpdateGreyTagRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGreyTagRouteResponse
       */
      Models::UpdateGreyTagRouteResponse updateGreyTagRouteWithOptions(const Models::UpdateGreyTagRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a canary release rule.
       *
       * @param request UpdateGreyTagRouteRequest
       * @return UpdateGreyTagRouteResponse
       */
      Models::UpdateGreyTagRouteResponse updateGreyTagRoute(const Models::UpdateGreyTagRouteRequest &request);

      /**
       * @summary Update the configurations of an Ingress instance.
       *
       * @param request UpdateIngressRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIngressResponse
       */
      Models::UpdateIngressResponse updateIngressWithOptions(const Models::UpdateIngressRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the configurations of an Ingress instance.
       *
       * @param request UpdateIngressRequest
       * @return UpdateIngressResponse
       */
      Models::UpdateIngressResponse updateIngress(const Models::UpdateIngressRequest &request);

      /**
       * @summary Updates a job template.
       *
       * @param request UpdateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const Models::UpdateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a job template.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const Models::UpdateJobRequest &request);

      /**
       * @summary Updates the information about a namespace.
       *
       * @param request UpdateNamespaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespaceWithOptions(const Models::UpdateNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a namespace.
       *
       * @param request UpdateNamespaceRequest
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespace(const Models::UpdateNamespaceRequest &request);

      /**
       * @summary 更新命名空间级别sls配置
       *
       * @param request UpdateNamespaceSlsConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceSlsConfigsResponse
       */
      Models::UpdateNamespaceSlsConfigsResponse updateNamespaceSlsConfigsWithOptions(const Models::UpdateNamespaceSlsConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新命名空间级别sls配置
       *
       * @param request UpdateNamespaceSlsConfigsRequest
       * @return UpdateNamespaceSlsConfigsResponse
       */
      Models::UpdateNamespaceSlsConfigsResponse updateNamespaceSlsConfigs(const Models::UpdateNamespaceSlsConfigsRequest &request);

      /**
       * @summary cn-beijing:test
       *
       * @param request UpdateNamespaceVpcRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceVpcResponse
       */
      Models::UpdateNamespaceVpcResponse updateNamespaceVpcWithOptions(const Models::UpdateNamespaceVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary cn-beijing:test
       *
       * @param request UpdateNamespaceVpcRequest
       * @return UpdateNamespaceVpcResponse
       */
      Models::UpdateNamespaceVpcResponse updateNamespaceVpc(const Models::UpdateNamespaceVpcRequest &request);

      /**
       * @summary The HTTP status code. Valid values:
       * *   **2xx**: The call was successful.
       * *   **3xx**: The call was redirected.
       * *   **4xx**: The call failed.
       * *   **5xx**: A server error occurred.
       *
       * @param tmpReq UpdateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecretWithOptions(const Models::UpdateSecretRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The HTTP status code. Valid values:
       * *   **2xx**: The call was successful.
       * *   **3xx**: The call was redirected.
       * *   **4xx**: The call failed.
       * *   **5xx**: A server error occurred.
       *
       * @param request UpdateSecretRequest
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecret(const Models::UpdateSecretRequest &request);

      /**
       * @summary Update the enabled property of the swimlane.
       *
       * @param request UpdateSwimmingLaneEnableAttributeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSwimmingLaneEnableAttributeResponse
       */
      Models::UpdateSwimmingLaneEnableAttributeResponse updateSwimmingLaneEnableAttributeWithOptions(const Models::UpdateSwimmingLaneEnableAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the enabled property of the swimlane.
       *
       * @param request UpdateSwimmingLaneEnableAttributeRequest
       * @return UpdateSwimmingLaneEnableAttributeResponse
       */
      Models::UpdateSwimmingLaneEnableAttributeResponse updateSwimmingLaneEnableAttribute(const Models::UpdateSwimmingLaneEnableAttributeRequest &request);

      /**
       * @summary Updates the configuration at the web application level.
       *
       * @description You can call the UpdateWebApplication operation to update the configuration at the web application level.
       *
       * @param request UpdateWebApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebApplicationResponse
       */
      Models::UpdateWebApplicationResponse updateWebApplicationWithOptions(const string &ApplicationId, const Models::UpdateWebApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration at the web application level.
       *
       * @description You can call the UpdateWebApplication operation to update the configuration at the web application level.
       *
       * @param request UpdateWebApplicationRequest
       * @return UpdateWebApplicationResponse
       */
      Models::UpdateWebApplicationResponse updateWebApplication(const string &ApplicationId, const Models::UpdateWebApplicationRequest &request);

      /**
       * @summary Update the scaling configuration of a web application.
       *
       * @description You can call the UpdateWebApplicationScalingConfig operation to update the scaling configurations of a web application.
       *
       * @param request UpdateWebApplicationScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebApplicationScalingConfigResponse
       */
      Models::UpdateWebApplicationScalingConfigResponse updateWebApplicationScalingConfigWithOptions(const string &ApplicationId, const Models::UpdateWebApplicationScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the scaling configuration of a web application.
       *
       * @description You can call the UpdateWebApplicationScalingConfig operation to update the scaling configurations of a web application.
       *
       * @param request UpdateWebApplicationScalingConfigRequest
       * @return UpdateWebApplicationScalingConfigResponse
       */
      Models::UpdateWebApplicationScalingConfigResponse updateWebApplicationScalingConfig(const string &ApplicationId, const Models::UpdateWebApplicationScalingConfigRequest &request);

      /**
       * @summary Update the traffic configurations of a web application.
       *
       * @description Call the UpdateWebApplicationTrafficConfig operation to update the traffic configurations of a web application.
       *
       * @param request UpdateWebApplicationTrafficConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebApplicationTrafficConfigResponse
       */
      Models::UpdateWebApplicationTrafficConfigResponse updateWebApplicationTrafficConfigWithOptions(const string &ApplicationId, const Models::UpdateWebApplicationTrafficConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the traffic configurations of a web application.
       *
       * @description Call the UpdateWebApplicationTrafficConfig operation to update the traffic configurations of a web application.
       *
       * @param request UpdateWebApplicationTrafficConfigRequest
       * @return UpdateWebApplicationTrafficConfigResponse
       */
      Models::UpdateWebApplicationTrafficConfigResponse updateWebApplicationTrafficConfig(const string &ApplicationId, const Models::UpdateWebApplicationTrafficConfigRequest &request);

      /**
       * @summary Update a custom domain name.
       *
       * @description Update a custom domain name.
       *
       * @param request UpdateWebCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebCustomDomainResponse
       */
      Models::UpdateWebCustomDomainResponse updateWebCustomDomainWithOptions(const string &DomainName, const Models::UpdateWebCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a custom domain name.
       *
       * @description Update a custom domain name.
       *
       * @param request UpdateWebCustomDomainRequest
       * @return UpdateWebCustomDomainResponse
       */
      Models::UpdateWebCustomDomainResponse updateWebCustomDomain(const string &DomainName, const Models::UpdateWebCustomDomainRequest &request);

      /**
       * @summary Enables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
       *
       * @description You are charged when you use the ARMS advanced monitoring feature. Enable this feature based on your business requirements. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/arms/application-monitoring/product-overview/billing-overview-1).
       *
       * @param request UpgradeApplicationApmServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeApplicationApmServiceResponse
       */
      Models::UpgradeApplicationApmServiceResponse upgradeApplicationApmServiceWithOptions(const Models::UpgradeApplicationApmServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the advanced monitoring feature of Application Real-Time Monitoring Service (ARMS).
       *
       * @description You are charged when you use the ARMS advanced monitoring feature. Enable this feature based on your business requirements. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/arms/application-monitoring/product-overview/billing-overview-1).
       *
       * @param request UpgradeApplicationApmServiceRequest
       * @return UpgradeApplicationApmServiceResponse
       */
      Models::UpgradeApplicationApmServiceResponse upgradeApplicationApmService(const Models::UpgradeApplicationApmServiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
