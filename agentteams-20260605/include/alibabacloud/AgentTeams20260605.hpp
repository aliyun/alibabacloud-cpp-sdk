// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTTEAMS20260605_HPP_
#define ALIBABACLOUD_AGENTTEAMS20260605_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentTeams20260605Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentTeams20260605.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 绑定上游身份提供商
       *
       * @param request BindIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindIdentityProviderResponse
       */
      Models::BindIdentityProviderResponse bindIdentityProviderWithOptions(const Models::BindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定上游身份提供商
       *
       * @param request BindIdentityProviderRequest
       * @return BindIdentityProviderResponse
       */
      Models::BindIdentityProviderResponse bindIdentityProvider(const Models::BindIdentityProviderRequest &request);

      /**
       * @summary 为指定AgentTeams实例异步开通并配置阿里云公网NAT网关。
       *
       * @description ## 请求说明
       * - 本接口用于为特定的AgentTeams实例创建公网NAT网关，并自动完成EIP申请、绑定以及SNAT规则的设置。
       * - 接口调用后将返回一个异步任务ID，实际的NAT网关、EIP及SNAT资源ID会在异步任务完成后通过任务结果提供。
       * - NAT网关名称由系统自动生成，格式为`magic-create-for-vpc-{vpcId}`。
       * - 支持GET和POST方法进行请求。
       * - `eipBandwidth`参数指定了自动申请EIP时的带宽大小，默认值为5Mbps，范围在1-200Mbps之间。
       * - 如果`instanceId`为空或无效，或者提供的`eipBandwidth`不在允许范围内，API将返回错误响应。
       *
       * @param request ConfigureNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureNatGatewayResponse
       */
      Models::ConfigureNatGatewayResponse configureNatGatewayWithOptions(const Models::ConfigureNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定AgentTeams实例异步开通并配置阿里云公网NAT网关。
       *
       * @description ## 请求说明
       * - 本接口用于为特定的AgentTeams实例创建公网NAT网关，并自动完成EIP申请、绑定以及SNAT规则的设置。
       * - 接口调用后将返回一个异步任务ID，实际的NAT网关、EIP及SNAT资源ID会在异步任务完成后通过任务结果提供。
       * - NAT网关名称由系统自动生成，格式为`magic-create-for-vpc-{vpcId}`。
       * - 支持GET和POST方法进行请求。
       * - `eipBandwidth`参数指定了自动申请EIP时的带宽大小，默认值为5Mbps，范围在1-200Mbps之间。
       * - 如果`instanceId`为空或无效，或者提供的`eipBandwidth`不在允许范围内，API将返回错误响应。
       *
       * @param request ConfigureNatGatewayRequest
       * @return ConfigureNatGatewayResponse
       */
      Models::ConfigureNatGatewayResponse configureNatGateway(const Models::ConfigureNatGatewayRequest &request);

      /**
       * @summary 创建凭证
       *
       * @param request CreateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const Models::CreateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建凭证
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const Models::CreateCredentialRequest &request);

      /**
       * @summary 用于创建指定配置的集群实例。
       *
       * @description ## 请求说明
       * - 本接口支持通过表单参数或 query 参数传递请求信息。
       * - `instanceSpec` 和 `networkType` 等部分参数有默认值，若未指定则使用默认值。
       * - 必须提供 `instanceName`, `regionId`, `vpcId`, 和 `vSwitchId` 参数。
       * - `networkType` 支持三种选项：`PRIVATE_PUBNET`, `PRIVATE_NET`, `PUB_NET`，默认为 `PRIVATE_NET`。
       * - 如果指定了 `zoneId`，则会尝试在该可用区创建实例；否则将根据系统策略选择合适的可用区。
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建指定配置的集群实例。
       *
       * @description ## 请求说明
       * - 本接口支持通过表单参数或 query 参数传递请求信息。
       * - `instanceSpec` 和 `networkType` 等部分参数有默认值，若未指定则使用默认值。
       * - 必须提供 `instanceName`, `regionId`, `vpcId`, 和 `vSwitchId` 参数。
       * - `networkType` 支持三种选项：`PRIVATE_PUBNET`, `PRIVATE_NET`, `PUB_NET`，默认为 `PRIVATE_NET`。
       * - 如果指定了 `zoneId`，则会尝试在该可用区创建实例；否则将根据系统策略选择合适的可用区。
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param tmpReq CreateMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcpWithOptions(const Models::CreateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request CreateMcpRequest
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcp(const Models::CreateMcpRequest &request);

      /**
       * @summary 创建模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param tmpReq CreateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const Models::CreateModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const Models::CreateModelRequest &request);

      /**
       * @summary 创建模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param tmpReq CreateModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProviderResponse
       */
      Models::CreateModelProviderResponse createModelProviderWithOptions(const Models::CreateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request CreateModelProviderRequest
       * @return CreateModelProviderResponse
       */
      Models::CreateModelProviderResponse createModelProvider(const Models::CreateModelProviderRequest &request);

      /**
       * @summary 用于创建指定实例的Endpoint，支持多种组件和网关类型。
       *
       * @description ## 请求说明
       * - 当前controller使用的是普通参数绑定，不是`@RequestBody`，因此参数更适合按query/form方式传递。
       * - `domain`字段会在服务端进行`trim + lowerCase`处理。
       * - `query`和`headers`必须是JSON object字符串格式，不能为数组。
       * - 创建操作仅将数据保存到数据库；只有在更新时，如果满足`ELEMENT/MATRIX + AI_GATEWAY + INTERNET`且域名或证书发生变化，才会触发AI Gateway域名同步逻辑。
       *
       * @param request CreateServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceEndpointResponse
       */
      Models::CreateServiceEndpointResponse createServiceEndpointWithOptions(const Models::CreateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于创建指定实例的Endpoint，支持多种组件和网关类型。
       *
       * @description ## 请求说明
       * - 当前controller使用的是普通参数绑定，不是`@RequestBody`，因此参数更适合按query/form方式传递。
       * - `domain`字段会在服务端进行`trim + lowerCase`处理。
       * - `query`和`headers`必须是JSON object字符串格式，不能为数组。
       * - 创建操作仅将数据保存到数据库；只有在更新时，如果满足`ELEMENT/MATRIX + AI_GATEWAY + INTERNET`且域名或证书发生变化，才会触发AI Gateway域名同步逻辑。
       *
       * @param request CreateServiceEndpointRequest
       * @return CreateServiceEndpointResponse
       */
      Models::CreateServiceEndpointResponse createServiceEndpoint(const Models::CreateServiceEndpointRequest &request);

      /**
       * @summary 创建团队
       *
       * @param tmpReq CreateTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const Models::CreateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建团队
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const Models::CreateTeamRequest &request);

      /**
       * @summary 创建用户
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary 创建Worker
       *
       * @param tmpReq CreateWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkerResponse
       */
      Models::CreateWorkerResponse createWorkerWithOptions(const Models::CreateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Worker
       *
       * @param request CreateWorkerRequest
       * @return CreateWorkerResponse
       */
      Models::CreateWorkerResponse createWorker(const Models::CreateWorkerRequest &request);

      /**
       * @summary 创建Worker本地纳管启动Token
       *
       * @param request CreateWorkerBootstrapTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkerBootstrapTokenResponse
       */
      Models::CreateWorkerBootstrapTokenResponse createWorkerBootstrapTokenWithOptions(const Models::CreateWorkerBootstrapTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Worker本地纳管启动Token
       *
       * @param request CreateWorkerBootstrapTokenRequest
       * @return CreateWorkerBootstrapTokenResponse
       */
      Models::CreateWorkerBootstrapTokenResponse createWorkerBootstrapToken(const Models::CreateWorkerBootstrapTokenRequest &request);

      /**
       * @summary 删除凭证
       *
       * @param request DeleteCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const Models::DeleteCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除凭证
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const Models::DeleteCredentialRequest &request);

      /**
       * @summary 用于释放指定的AgentTeams实例，并清理相关资源。
       *
       * @description ## 请求说明
       * - 本API支持`GET`和`POST`方法，两者语义相同。
       * - 使用`POST`方法时，参数通过`application/x-www-form-urlencoded`格式提交。
       * - 当前实例状态为`CREATING`、`DELETING`或`DELETED`时，请求将被拒绝。
       * - 成功调用后，实例状态将首先更改为`DELETING`，实际的资源清理过程由后台异步执行。
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于释放指定的AgentTeams实例，并清理相关资源。
       *
       * @description ## 请求说明
       * - 本API支持`GET`和`POST`方法，两者语义相同。
       * - 使用`POST`方法时，参数通过`application/x-www-form-urlencoded`格式提交。
       * - 当前实例状态为`CREATING`、`DELETING`或`DELETED`时，请求将被拒绝。
       * - 成功调用后，实例状态将首先更改为`DELETING`，实际的资源清理过程由后台异步执行。
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary 删除MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcpWithOptions(const Models::DeleteMcpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteMcpRequest
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcp(const Models::DeleteMcpRequest &request);

      /**
       * @summary 删除模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const Models::DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const Models::DeleteModelRequest &request);

      /**
       * @summary 删除模型供应商
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProviderResponse
       */
      Models::DeleteModelProviderResponse deleteModelProviderWithOptions(const Models::DeleteModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型供应商
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request DeleteModelProviderRequest
       * @return DeleteModelProviderResponse
       */
      Models::DeleteModelProviderResponse deleteModelProvider(const Models::DeleteModelProviderRequest &request);

      /**
       * @summary 用于删除指定AgentTeams实例下的endpoint，并清理相关资源。
       *
       * @description ## 请求说明
       * - 该接口支持通过GET或POST方法调用。
       * - 如果目标endpoint是`WORKER`类型，系统将自动清理与之关联的APIG/AI Gateway云资源及KubeOne worker service配置。
       * - 请求参数必须包含`instanceId`和`endpointId`，且不能为空。
       * - 成功响应会返回HTTP状态码200以及成功标志；错误响应则根据具体情况返回相应的HTTP状态码（如400、404、409）及错误信息。
       *
       * @param request DeleteServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceEndpointResponse
       */
      Models::DeleteServiceEndpointResponse deleteServiceEndpointWithOptions(const Models::DeleteServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于删除指定AgentTeams实例下的endpoint，并清理相关资源。
       *
       * @description ## 请求说明
       * - 该接口支持通过GET或POST方法调用。
       * - 如果目标endpoint是`WORKER`类型，系统将自动清理与之关联的APIG/AI Gateway云资源及KubeOne worker service配置。
       * - 请求参数必须包含`instanceId`和`endpointId`，且不能为空。
       * - 成功响应会返回HTTP状态码200以及成功标志；错误响应则根据具体情况返回相应的HTTP状态码（如400、404、409）及错误信息。
       *
       * @param request DeleteServiceEndpointRequest
       * @return DeleteServiceEndpointResponse
       */
      Models::DeleteServiceEndpointResponse deleteServiceEndpoint(const Models::DeleteServiceEndpointRequest &request);

      /**
       * @summary 删除团队
       *
       * @param request DeleteTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const Models::DeleteTeamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除团队
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const Models::DeleteTeamRequest &request);

      /**
       * @summary 删除用户
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary 删除Worker
       *
       * @param request DeleteWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkerResponse
       */
      Models::DeleteWorkerResponse deleteWorkerWithOptions(const Models::DeleteWorkerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Worker
       *
       * @param request DeleteWorkerRequest
       * @return DeleteWorkerResponse
       */
      Models::DeleteWorkerResponse deleteWorker(const Models::DeleteWorkerRequest &request);

      /**
       * @summary 查询凭证详情
       *
       * @param request GetCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const Models::GetCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询凭证详情
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const Models::GetCredentialRequest &request);

      /**
       * @summary 查询指定类型的上游身份提供商详情
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定类型的上游身份提供商详情
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary 通过实例ID查询指定实例的详细信息。
       *
       * @description ## 请求说明
       * - 该接口支持`GET`和`POST`方法。
       * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
       * - `X-Acs-Request-Id`为可选项，如果提供，则响应中的`requestId`将优先使用此值。
       * - 必须通过`instanceId`参数指定要查询的实例。
       * - 成功响应会返回实例的详细配置信息及状态。
       * - 如果请求失败，根据错误类型返回相应的HTTP状态码及错误消息。
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过实例ID查询指定实例的详细信息。
       *
       * @description ## 请求说明
       * - 该接口支持`GET`和`POST`方法。
       * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
       * - `X-Acs-Request-Id`为可选项，如果提供，则响应中的`requestId`将优先使用此值。
       * - 必须通过`instanceId`参数指定要查询的实例。
       * - 成功响应会返回实例的详细配置信息及状态。
       * - 如果请求失败，根据错误类型返回相应的HTTP状态码及错误消息。
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary 查询指定AgentTeams实例关联的异步任务状态，支持分页。
       *
       * @description ## 请求说明
       * - 本接口用于查询特定AgentTeams实例下的异步任务执行状态。
       * - 目前仅支持查询与实例生命周期相关的创建实例任务。
       * - 可通过`taskCode`参数指定要查询的任务类型，默认为创建实例任务。
       * - 支持使用`maxResults`和`nextToken`进行结果分页。
       * - 当任务处于暂停(`PAUSED`)状态时，会返回用户需要采取行动的信息(`recoveryMessage`)。
       * - 注意：当前不支持通过`taskId`直接查询任务状态。
       *
       * @param request GetInstanceAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAsyncTaskResponse
       */
      Models::GetInstanceAsyncTaskResponse getInstanceAsyncTaskWithOptions(const Models::GetInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定AgentTeams实例关联的异步任务状态，支持分页。
       *
       * @description ## 请求说明
       * - 本接口用于查询特定AgentTeams实例下的异步任务执行状态。
       * - 目前仅支持查询与实例生命周期相关的创建实例任务。
       * - 可通过`taskCode`参数指定要查询的任务类型，默认为创建实例任务。
       * - 支持使用`maxResults`和`nextToken`进行结果分页。
       * - 当任务处于暂停(`PAUSED`)状态时，会返回用户需要采取行动的信息(`recoveryMessage`)。
       * - 注意：当前不支持通过`taskId`直接查询任务状态。
       *
       * @param request GetInstanceAsyncTaskRequest
       * @return GetInstanceAsyncTaskResponse
       */
      Models::GetInstanceAsyncTaskResponse getInstanceAsyncTask(const Models::GetInstanceAsyncTaskRequest &request);

      /**
       * @summary 获取实例 OSS 挂载到 ACS 所需的 RAM 授权链接。
       *
       * @description ## 请求说明
       * - 该接口支持`GET`和`POST`方法。
       * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
       * - 必须通过`instanceId`参数指定实例，后端会根据实例信息生成授权链接。
       * - 成功响应会返回 RAM 控制台授权链接，不会创建 RAM 角色或策略。
       *
       * @param request GetInstanceOssMountRamAuthorizeUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceOssMountRamAuthorizeUrlResponse
       */
      Models::GetInstanceOssMountRamAuthorizeUrlResponse getInstanceOssMountRamAuthorizeUrlWithOptions(const Models::GetInstanceOssMountRamAuthorizeUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例 OSS 挂载到 ACS 所需的 RAM 授权链接。
       *
       * @description ## 请求说明
       * - 该接口支持`GET`和`POST`方法。
       * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
       * - 必须通过`instanceId`参数指定实例，后端会根据实例信息生成授权链接。
       * - 成功响应会返回 RAM 控制台授权链接，不会创建 RAM 角色或策略。
       *
       * @param request GetInstanceOssMountRamAuthorizeUrlRequest
       * @return GetInstanceOssMountRamAuthorizeUrlResponse
       */
      Models::GetInstanceOssMountRamAuthorizeUrlResponse getInstanceOssMountRamAuthorizeUrl(const Models::GetInstanceOssMountRamAuthorizeUrlRequest &request);

      /**
       * @summary 查询MCP详情
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request GetMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcpWithOptions(const Models::GetMcpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询MCP详情
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request GetMcpRequest
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcp(const Models::GetMcpRequest &request);

      /**
       * @summary 模型调用摘要
       *
       * @param request GetModelInvocationSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelInvocationSummaryResponse
       */
      Models::GetModelInvocationSummaryResponse getModelInvocationSummaryWithOptions(const Models::GetModelInvocationSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型调用摘要
       *
       * @param request GetModelInvocationSummaryRequest
       * @return GetModelInvocationSummaryResponse
       */
      Models::GetModelInvocationSummaryResponse getModelInvocationSummary(const Models::GetModelInvocationSummaryRequest &request);

      /**
       * @summary 查询模型供应商详情
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request GetModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelProviderResponse
       */
      Models::GetModelProviderResponse getModelProviderWithOptions(const Models::GetModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型供应商详情
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request GetModelProviderRequest
       * @return GetModelProviderResponse
       */
      Models::GetModelProviderResponse getModelProvider(const Models::GetModelProviderRequest &request);

      /**
       * @summary 查询指定实例的NAT网关及其SNAT规则的配置状态。
       *
       * @description ## 请求说明
       * 通过此API，您可以获取特定实例关联的NAT网关配置详情及SNAT规则的状态。该接口支持GET或POST方法调用，并需要提供`instanceId`作为请求参数来指定要查询的实例。
       * ### 注意事项
       * - 确保提供的`instanceId`是有效的且属于您的账户。
       * - 根据返回的状态值（如`READY`, `NEED_CONFIGURE_NAT_GATEWAY`, `NEED_CONFIGURE_SNAT_RULE`），采取相应的操作以完成NAT网关或SNAT规则的配置。
       * - 当状态为`NEED_CONFIGURE_NAT_GATEWAY`时，表示当前VPC下没有可用的NAT网关；而`NEED_CONFIGURE_SNAT_RULE`则意味着虽然存在NAT网关但某些子网CIDR未被SNAT规则覆盖。
       *
       * @param request GetNatGatewayStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatGatewayStatusResponse
       */
      Models::GetNatGatewayStatusResponse getNatGatewayStatusWithOptions(const Models::GetNatGatewayStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定实例的NAT网关及其SNAT规则的配置状态。
       *
       * @description ## 请求说明
       * 通过此API，您可以获取特定实例关联的NAT网关配置详情及SNAT规则的状态。该接口支持GET或POST方法调用，并需要提供`instanceId`作为请求参数来指定要查询的实例。
       * ### 注意事项
       * - 确保提供的`instanceId`是有效的且属于您的账户。
       * - 根据返回的状态值（如`READY`, `NEED_CONFIGURE_NAT_GATEWAY`, `NEED_CONFIGURE_SNAT_RULE`），采取相应的操作以完成NAT网关或SNAT规则的配置。
       * - 当状态为`NEED_CONFIGURE_NAT_GATEWAY`时，表示当前VPC下没有可用的NAT网关；而`NEED_CONFIGURE_SNAT_RULE`则意味着虽然存在NAT网关但某些子网CIDR未被SNAT规则覆盖。
       *
       * @param request GetNatGatewayStatusRequest
       * @return GetNatGatewayStatusResponse
       */
      Models::GetNatGatewayStatusResponse getNatGatewayStatus(const Models::GetNatGatewayStatusRequest &request);

      /**
       * @summary 查询指定ID的Endpoint详细信息，支持通过实例ID进行校验。
       *
       * @description ## 请求说明
       * - 该API用于根据`endpointId`查询单个Endpoint的具体配置与状态信息。
       * - 可选参数`instanceId`用于验证Endpoint是否属于特定实例。
       * - 请求方式支持`GET`和`POST`，其中`GET`使用query string传递参数，而`POST`则可以通过form参数提交。
       * - 如果`endpointId`缺失或为空，则会返回`InvalidParameter`错误。
       * - 当请求的Endpoint不存在、不属于提供的实例或者不属于当前用户时，将收到相应的资源不存在类错误响应。
       *
       * @param request GetServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpointWithOptions(const Models::GetServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定ID的Endpoint详细信息，支持通过实例ID进行校验。
       *
       * @description ## 请求说明
       * - 该API用于根据`endpointId`查询单个Endpoint的具体配置与状态信息。
       * - 可选参数`instanceId`用于验证Endpoint是否属于特定实例。
       * - 请求方式支持`GET`和`POST`，其中`GET`使用query string传递参数，而`POST`则可以通过form参数提交。
       * - 如果`endpointId`缺失或为空，则会返回`InvalidParameter`错误。
       * - 当请求的Endpoint不存在、不属于提供的实例或者不属于当前用户时，将收到相应的资源不存在类错误响应。
       *
       * @param request GetServiceEndpointRequest
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpoint(const Models::GetServiceEndpointRequest &request);

      /**
       * @summary 任务统计摘要
       *
       * @param request GetTaskStatsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatsSummaryResponse
       */
      Models::GetTaskStatsSummaryResponse getTaskStatsSummaryWithOptions(const Models::GetTaskStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务统计摘要
       *
       * @param request GetTaskStatsSummaryRequest
       * @return GetTaskStatsSummaryResponse
       */
      Models::GetTaskStatsSummaryResponse getTaskStatsSummary(const Models::GetTaskStatsSummaryRequest &request);

      /**
       * @summary 查询团队详情
       *
       * @param request GetTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const Models::GetTeamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询团队详情
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const Models::GetTeamRequest &request);

      /**
       * @summary Token趋势统计
       *
       * @param request GetTokenTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenTrendResponse
       */
      Models::GetTokenTrendResponse getTokenTrendWithOptions(const Models::GetTokenTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Token趋势统计
       *
       * @param request GetTokenTrendRequest
       * @return GetTokenTrendResponse
       */
      Models::GetTokenTrendResponse getTokenTrend(const Models::GetTokenTrendRequest &request);

      /**
       * @summary 工具调用分布
       *
       * @param request GetToolCallDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetToolCallDistributionResponse
       */
      Models::GetToolCallDistributionResponse getToolCallDistributionWithOptions(const Models::GetToolCallDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工具调用分布
       *
       * @param request GetToolCallDistributionRequest
       * @return GetToolCallDistributionResponse
       */
      Models::GetToolCallDistributionResponse getToolCallDistribution(const Models::GetToolCallDistributionRequest &request);

      /**
       * @summary 查询用户详情
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户详情
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 获取用户初始密码
       *
       * @param request GetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPasswordResponse
       */
      Models::GetUserPasswordResponse getUserPasswordWithOptions(const Models::GetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户初始密码
       *
       * @param request GetUserPasswordRequest
       * @return GetUserPasswordResponse
       */
      Models::GetUserPasswordResponse getUserPassword(const Models::GetUserPasswordRequest &request);

      /**
       * @summary 查询Worker详情
       *
       * @param request GetWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerResponse
       */
      Models::GetWorkerResponse getWorkerWithOptions(const Models::GetWorkerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Worker详情
       *
       * @param request GetWorkerRequest
       * @return GetWorkerResponse
       */
      Models::GetWorkerResponse getWorker(const Models::GetWorkerRequest &request);

      /**
       * @summary 查询Worker本地纳管启动选项
       *
       * @param request GetWorkerBootstrapOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerBootstrapOptionsResponse
       */
      Models::GetWorkerBootstrapOptionsResponse getWorkerBootstrapOptionsWithOptions(const Models::GetWorkerBootstrapOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Worker本地纳管启动选项
       *
       * @param request GetWorkerBootstrapOptionsRequest
       * @return GetWorkerBootstrapOptionsResponse
       */
      Models::GetWorkerBootstrapOptionsResponse getWorkerBootstrapOptions(const Models::GetWorkerBootstrapOptionsRequest &request);

      /**
       * @summary 查询Worker最大可升级版本
       *
       * @param request GetWorkerMaxVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerMaxVersionResponse
       */
      Models::GetWorkerMaxVersionResponse getWorkerMaxVersionWithOptions(const Models::GetWorkerMaxVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Worker最大可升级版本
       *
       * @param request GetWorkerMaxVersionRequest
       * @return GetWorkerMaxVersionResponse
       */
      Models::GetWorkerMaxVersionResponse getWorkerMaxVersion(const Models::GetWorkerMaxVersionRequest &request);

      /**
       * @summary Worker统计摘要
       *
       * @param request GetWorkerStatsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerStatsSummaryResponse
       */
      Models::GetWorkerStatsSummaryResponse getWorkerStatsSummaryWithOptions(const Models::GetWorkerStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Worker统计摘要
       *
       * @param request GetWorkerStatsSummaryRequest
       * @return GetWorkerStatsSummaryResponse
       */
      Models::GetWorkerStatsSummaryResponse getWorkerStatsSummary(const Models::GetWorkerStatsSummaryRequest &request);

      /**
       * @summary 查询凭证列表
       *
       * @param request ListCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const Models::ListCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询凭证列表
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const Models::ListCredentialsRequest &request);

      /**
       * @summary 查询上游身份提供商绑定列表
       *
       * @param request ListIdentityProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const Models::ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询上游身份提供商绑定列表
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary 用于查询符合条件的实例列表，并支持分页和模糊匹配。
       *
       * @description ## 请求说明
       * - **分页规则**：
       *   - 如果传了 `NextToken`，优先按 `NextToken` 解析 offset。
       *   - 如果没传 `NextToken`，则使用 `skip`。
       *   - `MaxResults` 的取值范围为 1 到 100，非法值会返回 `400` 错误。
       *   - `NextToken` 必须是有效的整数，否则会返回 `400` 错误。
       *   - `skip` 的值不能小于 0，否则会返回 `400` 错误。
       * - **排序规则**：列表按创建时间倒序返回。
       * - **请求参数**：
       *   - `instanceName`：实例名称，支持模糊匹配。
       *   - `status`：实例状态。
       *   - `MaxResults`：分页大小，默认值为 20。
       *   - `NextToken`：下一页游标。
       *   - `skip`：跳过的记录数，默认值为 0。
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于查询符合条件的实例列表，并支持分页和模糊匹配。
       *
       * @description ## 请求说明
       * - **分页规则**：
       *   - 如果传了 `NextToken`，优先按 `NextToken` 解析 offset。
       *   - 如果没传 `NextToken`，则使用 `skip`。
       *   - `MaxResults` 的取值范围为 1 到 100，非法值会返回 `400` 错误。
       *   - `NextToken` 必须是有效的整数，否则会返回 `400` 错误。
       *   - `skip` 的值不能小于 0，否则会返回 `400` 错误。
       * - **排序规则**：列表按创建时间倒序返回。
       * - **请求参数**：
       *   - `instanceName`：实例名称，支持模糊匹配。
       *   - `status`：实例状态。
       *   - `MaxResults`：分页大小，默认值为 20。
       *   - `NextToken`：下一页游标。
       *   - `skip`：跳过的记录数，默认值为 0。
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 测试模型供应商和模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有Magic实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListMcpToolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpToolsWithOptions(const Models::ListMcpToolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试模型供应商和模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有Magic实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListMcpToolsRequest
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpTools(const Models::ListMcpToolsRequest &request);

      /**
       * @summary 查询MCP列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListMcpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcpsWithOptions(const Models::ListMcpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询MCP列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListMcpsRequest
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcps(const Models::ListMcpsRequest &request);

      /**
       * @summary 查询模型供应商列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListModelProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProvidersWithOptions(const Models::ListModelProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型供应商列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListModelProvidersRequest
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProviders(const Models::ListModelProvidersRequest &request);

      /**
       * @summary 查询模型列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const Models::ListModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型列表
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const Models::ListModelsRequest &request);

      /**
       * @summary 此API用于查询指定实例下的AI网关端点列表。
       *
       * @description ## 请求说明
       * - `instanceId` 是必填参数，用来指定 AgentTeams 实例 ID。
       * - 可选参数包括 `component`, `serviceName`, `networkType`, 和 `domainType`，用于进一步筛选返回的端点列表。
       * - 不支持通过 `status` 参数进行筛选。
       *
       * @param request ListServiceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpointsWithOptions(const Models::ListServiceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 此API用于查询指定实例下的AI网关端点列表。
       *
       * @description ## 请求说明
       * - `instanceId` 是必填参数，用来指定 AgentTeams 实例 ID。
       * - 可选参数包括 `component`, `serviceName`, `networkType`, 和 `domainType`，用于进一步筛选返回的端点列表。
       * - 不支持通过 `status` 参数进行筛选。
       *
       * @param request ListServiceEndpointsRequest
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpoints(const Models::ListServiceEndpointsRequest &request);

      /**
       * @summary 查询用户侧APIG可用的SSL证书列表
       *
       * @description ## 请求说明
       * - 该API用于获取与指定AgentTeams实例相关的SSL证书列表。
       * - 可通过`certNameLike`和`domainName`参数进行模糊搜索或精确匹配证书名称及绑定域名。
       * - 分页参数`pageNumber`和`pageSize`允许客户端控制返回结果的数量和页码，默认每页显示10条记录。
       * - 成功响应将包含请求ID、是否成功标志、错误代码（如果有的话）、HTTP状态码、本次请求的最大结果数、下一页标记（如果有更多数据的话）、总证书数量以及具体的证书详情列表。
       *
       * @param request ListSslCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCertsWithOptions(const Models::ListSslCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户侧APIG可用的SSL证书列表
       *
       * @description ## 请求说明
       * - 该API用于获取与指定AgentTeams实例相关的SSL证书列表。
       * - 可通过`certNameLike`和`domainName`参数进行模糊搜索或精确匹配证书名称及绑定域名。
       * - 分页参数`pageNumber`和`pageSize`允许客户端控制返回结果的数量和页码，默认每页显示10条记录。
       * - 成功响应将包含请求ID、是否成功标志、错误代码（如果有的话）、HTTP状态码、本次请求的最大结果数、下一页标记（如果有更多数据的话）、总证书数量以及具体的证书详情列表。
       *
       * @param request ListSslCertsRequest
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCerts(const Models::ListSslCertsRequest &request);

      /**
       * @summary 团队详情列表
       *
       * @param request ListTeamDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamDetailsResponse
       */
      Models::ListTeamDetailsResponse listTeamDetailsWithOptions(const Models::ListTeamDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 团队详情列表
       *
       * @param request ListTeamDetailsRequest
       * @return ListTeamDetailsResponse
       */
      Models::ListTeamDetailsResponse listTeamDetails(const Models::ListTeamDetailsRequest &request);

      /**
       * @summary 查询Team任务列表
       *
       * @param request ListTeamTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamTasksResponse
       */
      Models::ListTeamTasksResponse listTeamTasksWithOptions(const Models::ListTeamTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Team任务列表
       *
       * @param request ListTeamTasksRequest
       * @return ListTeamTasksResponse
       */
      Models::ListTeamTasksResponse listTeamTasks(const Models::ListTeamTasksRequest &request);

      /**
       * @summary 查询团队列表
       *
       * @param request ListTeamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const Models::ListTeamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询团队列表
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const Models::ListTeamsRequest &request);

      /**
       * @summary 查询用户列表
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户列表
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Worker统计详情列表
       *
       * @param request ListWorkerStatsDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkerStatsDetailsResponse
       */
      Models::ListWorkerStatsDetailsResponse listWorkerStatsDetailsWithOptions(const Models::ListWorkerStatsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Worker统计详情列表
       *
       * @param request ListWorkerStatsDetailsRequest
       * @return ListWorkerStatsDetailsResponse
       */
      Models::ListWorkerStatsDetailsResponse listWorkerStatsDetails(const Models::ListWorkerStatsDetailsRequest &request);

      /**
       * @summary 查询Worker列表
       *
       * @param tmpReq ListWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkersResponse
       */
      Models::ListWorkersResponse listWorkersWithOptions(const Models::ListWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Worker列表
       *
       * @param request ListWorkersRequest
       * @return ListWorkersResponse
       */
      Models::ListWorkersResponse listWorkers(const Models::ListWorkersRequest &request);

      /**
       * @summary 创建或更新CMS工作空间
       *
       * @param request PutCmsWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCmsWorkspaceResponse
       */
      Models::PutCmsWorkspaceResponse putCmsWorkspaceWithOptions(const Models::PutCmsWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建或更新CMS工作空间
       *
       * @param request PutCmsWorkspaceRequest
       * @return PutCmsWorkspaceResponse
       */
      Models::PutCmsWorkspaceResponse putCmsWorkspace(const Models::PutCmsWorkspaceRequest &request);

      /**
       * @summary 查询指定实例、worker、团队或个人的功能特性状态。
       *
       * @description ## 请求说明
       * - 该接口用于查询特定`instanceId`下的不同目标（如`INSTANCE`、`WORKER`、`TEAM`、`HUMAN`）的功能特性状态。
       * - `targetScope`参数定义了查询的目标类型，根据不同的`targetScope`值，可能需要提供额外的`resourceName`参数来指定具体的资源名称。
       * - 如果提供了`featureCodes`列表，则返回这些特定功能特性的状态；否则，将返回指定`targetScope`下所有功能特性的状态。
       * - 当使用`WORKER`、`TEAM`或`HUMAN`作为`targetScope`时，请确保正确填写对应的`resourceName`。
       * - 对于`INSTANCE`级别的查询，无需提供`resourceName`。
       * - 特性支持情况受基础版本、工作器版本等因素影响，并通过`unsupportedReasonCode`和`unsupportedReason`字段给出不支持的具体原因。
       *
       * @param request QueryFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFeaturesResponse
       */
      Models::QueryFeaturesResponse queryFeaturesWithOptions(const Models::QueryFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定实例、worker、团队或个人的功能特性状态。
       *
       * @description ## 请求说明
       * - 该接口用于查询特定`instanceId`下的不同目标（如`INSTANCE`、`WORKER`、`TEAM`、`HUMAN`）的功能特性状态。
       * - `targetScope`参数定义了查询的目标类型，根据不同的`targetScope`值，可能需要提供额外的`resourceName`参数来指定具体的资源名称。
       * - 如果提供了`featureCodes`列表，则返回这些特定功能特性的状态；否则，将返回指定`targetScope`下所有功能特性的状态。
       * - 当使用`WORKER`、`TEAM`或`HUMAN`作为`targetScope`时，请确保正确填写对应的`resourceName`。
       * - 对于`INSTANCE`级别的查询，无需提供`resourceName`。
       * - 特性支持情况受基础版本、工作器版本等因素影响，并通过`unsupportedReasonCode`和`unsupportedReason`字段给出不支持的具体原因。
       *
       * @param request QueryFeaturesRequest
       * @return QueryFeaturesResponse
       */
      Models::QueryFeaturesResponse queryFeatures(const Models::QueryFeaturesRequest &request);

      /**
       * @summary 获取当前AgentTeams Resource Pool配置支持的所有可用区ID。
       *
       * @description ## 请求说明
       *
       * @param request QuerySupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupportedZonesResponse
       */
      Models::QuerySupportedZonesResponse querySupportedZonesWithOptions(const Models::QuerySupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前AgentTeams Resource Pool配置支持的所有可用区ID。
       *
       * @description ## 请求说明
       *
       * @param request QuerySupportedZonesRequest
       * @return QuerySupportedZonesResponse
       */
      Models::QuerySupportedZonesResponse querySupportedZones(const Models::QuerySupportedZonesRequest &request);

      /**
       * @summary 设置用户密码
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置用户密码
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary 测试模型供应商和模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request TestModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestModelProviderResponse
       */
      Models::TestModelProviderResponse testModelProviderWithOptions(const Models::TestModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试模型供应商和模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request TestModelProviderRequest
       * @return TestModelProviderResponse
       */
      Models::TestModelProviderResponse testModelProvider(const Models::TestModelProviderRequest &request);

      /**
       * @summary 解绑上游身份提供商
       *
       * @param request UnbindIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindIdentityProviderResponse
       */
      Models::UnbindIdentityProviderResponse unbindIdentityProviderWithOptions(const Models::UnbindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑上游身份提供商
       *
       * @param request UnbindIdentityProviderRequest
       * @return UnbindIdentityProviderResponse
       */
      Models::UnbindIdentityProviderResponse unbindIdentityProvider(const Models::UnbindIdentityProviderRequest &request);

      /**
       * @summary 更新凭证密钥
       *
       * @description ## 请求说明
       * - 该接口用于更新 AgentTeams 实例下已有 Credential 的密钥明文。
       * - 仅更新 Agent Identity TokenVault 中同名 APIKeyCredentialProvider 的密钥值，不修改本地元数据（description、createTime、updateTime、status）。
       * - 响应不包含 apiKey 明文；如需绑定 Worker 明细请调用 GetCredential。
       *
       * @param request UpdateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const Models::UpdateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新凭证密钥
       *
       * @description ## 请求说明
       * - 该接口用于更新 AgentTeams 实例下已有 Credential 的密钥明文。
       * - 仅更新 Agent Identity TokenVault 中同名 APIKeyCredentialProvider 的密钥值，不修改本地元数据（description、createTime、updateTime、status）。
       * - 响应不包含 apiKey 明文；如需绑定 Worker 明细请调用 GetCredential。
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const Models::UpdateCredentialRequest &request);

      /**
       * @summary 更新上游身份提供商绑定
       *
       * @param request UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新上游身份提供商绑定
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary 用于更改指定AgentTeams实例的名称，支持通过GET或POST方法调用。
       *
       * @description ## 请求说明
       * - 推荐使用`POST`方法，并以表单形式提交参数。
       * - 当前实现不支持JSON格式的请求体，请勿尝试使用`@RequestBody`方式调用。
       * - 必须提供有效的`instanceId`和非空的`instanceName`作为参数。
       * - 该接口仅允许修改实例名称(`instanceName`)，不允许通过此接口变更命名空间(`namespace`)。
       *
       * @param tmpReq UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于更改指定AgentTeams实例的名称，支持通过GET或POST方法调用。
       *
       * @description ## 请求说明
       * - 推荐使用`POST`方法，并以表单形式提交参数。
       * - 当前实现不支持JSON格式的请求体，请勿尝试使用`@RequestBody`方式调用。
       * - 必须提供有效的`instanceId`和非空的`instanceName`作为参数。
       * - 该接口仅允许修改实例名称(`instanceName`)，不允许通过此接口变更命名空间(`namespace`)。
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary 重启暂停中的创建实例异步任务。
       *
       * @description ## 请求说明
       * - 该接口用于重新启动一个处于暂停状态的创建实例任务。
       * - 目前仅支持 `agentteams:pay-order:create` 类型的任务。
       * - 确保提供的 `instanceId`、`taskCode` 和 `taskId` 参数准确无误，否则可能导致请求失败。
       * - 如果任务不是暂停状态（PAUSED），则不允许调用此接口进行更新。
       *
       * @param request UpdateInstanceAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAsyncTaskResponse
       */
      Models::UpdateInstanceAsyncTaskResponse updateInstanceAsyncTaskWithOptions(const Models::UpdateInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启暂停中的创建实例异步任务。
       *
       * @description ## 请求说明
       * - 该接口用于重新启动一个处于暂停状态的创建实例任务。
       * - 目前仅支持 `agentteams:pay-order:create` 类型的任务。
       * - 确保提供的 `instanceId`、`taskCode` 和 `taskId` 参数准确无误，否则可能导致请求失败。
       * - 如果任务不是暂停状态（PAUSED），则不允许调用此接口进行更新。
       *
       * @param request UpdateInstanceAsyncTaskRequest
       * @return UpdateInstanceAsyncTaskResponse
       */
      Models::UpdateInstanceAsyncTaskResponse updateInstanceAsyncTask(const Models::UpdateInstanceAsyncTaskRequest &request);

      /**
       * @summary 更新MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param tmpReq UpdateMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcpWithOptions(const Models::UpdateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新MCP
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request UpdateMcpRequest
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcp(const Models::UpdateMcpRequest &request);

      /**
       * @summary 更新模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request UpdateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const Models::UpdateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const Models::UpdateModelRequest &request);

      /**
       * @summary 更新模型供应商
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param tmpReq UpdateModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelProviderResponse
       */
      Models::UpdateModelProviderResponse updateModelProviderWithOptions(const Models::UpdateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型供应商
       *
       * @description ## 请求说明
       * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
       * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
       * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
       * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
       * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
       *
       * @param request UpdateModelProviderRequest
       * @return UpdateModelProviderResponse
       */
      Models::UpdateModelProviderResponse updateModelProvider(const Models::UpdateModelProviderRequest &request);

      /**
       * @summary 用于更新指定Endpoint的域名和SSL证书信息。
       *
       * @description ## 请求说明
       * - 本API支持更新`ELEMENT`、`MATRIX`类型的Endpoint。
       * - 如果尝试更新其他类型的Endpoint，将返回400错误。
       * - 当`endpointId`不存在或不属于当前用户实例时，将返回404错误。
       * - 更新域名时，系统会创建或复用新的HTTPS domain，并将其绑定到原endpoint route上，同时解绑旧domain，但不会删除旧domain。
       * - 若不提供`domain`或`certIdentifier`参数，则保持原有设置不变。
       * - 其他如`component`、`gatewayType`等字段即使传入也不会被更新。
       *
       * @param request UpdateServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceEndpointResponse
       */
      Models::UpdateServiceEndpointResponse updateServiceEndpointWithOptions(const Models::UpdateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于更新指定Endpoint的域名和SSL证书信息。
       *
       * @description ## 请求说明
       * - 本API支持更新`ELEMENT`、`MATRIX`类型的Endpoint。
       * - 如果尝试更新其他类型的Endpoint，将返回400错误。
       * - 当`endpointId`不存在或不属于当前用户实例时，将返回404错误。
       * - 更新域名时，系统会创建或复用新的HTTPS domain，并将其绑定到原endpoint route上，同时解绑旧domain，但不会删除旧domain。
       * - 若不提供`domain`或`certIdentifier`参数，则保持原有设置不变。
       * - 其他如`component`、`gatewayType`等字段即使传入也不会被更新。
       *
       * @param request UpdateServiceEndpointRequest
       * @return UpdateServiceEndpointResponse
       */
      Models::UpdateServiceEndpointResponse updateServiceEndpoint(const Models::UpdateServiceEndpointRequest &request);

      /**
       * @summary 更新团队
       *
       * @param tmpReq UpdateTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const Models::UpdateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新团队
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const Models::UpdateTeamRequest &request);

      /**
       * @summary 更新用户信息
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新用户信息
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary 更新Worker
       *
       * @param tmpReq UpdateWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkerResponse
       */
      Models::UpdateWorkerResponse updateWorkerWithOptions(const Models::UpdateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Worker
       *
       * @param request UpdateWorkerRequest
       * @return UpdateWorkerResponse
       */
      Models::UpdateWorkerResponse updateWorker(const Models::UpdateWorkerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
