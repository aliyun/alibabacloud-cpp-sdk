#include <darabonba/Core.hpp>
#include <alibabacloud/Eas20210701.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Eas20210701::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Eas20210701
{

AlibabaCloud::Eas20210701::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "pai-eas.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou" , "pai-eas.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou" , "pai-eas.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "pai-eas.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "pai-eas.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong" , "pai-eas.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1" , "pai-eas.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "pai-eas.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "pai-eas.us-east-1.aliyuncs.com"},
    {"us-west-1" , "pai-eas.us-west-1.aliyuncs.com"},
    {"eu-central-1" , "pai-eas.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "pai-eas.ap-south-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "pai-eas.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1" , "pai-eas.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-chengdu" , "pai-eas.cn-chengdu.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("eas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Binds a custom domain name to a private gateway.
 *
 * @param tmpReq AttachGatewayDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachGatewayDomainResponse
 */
AttachGatewayDomainResponse Client::attachGatewayDomainWithOptions(const string &ClusterId, const string &GatewayId, const AttachGatewayDomainRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachGatewayDomainShrinkRequest request = AttachGatewayDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomDomain()) {
    request.setCustomDomainShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customDomain(), "CustomDomain", "json"));
  }

  json query = {};
  if (!!request.hasCustomDomainShrink()) {
    query["CustomDomain"] = request.customDomainShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachGatewayDomain"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/domain/attach")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachGatewayDomainResponse>();
}

/**
 * @summary Binds a custom domain name to a private gateway.
 *
 * @param request AttachGatewayDomainRequest
 * @return AttachGatewayDomainResponse
 */
AttachGatewayDomainResponse Client::attachGatewayDomain(const string &ClusterId, const string &GatewayId, const AttachGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return attachGatewayDomainWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Clones a service.
 *
 * @param tmpReq CloneServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneServiceResponse
 */
CloneServiceResponse Client::cloneServiceWithOptions(const string &ClusterId, const string &ServiceName, const CloneServiceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloneServiceShrinkRequest request = CloneServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labels(), "Labels", "json"));
  }

  json query = {};
  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.labelsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CloneService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneServiceResponse>();
}

/**
 * @summary Clones a service.
 *
 * @param request CloneServiceRequest
 * @return CloneServiceResponse
 */
CloneServiceResponse Client::cloneService(const string &ClusterId, const string &ServiceName, const CloneServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Commits the Worker0 container in the custom container service and deploys the container as a new image.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitServiceResponse
 */
CommitServiceResponse Client::commitServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CommitService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/commit")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommitServiceResponse>();
}

/**
 * @summary Commits the Worker0 container in the custom container service and deploys the container as a new image.
 *
 * @return CommitServiceResponse
 */
CommitServiceResponse Client::commitService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return commitServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Creates an access control list (ACL) for a private gateway. The IP CIDR blocks added to the ACL can access the private gateway.
 *
 * @param tmpReq CreateAclPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclPolicyResponse
 */
CreateAclPolicyResponse Client::createAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const CreateAclPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAclPolicyShrinkRequest request = CreateAclPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAclPolicyList()) {
    request.setAclPolicyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aclPolicyList(), "AclPolicyList", "json"));
  }

  json query = {};
  if (!!request.hasAclPolicyListShrink()) {
    query["AclPolicyList"] = request.aclPolicyListShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAclPolicy"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/acl_policy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAclPolicyResponse>();
}

/**
 * @summary Creates an access control list (ACL) for a private gateway. The IP CIDR blocks added to the ACL can access the private gateway.
 *
 * @param request CreateAclPolicyRequest
 * @return CreateAclPolicyResponse
 */
CreateAclPolicyResponse Client::createAclPolicy(const string &ClusterId, const string &GatewayId, const CreateAclPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Creates an application service to obtain the inference capabilities of large models.
 *
 * @param request CreateAppServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppServiceResponse
 */
CreateAppServiceResponse Client::createAppServiceWithOptions(const CreateAppServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.quotaId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceSpec()) {
    body["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/app_services")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppServiceResponse>();
}

/**
 * @summary Creates an application service to obtain the inference capabilities of large models.
 *
 * @param request CreateAppServiceRequest
 * @return CreateAppServiceResponse
 */
CreateAppServiceResponse Client::createAppService(const CreateAppServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a stress testing task.
 *
 * @param request CreateBenchmarkTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBenchmarkTaskResponse
 */
CreateBenchmarkTaskResponse Client::createBenchmarkTaskWithOptions(const CreateBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBenchmarkTaskResponse>();
}

/**
 * @summary Creates a stress testing task.
 *
 * @param request CreateBenchmarkTaskRequest
 * @return CreateBenchmarkTaskResponse
 */
CreateBenchmarkTaskResponse Client::createBenchmarkTask(const CreateBenchmarkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBenchmarkTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建故障注入任务
 *
 * @param request CreateFaultInjectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFaultInjectionResponse
 */
CreateFaultInjectionResponse Client::createFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const CreateFaultInjectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFaultArgs()) {
    body["FaultArgs"] = request.faultArgs();
  }

  if (!!request.hasFaultType()) {
    body["FaultType"] = request.faultType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFaultInjection"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/faults")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFaultInjectionResponse>();
}

/**
 * @summary 创建故障注入任务
 *
 * @param request CreateFaultInjectionRequest
 * @return CreateFaultInjectionResponse
 */
CreateFaultInjectionResponse Client::createFaultInjection(const string &ClusterId, const string &ServiceName, const string &InstanceName, const CreateFaultInjectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFaultInjectionWithOptions(ClusterId, ServiceName, InstanceName, request, headers, runtime);
}

/**
 * @summary Creates a gateway.
 *
 * @param request CreateGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGatewayWithOptions(const CreateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  json body = {};
  if (!!request.hasAutoRenewal()) {
    body["AutoRenewal"] = request.autoRenewal();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasEnableInternet()) {
    body["EnableInternet"] = request.enableInternet();
  }

  if (!!request.hasEnableIntranet()) {
    body["EnableIntranet"] = request.enableIntranet();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.gatewayType();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGateway"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayResponse>();
}

/**
 * @summary Creates a gateway.
 *
 * @param request CreateGatewayRequest
 * @return CreateGatewayResponse
 */
CreateGatewayResponse Client::createGateway(const CreateGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an internal endpoint of a private gateway.
 *
 * @param request CreateGatewayIntranetLinkedVpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayIntranetLinkedVpcResponse
 */
CreateGatewayIntranetLinkedVpcResponse Client::createGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const CreateGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasEnableAuthoritativeDns()) {
    query["EnableAuthoritativeDns"] = request.enableAuthoritativeDns();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayIntranetLinkedVpc"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayIntranetLinkedVpcResponse>();
}

/**
 * @summary Creates an internal endpoint of a private gateway.
 *
 * @param request CreateGatewayIntranetLinkedVpcRequest
 * @return CreateGatewayIntranetLinkedVpcResponse
 */
CreateGatewayIntranetLinkedVpcResponse Client::createGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId, const CreateGatewayIntranetLinkedVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Creates a VPC peering connection on an internal endpoint of a gateway.
 *
 * @param tmpReq CreateGatewayIntranetLinkedVpcPeerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGatewayIntranetLinkedVpcPeerResponse
 */
CreateGatewayIntranetLinkedVpcPeerResponse Client::createGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const CreateGatewayIntranetLinkedVpcPeerRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGatewayIntranetLinkedVpcPeerShrinkRequest request = CreateGatewayIntranetLinkedVpcPeerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPeerVpcs()) {
    request.setPeerVpcsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.peerVpcs(), "PeerVpcs", "json"));
  }

  json query = {};
  if (!!request.hasPeerVpcsShrink()) {
    query["PeerVpcs"] = request.peerVpcsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGatewayIntranetLinkedVpcPeer"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc_peer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGatewayIntranetLinkedVpcPeerResponse>();
}

/**
 * @summary Creates a VPC peering connection on an internal endpoint of a gateway.
 *
 * @param request CreateGatewayIntranetLinkedVpcPeerRequest
 * @return CreateGatewayIntranetLinkedVpcPeerResponse
 */
