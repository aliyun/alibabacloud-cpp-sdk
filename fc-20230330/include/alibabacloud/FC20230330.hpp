// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FC20230330_HPP_
#define ALIBABACLOUD_FC20230330_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/FC20230330Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/FC20230330.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Updates the resource group of a Function Compute resource.
       *
       * @description To update the resource group of a Function Compute resource, you must grant the user the ChangeResourceGroup permission on both the current resource group and the target resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource group of a Function Compute resource.
       *
       * @description To update the resource group of a Function Compute resource, you must grant the user the ChangeResourceGroup permission on both the current resource group and the target resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建函数别名。
       *
       * @param request CreateAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAliasWithOptions(const string &functionName, const Models::CreateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建函数别名。
       *
       * @param request CreateAliasRequest
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAlias(const string &functionName, const Models::CreateAliasRequest &request);

      /**
       * @summary Creates a custom domain name.
       *
       * @description If you want to use a fixed domain name to access an application or function in a production environment of Function Compute, or to resolve the issue of forced downloads when accessing an HTTP trigger, you can bind a custom domain name to the application or function.
       *
       * @param request CreateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomainWithOptions(const Models::CreateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom domain name.
       *
       * @description If you want to use a fixed domain name to access an application or function in a production environment of Function Compute, or to resolve the issue of forced downloads when accessing an HTTP trigger, you can bind a custom domain name to the application or function.
       *
       * @param request CreateCustomDomainRequest
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomain(const Models::CreateCustomDomainRequest &request);

      /**
       * @summary Creates a function.
       *
       * @description Resources of Function Compute are scheduled and run based on functions. A function usually refers to a code snippet that is written by a user and can be independently executed to respond to events and requests.
       *
       * @param request CreateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunctionWithOptions(const Models::CreateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a function.
       *
       * @description Resources of Function Compute are scheduled and run based on functions. A function usually refers to a code snippet that is written by a user and can be independently executed to respond to events and requests.
       *
       * @param request CreateFunctionRequest
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunction(const Models::CreateFunctionRequest &request);

      /**
       * @summary 创建层版本。
       *
       * @param request CreateLayerVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayerVersionResponse
       */
      Models::CreateLayerVersionResponse createLayerVersionWithOptions(const string &layerName, const Models::CreateLayerVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建层版本。
       *
       * @param request CreateLayerVersionRequest
       * @return CreateLayerVersionResponse
       */
      Models::CreateLayerVersionResponse createLayerVersion(const string &layerName, const Models::CreateLayerVersionRequest &request);

      /**
       * @summary The CreateSession operation creates an explicit session resource. The system automatically generates a unique session ID, pre-allocates a function instance, and associates it with the session. You can specify values for TTL and idle timeout. This method applies to the HEADER_FIELD and GENERATED_COOKIE affinity types. It handles session preload and configuration initialization. After you call the InvokeFunction API, the session information can be included in the InvokeFunction request to enable request routing.
       *
       * @param request CreateSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSessionWithOptions(const string &functionName, const Models::CreateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The CreateSession operation creates an explicit session resource. The system automatically generates a unique session ID, pre-allocates a function instance, and associates it with the session. You can specify values for TTL and idle timeout. This method applies to the HEADER_FIELD and GENERATED_COOKIE affinity types. It handles session preload and configuration initialization. After you call the InvokeFunction API, the session information can be included in the InvokeFunction request to enable request routing.
       *
       * @param request CreateSessionRequest
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSession(const string &functionName, const Models::CreateSessionRequest &request);

      /**
       * @summary 创建函数触发器。
       *
       * @param request CreateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTriggerWithOptions(const string &functionName, const Models::CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建函数触发器。
       *
       * @param request CreateTriggerRequest
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTrigger(const string &functionName, const Models::CreateTriggerRequest &request);

      /**
       * @summary Creates a VPC connection.
       *
       * @param request CreateVpcBindingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcBindingResponse
       */
      Models::CreateVpcBindingResponse createVpcBindingWithOptions(const string &functionName, const Models::CreateVpcBindingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC connection.
       *
       * @param request CreateVpcBindingRequest
       * @return CreateVpcBindingResponse
       */
      Models::CreateVpcBindingResponse createVpcBinding(const string &functionName, const Models::CreateVpcBindingRequest &request);

      /**
       * @summary Deletes an alias.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAliasWithOptions(const string &functionName, const string &aliasName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alias.
       *
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAlias(const string &functionName, const string &aliasName);

      /**
       * @summary Deletes an asynchronous invocation configuration.
       *
       * @param request DeleteAsyncInvokeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAsyncInvokeConfigResponse
       */
      Models::DeleteAsyncInvokeConfigResponse deleteAsyncInvokeConfigWithOptions(const string &functionName, const Models::DeleteAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an asynchronous invocation configuration.
       *
       * @param request DeleteAsyncInvokeConfigRequest
       * @return DeleteAsyncInvokeConfigResponse
       */
      Models::DeleteAsyncInvokeConfigResponse deleteAsyncInvokeConfig(const string &functionName, const Models::DeleteAsyncInvokeConfigRequest &request);

      /**
       * @summary Deletes a concurrency configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConcurrencyConfigResponse
       */
      Models::DeleteConcurrencyConfigResponse deleteConcurrencyConfigWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a concurrency configuration.
       *
       * @return DeleteConcurrencyConfigResponse
       */
      Models::DeleteConcurrencyConfigResponse deleteConcurrencyConfig(const string &functionName);

      /**
       * @summary Deletes a custom domain name.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom domain name.
       *
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomain(const string &domainName);

      /**
       * @summary Deletes a function.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunctionWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a function.
       *
       * @return DeleteFunctionResponse
       */
      Models::DeleteFunctionResponse deleteFunction(const string &functionName);

      /**
       * @summary http://pre.hhht/#vpc
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionVersionResponse
       */
      Models::DeleteFunctionVersionResponse deleteFunctionVersionWithOptions(const string &functionName, const string &versionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary http://pre.hhht/#vpc
       *
       * @return DeleteFunctionVersionResponse
       */
      Models::DeleteFunctionVersionResponse deleteFunctionVersion(const string &functionName, const string &versionId);

      /**
       * @summary Deletes a layer version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayerVersionResponse
       */
      Models::DeleteLayerVersionResponse deleteLayerVersionWithOptions(const string &layerName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a layer version.
       *
       * @return DeleteLayerVersionResponse
       */
      Models::DeleteLayerVersionResponse deleteLayerVersion(const string &layerName, const string &version);

      /**
       * @summary Deletes a provisioned configuration.
       *
       * @param request DeleteProvisionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProvisionConfigResponse
       */
      Models::DeleteProvisionConfigResponse deleteProvisionConfigWithOptions(const string &functionName, const Models::DeleteProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a provisioned configuration.
       *
       * @param request DeleteProvisionConfigRequest
       * @return DeleteProvisionConfigResponse
       */
      Models::DeleteProvisionConfigResponse deleteProvisionConfig(const string &functionName, const Models::DeleteProvisionConfigRequest &request);

      /**
       * @summary Deletes the scaling settings of a function.
       *
       * @param request DeleteScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingConfigResponse
       */
      Models::DeleteScalingConfigResponse deleteScalingConfigWithOptions(const string &functionName, const Models::DeleteScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the scaling settings of a function.
       *
       * @param request DeleteScalingConfigRequest
       * @return DeleteScalingConfigResponse
       */
      Models::DeleteScalingConfigResponse deleteScalingConfig(const string &functionName, const Models::DeleteScalingConfigRequest &request);

      /**
       * @summary Deletes the specified session and prohibits new requests from being routed to it. Clears the session metadata from the database, so subsequent requests with the same session ID are treated as new sessions. Releases resources and performs session cleanup. In session isolation scenarios, terminates running requests and releases the instance bound to the session. In non-session isolation scenarios, allows running requests to continue and gracefully terminates them.
       *
       * @param request DeleteSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSessionWithOptions(const string &functionName, const string &sessionId, const Models::DeleteSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified session and prohibits new requests from being routed to it. Clears the session metadata from the database, so subsequent requests with the same session ID are treated as new sessions. Releases resources and performs session cleanup. In session isolation scenarios, terminates running requests and releases the instance bound to the session. In non-session isolation scenarios, allows running requests to continue and gracefully terminates them.
       *
       * @param request DeleteSessionRequest
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSession(const string &functionName, const string &sessionId, const Models::DeleteSessionRequest &request);

      /**
       * @summary Deletes a trigger.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a trigger.
       *
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTrigger(const string &functionName, const string &triggerName);

      /**
       * @summary Deletes an access control policy from a specified policy group for a VPC firewall.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcBindingResponse
       */
      Models::DeleteVpcBindingResponse deleteVpcBindingWithOptions(const string &functionName, const string &vpcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control policy from a specified policy group for a VPC firewall.
       *
       * @return DeleteVpcBindingResponse
       */
      Models::DeleteVpcBindingResponse deleteVpcBinding(const string &functionName, const string &vpcId);

      /**
       * @summary Queries the regions where Function Compute 3.0 is available.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where Function Compute 3.0 is available.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary The DisableFunctionInvocation operation prevents a function from being invoked and optionally terminates all requests that are being processed. Once a function\\"s invocation is disabled, no new instances can be created, and the existing provisioned instances are destroyed. This operation is currently in private preview.
       *
       * @description Exercise caution when you call this operation on a function in a production environment, as improper deactivation may lead to business disruptions.
       *
       * @param request DisableFunctionInvocationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFunctionInvocationResponse
       */
      Models::DisableFunctionInvocationResponse disableFunctionInvocationWithOptions(const string &functionName, const Models::DisableFunctionInvocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DisableFunctionInvocation operation prevents a function from being invoked and optionally terminates all requests that are being processed. Once a function\\"s invocation is disabled, no new instances can be created, and the existing provisioned instances are destroyed. This operation is currently in private preview.
       *
       * @description Exercise caution when you call this operation on a function in a production environment, as improper deactivation may lead to business disruptions.
       *
       * @param request DisableFunctionInvocationRequest
       * @return DisableFunctionInvocationResponse
       */
      Models::DisableFunctionInvocationResponse disableFunctionInvocation(const string &functionName, const Models::DisableFunctionInvocationRequest &request);

      /**
       * @summary The EnableFunctionInvocation operation allows a function to be invoked and resumes the creation of provisioned instances. This operation is currently in private preview.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFunctionInvocationResponse
       */
      Models::EnableFunctionInvocationResponse enableFunctionInvocationWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The EnableFunctionInvocation operation allows a function to be invoked and resumes the creation of provisioned instances. This operation is currently in private preview.
       *
       * @return EnableFunctionInvocationResponse
       */
      Models::EnableFunctionInvocationResponse enableFunctionInvocation(const string &functionName);

      /**
       * @summary Queries information about an alias.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliasResponse
       */
      Models::GetAliasResponse getAliasWithOptions(const string &functionName, const string &aliasName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an alias.
       *
       * @return GetAliasResponse
       */
      Models::GetAliasResponse getAlias(const string &functionName, const string &aliasName);

      /**
       * @summary Gets asynchronous invocation configurations of a function.
       *
       * @param request GetAsyncInvokeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncInvokeConfigResponse
       */
      Models::GetAsyncInvokeConfigResponse getAsyncInvokeConfigWithOptions(const string &functionName, const Models::GetAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets asynchronous invocation configurations of a function.
       *
       * @param request GetAsyncInvokeConfigRequest
       * @return GetAsyncInvokeConfigResponse
       */
      Models::GetAsyncInvokeConfigResponse getAsyncInvokeConfig(const string &functionName, const Models::GetAsyncInvokeConfigRequest &request);

      /**
       * @summary Queries the information about an asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTaskWithOptions(const string &functionName, const string &taskId, const Models::GetAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTask(const string &functionName, const string &taskId, const Models::GetAsyncTaskRequest &request);

      /**
       * @summary Obtains a concurrency configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConcurrencyConfigResponse
       */
      Models::GetConcurrencyConfigResponse getConcurrencyConfigWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a concurrency configuration.
       *
       * @return GetConcurrencyConfigResponse
       */
      Models::GetConcurrencyConfigResponse getConcurrencyConfig(const string &functionName);

      /**
       * @summary Queries information about a custom domain name.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a custom domain name.
       *
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomain(const string &domainName);

      /**
       * @summary http://pre.hhht/#vpc
       *
       * @param request GetFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunctionWithOptions(const string &functionName, const Models::GetFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary http://pre.hhht/#vpc
       *
       * @param request GetFunctionRequest
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunction(const string &functionName, const Models::GetFunctionRequest &request);

      /**
       * @summary Queries a code package of a function.
       *
       * @param request GetFunctionCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionCodeResponse
       */
      Models::GetFunctionCodeResponse getFunctionCodeWithOptions(const string &functionName, const Models::GetFunctionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a code package of a function.
       *
       * @param request GetFunctionCodeRequest
       * @return GetFunctionCodeResponse
       */
      Models::GetFunctionCodeResponse getFunctionCode(const string &functionName, const Models::GetFunctionCodeRequest &request);

      /**
       * @summary Queries versions of a layer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerVersionResponse
       */
      Models::GetLayerVersionResponse getLayerVersionWithOptions(const string &layerName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries versions of a layer.
       *
       * @return GetLayerVersionResponse
       */
      Models::GetLayerVersionResponse getLayerVersion(const string &layerName, const string &version);

      /**
       * @summary Obtain version information of a layer by using ARNs.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerVersionByArnResponse
       */
      Models::GetLayerVersionByArnResponse getLayerVersionByArnWithOptions(const string &arn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain version information of a layer by using ARNs.
       *
       * @return GetLayerVersionByArnResponse
       */
      Models::GetLayerVersionByArnResponse getLayerVersionByArn(const string &arn);

      /**
       * @summary Queries provisioned configurations.
       *
       * @param request GetProvisionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProvisionConfigResponse
       */
      Models::GetProvisionConfigResponse getProvisionConfigWithOptions(const string &functionName, const Models::GetProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries provisioned configurations.
       *
       * @param request GetProvisionConfigRequest
       * @return GetProvisionConfigResponse
       */
      Models::GetProvisionConfigResponse getProvisionConfig(const string &functionName, const Models::GetProvisionConfigRequest &request);

      /**
       * @summary Gets the scaling settings of a function.
       *
       * @param request GetScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScalingConfigResponse
       */
      Models::GetScalingConfigResponse getScalingConfigWithOptions(const string &functionName, const Models::GetScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the scaling settings of a function.
       *
       * @param request GetScalingConfigRequest
       * @return GetScalingConfigResponse
       */
      Models::GetScalingConfigResponse getScalingConfig(const string &functionName, const Models::GetScalingConfigRequest &request);

      /**
       * @summary You can use this operation to retrieve detailed information about a specific session, including its session ID, associated function, affinity type, lifecycle configuration, status, and instance details. This operation retrieves the current metadata for a session. You can identify the metadata precisely using either the function name or qualifier. This capability enables you to monitor and debug external systems with ease. Only sessions that are in the Active state can be queried.
       *
       * @param request GetSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSessionWithOptions(const string &functionName, const string &sessionId, const Models::GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use this operation to retrieve detailed information about a specific session, including its session ID, associated function, affinity type, lifecycle configuration, status, and instance details. This operation retrieves the current metadata for a session. You can identify the metadata precisely using either the function name or qualifier. This capability enables you to monitor and debug external systems with ease. Only sessions that are in the Active state can be queried.
       *
       * @param request GetSessionRequest
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSession(const string &functionName, const string &sessionId, const Models::GetSessionRequest &request);

      /**
       * @summary Queries information about a trigger.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTriggerResponse
       */
      Models::GetTriggerResponse getTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a trigger.
       *
       * @return GetTriggerResponse
       */
      Models::GetTriggerResponse getTrigger(const string &functionName, const string &triggerName);

      /**
       * @summary Invokes a function.
       *
       * @param request InvokeFunctionRequest
       * @param headers InvokeFunctionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeFunctionResponse
       */
      Models::InvokeFunctionResponse invokeFunctionWithOptions(const string &functionName, const Models::InvokeFunctionRequest &request, const Models::InvokeFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a function.
       *
       * @param request InvokeFunctionRequest
       * @return InvokeFunctionResponse
       */
      Models::InvokeFunctionResponse invokeFunction(const string &functionName, const Models::InvokeFunctionRequest &request);

      /**
       * @summary Queries aliases.
       *
       * @param request ListAliasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliasesWithOptions(const string &functionName, const Models::ListAliasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries aliases.
       *
       * @param request ListAliasesRequest
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliases(const string &functionName, const Models::ListAliasesRequest &request);

      /**
       * @summary Queries all asynchronous configurations of a function.
       *
       * @param request ListAsyncInvokeConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncInvokeConfigsResponse
       */
      Models::ListAsyncInvokeConfigsResponse listAsyncInvokeConfigsWithOptions(const Models::ListAsyncInvokeConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all asynchronous configurations of a function.
       *
       * @param request ListAsyncInvokeConfigsRequest
       * @return ListAsyncInvokeConfigsResponse
       */
      Models::ListAsyncInvokeConfigsResponse listAsyncInvokeConfigs(const Models::ListAsyncInvokeConfigsRequest &request);

      /**
       * @summary Lists asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const string &functionName, const Models::ListAsyncTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const string &functionName, const Models::ListAsyncTasksRequest &request);

      /**
       * @summary 列出函数并发度配置。
       *
       * @param request ListConcurrencyConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConcurrencyConfigsResponse
       */
      Models::ListConcurrencyConfigsResponse listConcurrencyConfigsWithOptions(const Models::ListConcurrencyConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出函数并发度配置。
       *
       * @param request ListConcurrencyConfigsRequest
       * @return ListConcurrencyConfigsResponse
       */
      Models::ListConcurrencyConfigsResponse listConcurrencyConfigs(const Models::ListConcurrencyConfigsRequest &request);

      /**
       * @summary Queries custom domain names.
       *
       * @param request ListCustomDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomainsWithOptions(const Models::ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom domain names.
       *
       * @param request ListCustomDomainsRequest
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomains(const Models::ListCustomDomainsRequest &request);

      /**
       * @summary Queries versions of a function.
       *
       * @param request ListFunctionVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionVersionsResponse
       */
      Models::ListFunctionVersionsResponse listFunctionVersionsWithOptions(const string &functionName, const Models::ListFunctionVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries versions of a function.
       *
       * @param request ListFunctionVersionsRequest
       * @return ListFunctionVersionsResponse
       */
      Models::ListFunctionVersionsResponse listFunctionVersions(const string &functionName, const Models::ListFunctionVersionsRequest &request);

      /**
       * @summary 列出函数。
       *
       * @description ListFunctions returns only a subset of a function\\"s attribute fields. To obtain the additional fields, which include state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
       *
       * @param tmpReq ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const Models::ListFunctionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出函数。
       *
       * @description ListFunctions returns only a subset of a function\\"s attribute fields. To obtain the additional fields, which include state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const Models::ListFunctionsRequest &request);

      /**
       * @summary Queries a list of function instances.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const string &functionName, const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of function instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const string &functionName, const Models::ListInstancesRequest &request);

      /**
       * @summary Gets a list of layer versions.
       *
       * @param request ListLayerVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayerVersionsResponse
       */
      Models::ListLayerVersionsResponse listLayerVersionsWithOptions(const string &layerName, const Models::ListLayerVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a list of layer versions.
       *
       * @param request ListLayerVersionsRequest
       * @return ListLayerVersionsResponse
       */
      Models::ListLayerVersionsResponse listLayerVersions(const string &layerName, const Models::ListLayerVersionsRequest &request);

      /**
       * @summary Gets a list of layers.
       *
       * @param request ListLayersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayersWithOptions(const Models::ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a list of layers.
       *
       * @param request ListLayersRequest
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayers(const Models::ListLayersRequest &request);

      /**
       * @summary Queries a list of provisioned configurations.
       *
       * @param request ListProvisionConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvisionConfigsResponse
       */
      Models::ListProvisionConfigsResponse listProvisionConfigsWithOptions(const Models::ListProvisionConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of provisioned configurations.
       *
       * @param request ListProvisionConfigsRequest
       * @return ListProvisionConfigsResponse
       */
      Models::ListProvisionConfigsResponse listProvisionConfigs(const Models::ListProvisionConfigsRequest &request);

      /**
       * @summary Lists the scaling settings of a function.
       *
       * @param request ListScalingConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScalingConfigsResponse
       */
      Models::ListScalingConfigsResponse listScalingConfigsWithOptions(const Models::ListScalingConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the scaling settings of a function.
       *
       * @param request ListScalingConfigsRequest
       * @return ListScalingConfigsResponse
       */
      Models::ListScalingConfigsResponse listScalingConfigs(const Models::ListScalingConfigsRequest &request);

      /**
       * @summary Lists sessions in the Active and/or Expired state(s) under the specified function. Supports filtering by qualifier, status, and session ID, as well as paginated queries. Returns basic session attributes for batch viewing of session distribution and status, helping with operations monitoring and integration with external systems, and enhancing session visibility and management.
       *
       * @param request ListSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessionsWithOptions(const string &functionName, const Models::ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists sessions in the Active and/or Expired state(s) under the specified function. Supports filtering by qualifier, status, and session ID, as well as paginated queries. Returns basic session attributes for batch viewing of session distribution and status, helping with operations monitoring and integration with external systems, and enhancing session visibility and management.
       *
       * @param request ListSessionsRequest
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessions(const string &functionName, const Models::ListSessionsRequest &request);

      /**
       * @summary Lists all tagged resources.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the triggers of a function.
       *
       * @param request ListTriggersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggersWithOptions(const string &functionName, const Models::ListTriggersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the triggers of a function.
       *
       * @param request ListTriggersRequest
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggers(const string &functionName, const Models::ListTriggersRequest &request);

      /**
       * @summary Queries a list of existing VPC connections.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcBindingsResponse
       */
      Models::ListVpcBindingsResponse listVpcBindingsWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of existing VPC connections.
       *
       * @return ListVpcBindingsResponse
       */
      Models::ListVpcBindingsResponse listVpcBindings(const string &functionName);

      /**
       * @summary Publishes a function version.
       *
       * @param request PublishFunctionVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFunctionVersionResponse
       */
      Models::PublishFunctionVersionResponse publishFunctionVersionWithOptions(const string &functionName, const Models::PublishFunctionVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a function version.
       *
       * @param request PublishFunctionVersionRequest
       * @return PublishFunctionVersionResponse
       */
      Models::PublishFunctionVersionResponse publishFunctionVersion(const string &functionName, const Models::PublishFunctionVersionRequest &request);

      /**
       * @summary Creates or modifies an asynchronous invocation configuration for a function.
       *
       * @param request PutAsyncInvokeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutAsyncInvokeConfigResponse
       */
      Models::PutAsyncInvokeConfigResponse putAsyncInvokeConfigWithOptions(const string &functionName, const Models::PutAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an asynchronous invocation configuration for a function.
       *
       * @param request PutAsyncInvokeConfigRequest
       * @return PutAsyncInvokeConfigResponse
       */
      Models::PutAsyncInvokeConfigResponse putAsyncInvokeConfig(const string &functionName, const Models::PutAsyncInvokeConfigRequest &request);

      /**
       * @summary Configures concurrency of a function.
       *
       * @param request PutConcurrencyConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutConcurrencyConfigResponse
       */
      Models::PutConcurrencyConfigResponse putConcurrencyConfigWithOptions(const string &functionName, const Models::PutConcurrencyConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures concurrency of a function.
       *
       * @param request PutConcurrencyConfigRequest
       * @return PutConcurrencyConfigResponse
       */
      Models::PutConcurrencyConfigResponse putConcurrencyConfig(const string &functionName, const Models::PutConcurrencyConfigRequest &request);

      /**
       * @summary Modifies permissions of a layer.
       *
       * @param request PutLayerACLRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutLayerACLResponse
       */
      Models::PutLayerACLResponse putLayerACLWithOptions(const string &layerName, const Models::PutLayerACLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies permissions of a layer.
       *
       * @param request PutLayerACLRequest
       * @return PutLayerACLResponse
       */
      Models::PutLayerACLResponse putLayerACL(const string &layerName, const Models::PutLayerACLRequest &request);

      /**
       * @summary Creates provisioned configurations.
       *
       * @param request PutProvisionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutProvisionConfigResponse
       */
      Models::PutProvisionConfigResponse putProvisionConfigWithOptions(const string &functionName, const Models::PutProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates provisioned configurations.
       *
       * @param request PutProvisionConfigRequest
       * @return PutProvisionConfigResponse
       */
      Models::PutProvisionConfigResponse putProvisionConfig(const string &functionName, const Models::PutProvisionConfigRequest &request);

      /**
       * @summary Scaling settings
       *
       * @param request PutScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutScalingConfigResponse
       */
      Models::PutScalingConfigResponse putScalingConfigWithOptions(const string &functionName, const Models::PutScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scaling settings
       *
       * @param request PutScalingConfigRequest
       * @return PutScalingConfigResponse
       */
      Models::PutScalingConfigResponse putScalingConfig(const string &functionName, const Models::PutScalingConfigRequest &request);

      /**
       * @summary Stops an asynchronous task.
       *
       * @param request StopAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAsyncTaskResponse
       */
      Models::StopAsyncTaskResponse stopAsyncTaskWithOptions(const string &functionName, const string &taskId, const Models::StopAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an asynchronous task.
       *
       * @param request StopAsyncTaskRequest
       * @return StopAsyncTaskResponse
       */
      Models::StopAsyncTaskResponse stopAsyncTask(const string &functionName, const string &taskId, const Models::StopAsyncTaskRequest &request);

      /**
       * @summary Adds tags to a resource.
       *
       * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to a resource.
       *
       * @description Tags are used to identify resources. Tags allow you to categorize, search for, and aggregate resources that have the same characteristics from different dimensions. This facilitates resource management. For more information, see [Tag overview](https://help.aliyun.com/document_detail/156983.html).
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a resource.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an alias.
       *
       * @param request UpdateAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAliasWithOptions(const string &functionName, const string &aliasName, const Models::UpdateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alias.
       *
       * @param request UpdateAliasRequest
       * @return UpdateAliasResponse
       */
      Models::UpdateAliasResponse updateAlias(const string &functionName, const string &aliasName, const Models::UpdateAliasRequest &request);

      /**
       * @summary Update a custom domain name.
       *
       * @param request UpdateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomainWithOptions(const string &domainName, const Models::UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a custom domain name.
       *
       * @param request UpdateCustomDomainRequest
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomain(const string &domainName, const Models::UpdateCustomDomainRequest &request);

      /**
       * @summary Updates the information about a function.
       *
       * @param request UpdateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunctionWithOptions(const string &functionName, const Models::UpdateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a function.
       *
       * @param request UpdateFunctionRequest
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunction(const string &functionName, const Models::UpdateFunctionRequest &request);

      /**
       * @summary Updates session configurations while the session is in the Active state, such as lifecycle parameters (e.g., SessionTTLInSeconds and SessionIdleTimeoutInSeconds). After the update takes effect, LastModifiedTime is automatically refreshed. These updates can be used to extend or shorten the validity period of a session and enable dynamic management without changing the execution environment bound to the session.
       *
       * @param request UpdateSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSessionWithOptions(const string &functionName, const string &sessionId, const Models::UpdateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates session configurations while the session is in the Active state, such as lifecycle parameters (e.g., SessionTTLInSeconds and SessionIdleTimeoutInSeconds). After the update takes effect, LastModifiedTime is automatically refreshed. These updates can be used to extend or shorten the validity period of a session and enable dynamic management without changing the execution environment bound to the session.
       *
       * @param request UpdateSessionRequest
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSession(const string &functionName, const string &sessionId, const Models::UpdateSessionRequest &request);

      /**
       * @summary Modifies a trigger.
       *
       * @param request UpdateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTriggerWithOptions(const string &functionName, const string &triggerName, const Models::UpdateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a trigger.
       *
       * @param request UpdateTriggerRequest
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTrigger(const string &functionName, const string &triggerName, const Models::UpdateTriggerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
