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
       * @summary Changes the resource group of a Function Compute resource.
       *
       * @description To change the resource group of a Function Compute resource, you must have the ChangeResourceGroup permission for both the current and target resource groups.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a Function Compute resource.
       *
       * @description To change the resource group of a Function Compute resource, you must have the ChangeResourceGroup permission for both the current and target resource groups.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates an alias.
       *
       * @param request CreateAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAliasWithOptions(const string &functionName, const Models::CreateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alias.
       *
       * @param request CreateAliasRequest
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAlias(const string &functionName, const Models::CreateAliasRequest &request);

      /**
       * @summary Creates a custom domain name.
       *
       * @description You can attach a custom domain name to an application or function in Function Compute to access it through a fixed domain name in a production environment, or to resolve the forced download behavior when you access an HTTP trigger.
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
       * @description You can attach a custom domain name to an application or function in Function Compute to access it through a fixed domain name in a production environment, or to resolve the forced download behavior when you access an HTTP trigger.
       *
       * @param request CreateCustomDomainRequest
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomain(const Models::CreateCustomDomainRequest &request);

      /**
       * @summary Creates a function by calling the CreateFunction operation.
       *
       * @description When you create a function by using an OSS code package, if the error "unable to access object xxx in bucket xxx" is reported, grant the current user access permissions on the OSS bucket. For example, you can use the system access policy AliyunOSSReadOnlyAccess or a custom policy with finer granularity such as authorization for oss:GetObject. For details about the policy content, see [Grant a Resource Access Management (RAM) user permissions to read all resources in a bucket](https://help.aliyun.com/document_detail/199058.html).
       *
       * @param request CreateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunctionWithOptions(const Models::CreateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a function by calling the CreateFunction operation.
       *
       * @description When you create a function by using an OSS code package, if the error "unable to access object xxx in bucket xxx" is reported, grant the current user access permissions on the OSS bucket. For example, you can use the system access policy AliyunOSSReadOnlyAccess or a custom policy with finer granularity such as authorization for oss:GetObject. For details about the policy content, see [Grant a Resource Access Management (RAM) user permissions to read all resources in a bucket](https://help.aliyun.com/document_detail/199058.html).
       *
       * @param request CreateFunctionRequest
       * @return CreateFunctionResponse
       */
      Models::CreateFunctionResponse createFunction(const Models::CreateFunctionRequest &request);

      /**
       * @summary This operation publishes a layer version.
       *
       * @param request CreateLayerVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayerVersionResponse
       */
      Models::CreateLayerVersionResponse createLayerVersionWithOptions(const string &layerName, const Models::CreateLayerVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation publishes a layer version.
       *
       * @param request CreateLayerVersionRequest
       * @return CreateLayerVersionResponse
       */
      Models::CreateLayerVersionResponse createLayerVersion(const string &layerName, const Models::CreateLayerVersionRequest &request);

      /**
       * @summary Creates an explicit session resource. The system automatically generates a unique SessionID, pre-allocates a function instance, and binds it to the session. You can specify TTL and IdleTimeout. This operation applies to the HEADER_FIELD or GENERATED_COOKIE affinity types, enabling session warm-up and configuration initialization. After the call, you can include the session in InvokeFunction requests for request routing.
       *
       * @param request CreateSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSessionWithOptions(const string &functionName, const Models::CreateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an explicit session resource. The system automatically generates a unique SessionID, pre-allocates a function instance, and binds it to the session. You can specify TTL and IdleTimeout. This operation applies to the HEADER_FIELD or GENERATED_COOKIE affinity types, enabling session warm-up and configuration initialization. After the call, you can include the session in InvokeFunction requests for request routing.
       *
       * @param request CreateSessionRequest
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSession(const string &functionName, const Models::CreateSessionRequest &request);

      /**
       * @summary 从正常且未过期的微沙箱会话中创建用户快照。
       *
       * @description ## 请求说明
       * - 该 API 用于从指定的微沙箱会话中创建一个用户快照。
       * - 可选参数 `qualifier` 用于标识创建源会话时使用的有效别名或具体函数版本。如果省略，默认为 `LATEST`。
       * - 必须提供 `sessionId` 参数，以指定要从中创建快照的客户端会话 ID。
       * - 描述信息 `description` 是可选的，但若提供，则不能包含控制字符，并且长度限制为 256 个 UTF-8 字节。
       *
       * @param request CreateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const string &functionName, const Models::CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从正常且未过期的微沙箱会话中创建用户快照。
       *
       * @description ## 请求说明
       * - 该 API 用于从指定的微沙箱会话中创建一个用户快照。
       * - 可选参数 `qualifier` 用于标识创建源会话时使用的有效别名或具体函数版本。如果省略，默认为 `LATEST`。
       * - 必须提供 `sessionId` 参数，以指定要从中创建快照的客户端会话 ID。
       * - 描述信息 `description` 是可选的，但若提供，则不能包含控制字符，并且长度限制为 256 个 UTF-8 字节。
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const string &functionName, const Models::CreateSnapshotRequest &request);

      /**
       * @summary Creates a trigger.
       *
       * @param request CreateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTriggerResponse
       */
      Models::CreateTriggerResponse createTriggerWithOptions(const string &functionName, const Models::CreateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trigger.
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
       * @summary Deletes a function version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionVersionResponse
       */
      Models::DeleteFunctionVersionResponse deleteFunctionVersionWithOptions(const string &functionName, const string &versionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a function version.
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
       * @summary 删除用户快照
       *
       * @description - 该 API 用于删除指定函数下的用户 MicroSandbox 快照。
       * - 删除成功后，快照进入异步删除流程；接口返回 202 Accepted 表示删除请求已受理，不等待底层 Template、artifact 等物理资源清理完成。
       * - 已进入删除中的快照重复删除仍返回 202 Accepted。
       * - 如果指定快照在当前函数作用域下不存在，返回 204 No Content，用于支持幂等删除。
       * - 如果快照仍被已恢复的 Session 使用，或存在未确认可清理的 consumer relation，返回 409 SnapshotInUse，不会删除快照。
       *
       * @param request DeleteSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const string &functionName, const string &snapshotId, const Models::DeleteSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户快照
       *
       * @description - 该 API 用于删除指定函数下的用户 MicroSandbox 快照。
       * - 删除成功后，快照进入异步删除流程；接口返回 202 Accepted 表示删除请求已受理，不等待底层 Template、artifact 等物理资源清理完成。
       * - 已进入删除中的快照重复删除仍返回 202 Accepted。
       * - 如果指定快照在当前函数作用域下不存在，返回 204 No Content，用于支持幂等删除。
       * - 如果快照仍被已恢复的 Session 使用，或存在未确认可清理的 consumer relation，返回 409 SnapshotInUse，不会删除快照。
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const string &functionName, const string &snapshotId, const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Deletes the specified trigger.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified trigger.
       *
       * @return DeleteTriggerResponse
       */
      Models::DeleteTriggerResponse deleteTrigger(const string &functionName, const string &triggerName);

      /**
       * @summary Deletes an access control policy from a specified VPC firewall policy group.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcBindingResponse
       */
      Models::DeleteVpcBindingResponse deleteVpcBindingWithOptions(const string &functionName, const string &vpcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control policy from a specified VPC firewall policy group.
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
       * @summary Disables function invocations. You can also stop all ongoing requests. When a function is disabled, new instances cannot be created and provisioned instances are destroyed. This OpenAPI is in beta.
       *
       * @description Use caution when calling this API for functions in a production environment because disabling function invocations can disrupt your services.
       *
       * @param request DisableFunctionInvocationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFunctionInvocationResponse
       */
      Models::DisableFunctionInvocationResponse disableFunctionInvocationWithOptions(const string &functionName, const Models::DisableFunctionInvocationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables function invocations. You can also stop all ongoing requests. When a function is disabled, new instances cannot be created and provisioned instances are destroyed. This OpenAPI is in beta.
       *
       * @description Use caution when calling this API for functions in a production environment because disabling function invocations can disrupt your services.
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
       * @summary Retrieves information about an alias.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliasResponse
       */
      Models::GetAliasResponse getAliasWithOptions(const string &functionName, const string &aliasName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about an alias.
       *
       * @return GetAliasResponse
       */
      Models::GetAliasResponse getAlias(const string &functionName, const string &aliasName);

      /**
       * @summary Retrieves the asynchronous invocation configuration of a specified function.
       *
       * @param request GetAsyncInvokeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncInvokeConfigResponse
       */
      Models::GetAsyncInvokeConfigResponse getAsyncInvokeConfigWithOptions(const string &functionName, const Models::GetAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the asynchronous invocation configuration of a specified function.
       *
       * @param request GetAsyncInvokeConfigRequest
       * @return GetAsyncInvokeConfigResponse
       */
      Models::GetAsyncInvokeConfigResponse getAsyncInvokeConfig(const string &functionName, const Models::GetAsyncInvokeConfigRequest &request);

      /**
       * @summary Retrieves the details of a specified asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTaskWithOptions(const string &functionName, const string &taskId, const Models::GetAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTask(const string &functionName, const string &taskId, const Models::GetAsyncTaskRequest &request);

      /**
       * @summary Retrieves the concurrency configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConcurrencyConfigResponse
       */
      Models::GetConcurrencyConfigResponse getConcurrencyConfigWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the concurrency configuration.
       *
       * @return GetConcurrencyConfigResponse
       */
      Models::GetConcurrencyConfigResponse getConcurrencyConfig(const string &functionName);

      /**
       * @summary Retrieves the configuration of a custom domain name.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a custom domain name.
       *
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomain(const string &domainName);

      /**
       * @summary Retrieves function information.
       *
       * @param request GetFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunctionWithOptions(const string &functionName, const Models::GetFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves function information.
       *
       * @param request GetFunctionRequest
       * @return GetFunctionResponse
       */
      Models::GetFunctionResponse getFunction(const string &functionName, const Models::GetFunctionRequest &request);

      /**
       * @summary Retrieves the details of a function code package.
       *
       * @param request GetFunctionCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionCodeResponse
       */
      Models::GetFunctionCodeResponse getFunctionCodeWithOptions(const string &functionName, const Models::GetFunctionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a function code package.
       *
       * @param request GetFunctionCodeRequest
       * @return GetFunctionCodeResponse
       */
      Models::GetFunctionCodeResponse getFunctionCode(const string &functionName, const Models::GetFunctionCodeRequest &request);

      /**
       * @summary Retrieves information about a layer version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerVersionResponse
       */
      Models::GetLayerVersionResponse getLayerVersionWithOptions(const string &layerName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a layer version.
       *
       * @return GetLayerVersionResponse
       */
      Models::GetLayerVersionResponse getLayerVersion(const string &layerName, const string &version);

      /**
       * @summary Retrieves the version information of a layer by its Alibaba Cloud Resource Name (ARN).
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerVersionByArnResponse
       */
      Models::GetLayerVersionByArnResponse getLayerVersionByArnWithOptions(const string &arn, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the version information of a layer by its Alibaba Cloud Resource Name (ARN).
       *
       * @return GetLayerVersionByArnResponse
       */
      Models::GetLayerVersionByArnResponse getLayerVersionByArn(const string &arn);

      /**
       * @summary Retrieves the provisioned configuration.
       *
       * @param request GetProvisionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProvisionConfigResponse
       */
      Models::GetProvisionConfigResponse getProvisionConfigWithOptions(const string &functionName, const Models::GetProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the provisioned configuration.
       *
       * @param request GetProvisionConfigRequest
       * @return GetProvisionConfigResponse
       */
      Models::GetProvisionConfigResponse getProvisionConfig(const string &functionName, const Models::GetProvisionConfigRequest &request);

      /**
       * @summary Retrieves the scaling configuration for a function.
       *
       * @param request GetScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScalingConfigResponse
       */
      Models::GetScalingConfigResponse getScalingConfigWithOptions(const string &functionName, const Models::GetScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the scaling configuration for a function.
       *
       * @param request GetScalingConfigRequest
       * @return GetScalingConfigResponse
       */
      Models::GetScalingConfigResponse getScalingConfig(const string &functionName, const Models::GetScalingConfigRequest &request);

      /**
       * @summary Retrieves the details of a specified session, including the session ID, associated function, affinity type, lifecycle configuration, status, and instance information. This operation queries the current metadata of a single session and supports exact matching by functionName and qualifier for external system monitoring and debugging. Only sessions in the Active state can be queried.
       *
       * @param request GetSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSessionWithOptions(const string &functionName, const string &sessionId, const Models::GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified session, including the session ID, associated function, affinity type, lifecycle configuration, status, and instance information. This operation queries the current metadata of a single session and supports exact matching by functionName and qualifier for external system monitoring and debugging. Only sessions in the Active state can be queried.
       *
       * @param request GetSessionRequest
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSession(const string &functionName, const string &sessionId, const Models::GetSessionRequest &request);

      /**
       * @summary 获取快照信息
       *
       * @description - 该 API 用于获取指定函数下的用户 MicroSandbox 快照信息。
       * - 仅当快照属于当前函数、状态为 Available 且未过期时返回快照详情。
       * - 快照不存在、已过期、正在创建、正在删除、属于内部快照或不属于当前函数时，均按不可见处理，返回 404 SnapshotNotFound。
       *
       * @param request GetSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSnapshotResponse
       */
      Models::GetSnapshotResponse getSnapshotWithOptions(const string &functionName, const string &snapshotId, const Models::GetSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取快照信息
       *
       * @description - 该 API 用于获取指定函数下的用户 MicroSandbox 快照信息。
       * - 仅当快照属于当前函数、状态为 Available 且未过期时返回快照详情。
       * - 快照不存在、已过期、正在创建、正在删除、属于内部快照或不属于当前函数时，均按不可见处理，返回 404 SnapshotNotFound。
       *
       * @param request GetSnapshotRequest
       * @return GetSnapshotResponse
       */
      Models::GetSnapshotResponse getSnapshot(const string &functionName, const string &snapshotId, const Models::GetSnapshotRequest &request);

      /**
       * @summary Retrieves the details of a specified trigger.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTriggerResponse
       */
      Models::GetTriggerResponse getTriggerWithOptions(const string &functionName, const string &triggerName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified trigger.
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
       * @summary Lists aliases.
       *
       * @param request ListAliasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliasesWithOptions(const string &functionName, const Models::ListAliasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists aliases.
       *
       * @param request ListAliasesRequest
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliases(const string &functionName, const Models::ListAliasesRequest &request);

      /**
       * @summary Lists the asynchronous invocation configurations for one or more functions.
       *
       * @param request ListAsyncInvokeConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncInvokeConfigsResponse
       */
      Models::ListAsyncInvokeConfigsResponse listAsyncInvokeConfigsWithOptions(const Models::ListAsyncInvokeConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the asynchronous invocation configurations for one or more functions.
       *
       * @param request ListAsyncInvokeConfigsRequest
       * @return ListAsyncInvokeConfigsResponse
       */
      Models::ListAsyncInvokeConfigsResponse listAsyncInvokeConfigs(const Models::ListAsyncInvokeConfigsRequest &request);

      /**
       * @summary Lists the details of asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const string &functionName, const Models::ListAsyncTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the details of asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const string &functionName, const Models::ListAsyncTasksRequest &request);

      /**
       * @summary Lists the concurrency configurations.
       *
       * @param request ListConcurrencyConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConcurrencyConfigsResponse
       */
      Models::ListConcurrencyConfigsResponse listConcurrencyConfigsWithOptions(const Models::ListConcurrencyConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the concurrency configurations.
       *
       * @param request ListConcurrencyConfigsRequest
       * @return ListConcurrencyConfigsResponse
       */
      Models::ListConcurrencyConfigsResponse listConcurrencyConfigs(const Models::ListConcurrencyConfigsRequest &request);

      /**
       * @summary Retrieves a list of custom domain names.
       *
       * @param request ListCustomDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomainsWithOptions(const Models::ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of custom domain names.
       *
       * @param request ListCustomDomainsRequest
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomains(const Models::ListCustomDomainsRequest &request);

      /**
       * @summary Lists the versions of a specified function.
       *
       * @param request ListFunctionVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionVersionsResponse
       */
      Models::ListFunctionVersionsResponse listFunctionVersionsWithOptions(const string &functionName, const Models::ListFunctionVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the versions of a specified function.
       *
       * @param request ListFunctionVersionsRequest
       * @return ListFunctionVersionsResponse
       */
      Models::ListFunctionVersionsResponse listFunctionVersions(const string &functionName, const Models::ListFunctionVersionsRequest &request);

      /**
       * @summary Retrieves a list of functions.
       *
       * @description ListFunctions returns only a subset of function attribute fields. To retrieve more attribute fields for a specific function, including state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
       *
       * @param tmpReq ListFunctionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctionsWithOptions(const Models::ListFunctionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of functions.
       *
       * @description ListFunctions returns only a subset of function attribute fields. To retrieve more attribute fields for a specific function, including state, stateReasonCode, stateReason, lastUpdateStatus, lastUpdateStatusReasonCode, and lastUpdateStatusReason, use [GetFunction](https://help.aliyun.com/document_detail/2618610.html).
       *
       * @param request ListFunctionsRequest
       * @return ListFunctionsResponse
       */
      Models::ListFunctionsResponse listFunctions(const Models::ListFunctionsRequest &request);

      /**
       * @summary Lists function instances.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const string &functionName, const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists function instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const string &functionName, const Models::ListInstancesRequest &request);

      /**
       * @summary Retrieves a list of layer versions.
       *
       * @param request ListLayerVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayerVersionsResponse
       */
      Models::ListLayerVersionsResponse listLayerVersionsWithOptions(const string &layerName, const Models::ListLayerVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of layer versions.
       *
       * @param request ListLayerVersionsRequest
       * @return ListLayerVersionsResponse
       */
      Models::ListLayerVersionsResponse listLayerVersions(const string &layerName, const Models::ListLayerVersionsRequest &request);

      /**
       * @summary Lists layers.
       *
       * @param request ListLayersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayersWithOptions(const Models::ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists layers.
       *
       * @param request ListLayersRequest
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayers(const Models::ListLayersRequest &request);

      /**
       * @summary Retrieves a list of provisioned configurations.
       *
       * @param request ListProvisionConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProvisionConfigsResponse
       */
      Models::ListProvisionConfigsResponse listProvisionConfigsWithOptions(const Models::ListProvisionConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of provisioned configurations.
       *
       * @param request ListProvisionConfigsRequest
       * @return ListProvisionConfigsResponse
       */
      Models::ListProvisionConfigsResponse listProvisionConfigs(const Models::ListProvisionConfigsRequest &request);

      /**
       * @summary Lists the auto scaling configurations for a function.
       *
       * @param request ListScalingConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScalingConfigsResponse
       */
      Models::ListScalingConfigsResponse listScalingConfigsWithOptions(const Models::ListScalingConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the auto scaling configurations for a function.
       *
       * @param request ListScalingConfigsRequest
       * @return ListScalingConfigsResponse
       */
      Models::ListScalingConfigsResponse listScalingConfigs(const Models::ListScalingConfigsRequest &request);

      /**
       * @summary Lists sessions in Active or Expired status under a specified function. Supports filtering by qualifier, status, and session ID, and supports paged query. Returns basic session properties for batch viewing of session distribution and status, facilitating operations management and external system integration, and improving session visibility and management capability.
       *
       * @param request ListSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessionsWithOptions(const string &functionName, const Models::ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists sessions in Active or Expired status under a specified function. Supports filtering by qualifier, status, and session ID, and supports paged query. Returns basic session properties for batch viewing of session distribution and status, facilitating operations management and external system integration, and improving session visibility and management capability.
       *
       * @param request ListSessionsRequest
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessions(const string &functionName, const Models::ListSessionsRequest &request);

      /**
       * @summary 列出快照信息
       *
       * @description - 该 API 用于列出当前账号下可见的用户 MicroSandbox 快照。
       * - 仅返回未过期且状态为 Available 的用户快照。
       * - 支持四种筛选方式：账号级列表、按函数过滤、按函数和源 SessionID 过滤、按函数、源 SessionID 和创建时 qualifier 过滤。
       * - 结果按创建时间和快照 ID 稳定降序分页。
       * - ListSnapshots 使用搜索索引查询，短时间内可能存在最终一致性延迟；GetSnapshot 和使用快照创建 Session 以主表强读为准。
       *
       * @param request ListSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const Models::ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出快照信息
       *
       * @description - 该 API 用于列出当前账号下可见的用户 MicroSandbox 快照。
       * - 仅返回未过期且状态为 Available 的用户快照。
       * - 支持四种筛选方式：账号级列表、按函数过滤、按函数和源 SessionID 过滤、按函数、源 SessionID 和创建时 qualifier 过滤。
       * - 结果按创建时间和快照 ID 稳定降序分页。
       * - ListSnapshots 使用搜索索引查询，短时间内可能存在最终一致性延迟；GetSnapshot 和使用快照创建 Session 以主表强读为准。
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const Models::ListSnapshotsRequest &request);

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
       * @summary Lists the triggers for a specified function.
       *
       * @param request ListTriggersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggersWithOptions(const string &functionName, const Models::ListTriggersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the triggers for a specified function.
       *
       * @param request ListTriggersRequest
       * @return ListTriggersResponse
       */
      Models::ListTriggersResponse listTriggers(const string &functionName, const Models::ListTriggersRequest &request);

      /**
       * @summary Queries existing VPC attachments.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpcBindingsResponse
       */
      Models::ListVpcBindingsResponse listVpcBindingsWithOptions(const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries existing VPC attachments.
       *
       * @return ListVpcBindingsResponse
       */
      Models::ListVpcBindingsResponse listVpcBindings(const string &functionName);

      /**
       * @summary Pauses and saves a session.
       *
       * @description Pauses an active session by persisting the state of its associated runtime environment and then releasing compute resources. After the call, the session status changes to Paused, and the session no longer accepts function invocation requests. This operation retains the session configuration (such as SessionTTL) and SessionID. You can use this operation to interrupt long-running tasks or save snapshots of development environments for cost optimization and state management. This operation applies to custom image functions configured with the HEADER_FIELD or GENERATED_COOKIE affinity type and session isolation.
       *
       * @param request PauseSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseSessionResponse
       */
      Models::PauseSessionResponse pauseSessionWithOptions(const string &functionName, const string &sessionId, const Models::PauseSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses and saves a session.
       *
       * @description Pauses an active session by persisting the state of its associated runtime environment and then releasing compute resources. After the call, the session status changes to Paused, and the session no longer accepts function invocation requests. This operation retains the session configuration (such as SessionTTL) and SessionID. You can use this operation to interrupt long-running tasks or save snapshots of development environments for cost optimization and state management. This operation applies to custom image functions configured with the HEADER_FIELD or GENERATED_COOKIE affinity type and session isolation.
       *
       * @param request PauseSessionRequest
       * @return PauseSessionResponse
       */
      Models::PauseSessionResponse pauseSession(const string &functionName, const string &sessionId, const Models::PauseSessionRequest &request);

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
       * @summary Creates or updates the asynchronous invocation configuration for a function.
       *
       * @param request PutAsyncInvokeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutAsyncInvokeConfigResponse
       */
      Models::PutAsyncInvokeConfigResponse putAsyncInvokeConfigWithOptions(const string &functionName, const Models::PutAsyncInvokeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates the asynchronous invocation configuration for a function.
       *
       * @param request PutAsyncInvokeConfigRequest
       * @return PutAsyncInvokeConfigResponse
       */
      Models::PutAsyncInvokeConfigResponse putAsyncInvokeConfig(const string &functionName, const Models::PutAsyncInvokeConfigRequest &request);

      /**
       * @summary Sets the concurrency for a function.
       *
       * @param request PutConcurrencyConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutConcurrencyConfigResponse
       */
      Models::PutConcurrencyConfigResponse putConcurrencyConfigWithOptions(const string &functionName, const Models::PutConcurrencyConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the concurrency for a function.
       *
       * @param request PutConcurrencyConfigRequest
       * @return PutConcurrencyConfigResponse
       */
      Models::PutConcurrencyConfigResponse putConcurrencyConfig(const string &functionName, const Models::PutConcurrencyConfigRequest &request);

      /**
       * @summary Modifies the permissions of a layer.
       *
       * @param request PutLayerACLRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutLayerACLResponse
       */
      Models::PutLayerACLResponse putLayerACLWithOptions(const string &layerName, const Models::PutLayerACLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the permissions of a layer.
       *
       * @param request PutLayerACLRequest
       * @return PutLayerACLResponse
       */
      Models::PutLayerACLResponse putLayerACL(const string &layerName, const Models::PutLayerACLRequest &request);

      /**
       * @summary Creates a provisioned configuration.
       *
       * @param request PutProvisionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutProvisionConfigResponse
       */
      Models::PutProvisionConfigResponse putProvisionConfigWithOptions(const string &functionName, const Models::PutProvisionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a provisioned configuration.
       *
       * @param request PutProvisionConfigRequest
       * @return PutProvisionConfigResponse
       */
      Models::PutProvisionConfigResponse putProvisionConfig(const string &functionName, const Models::PutProvisionConfigRequest &request);

      /**
       * @summary Set the elastic scaling configuration for a function.
       *
       * @param request PutScalingConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutScalingConfigResponse
       */
      Models::PutScalingConfigResponse putScalingConfigWithOptions(const string &functionName, const Models::PutScalingConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set the elastic scaling configuration for a function.
       *
       * @param request PutScalingConfigRequest
       * @return PutScalingConfigResponse
       */
      Models::PutScalingConfigResponse putScalingConfig(const string &functionName, const Models::PutScalingConfigRequest &request);

      /**
       * @summary Resumes a session.
       *
       * @description Resumes a session that is in the Paused state. The system quickly restores the session in a new execution environment based on the previously persisted state, returning it to the state before it was paused. After the session is successfully resumed, its status changes back to Active, and it can continue to accept function calling requests and route them to the restored instance. This operation applies to custom image functions that have HEADER_FIELD or GENERATED_COOKIE affinity types configured and session isolation enabled.
       *
       * @param request ResumeSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeSessionResponse
       */
      Models::ResumeSessionResponse resumeSessionWithOptions(const string &functionName, const string &sessionId, const Models::ResumeSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a session.
       *
       * @description Resumes a session that is in the Paused state. The system quickly restores the session in a new execution environment based on the previously persisted state, returning it to the state before it was paused. After the session is successfully resumed, its status changes back to Active, and it can continue to accept function calling requests and route them to the restored instance. This operation applies to custom image functions that have HEADER_FIELD or GENERATED_COOKIE affinity types configured and session isolation enabled.
       *
       * @param request ResumeSessionRequest
       * @return ResumeSessionResponse
       */
      Models::ResumeSessionResponse resumeSession(const string &functionName, const string &sessionId, const Models::ResumeSessionRequest &request);

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
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

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
       * @summary Updates a custom domain name.
       *
       * @param request UpdateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomainWithOptions(const string &domainName, const Models::UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom domain name.
       *
       * @param request UpdateCustomDomainRequest
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomain(const string &domainName, const Models::UpdateCustomDomainRequest &request);

      /**
       * @summary Updates function information.
       *
       * @param request UpdateFunctionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunctionWithOptions(const string &functionName, const Models::UpdateFunctionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates function information.
       *
       * @param request UpdateFunctionRequest
       * @return UpdateFunctionResponse
       */
      Models::UpdateFunctionResponse updateFunction(const string &functionName, const Models::UpdateFunctionRequest &request);

      /**
       * @summary Updates the configuration of a session in Active status, such as lifecycle settings including SessionTTLInSeconds and SessionIdleTimeoutInSeconds. The changes take effect immediately, and LastModifiedTime is automatically refreshed. You can use this operation to extend or shorten the session validity period for dynamic management without changing the execution environment bound to the session.
       *
       * @param request UpdateSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSessionWithOptions(const string &functionName, const string &sessionId, const Models::UpdateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a session in Active status, such as lifecycle settings including SessionTTLInSeconds and SessionIdleTimeoutInSeconds. The changes take effect immediately, and LastModifiedTime is automatically refreshed. You can use this operation to extend or shorten the session validity period for dynamic management without changing the execution environment bound to the session.
       *
       * @param request UpdateSessionRequest
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSession(const string &functionName, const string &sessionId, const Models::UpdateSessionRequest &request);

      /**
       * @summary Updates the information of a trigger.
       *
       * @param request UpdateTriggerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTriggerWithOptions(const string &functionName, const string &triggerName, const Models::UpdateTriggerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a trigger.
       *
       * @param request UpdateTriggerRequest
       * @return UpdateTriggerResponse
       */
      Models::UpdateTriggerResponse updateTrigger(const string &functionName, const string &triggerName, const Models::UpdateTriggerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