CreateGatewayIntranetLinkedVpcPeerResponse Client::createGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const CreateGatewayIntranetLinkedVpcPeerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Creates a resource group.
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
 *
 * @param request CreateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRenewal()) {
    body["AutoRenewal"] = request.autoRenewal();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasEcsInstanceCount()) {
    body["EcsInstanceCount"] = request.ecsInstanceCount();
  }

  if (!!request.hasEcsInstanceType()) {
    body["EcsInstanceType"] = request.ecsInstanceType();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasResourceName()) {
    body["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSelfManagedResourceOptions()) {
    body["SelfManagedResourceOptions"] = request.selfManagedResourceOptions();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.systemDiskSize();
  }

  if (!!request.hasZone()) {
    body["Zone"] = request.zone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceResponse>();
}

/**
 * @summary Creates a resource group.
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
 *
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates instances in a dedicated resource group.
 *
 * @param request CreateResourceInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceInstancesResponse
 */
CreateResourceInstancesResponse Client::createResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const CreateResourceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRenewal()) {
    body["AutoRenewal"] = request.autoRenewal();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.chargeType();
  }

  if (!!request.hasEcsInstanceCount()) {
    body["EcsInstanceCount"] = request.ecsInstanceCount();
  }

  if (!!request.hasEcsInstanceType()) {
    body["EcsInstanceType"] = request.ecsInstanceType();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.systemDiskSize();
  }

  if (!!request.hasUserData()) {
    body["UserData"] = request.userData();
  }

  if (!!request.hasZone()) {
    body["Zone"] = request.zone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceInstances"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceInstancesResponse>();
}

/**
 * @summary Creates instances in a dedicated resource group.
 *
 * @param request CreateResourceInstancesRequest
 * @return CreateResourceInstancesResponse
 */
CreateResourceInstancesResponse Client::createResourceInstances(const string &ClusterId, const string &ResourceId, const CreateResourceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Enables the LogShipper feature of Log Service for a resource group.
 *
 * @param request CreateResourceLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceLogResponse
 */
CreateResourceLogResponse Client::createResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const CreateResourceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLogStore()) {
    body["LogStore"] = request.logStore();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceLog"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/log")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceLogResponse>();
}

/**
 * @summary Enables the LogShipper feature of Log Service for a resource group.
 *
 * @param request CreateResourceLogRequest
 * @return CreateResourceLogResponse
 */
CreateResourceLogResponse Client::createResourceLog(const string &ClusterId, const string &ResourceId, const CreateResourceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceLogWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Creates a model service in Elastic Algorithm Service (EAS).
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
 *
 * @param tmpReq CreateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createServiceWithOptions(const CreateServiceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateServiceShrinkRequest request = CreateServiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labels(), "Labels", "json"));
  }

  json query = {};
  if (!!request.hasDevelop()) {
    query["Develop"] = request.develop();
  }

  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.labelsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "CreateService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceResponse>();
}

/**
 * @summary Creates a model service in Elastic Algorithm Service (EAS).
 *
 * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/144261.html) of Elastic Algorithm Service (EAS).
 *
 * @param request CreateServiceRequest
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createService(const CreateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Enables the Autoscaler feature and creates an Autoscaler controller for a service.
 *
 * @param request CreateServiceAutoScalerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceAutoScalerResponse
 */
CreateServiceAutoScalerResponse Client::createServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const CreateServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehavior()) {
    body["behavior"] = request.behavior();
  }

  if (!!request.hasMax()) {
    body["max"] = request.max();
  }

  if (!!request.hasMin()) {
    body["min"] = request.min();
  }

  if (!!request.hasScaleStrategies()) {
    body["scaleStrategies"] = request.scaleStrategies();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceAutoScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/autoscaler")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceAutoScalerResponse>();
}

/**
 * @summary Enables the Autoscaler feature and creates an Autoscaler controller for a service.
 *
 * @param request CreateServiceAutoScalerRequest
 * @return CreateServiceAutoScalerResponse
 */
CreateServiceAutoScalerResponse Client::createServiceAutoScaler(const string &ClusterId, const string &ServiceName, const CreateServiceAutoScalerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Enables the Cron Horizontal Pod Autoscaler (CronHPA) feature for a service.
 *
 * @param request CreateServiceCronScalerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceCronScalerResponse
 */
CreateServiceCronScalerResponse Client::createServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const CreateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExcludeDates()) {
    body["ExcludeDates"] = request.excludeDates();
  }

  if (!!request.hasScaleJobs()) {
    body["ScaleJobs"] = request.scaleJobs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceCronScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/cronscaler")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceCronScalerResponse>();
}

/**
 * @summary Enables the Cron Horizontal Pod Autoscaler (CronHPA) feature for a service.
 *
 * @param request CreateServiceCronScalerRequest
 * @return CreateServiceCronScalerResponse
 */
CreateServiceCronScalerResponse Client::createServiceCronScaler(const string &ClusterId, const string &ServiceName, const CreateServiceCronScalerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Enables the traffic mirroring feature for a service. After the feature is enabled, requests received by the service can be mirrored to another service.
 *
 * @param request CreateServiceMirrorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceMirrorResponse
 */
CreateServiceMirrorResponse Client::createServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const CreateServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRatio()) {
    body["Ratio"] = request.ratio();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.target();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceMirror"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/mirror")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceMirrorResponse>();
}

/**
 * @summary Enables the traffic mirroring feature for a service. After the feature is enabled, requests received by the service can be mirrored to another service.
 *
 * @param request CreateServiceMirrorRequest
 * @return CreateServiceMirrorResponse
 */
CreateServiceMirrorResponse Client::createServiceMirror(const string &ClusterId, const string &ServiceName, const CreateServiceMirrorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Creates a virtual resource group.
 *
 * @param request CreateVirtualResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualResourceResponse
 */
CreateVirtualResourceResponse Client::createVirtualResourceWithOptions(const CreateVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisableSpotProtectionPeriod()) {
    body["DisableSpotProtectionPeriod"] = request.disableSpotProtectionPeriod();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.resources();
  }

  if (!!request.hasVirtualResourceName()) {
    body["VirtualResourceName"] = request.virtualResourceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVirtualResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/virtualresources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirtualResourceResponse>();
}

/**
 * @summary Creates a virtual resource group.
 *
 * @param request CreateVirtualResourceRequest
 * @return CreateVirtualResourceResponse
 */
CreateVirtualResourceResponse Client::createVirtualResource(const CreateVirtualResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createVirtualResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an access control list (ACL) for a private gateway. The IP CIDR block that is deleted from the ACL cannot access the private gateway.
 *
 * @param tmpReq DeleteAclPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclPolicyResponse
 */
DeleteAclPolicyResponse Client::deleteAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const DeleteAclPolicyRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAclPolicyShrinkRequest request = DeleteAclPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAclPolicyList()) {
    request.setAclPolicyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aclPolicyList(), "AclPolicyList", "json"));
  }

  json query = {};
  if (!!request.hasAclPolicyListShrink()) {
    query["AclPolicyList"] = request.aclPolicyListShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAclPolicy"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/acl_policy")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAclPolicyResponse>();
}

/**
 * @summary Deletes an access control list (ACL) for a private gateway. The IP CIDR block that is deleted from the ACL cannot access the private gateway.
 *
 * @param request DeleteAclPolicyRequest
 * @return DeleteAclPolicyResponse
 */
DeleteAclPolicyResponse Client::deleteAclPolicy(const string &ClusterId, const string &GatewayId, const DeleteAclPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Deletes a stress testing task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBenchmarkTaskResponse
 */
DeleteBenchmarkTaskResponse Client::deleteBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBenchmarkTaskResponse>();
}

/**
 * @summary Deletes a stress testing task.
 *
 * @return DeleteBenchmarkTaskResponse
 */
DeleteBenchmarkTaskResponse Client::deleteBenchmarkTask(const string &ClusterId, const string &TaskName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

/**
 * @summary 删除故障注入任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFaultInjectionResponse
 */
DeleteFaultInjectionResponse Client::deleteFaultInjectionWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFaultInjection"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/faults/" , Darabonba::Encode::Encoder::percentEncode(FaultType))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFaultInjectionResponse>();
}

/**
 * @summary 删除故障注入任务
 *
 * @return DeleteFaultInjectionResponse
 */
DeleteFaultInjectionResponse Client::deleteFaultInjection(const string &ClusterId, const string &ServiceName, const string &InstanceName, const string &FaultType) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFaultInjectionWithOptions(ClusterId, ServiceName, InstanceName, FaultType, headers, runtime);
}

/**
 * @summary Deletes a private gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGatewayWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGateway"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayResponse>();
}

/**
 * @summary Deletes a private gateway.
 *
 * @return DeleteGatewayResponse
 */
DeleteGatewayResponse Client::deleteGateway(const string &ClusterId, const string &GatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayWithOptions(ClusterId, GatewayId, headers, runtime);
}

/**
 * @summary 删除网关内网访问端点
 *
 * @param request DeleteGatewayIntranetLinkedVpcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayIntranetLinkedVpcResponse
 */
DeleteGatewayIntranetLinkedVpcResponse Client::deleteGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const DeleteGatewayIntranetLinkedVpcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayIntranetLinkedVpc"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayIntranetLinkedVpcResponse>();
}

/**
 * @summary 删除网关内网访问端点
 *
 * @param request DeleteGatewayIntranetLinkedVpcRequest
 * @return DeleteGatewayIntranetLinkedVpcResponse
 */
DeleteGatewayIntranetLinkedVpcResponse Client::deleteGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId, const DeleteGatewayIntranetLinkedVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Deletes a VPC peering connection from an internal endpoint of a gateway.
 *
 * @param tmpReq DeleteGatewayIntranetLinkedVpcPeerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGatewayIntranetLinkedVpcPeerResponse
 */
DeleteGatewayIntranetLinkedVpcPeerResponse Client::deleteGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const DeleteGatewayIntranetLinkedVpcPeerRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteGatewayIntranetLinkedVpcPeerShrinkRequest request = DeleteGatewayIntranetLinkedVpcPeerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPeerVpcs()) {
    request.setPeerVpcsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.peerVpcs(), "PeerVpcs", "json"));
  }

  json query = {};
  if (!!request.hasPeerVpcsShrink()) {
    query["PeerVpcs"] = request.peerVpcsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGatewayIntranetLinkedVpcPeer"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc_peer")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGatewayIntranetLinkedVpcPeerResponse>();
}

/**
 * @summary Deletes a VPC peering connection from an internal endpoint of a gateway.
 *
 * @param request DeleteGatewayIntranetLinkedVpcPeerRequest
 * @return DeleteGatewayIntranetLinkedVpcPeerResponse
 */
DeleteGatewayIntranetLinkedVpcPeerResponse Client::deleteGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const DeleteGatewayIntranetLinkedVpcPeerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Deletes a resource group that contains no resources or instances.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceResponse>();
}

/**
 * @summary Deletes a resource group that contains no resources or instances.
 *
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceDLinkResponse
 */
DeleteResourceDLinkResponse Client::deleteResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceDLink"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/dlink")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceDLinkResponse>();
}

/**
 * @summary Disables the virtual private cloud (VPC) direct connection feature for a dedicated resource group.
 *
 * @return DeleteResourceDLinkResponse
 */
DeleteResourceDLinkResponse Client::deleteResourceDLink(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Deletes the tags of an instance in a resource group.
 *
 * @param tmpReq DeleteResourceInstanceLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceInstanceLabelResponse
 */
DeleteResourceInstanceLabelResponse Client::deleteResourceInstanceLabelWithOptions(const string &ClusterId, const string &ResourceId, const DeleteResourceInstanceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteResourceInstanceLabelShrinkRequest request = DeleteResourceInstanceLabelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "simple"));
  }

  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.keys(), "Keys", "simple"));
  }

  if (!!tmpReq.hasLabelKeys()) {
    request.setLabelKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelKeys(), "LabelKeys", "json"));
  }

  json query = {};
  if (!!request.hasAllInstances()) {
    query["AllInstances"] = request.allInstances();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  if (!!request.hasKeysShrink()) {
    query["Keys"] = request.keysShrink();
  }

  if (!!request.hasLabelKeysShrink()) {
    query["LabelKeys"] = request.labelKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceInstanceLabel"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/label")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceInstanceLabelResponse>();
}

/**
 * @summary Deletes the tags of an instance in a resource group.
 *
 * @param request DeleteResourceInstanceLabelRequest
 * @return DeleteResourceInstanceLabelResponse
 */
DeleteResourceInstanceLabelResponse Client::deleteResourceInstanceLabel(const string &ClusterId, const string &ResourceId, const DeleteResourceInstanceLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceInstanceLabelWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Deletes instances in a dedicated resource group. You can delete only pay-as-you-go instances as a regular user.
 *
 * @param request DeleteResourceInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceInstancesResponse
 */
DeleteResourceInstancesResponse Client::deleteResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const DeleteResourceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllFailed()) {
    query["AllFailed"] = request.allFailed();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceInstances"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/instances")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceInstancesResponse>();
}

/**
 * @summary Deletes instances in a dedicated resource group. You can delete only pay-as-you-go instances as a regular user.
 *
 * @param request DeleteResourceInstancesRequest
 * @return DeleteResourceInstancesResponse
 */
DeleteResourceInstancesResponse Client::deleteResourceInstances(const string &ClusterId, const string &ResourceId, const DeleteResourceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Disables the LogShipper feature of Log Service for a dedicated resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceLogResponse
 */
DeleteResourceLogResponse Client::deleteResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceLog"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/log")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceLogResponse>();
}

/**
 * @summary Disables the LogShipper feature of Log Service for a dedicated resource group.
 *
 * @return DeleteResourceLogResponse
 */
DeleteResourceLogResponse Client::deleteResourceLog(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Deletes a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceResponse>();
}

/**
 * @summary Deletes a service.
 *
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceAutoScalerResponse
 */
DeleteServiceAutoScalerResponse Client::deleteServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceAutoScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/autoscaler")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceAutoScalerResponse>();
}

/**
 * @summary Deletes the existing Autoscaler controller and disables the Autoscaler feature for a service.
 *
 * @return DeleteServiceAutoScalerResponse
 */
DeleteServiceAutoScalerResponse Client::deleteServiceAutoScaler(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Disables the Cronscaler feature for a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceCronScalerResponse
 */
DeleteServiceCronScalerResponse Client::deleteServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceCronScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/cronscaler")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceCronScalerResponse>();
}

/**
 * @summary Disables the Cronscaler feature for a service.
 *
 * @return DeleteServiceCronScalerResponse
 */
DeleteServiceCronScalerResponse Client::deleteServiceCronScaler(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Restarts the instances of a service.
 *
 * @param request DeleteServiceInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const DeleteServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainer()) {
    query["Container"] = request.container();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  if (!!request.hasIsReplica()) {
    query["IsReplica"] = request.isReplica();
  }

  if (!!request.hasSoftRestart()) {
    query["SoftRestart"] = request.softRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceInstances"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceInstancesResponse>();
}

/**
 * @summary Restarts the instances of a service.
 *
 * @param request DeleteServiceInstancesRequest
 * @return DeleteServiceInstancesResponse
 */
DeleteServiceInstancesResponse Client::deleteServiceInstances(const string &ClusterId, const string &ServiceName, const DeleteServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Deletes existing service tags.
 *
 * @param tmpReq DeleteServiceLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceLabelResponse
 */
DeleteServiceLabelResponse Client::deleteServiceLabelWithOptions(const string &ClusterId, const string &ServiceName, const DeleteServiceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteServiceLabelShrinkRequest request = DeleteServiceLabelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.keys(), "Keys", "simple"));
  }

  if (!!tmpReq.hasLabelKeys()) {
    request.setLabelKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelKeys(), "LabelKeys", "json"));
  }

  json query = {};
  if (!!request.hasKeysShrink()) {
    query["Keys"] = request.keysShrink();
  }

  if (!!request.hasLabelKeysShrink()) {
    query["LabelKeys"] = request.labelKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceLabel"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/label")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceLabelResponse>();
}

/**
 * @summary Deletes existing service tags.
 *
 * @param request DeleteServiceLabelRequest
 * @return DeleteServiceLabelResponse
 */
DeleteServiceLabelResponse Client::deleteServiceLabel(const string &ClusterId, const string &ServiceName, const DeleteServiceLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceLabelWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Disables the traffic mirroring feature for a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceMirrorResponse
 */
DeleteServiceMirrorResponse Client::deleteServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceMirror"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/mirror")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceMirrorResponse>();
}

/**
 * @summary Disables the traffic mirroring feature for a service.
 *
 * @return DeleteServiceMirrorResponse
 */
DeleteServiceMirrorResponse Client::deleteServiceMirror(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Deletes a virtual resource group that contains no resources or instances.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualResourceResponse
 */
DeleteVirtualResourceResponse Client::deleteVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/virtualresources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(VirtualResourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualResourceResponse>();
}

/**
 * @summary Deletes a virtual resource group that contains no resources or instances.
 *
 * @return DeleteVirtualResourceResponse
 */
DeleteVirtualResourceResponse Client::deleteVirtualResource(const string &ClusterId, const string &VirtualResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteVirtualResourceWithOptions(ClusterId, VirtualResourceId, headers, runtime);
}

/**
 * @summary Queries details about the configurations of a stress testing task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBenchmarkTaskResponse
 */
DescribeBenchmarkTaskResponse Client::describeBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBenchmarkTaskResponse>();
}

/**
 * @summary Queries details about the configurations of a stress testing task.
 *
 * @return DescribeBenchmarkTaskResponse
 */
DescribeBenchmarkTaskResponse Client::describeBenchmarkTask(const string &ClusterId, const string &TaskName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

/**
 * @summary Queries the report of a stress testing task.
 *
 * @param request DescribeBenchmarkTaskReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBenchmarkTaskReportResponse
 */
DescribeBenchmarkTaskReportResponse Client::describeBenchmarkTaskReportWithOptions(const string &ClusterId, const string &TaskName, const DescribeBenchmarkTaskReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportType()) {
    query["ReportType"] = request.reportType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBenchmarkTaskReport"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName) , "/report")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBenchmarkTaskReportResponse>();
}

/**
 * @summary Queries the report of a stress testing task.
 *
 * @param request DescribeBenchmarkTaskReportRequest
 * @return DescribeBenchmarkTaskReportResponse
 */
DescribeBenchmarkTaskReportResponse Client::describeBenchmarkTaskReport(const string &ClusterId, const string &TaskName, const DescribeBenchmarkTaskReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeBenchmarkTaskReportWithOptions(ClusterId, TaskName, request, headers, runtime);
}

/**
 * @summary Queries the details of a private gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGatewayResponse
 */
DescribeGatewayResponse Client::describeGatewayWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGateway"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGatewayResponse>();
}

/**
 * @summary Queries the details of a private gateway.
 *
 * @return DescribeGatewayResponse
 */
DescribeGatewayResponse Client::describeGateway(const string &ClusterId, const string &GatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeGatewayWithOptions(ClusterId, GatewayId, headers, runtime);
}

/**
 * @summary Queries the information about a service group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroupWithOptions(const string &ClusterId, const string &GroupName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroup"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/groups/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GroupName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupResponse>();
}

/**
 * @summary Queries the information about a service group.
 *
 * @return DescribeGroupResponse
 */
DescribeGroupResponse Client::describeGroup(const string &ClusterId, const string &GroupName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeGroupWithOptions(ClusterId, GroupName, headers, runtime);
}

/**
 * @summary Obtains a list of endpoints of service groups.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupEndpointsResponse
 */
DescribeGroupEndpointsResponse Client::describeGroupEndpointsWithOptions(const string &ClusterId, const string &GroupName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupEndpoints"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/groups/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GroupName) , "/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupEndpointsResponse>();
}

/**
 * @summary Obtains a list of endpoints of service groups.
 *
 * @return DescribeGroupEndpointsResponse
 */
DescribeGroupEndpointsResponse Client::describeGroupEndpoints(const string &ClusterId, const string &GroupName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeGroupEndpointsWithOptions(ClusterId, GroupName, headers, runtime);
}

/**
 * @summary Queries a list of instance types for an available instance in a shared resource group.
 *
 * @param tmpReq DescribeMachineSpecRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMachineSpecResponse
 */
DescribeMachineSpecResponse Client::describeMachineSpecWithOptions(const DescribeMachineSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeMachineSpecShrinkRequest request = DescribeMachineSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceTypes()) {
    request.setInstanceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceTypes(), "InstanceTypes", "simple"));
  }

  json query = {};
  if (!!request.hasInstanceTypesShrink()) {
    query["InstanceTypes"] = request.instanceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMachineSpec"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/public/instance_types")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMachineSpecResponse>();
}

/**
 * @summary Queries a list of instance types for an available instance in a shared resource group.
 *
 * @param request DescribeMachineSpecRequest
 * @return DescribeMachineSpecResponse
 */
DescribeMachineSpecResponse Client::describeMachineSpec(const DescribeMachineSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeMachineSpecWithOptions(request, headers, runtime);
}

/**
 * @summary Queries available regions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Queries the information about a resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceResponse
 */
DescribeResourceResponse Client::describeResourceWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceResponse>();
}

/**
 * @summary Queries the information about a resource group.
 *
 * @return DescribeResourceResponse
 */
DescribeResourceResponse Client::describeResource(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceDLinkResponse
 */
DescribeResourceDLinkResponse Client::describeResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceDLink"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/dlink")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceDLinkResponse>();
}

/**
 * @summary Queries detailed configurations about a virtual private cloud (VPC) direct connection of a dedicated resource group.
 *
 * @return DescribeResourceDLinkResponse
 */
DescribeResourceDLinkResponse Client::describeResourceDLink(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLogResponse
 */
DescribeResourceLogResponse Client::describeResourceLogWithOptions(const string &ClusterId, const string &ResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceLog"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceLogResponse>();
}

/**
 * @summary Queries the details about the LogShipper configurations of Log Service for a dedicated resource group.
 *
 * @return DescribeResourceLogResponse
 */
DescribeResourceLogResponse Client::describeResourceLog(const string &ClusterId, const string &ResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

/**
 * @summary Queries the details about a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceResponse
 */
DescribeServiceResponse Client::describeServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceResponse>();
}

/**
 * @summary Queries the details about a service.
 *
 * @return DescribeServiceResponse
 */
DescribeServiceResponse Client::describeService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Queries information about the Autoscaler configurations of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceAutoScalerResponse
 */
DescribeServiceAutoScalerResponse Client::describeServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceAutoScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/autoscaler")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceAutoScalerResponse>();
}

/**
 * @summary Queries information about the Autoscaler configurations of a service.
 *
 * @return DescribeServiceAutoScalerResponse
 */
DescribeServiceAutoScalerResponse Client::describeServiceAutoScaler(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceCronScalerResponse
 */
DescribeServiceCronScalerResponse Client::describeServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceCronScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/cronscaler")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceCronScalerResponse>();
}

/**
 * @summary Queries the Cron Horizontal Pod Autoscaler (CronHPA) configurations of a service.
 *
 * @return DescribeServiceCronScalerResponse
 */
DescribeServiceCronScalerResponse Client::describeServiceCronScaler(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Queries the diagnostics details of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceDiagnosisResponse
 */
DescribeServiceDiagnosisResponse Client::describeServiceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceDiagnosis"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/diagnosis")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceDiagnosisResponse>();
}

/**
 * @summary Queries the diagnostics details of a service.
 *
 * @return DescribeServiceDiagnosisResponse
 */
DescribeServiceDiagnosisResponse Client::describeServiceDiagnosis(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceDiagnosisWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Obtains a list of service endpoints.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceEndpointsResponse
 */
DescribeServiceEndpointsResponse Client::describeServiceEndpointsWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceEndpoints"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceEndpointsResponse>();
}

/**
 * @summary Obtains a list of service endpoints.
 *
 * @return DescribeServiceEndpointsResponse
 */
DescribeServiceEndpointsResponse Client::describeServiceEndpoints(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceEndpointsWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Queries information about recent service deployment events.
 *
 * @param request DescribeServiceEventRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceEventResponse
 */
DescribeServiceEventResponse Client::describeServiceEventWithOptions(const string &ClusterId, const string &ServiceName, const DescribeServiceEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceEvent"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceEventResponse>();
}

/**
 * @summary Queries information about recent service deployment events.
 *
 * @param request DescribeServiceEventRequest
 * @return DescribeServiceEventResponse
 */
DescribeServiceEventResponse Client::describeServiceEvent(const string &ClusterId, const string &ServiceName, const DescribeServiceEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceEventWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceInstanceDiagnosisResponse
 */
DescribeServiceInstanceDiagnosisResponse Client::describeServiceInstanceDiagnosisWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceInstanceDiagnosis"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/diagnosis")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceInstanceDiagnosisResponse>();
}

/**
 * @summary Queries the diagnostics details of an instance that runs Elastic Algorithm Service (EAS).
 *
 * @return DescribeServiceInstanceDiagnosisResponse
 */
DescribeServiceInstanceDiagnosisResponse Client::describeServiceInstanceDiagnosis(const string &ClusterId, const string &ServiceName, const string &InstanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceInstanceDiagnosisWithOptions(ClusterId, ServiceName, InstanceName, headers, runtime);
}

/**
 * @summary Queries the information about the logs of a service.
 *
 * @param request DescribeServiceLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceLogResponse
 */
DescribeServiceLogResponse Client::describeServiceLogWithOptions(const string &ClusterId, const string &ServiceName, const DescribeServiceLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainerName()) {
    query["ContainerName"] = request.containerName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrevious()) {
    query["Previous"] = request.previous();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceLog"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceLogResponse>();
}

/**
 * @summary Queries the information about the logs of a service.
 *
 * @param request DescribeServiceLogRequest
 * @return DescribeServiceLogResponse
 */
DescribeServiceLogResponse Client::describeServiceLog(const string &ClusterId, const string &ServiceName, const DescribeServiceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceLogWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Queries details about the traffic mirroring settings of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceMirrorResponse
 */
DescribeServiceMirrorResponse Client::describeServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceMirror"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/mirror")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceMirrorResponse>();
}

/**
 * @summary Queries details about the traffic mirroring settings of a service.
 *
 * @return DescribeServiceMirrorResponse
 */
DescribeServiceMirrorResponse Client::describeServiceMirror(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Obtains the logon-free URL of the service.
 *
 * @param request DescribeServiceSignedUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceSignedUrlResponse
 */
DescribeServiceSignedUrlResponse Client::describeServiceSignedUrlWithOptions(const string &ClusterId, const string &ServiceName, const DescribeServiceSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasInternal()) {
    query["Internal"] = request.internal();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceSignedUrl"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/signed_url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceSignedUrlResponse>();
}

/**
 * @summary Obtains the logon-free URL of the service.
 *
 * @param request DescribeServiceSignedUrlRequest
 * @return DescribeServiceSignedUrlResponse
 */
DescribeServiceSignedUrlResponse Client::describeServiceSignedUrl(const string &ClusterId, const string &ServiceName, const DescribeServiceSignedUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeServiceSignedUrlWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Queries the historical prices of preemptible instances. For more information about preemptible instances, see Create and use preemptible instances.
 *
 * @param request DescribeSpotDiscountHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSpotDiscountHistoryResponse
 */
DescribeSpotDiscountHistoryResponse Client::describeSpotDiscountHistoryWithOptions(const DescribeSpotDiscountHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasIsProtect()) {
    query["IsProtect"] = request.isProtect();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSpotDiscountHistory"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/public/spot_discount")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSpotDiscountHistoryResponse>();
}

/**
 * @summary Queries the historical prices of preemptible instances. For more information about preemptible instances, see Create and use preemptible instances.
 *
 * @param request DescribeSpotDiscountHistoryRequest
 * @return DescribeSpotDiscountHistoryResponse
 */
DescribeSpotDiscountHistoryResponse Client::describeSpotDiscountHistory(const DescribeSpotDiscountHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSpotDiscountHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary Views the details of a virtual resource group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVirtualResourceResponse
 */
DescribeVirtualResourceResponse Client::describeVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVirtualResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/virtualresources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(VirtualResourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVirtualResourceResponse>();
}

/**
 * @summary Views the details of a virtual resource group.
 *
 * @return DescribeVirtualResourceResponse
 */
DescribeVirtualResourceResponse Client::describeVirtualResource(const string &ClusterId, const string &VirtualResourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeVirtualResourceWithOptions(ClusterId, VirtualResourceId, headers, runtime);
}

/**
 * @summary Unbinds a custom domain name from a private gateway.
 *
 * @param tmpReq DetachGatewayDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachGatewayDomainResponse
 */
DetachGatewayDomainResponse Client::detachGatewayDomainWithOptions(const string &ClusterId, const string &GatewayId, const DetachGatewayDomainRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachGatewayDomainShrinkRequest request = DetachGatewayDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomDomain()) {
    request.setCustomDomainShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customDomain(), "CustomDomain", "json"));
  }

  json query = {};
  if (!!request.hasCustomDomainShrink()) {
    query["CustomDomain"] = request.customDomainShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachGatewayDomain"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/domain/detach")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachGatewayDomainResponse>();
}

/**
 * @summary Unbinds a custom domain name from a private gateway.
 *
 * @param request DetachGatewayDomainRequest
 * @return DetachGatewayDomainResponse
 */
DetachGatewayDomainResponse Client::detachGatewayDomain(const string &ClusterId, const string &GatewayId, const DetachGatewayDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return detachGatewayDomainWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Switches a container service to development mode or exits development mode.
 *
 * @param request DevelopServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DevelopServiceResponse
 */
DevelopServiceResponse Client::developServiceWithOptions(const string &ClusterId, const string &ServiceName, const DevelopServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExit()) {
    query["Exit"] = request.exit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DevelopService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/develop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DevelopServiceResponse>();
}

/**
 * @summary Switches a container service to development mode or exits development mode.
 *
 * @param request DevelopServiceRequest
 * @return DevelopServiceResponse
 */
DevelopServiceResponse Client::developService(const string &ClusterId, const string &ServiceName, const DevelopServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return developServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Queries access control lists (ACLs) created for a private gateway.
 *
 * @param request ListAclPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAclPolicyResponse
 */
ListAclPolicyResponse Client::listAclPolicyWithOptions(const string &ClusterId, const string &GatewayId, const ListAclPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAclPolicy"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/acl_policy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAclPolicyResponse>();
}

/**
 * @summary Queries access control lists (ACLs) created for a private gateway.
 *
 * @param request ListAclPolicyRequest
 * @return ListAclPolicyResponse
 */
ListAclPolicyResponse Client::listAclPolicy(const string &ClusterId, const string &GatewayId, const ListAclPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Queries a list of stress testing tasks that are created by the current user.
 *
 * @param request ListBenchmarkTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBenchmarkTaskResponse
 */
ListBenchmarkTaskResponse Client::listBenchmarkTaskWithOptions(const ListBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRequestMethod()) {
    query["RequestMethod"] = request.requestMethod();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBenchmarkTaskResponse>();
}

/**
 * @summary Queries a list of stress testing tasks that are created by the current user.
 *
 * @param request ListBenchmarkTaskRequest
 * @return ListBenchmarkTaskResponse
 */
ListBenchmarkTaskResponse Client::listBenchmarkTask(const ListBenchmarkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBenchmarkTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of private gateways.
 *
 * @param request ListGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGatewayWithOptions(const ListGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.gatewayId();
  }

  if (!!request.hasGatewayName()) {
    query["GatewayName"] = request.gatewayName();
  }

  if (!!request.hasGatewayType()) {
    query["GatewayType"] = request.gatewayType();
  }

  if (!!request.hasInternetEnabled()) {
    query["InternetEnabled"] = request.internetEnabled();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGateway"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayResponse>();
}

/**
 * @summary Queries a list of private gateways.
 *
 * @param request ListGatewayRequest
 * @return ListGatewayResponse
 */
ListGatewayResponse Client::listGateway(const ListGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of custom domain names of a private gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayDomainsResponse
 */
ListGatewayDomainsResponse Client::listGatewayDomainsWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayDomains"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/domains")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayDomainsResponse>();
}

/**
 * @summary Queries a list of custom domain names of a private gateway.
 *
 * @return ListGatewayDomainsResponse
 */
ListGatewayDomainsResponse Client::listGatewayDomains(const string &ClusterId, const string &GatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayDomainsWithOptions(ClusterId, GatewayId, headers, runtime);
}

/**
 * @summary Queries a list of the internal endpoints of a private gateway.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayIntranetLinkedVpcResponse
 */
ListGatewayIntranetLinkedVpcResponse Client::listGatewayIntranetLinkedVpcWithOptions(const string &ClusterId, const string &GatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayIntranetLinkedVpc"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayIntranetLinkedVpcResponse>();
}

/**
 * @summary Queries a list of the internal endpoints of a private gateway.
 *
 * @return ListGatewayIntranetLinkedVpcResponse
 */
ListGatewayIntranetLinkedVpcResponse Client::listGatewayIntranetLinkedVpc(const string &ClusterId, const string &GatewayId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, headers, runtime);
}

/**
 * @summary Obtains a list of all VPC peering connections on internal endpoint of a gateway.
 *
 * @param request ListGatewayIntranetLinkedVpcPeerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayIntranetLinkedVpcPeerResponse
 */
ListGatewayIntranetLinkedVpcPeerResponse Client::listGatewayIntranetLinkedVpcPeerWithOptions(const string &ClusterId, const string &GatewayId, const ListGatewayIntranetLinkedVpcPeerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayIntranetLinkedVpcPeer"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_endpoint_linked_vpc_peer")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayIntranetLinkedVpcPeerResponse>();
}

/**
 * @summary Obtains a list of all VPC peering connections on internal endpoint of a gateway.
 *
 * @param request ListGatewayIntranetLinkedVpcPeerRequest
 * @return ListGatewayIntranetLinkedVpcPeerResponse
 */
ListGatewayIntranetLinkedVpcPeerResponse Client::listGatewayIntranetLinkedVpcPeer(const string &ClusterId, const string &GatewayId, const ListGatewayIntranetLinkedVpcPeerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

/**
 * @summary Obtains the zones supported by a gateway within an intranet.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGatewayIntranetSupportedZoneResponse
 */
ListGatewayIntranetSupportedZoneResponse Client::listGatewayIntranetSupportedZoneWithOptions(const string &GatewayId, const string &ClusterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGatewayIntranetSupportedZone"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId) , "/intranet_supported_zone")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGatewayIntranetSupportedZoneResponse>();
}

/**
 * @summary Obtains the zones supported by a gateway within an intranet.
 *
 * @return ListGatewayIntranetSupportedZoneResponse
 */
ListGatewayIntranetSupportedZoneResponse Client::listGatewayIntranetSupportedZone(const string &GatewayId, const string &ClusterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGatewayIntranetSupportedZoneWithOptions(GatewayId, ClusterId, headers, runtime);
}

/**
 * @summary Queries created service groups.
 *
 * @param request ListGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTrafficMode()) {
    query["TrafficMode"] = request.trafficMode();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Queries created service groups.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of workers in a resource group.
 *
 * @param request ListResourceInstanceWorkerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceInstanceWorkerResponse
 */
ListResourceInstanceWorkerResponse Client::listResourceInstanceWorkerWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceName, const ListResourceInstanceWorkerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReady()) {
    query["Ready"] = request.ready();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWorkerName()) {
    query["WorkerName"] = request.workerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceInstanceWorker"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/instance/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/workers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceInstanceWorkerResponse>();
}

/**
 * @summary Queries a list of workers in a resource group.
 *
 * @param request ListResourceInstanceWorkerRequest
 * @return ListResourceInstanceWorkerResponse
 */
ListResourceInstanceWorkerResponse Client::listResourceInstanceWorker(const string &ClusterId, const string &ResourceId, const string &InstanceName, const ListResourceInstanceWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceInstanceWorkerWithOptions(ClusterId, ResourceId, InstanceName, request, headers, runtime);
}

/**
 * @summary Queries a list of instances in a dedicated resource group.
 *
 * @param tmpReq ListResourceInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceInstancesResponse
 */
ListResourceInstancesResponse Client::listResourceInstancesWithOptions(const string &ClusterId, const string &ResourceId, const ListResourceInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourceInstancesShrinkRequest request = ListResourceInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabel()) {
    request.setLabelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.label(), "Label", "json"));
  }

  json query = {};
  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasInstanceIP()) {
    query["InstanceIP"] = request.instanceIP();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasLabelShrink()) {
    query["Label"] = request.labelShrink();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceInstances"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceInstancesResponse>();
}

/**
 * @summary Queries a list of instances in a dedicated resource group.
 *
 * @param request ListResourceInstancesRequest
 * @return ListResourceInstancesResponse
 */
ListResourceInstancesResponse Client::listResourceInstances(const string &ClusterId, const string &ResourceId, const ListResourceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @deprecated OpenAPI ListResourceServices is deprecated
 *
 * @summary Queries a list of services that are deployed in the dedicated resource group.
 *
 * @param request ListResourceServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceServicesResponse
 */
ListResourceServicesResponse Client::listResourceServicesWithOptions(const string &ClusterId, const string &ResourceId, const ListResourceServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceServices"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceServicesResponse>();
}

/**
 * @deprecated OpenAPI ListResourceServices is deprecated
 *
 * @summary Queries a list of services that are deployed in the dedicated resource group.
 *
 * @param request ListResourceServicesRequest
 * @return ListResourceServicesResponse
 */
ListResourceServicesResponse Client::listResourceServices(const string &ClusterId, const string &ResourceId, const ListResourceServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceServicesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Queries a list of dedicated resource groups for the current user.
 *
 * @param request ListResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceStatus()) {
    query["ResourceStatus"] = request.resourceStatus();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary Queries a list of dedicated resource groups for the current user.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the containers of a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceContainersResponse
 */
ListServiceContainersResponse Client::listServiceContainersWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceContainers"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/containers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceContainersResponse>();
}

/**
 * @summary Queries the containers of a service.
 *
 * @return ListServiceContainersResponse
 */
ListServiceContainersResponse Client::listServiceContainers(const string &ClusterId, const string &ServiceName, const string &InstanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceContainersWithOptions(ClusterId, ServiceName, InstanceName, headers, runtime);
}

/**
 * @summary 获取故障注入信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceFaultInjectionInfoResponse
 */
ListServiceInstanceFaultInjectionInfoResponse Client::listServiceInstanceFaultInjectionInfoWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceFaultInjectionInfo"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName) , "/faults")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceFaultInjectionInfoResponse>();
}

/**
 * @summary 获取故障注入信息
 *
 * @return ListServiceInstanceFaultInjectionInfoResponse
 */
ListServiceInstanceFaultInjectionInfoResponse Client::listServiceInstanceFaultInjectionInfo(const string &ClusterId, const string &ServiceName, const string &InstanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceInstanceFaultInjectionInfoWithOptions(ClusterId, ServiceName, InstanceName, headers, runtime);
}

/**
 * @summary Queries instances of a service.
 *
 * @param request ListServiceInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstancesWithOptions(const string &ClusterId, const string &ServiceName, const ListServiceInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasHostIP()) {
    query["HostIP"] = request.hostIP();
  }

  if (!!request.hasInstanceIP()) {
    query["InstanceIP"] = request.instanceIP();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasIsSpot()) {
    query["IsSpot"] = request.isSpot();
  }

  if (!!request.hasListReplica()) {
    query["ListReplica"] = request.listReplica();
  }

  if (!!request.hasMemberType()) {
    query["MemberType"] = request.memberType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReplicaName()) {
    query["ReplicaName"] = request.replicaName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstances"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstancesResponse>();
}

/**
 * @summary Queries instances of a service.
 *
 * @param request ListServiceInstancesRequest
 * @return ListServiceInstancesResponse
 */
ListServiceInstancesResponse Client::listServiceInstances(const string &ClusterId, const string &ServiceName, const ListServiceInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Queries the information about the historical versions of a service.
 *
 * @param request ListServiceVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceVersionsResponse
 */
ListServiceVersionsResponse Client::listServiceVersionsWithOptions(const string &ClusterId, const string &ServiceName, const ListServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceVersions"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceVersionsResponse>();
}

/**
 * @summary Queries the information about the historical versions of a service.
 *
 * @param request ListServiceVersionsRequest
 * @return ListServiceVersionsResponse
 */
ListServiceVersionsResponse Client::listServiceVersions(const string &ClusterId, const string &ServiceName, const ListServiceVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceVersionsWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Lists services.
 *
 * @param tmpReq ListServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const ListServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListServicesShrinkRequest request = ListServicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabel()) {
    request.setLabelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.label(), "Label", "json"));
  }

  json query = {};
  if (!!request.hasAutoscalerEnabled()) {
    query["AutoscalerEnabled"] = request.autoscalerEnabled();
  }

  if (!!request.hasCronscalerEnabled()) {
    query["CronscalerEnabled"] = request.cronscalerEnabled();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasGateway()) {
    query["Gateway"] = request.gateway();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasIncludeNoWorkspace()) {
    query["IncludeNoWorkspace"] = request.includeNoWorkspace();
  }

  if (!!request.hasLabelShrink()) {
    query["Label"] = request.labelShrink();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentServiceUid()) {
    query["ParentServiceUid"] = request.parentServiceUid();
  }

  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.quotaId();
  }

  if (!!request.hasResourceAliasName()) {
    query["ResourceAliasName"] = request.resourceAliasName();
  }

  if (!!request.hasResourceBurstable()) {
    query["ResourceBurstable"] = request.resourceBurstable();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceStatus()) {
    query["ServiceStatus"] = request.serviceStatus();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  if (!!request.hasServiceUid()) {
    query["ServiceUid"] = request.serviceUid();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTrafficState()) {
    query["TrafficState"] = request.trafficState();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary Lists services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServicesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of tenant plug-ins.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantAddonsResponse
 */
ListTenantAddonsResponse Client::listTenantAddonsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTenantAddons"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/tenantaddons")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantAddonsResponse>();
}

/**
 * @summary Queries a list of tenant plug-ins.
 *
 * @return ListTenantAddonsResponse
 */
ListTenantAddonsResponse Client::listTenantAddons() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTenantAddonsWithOptions(headers, runtime);
}

/**
 * @summary Queries a list of virtual resource groups for the current user.
 *
 * @param request ListVirtualResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVirtualResourceResponse
 */
ListVirtualResourceResponse Client::listVirtualResourceWithOptions(const ListVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasVirtualResourceId()) {
    query["VirtualResourceId"] = request.virtualResourceId();
  }

  if (!!request.hasVirtualResourceName()) {
    query["VirtualResourceName"] = request.virtualResourceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVirtualResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/virtualresources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVirtualResourceResponse>();
}

/**
 * @summary Queries a list of virtual resource groups for the current user.
 *
 * @param request ListVirtualResourceRequest
 * @return ListVirtualResourceResponse
 */
ListVirtualResourceResponse Client::listVirtualResource(const ListVirtualResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVirtualResourceWithOptions(request, headers, runtime);
}

/**
 * @summary Resets tenant configurations.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReinstallTenantAddonResponse
 */
ReinstallTenantAddonResponse Client::reinstallTenantAddonWithOptions(const string &ClusterId, const string &TenantAddonName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReinstallTenantAddon"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/tenantaddons/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TenantAddonName) , "/reinstall")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReinstallTenantAddonResponse>();
}

/**
 * @summary Resets tenant configurations.
 *
 * @return ReinstallTenantAddonResponse
 */
ReinstallTenantAddonResponse Client::reinstallTenantAddon(const string &ClusterId, const string &TenantAddonName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reinstallTenantAddonWithOptions(ClusterId, TenantAddonName, headers, runtime);
}

/**
 * @summary Switch the traffic state or weight of the service.
 *
 * @param request ReleaseServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseServiceResponse
 */
ReleaseServiceResponse Client::releaseServiceWithOptions(const string &ClusterId, const string &ServiceName, const ReleaseServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTrafficState()) {
    body["TrafficState"] = request.trafficState();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.weight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReleaseService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/release")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseServiceResponse>();
}

/**
 * @summary Switch the traffic state or weight of the service.
 *
 * @param request ReleaseServiceRequest
 * @return ReleaseServiceResponse
 */
ReleaseServiceResponse Client::releaseService(const string &ClusterId, const string &ServiceName, const ReleaseServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Restarts a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartServiceResponse
 */
RestartServiceResponse Client::restartServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/restart")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartServiceResponse>();
}

/**
 * @summary Restarts a service.
 *
 * @return RestartServiceResponse
 */
RestartServiceResponse Client::restartService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Starts a stress testing task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBenchmarkTaskResponse
 */
StartBenchmarkTaskResponse Client::startBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartBenchmarkTaskResponse>();
}

/**
 * @summary Starts a stress testing task.
 *
 * @return StartBenchmarkTaskResponse
 */
StartBenchmarkTaskResponse Client::startBenchmarkTask(const string &ClusterId, const string &TaskName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

/**
 * @summary Starts a service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartServiceResponse
 */
StartServiceResponse Client::startServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartServiceResponse>();
}

/**
 * @summary Starts a service.
 *
 * @return StartServiceResponse
 */
StartServiceResponse Client::startService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Stops a stress testing task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopBenchmarkTaskResponse
 */
StopBenchmarkTaskResponse Client::stopBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopBenchmarkTaskResponse>();
}

/**
 * @summary Stops a stress testing task.
 *
 * @return StopBenchmarkTaskResponse
 */
StopBenchmarkTaskResponse Client::stopBenchmarkTask(const string &ClusterId, const string &TaskName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

/**
 * @summary Stops a running service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopServiceResponse
 */
StopServiceResponse Client::stopServiceWithOptions(const string &ClusterId, const string &ServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopServiceResponse>();
}

/**
 * @summary Stops a running service.
 *
 * @return StopServiceResponse
 */
StopServiceResponse Client::stopService(const string &ClusterId, const string &ServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

/**
 * @summary Updates an application service.
 *
 * @param request UpdateAppServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppServiceResponse
 */
UpdateAppServiceResponse Client::updateAppServiceWithOptions(const string &ClusterId, const string &ServiceName, const UpdateAppServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuotaId()) {
    query["QuotaId"] = request.quotaId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  if (!!request.hasServiceSpec()) {
    body["ServiceSpec"] = request.serviceSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAppService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/app_services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppServiceResponse>();
}

/**
 * @summary Updates an application service.
 *
 * @param request UpdateAppServiceRequest
 * @return UpdateAppServiceResponse
 */
UpdateAppServiceResponse Client::updateAppService(const string &ClusterId, const string &ServiceName, const UpdateAppServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates a stress testing task.
 *
 * @param request UpdateBenchmarkTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBenchmarkTaskResponse
 */
UpdateBenchmarkTaskResponse Client::updateBenchmarkTaskWithOptions(const string &ClusterId, const string &TaskName, const UpdateBenchmarkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateBenchmarkTask"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/benchmark-tasks/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(TaskName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBenchmarkTaskResponse>();
}

/**
 * @summary Updates a stress testing task.
 *
 * @param request UpdateBenchmarkTaskRequest
 * @return UpdateBenchmarkTaskResponse
 */
UpdateBenchmarkTaskResponse Client::updateBenchmarkTask(const string &ClusterId, const string &TaskName, const UpdateBenchmarkTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateBenchmarkTaskWithOptions(ClusterId, TaskName, request, headers, runtime);
}

/**
 * @summary Update a private gateway.
 *
 * @param request UpdateGatewayRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayResponse
 */
UpdateGatewayResponse Client::updateGatewayWithOptions(const string &GatewayId, const string &ClusterId, const UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnableInternet()) {
    body["EnableInternet"] = request.enableInternet();
  }

  if (!!request.hasEnableIntranet()) {
    body["EnableIntranet"] = request.enableIntranet();
  }

  if (!!request.hasEnableSSLRedirection()) {
    body["EnableSSLRedirection"] = request.enableSSLRedirection();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasIsDefault()) {
    body["IsDefault"] = request.isDefault();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasReplicas()) {
    body["Replicas"] = request.replicas();
  }

  if (!!request.hasVSwitchIds()) {
    body["VSwitchIds"] = request.vSwitchIds();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGateway"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/gateways/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GatewayId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayResponse>();
}

/**
 * @summary Update a private gateway.
 *
 * @param request UpdateGatewayRequest
 * @return UpdateGatewayResponse
 */
UpdateGatewayResponse Client::updateGateway(const string &GatewayId, const string &ClusterId, const UpdateGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGatewayWithOptions(GatewayId, ClusterId, request, headers, runtime);
}

/**
 * @summary Updates the specific fields of a service group.
 *
 * @param request UpdateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const string &ClusterId, const string &GroupName, const UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTrafficMode()) {
    body["TrafficMode"] = request.trafficMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/groups/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(GroupName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupResponse>();
}

/**
 * @summary Updates the specific fields of a service group.
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const string &ClusterId, const string &GroupName, const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupWithOptions(ClusterId, GroupName, request, headers, runtime);
}

/**
 * @summary Updates the information about a dedicated resource group. Only the name of a dedicated resource group can be updated.
 *
 * @param request UpdateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResourceWithOptions(const string &ClusterId, const string &ResourceId, const UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceName()) {
    body["ResourceName"] = request.resourceName();
  }

  if (!!request.hasSelfManagedResourceOptions()) {
    body["SelfManagedResourceOptions"] = request.selfManagedResourceOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceResponse>();
}

/**
 * @summary Updates the information about a dedicated resource group. Only the name of a dedicated resource group can be updated.
 *
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const string &ClusterId, const string &ResourceId, const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Updates the configurations of a virtual private cloud (VPC) direct connection for a dedicated resource group.
 *
 * @param request UpdateResourceDLinkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceDLinkResponse
 */
UpdateResourceDLinkResponse Client::updateResourceDLinkWithOptions(const string &ClusterId, const string &ResourceId, const UpdateResourceDLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCIDRs()) {
    body["DestinationCIDRs"] = request.destinationCIDRs();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVSwitchIdList()) {
    body["VSwitchIdList"] = request.vSwitchIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceDLink"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/dlink")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceDLinkResponse>();
}

/**
 * @summary Updates the configurations of a virtual private cloud (VPC) direct connection for a dedicated resource group.
 *
 * @param request UpdateResourceDLinkRequest
 * @return UpdateResourceDLinkResponse
 */
UpdateResourceDLinkResponse Client::updateResourceDLink(const string &ClusterId, const string &ResourceId, const UpdateResourceDLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceDLinkWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Updates the service scheduling status of an instance in a dedicated resource group.
 *
 * @param request UpdateResourceInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceInstanceResponse
 */
UpdateResourceInstanceResponse Client::updateResourceInstanceWithOptions(const string &ClusterId, const string &ResourceId, const string &InstanceId, const UpdateResourceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["Action"] = request.action();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceInstance"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceInstanceResponse>();
}

/**
 * @summary Updates the service scheduling status of an instance in a dedicated resource group.
 *
 * @param request UpdateResourceInstanceRequest
 * @return UpdateResourceInstanceResponse
 */
UpdateResourceInstanceResponse Client::updateResourceInstance(const string &ClusterId, const string &ResourceId, const string &InstanceId, const UpdateResourceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceInstanceWithOptions(ClusterId, ResourceId, InstanceId, request, headers, runtime);
}

/**
 * @summary Updates the tag of an instance in a resource group.
 *
 * @param tmpReq UpdateResourceInstanceLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceInstanceLabelResponse
 */
UpdateResourceInstanceLabelResponse Client::updateResourceInstanceLabelWithOptions(const string &ClusterId, const string &ResourceId, const UpdateResourceInstanceLabelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateResourceInstanceLabelShrinkRequest request = UpdateResourceInstanceLabelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceIds(), "InstanceIds", "simple"));
  }

  json query = {};
  if (!!request.hasAllInstances()) {
    query["AllInstances"] = request.allInstances();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.instanceIdsShrink();
  }

  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceInstanceLabel"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/resources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ResourceId) , "/label")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceInstanceLabelResponse>();
}

/**
 * @summary Updates the tag of an instance in a resource group.
 *
 * @param request UpdateResourceInstanceLabelRequest
 * @return UpdateResourceInstanceLabelResponse
 */
UpdateResourceInstanceLabelResponse Client::updateResourceInstanceLabel(const string &ClusterId, const string &ResourceId, const UpdateResourceInstanceLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceInstanceLabelWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

/**
 * @summary Updates a model or processor of a service. If only the metadata.instance field is updated, manual scaling can be performed.
 *
 * @param request UpdateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateServiceWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberToUpdate()) {
    query["MemberToUpdate"] = request.memberToUpdate();
  }

  if (!!request.hasUpdateType()) {
    query["UpdateType"] = request.updateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "UpdateService"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceResponse>();
}

/**
 * @summary Updates a model or processor of a service. If only the metadata.instance field is updated, manual scaling can be performed.
 *
 * @param request UpdateServiceRequest
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateService(const string &ClusterId, const string &ServiceName, const UpdateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the Autoscaler configurations of a service.
 *
 * @param request UpdateServiceAutoScalerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceAutoScalerResponse
 */
UpdateServiceAutoScalerResponse Client::updateServiceAutoScalerWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceAutoScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBehavior()) {
    body["behavior"] = request.behavior();
  }

  if (!!request.hasMax()) {
    body["max"] = request.max();
  }

  if (!!request.hasMin()) {
    body["min"] = request.min();
  }

  if (!!request.hasScaleStrategies()) {
    body["scaleStrategies"] = request.scaleStrategies();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceAutoScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/autoscaler")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceAutoScalerResponse>();
}

/**
 * @summary Updates the Autoscaler configurations of a service.
 *
 * @param request UpdateServiceAutoScalerRequest
 * @return UpdateServiceAutoScalerResponse
 */
UpdateServiceAutoScalerResponse Client::updateServiceAutoScaler(const string &ClusterId, const string &ServiceName, const UpdateServiceAutoScalerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the Cron Horizontal Pod Autoscaler (CronHPA) settings of a service.
 *
 * @param request UpdateServiceCronScalerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceCronScalerResponse
 */
UpdateServiceCronScalerResponse Client::updateServiceCronScalerWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceCronScalerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExcludeDates()) {
    body["ExcludeDates"] = request.excludeDates();
  }

  if (!!request.hasScaleJobs()) {
    body["ScaleJobs"] = request.scaleJobs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceCronScaler"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/cronscaler")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceCronScalerResponse>();
}

/**
 * @summary Updates the Cron Horizontal Pod Autoscaler (CronHPA) settings of a service.
 *
 * @param request UpdateServiceCronScalerRequest
 * @return UpdateServiceCronScalerResponse
 */
UpdateServiceCronScalerResponse Client::updateServiceCronScaler(const string &ClusterId, const string &ServiceName, const UpdateServiceCronScalerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates attributes of service instances. Only isolation can be performed for service instances.
 *
 * @param request UpdateServiceInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceInstanceResponse
 */
UpdateServiceInstanceResponse Client::updateServiceInstanceWithOptions(const string &ClusterId, const string &ServiceName, const string &InstanceName, const UpdateServiceInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsReplica()) {
    query["IsReplica"] = request.isReplica();
  }

  json body = {};
  if (!!request.hasDetach()) {
    body["Detach"] = request.detach();
  }

  if (!!request.hasHibernate()) {
    body["Hibernate"] = request.hibernate();
  }

  if (!!request.hasIsolate()) {
    body["Isolate"] = request.isolate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceInstance"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceInstanceResponse>();
}

/**
 * @summary Updates attributes of service instances. Only isolation can be performed for service instances.
 *
 * @param request UpdateServiceInstanceRequest
 * @return UpdateServiceInstanceResponse
 */
UpdateServiceInstanceResponse Client::updateServiceInstance(const string &ClusterId, const string &ServiceName, const string &InstanceName, const UpdateServiceInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceInstanceWithOptions(ClusterId, ServiceName, InstanceName, request, headers, runtime);
}

/**
 * @summary Adds service tags or updates existing service tags.
 *
 * @param request UpdateServiceLabelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceLabelResponse
 */
UpdateServiceLabelResponse Client::updateServiceLabelWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceLabel"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/label")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceLabelResponse>();
}

/**
 * @summary Adds service tags or updates existing service tags.
 *
 * @param request UpdateServiceLabelRequest
 * @return UpdateServiceLabelResponse
 */
UpdateServiceLabelResponse Client::updateServiceLabel(const string &ClusterId, const string &ServiceName, const UpdateServiceLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceLabelWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the traffic mirroring configurations of a service.
 *
 * @param request UpdateServiceMirrorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceMirrorResponse
 */
UpdateServiceMirrorResponse Client::updateServiceMirrorWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceMirrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRatio()) {
    body["Ratio"] = request.ratio();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.target();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceMirror"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/mirror")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceMirrorResponse>();
}

/**
 * @summary Updates the traffic mirroring configurations of a service.
 *
 * @param request UpdateServiceMirrorRequest
 * @return UpdateServiceMirrorResponse
 */
UpdateServiceMirrorResponse Client::updateServiceMirror(const string &ClusterId, const string &ServiceName, const UpdateServiceMirrorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the safety lock of a service to minimize misoperations on the service.
 *
 * @param request UpdateServiceSafetyLockRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceSafetyLockResponse
 */
UpdateServiceSafetyLockResponse Client::updateServiceSafetyLockWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceSafetyLockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLock()) {
    body["Lock"] = request.lock();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceSafetyLock"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/lock")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceSafetyLockResponse>();
}

/**
 * @summary Updates the safety lock of a service to minimize misoperations on the service.
 *
 * @param request UpdateServiceSafetyLockRequest
 * @return UpdateServiceSafetyLockResponse
 */
UpdateServiceSafetyLockResponse Client::updateServiceSafetyLock(const string &ClusterId, const string &ServiceName, const UpdateServiceSafetyLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceSafetyLockWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the version of a service or rolls back the service to a specific version.
 *
 * @param request UpdateServiceVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceVersionResponse
 */
UpdateServiceVersionResponse Client::updateServiceVersionWithOptions(const string &ClusterId, const string &ServiceName, const UpdateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasVersion()) {
    body["Version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceVersion"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/services/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(ServiceName) , "/version")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceVersionResponse>();
}

/**
 * @summary Updates the version of a service or rolls back the service to a specific version.
 *
 * @param request UpdateServiceVersionRequest
 * @return UpdateServiceVersionResponse
 */
UpdateServiceVersionResponse Client::updateServiceVersion(const string &ClusterId, const string &ServiceName, const UpdateServiceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceVersionWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

/**
 * @summary Updates the information about a virtual resource group.
 *
 * @param request UpdateVirtualResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVirtualResourceResponse
 */
UpdateVirtualResourceResponse Client::updateVirtualResourceWithOptions(const string &ClusterId, const string &VirtualResourceId, const UpdateVirtualResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDisableSpotProtectionPeriod()) {
    body["DisableSpotProtectionPeriod"] = request.disableSpotProtectionPeriod();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.resources();
  }

  if (!!request.hasVirtualResourceName()) {
    body["VirtualResourceName"] = request.virtualResourceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVirtualResource"},
    {"version" , "2021-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/virtualresources/" , Darabonba::Encode::Encoder::percentEncode(ClusterId) , "/" , Darabonba::Encode::Encoder::percentEncode(VirtualResourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVirtualResourceResponse>();
}

/**
 * @summary Updates the information about a virtual resource group.
 *
 * @param request UpdateVirtualResourceRequest
 * @return UpdateVirtualResourceResponse
 */
UpdateVirtualResourceResponse Client::updateVirtualResource(const string &ClusterId, const string &VirtualResourceId, const UpdateVirtualResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateVirtualResourceWithOptions(ClusterId, VirtualResourceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Eas20210701