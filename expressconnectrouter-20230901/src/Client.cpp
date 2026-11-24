#include <darabonba/Core.hpp>
#include <alibabacloud/ExpressConnectRouter20230901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ExpressConnectRouter20230901::Models;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{

AlibabaCloud::ExpressConnectRouter20230901::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "ExpressConnectRouter";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hongkong" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-zhangjiakou" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-beijing" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-wulanchabu" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-nanjing" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-northeast-2" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-northeast-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-fuzhou" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-chengdu" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-wuhan-lr" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-guangzhou" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-3" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-5" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-6" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-7" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"us-west-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"us-east-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"eu-central-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"eu-west-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"me-central-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"},
    {"cn-beijing-finance-1" , "expressconnectrouter.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("expressconnectrouter", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Enables log delivery for a flow log.
 *
 * @param request ActivateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateFlowLogResponse
 */
ActivateFlowLogResponse Client::activateFlowLogWithOptions(const ActivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasFlowLogId()) {
    body["FlowLogId"] = request.getFlowLogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ActivateFlowLog"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateFlowLogResponse>();
}

/**
 * @summary Enables log delivery for a flow log.
 *
 * @param request ActivateFlowLogRequest
 * @return ActivateFlowLogResponse
 */
ActivateFlowLogResponse Client::activateFlowLog(const ActivateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Attaches a child instance (VBR) to an Express Connect Router (ECR).
 *
 * @description Before you invoke the **AttachExpressConnectRouterChildInstance** operation to load a child instance (VBR) to an Express Connect Router (ECR), make sure that the Express Connect Router (ECR) is in the **Active** state.
 *
 * @param request AttachExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachExpressConnectRouterChildInstanceResponse
 */
AttachExpressConnectRouterChildInstanceResponse Client::attachExpressConnectRouterChildInstanceWithOptions(const AttachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    body["ChildInstanceOwnerId"] = request.getChildInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    body["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AttachExpressConnectRouterChildInstance"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachExpressConnectRouterChildInstanceResponse>();
}

/**
 * @summary Attaches a child instance (VBR) to an Express Connect Router (ECR).
 *
 * @description Before you invoke the **AttachExpressConnectRouterChildInstance** operation to load a child instance (VBR) to an Express Connect Router (ECR), make sure that the Express Connect Router (ECR) is in the **Active** state.
 *
 * @param request AttachExpressConnectRouterChildInstanceRequest
 * @return AttachExpressConnectRouterChildInstanceResponse
 */
AttachExpressConnectRouterChildInstanceResponse Client::attachExpressConnectRouterChildInstance(const AttachExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Checks the Cloud Data Transfer (CDT) service required to add a specified region to an Express Connect Router (ECR).
 *
 * @param request CheckAddRegionToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAddRegionToExpressConnectRouterResponse
 */
CheckAddRegionToExpressConnectRouterResponse Client::checkAddRegionToExpressConnectRouterWithOptions(const CheckAddRegionToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasFreshRegionId()) {
    body["FreshRegionId"] = request.getFreshRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAddRegionToExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAddRegionToExpressConnectRouterResponse>();
}

/**
 * @summary Checks the Cloud Data Transfer (CDT) service required to add a specified region to an Express Connect Router (ECR).
 *
 * @param request CheckAddRegionToExpressConnectRouterRequest
 * @return CheckAddRegionToExpressConnectRouterResponse
 */
CheckAddRegionToExpressConnectRouterResponse Client::checkAddRegionToExpressConnectRouter(const CheckAddRegionToExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAddRegionToExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Creates an Express Connect Router (ECR).
 *
 * @description After you create an Express Connect Router (ECR) instance, the instance status is **Active**.
 *
 * @param request CreateExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressConnectRouterResponse
 */
CreateExpressConnectRouterResponse Client::createExpressConnectRouterWithOptions(const CreateExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAlibabaSideAsn()) {
    body["AlibabaSideAsn"] = request.getAlibabaSideAsn();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExpressConnectRouterResponse>();
}

/**
 * @summary Creates an Express Connect Router (ECR).
 *
 * @description After you create an Express Connect Router (ECR) instance, the instance status is **Active**.
 *
 * @param request CreateExpressConnectRouterRequest
 * @return CreateExpressConnectRouterResponse
 */
CreateExpressConnectRouterResponse Client::createExpressConnectRouter(const CreateExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Associates an Express Connect Router (ECR) with a virtual private cloud (VPC) or a transit router (TR).
 *
 * @param request CreateExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressConnectRouterAssociationResponse
 */
CreateExpressConnectRouterAssociationResponse Client::createExpressConnectRouterAssociationWithOptions(const CreateExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAllowedPrefixes()) {
    body["AllowedPrefixes"] = request.getAllowedPrefixes();
  }

  if (!!request.hasAllowedPrefixesMode()) {
    body["AllowedPrefixesMode"] = request.getAllowedPrefixesMode();
  }

  if (!!request.hasAssociationRegionId()) {
    body["AssociationRegionId"] = request.getAssociationRegionId();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCreateAttachment()) {
    body["CreateAttachment"] = request.getCreateAttachment();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasTransitRouterId()) {
    body["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasTransitRouterOwnerId()) {
    body["TransitRouterOwnerId"] = request.getTransitRouterOwnerId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    body["VpcOwnerId"] = request.getVpcOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExpressConnectRouterAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExpressConnectRouterAssociationResponse>();
}

/**
 * @summary Associates an Express Connect Router (ECR) with a virtual private cloud (VPC) or a transit router (TR).
 *
 * @param request CreateExpressConnectRouterAssociationRequest
 * @return CreateExpressConnectRouterAssociationResponse
 */
CreateExpressConnectRouterAssociationResponse Client::createExpressConnectRouterAssociation(const CreateExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Creates a flow log and enables log delivery by default.
 *
 * @param request CreateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLogWithOptions(const CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.getSamplingRate();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetSlsRegionId()) {
    query["TargetSlsRegionId"] = request.getTargetSlsRegionId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasFlowLogName()) {
    body["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFlowLog"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowLogResponse>();
}

/**
 * @summary Creates a flow log and enables log delivery by default.
 *
 * @param request CreateFlowLogRequest
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLog(const CreateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowLogWithOptions(request, runtime);
}

/**
 * @summary Creates an association between an Express Connect Router (ECR) and a route map.
 *
 * @param request CreateRouteMapAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRouteMapAssociationResponse
 */
CreateRouteMapAssociationResponse Client::createRouteMapAssociationWithOptions(const CreateRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionIdList()) {
    query["RegionIdList"] = request.getRegionIdList();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.getRouteMapId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRouteMapAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRouteMapAssociationResponse>();
}

/**
 * @summary Creates an association between an Express Connect Router (ECR) and a route map.
 *
 * @param request CreateRouteMapAssociationRequest
 * @return CreateRouteMapAssociationResponse
 */
CreateRouteMapAssociationResponse Client::createRouteMapAssociation(const CreateRouteMapAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRouteMapAssociationWithOptions(request, runtime);
}

/**
 * @summary Stops log delivery for a flow log.
 *
 * @param request DeactivateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateFlowLogResponse
 */
DeactivateFlowLogResponse Client::deactivateFlowLogWithOptions(const DeactivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasFlowLogId()) {
    body["FlowLogId"] = request.getFlowLogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeactivateFlowLog"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateFlowLogResponse>();
}

/**
 * @summary Stops log delivery for a flow log.
 *
 * @param request DeactivateFlowLogRequest
 * @return DeactivateFlowLogResponse
 */
DeactivateFlowLogResponse Client::deactivateFlowLog(const DeactivateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactivateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Deletes an Express Connect Router (ECR).
 *
 * @description Before you invoke the DeleteExpressConnectRouter operation to delete an Express Connect Router (ECR) instance, note the following:
 * - Before you delete an Express Connect Router (ECR) instance, you must delete the resources associated with the Express Connect Router (ECR) instance.
 * - You can delete only Express Connect Router (ECR) instances that are in the **Active** state.
 *
 * @param request DeleteExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressConnectRouterResponse
 */
DeleteExpressConnectRouterResponse Client::deleteExpressConnectRouterWithOptions(const DeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExpressConnectRouterResponse>();
}

/**
 * @summary Deletes an Express Connect Router (ECR).
 *
 * @description Before you invoke the DeleteExpressConnectRouter operation to delete an Express Connect Router (ECR) instance, note the following:
 * - Before you delete an Express Connect Router (ECR) instance, you must delete the resources associated with the Express Connect Router (ECR) instance.
 * - You can delete only Express Connect Router (ECR) instances that are in the **Active** state.
 *
 * @param request DeleteExpressConnectRouterRequest
 * @return DeleteExpressConnectRouterResponse
 */
DeleteExpressConnectRouterResponse Client::deleteExpressConnectRouter(const DeleteExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Disassociates an Express Connect Router (ECR) from a virtual private cloud (VPC) or a transit router.
 *
 * @param request DeleteExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressConnectRouterAssociationResponse
 */
DeleteExpressConnectRouterAssociationResponse Client::deleteExpressConnectRouterAssociationWithOptions(const DeleteExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteAttachment()) {
    body["DeleteAttachment"] = request.getDeleteAttachment();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteExpressConnectRouterAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExpressConnectRouterAssociationResponse>();
}

/**
 * @summary Disassociates an Express Connect Router (ECR) from a virtual private cloud (VPC) or a transit router.
 *
 * @param request DeleteExpressConnectRouterAssociationRequest
 * @return DeleteExpressConnectRouterAssociationResponse
 */
DeleteExpressConnectRouterAssociationResponse Client::deleteExpressConnectRouterAssociation(const DeleteExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Deletes a flow log.
 *
 * @param request DeleteFlowlogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowlogResponse
 */
DeleteFlowlogResponse Client::deleteFlowlogWithOptions(const DeleteFlowlogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteFlowlog"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowlogResponse>();
}

/**
 * @summary Deletes a flow log.
 *
 * @param request DeleteFlowlogRequest
 * @return DeleteFlowlogResponse
 */
DeleteFlowlogResponse Client::deleteFlowlog(const DeleteFlowlogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowlogWithOptions(request, runtime);
}

/**
 * @summary Deletes the association between an Express Connect Router (ECR) and a route policy.
 *
 * @param request DeleteRouteMapAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteMapAssociationResponse
 */
DeleteRouteMapAssociationResponse Client::deleteRouteMapAssociationWithOptions(const DeleteRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociationId()) {
    query["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRouteMapAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteMapAssociationResponse>();
}

/**
 * @summary Deletes the association between an Express Connect Router (ECR) and a route policy.
 *
 * @param request DeleteRouteMapAssociationRequest
 * @return DeleteRouteMapAssociationResponse
 */
DeleteRouteMapAssociationResponse Client::deleteRouteMapAssociation(const DeleteRouteMapAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteMapAssociationWithOptions(request, runtime);
}

/**
 * @summary Queries the disabled route entry of an Express Connect Router (ECR).
 *
 * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
 */
DescribeDisabledExpressConnectRouterRouteEntriesResponse Client::describeDisabledExpressConnectRouterRouteEntriesWithOptions(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeDisabledExpressConnectRouterRouteEntries"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDisabledExpressConnectRouterRouteEntriesResponse>();
}

/**
 * @summary Queries the disabled route entry of an Express Connect Router (ECR).
 *
 * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
 * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
 */
DescribeDisabledExpressConnectRouterRouteEntriesResponse Client::describeDisabledExpressConnectRouterRouteEntries(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisabledExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Express Connect Router (ECR) instances.
 *
 * @param request DescribeExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterResponse
 */
DescribeExpressConnectRouterResponse Client::describeExpressConnectRouterWithOptions(const DescribeExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterResponse>();
}

/**
 * @summary Queries a list of Express Connect Router (ECR) instances.
 *
 * @param request DescribeExpressConnectRouterRequest
 * @return DescribeExpressConnectRouterResponse
 */
DescribeExpressConnectRouterResponse Client::describeExpressConnectRouter(const DescribeExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Queries the history of prefix routes for an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
 */
DescribeExpressConnectRouterAllowedPrefixHistoryResponse Client::describeExpressConnectRouterAllowedPrefixHistoryWithOptions(const DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterAllowedPrefixHistory"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterAllowedPrefixHistoryResponse>();
}

/**
 * @summary Queries the history of prefix routes for an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
 * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
 */
DescribeExpressConnectRouterAllowedPrefixHistoryResponse Client::describeExpressConnectRouterAllowedPrefixHistory(const DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterAllowedPrefixHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterAssociationResponse
 */
DescribeExpressConnectRouterAssociationResponse Client::describeExpressConnectRouterAssociationWithOptions(const DescribeExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasAssociationNodeType()) {
    body["AssociationNodeType"] = request.getAssociationNodeType();
  }

  if (!!request.hasAssociationRegionId()) {
    body["AssociationRegionId"] = request.getAssociationRegionId();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.getCenId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTransitRouterId()) {
    body["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterAssociationResponse>();
}

/**
 * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterAssociationRequest
 * @return DescribeExpressConnectRouterAssociationResponse
 */
DescribeExpressConnectRouterAssociationResponse Client::describeExpressConnectRouterAssociation(const DescribeExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual border routers (VBRs) associated with an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterChildInstanceResponse
 */
DescribeExpressConnectRouterChildInstanceResponse Client::describeExpressConnectRouterChildInstanceWithOptions(const DescribeExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    body["ChildInstanceRegionId"] = request.getChildInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterChildInstance"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterChildInstanceResponse>();
}

/**
 * @summary Queries the virtual border routers (VBRs) associated with an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterChildInstanceRequest
 * @return DescribeExpressConnectRouterChildInstanceResponse
 */
DescribeExpressConnectRouterChildInstanceResponse Client::describeExpressConnectRouterChildInstance(const DescribeExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the cross-region forwarding mode of an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
 */
DescribeExpressConnectRouterInterRegionTransitModeResponse Client::describeExpressConnectRouterInterRegionTransitModeWithOptions(const DescribeExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterInterRegionTransitMode"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterInterRegionTransitModeResponse>();
}

/**
 * @summary Queries the cross-region forwarding mode of an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
 * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
 */
DescribeExpressConnectRouterInterRegionTransitModeResponse Client::describeExpressConnectRouterInterRegionTransitMode(const DescribeExpressConnectRouterInterRegionTransitModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where Express Connect Router (ECR) resources are located.
 *
 * @param request DescribeExpressConnectRouterRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterRegionResponse
 */
DescribeExpressConnectRouterRegionResponse Client::describeExpressConnectRouterRegionWithOptions(const DescribeExpressConnectRouterRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterRegion"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterRegionResponse>();
}

/**
 * @summary Queries the regions where Express Connect Router (ECR) resources are located.
 *
 * @param request DescribeExpressConnectRouterRegionRequest
 * @return DescribeExpressConnectRouterRegionResponse
 */
DescribeExpressConnectRouterRegionResponse Client::describeExpressConnectRouterRegion(const DescribeExpressConnectRouterRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the route entries of an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterRouteEntriesResponse
 */
DescribeExpressConnectRouterRouteEntriesResponse Client::describeExpressConnectRouterRouteEntriesWithOptions(const DescribeExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAsPath()) {
    body["AsPath"] = request.getAsPath();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommunity()) {
    body["Community"] = request.getCommunity();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.getNexthopInstanceId();
  }

  if (!!request.hasQueryRegionId()) {
    body["QueryRegionId"] = request.getQueryRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeExpressConnectRouterRouteEntries"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressConnectRouterRouteEntriesResponse>();
}

/**
 * @summary Queries the route entries of an Express Connect Router (ECR).
 *
 * @param request DescribeExpressConnectRouterRouteEntriesRequest
 * @return DescribeExpressConnectRouterRouteEntriesResponse
 */
DescribeExpressConnectRouterRouteEntriesResponse Client::describeExpressConnectRouterRouteEntries(const DescribeExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries flow logs.
 *
 * @param request DescribeFlowLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFlowLogsResponse
 */
DescribeFlowLogsResponse Client::describeFlowLogsWithOptions(const DescribeFlowLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.getFlowLogName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeFlowLogs"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFlowLogsResponse>();
}

/**
 * @summary Queries flow logs.
 *
 * @param request DescribeFlowLogsRequest
 * @return DescribeFlowLogsResponse
 */
DescribeFlowLogsResponse Client::describeFlowLogs(const DescribeFlowLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFlowLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the network instances authorized to an Express Connect Router (ECR).
 *
 * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceGrantedToExpressConnectRouterResponse
 */
DescribeInstanceGrantedToExpressConnectRouterResponse Client::describeInstanceGrantedToExpressConnectRouterWithOptions(const DescribeInstanceGrantedToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasCallerType()) {
    body["CallerType"] = request.getCallerType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    body["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagModels()) {
    body["TagModels"] = request.getTagModels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeInstanceGrantedToExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceGrantedToExpressConnectRouterResponse>();
}

/**
 * @summary Queries the network instances authorized to an Express Connect Router (ECR).
 *
 * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
 * @return DescribeInstanceGrantedToExpressConnectRouterResponse
 */
DescribeInstanceGrantedToExpressConnectRouterResponse Client::describeInstanceGrantedToExpressConnectRouter(const DescribeInstanceGrantedToExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceGrantedToExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Detaches a virtual border router (VBR) from an Express Connect Router (ECR).
 *
 * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to detach a VBR instance from an Express Connect Router (ECR), ensure that the ECR is in the **Active** state.
 *
 * @param request DetachExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachExpressConnectRouterChildInstanceResponse
 */
DetachExpressConnectRouterChildInstanceResponse Client::detachExpressConnectRouterChildInstanceWithOptions(const DetachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DetachExpressConnectRouterChildInstance"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachExpressConnectRouterChildInstanceResponse>();
}

/**
 * @summary Detaches a virtual border router (VBR) from an Express Connect Router (ECR).
 *
 * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to detach a VBR instance from an Express Connect Router (ECR), ensure that the ECR is in the **Active** state.
 *
 * @param request DetachExpressConnectRouterChildInstanceRequest
 * @return DetachExpressConnectRouterChildInstanceResponse
 */
DetachExpressConnectRouterChildInstanceResponse Client::detachExpressConnectRouterChildInstance(const DetachExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables a route entry of an Express Connect Router (ECR).
 *
 * @param request DisableExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableExpressConnectRouterRouteEntriesResponse
 */
DisableExpressConnectRouterRouteEntriesResponse Client::disableExpressConnectRouterRouteEntriesWithOptions(const DisableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.getNexthopInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DisableExpressConnectRouterRouteEntries"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableExpressConnectRouterRouteEntriesResponse>();
}

/**
 * @summary Disables a route entry of an Express Connect Router (ECR).
 *
 * @param request DisableExpressConnectRouterRouteEntriesRequest
 * @return DisableExpressConnectRouterRouteEntriesResponse
 */
DisableExpressConnectRouterRouteEntriesResponse Client::disableExpressConnectRouterRouteEntries(const DisableExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Enables route entries for an Express Connect Router (ECR).
 *
 * @param request EnableExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableExpressConnectRouterRouteEntriesResponse
 */
EnableExpressConnectRouterRouteEntriesResponse Client::enableExpressConnectRouterRouteEntriesWithOptions(const EnableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.getDestinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.getNexthopInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableExpressConnectRouterRouteEntries"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableExpressConnectRouterRouteEntriesResponse>();
}

/**
 * @summary Enables route entries for an Express Connect Router (ECR).
 *
 * @param request EnableExpressConnectRouterRouteEntriesRequest
 * @return EnableExpressConnectRouterRouteEntriesResponse
 */
EnableExpressConnectRouterRouteEntriesResponse Client::enableExpressConnectRouterRouteEntries(const EnableExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Force deletes an Express Connect Router (ECR) and detaches its associated virtual private clouds (VPCs), Transit Routers (TRs), and virtual border routers (VBRs).
 *
 * @description - Force deleting an Express Connect Router (ECR) instance detaches all associated resources. Before you proceed, confirm that this operation does not disrupt your services.
 * - You can delete only ECR instances that are in the **Active** state.
 *
 * @param request ForceDeleteExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForceDeleteExpressConnectRouterResponse
 */
ForceDeleteExpressConnectRouterResponse Client::forceDeleteExpressConnectRouterWithOptions(const ForceDeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ForceDeleteExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForceDeleteExpressConnectRouterResponse>();
}

/**
 * @summary Force deletes an Express Connect Router (ECR) and detaches its associated virtual private clouds (VPCs), Transit Routers (TRs), and virtual border routers (VBRs).
 *
 * @description - Force deleting an Express Connect Router (ECR) instance detaches all associated resources. Before you proceed, confirm that this operation does not disrupt your services.
 * - You can delete only ECR instances that are in the **Active** state.
 *
 * @param request ForceDeleteExpressConnectRouterRequest
 * @return ForceDeleteExpressConnectRouterResponse
 */
ForceDeleteExpressConnectRouterResponse Client::forceDeleteExpressConnectRouter(const ForceDeleteExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forceDeleteExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Grants a virtual private cloud (VPC) or virtual border router (VBR) authorization to a cross-account Express Connect Router (ECR).
 *
 * @description To associate a cross-account network instance with an Express Connect Router (ECR) instance, you must grant the network instance authorization to the Express Connect Router (ECR) instance.
 *
 * @param request GrantInstanceToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantInstanceToExpressConnectRouterResponse
 */
GrantInstanceToExpressConnectRouterResponse Client::grantInstanceToExpressConnectRouterWithOptions(const GrantInstanceToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasEcrOwnerAliUid()) {
    body["EcrOwnerAliUid"] = request.getEcrOwnerAliUid();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantInstanceToExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantInstanceToExpressConnectRouterResponse>();
}

/**
 * @summary Grants a virtual private cloud (VPC) or virtual border router (VBR) authorization to a cross-account Express Connect Router (ECR).
 *
 * @description To associate a cross-account network instance with an Express Connect Router (ECR) instance, you must grant the network instance authorization to the Express Connect Router (ECR) instance.
 *
 * @param request GrantInstanceToExpressConnectRouterRequest
 * @return GrantInstanceToExpressConnectRouterResponse
 */
GrantInstanceToExpressConnectRouterResponse Client::grantInstanceToExpressConnectRouter(const GrantInstanceToExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantInstanceToExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Queries the regions that support Express Connect Router (ECR).
 *
 * @param request ListExpressConnectRouterSupportedRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExpressConnectRouterSupportedRegionResponse
 */
ListExpressConnectRouterSupportedRegionResponse Client::listExpressConnectRouterSupportedRegionWithOptions(const ListExpressConnectRouterSupportedRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNodeType()) {
    body["NodeType"] = request.getNodeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListExpressConnectRouterSupportedRegion"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExpressConnectRouterSupportedRegionResponse>();
}

/**
 * @summary Queries the regions that support Express Connect Router (ECR).
 *
 * @param request ListExpressConnectRouterSupportedRegionRequest
 * @return ListExpressConnectRouterSupportedRegionResponse
 */
ListExpressConnectRouterSupportedRegionResponse Client::listExpressConnectRouterSupportedRegion(const ListExpressConnectRouterSupportedRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExpressConnectRouterSupportedRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the association between an Express Connect Router (ECR) and a route map.
 *
 * @param request ListRouteMapAssociationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRouteMapAssociationsResponse
 */
ListRouteMapAssociationsResponse Client::listRouteMapAssociationsWithOptions(const ListRouteMapAssociationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociationId()) {
    query["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRouteMapId()) {
    query["RouteMapId"] = request.getRouteMapId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRouteMapAssociations"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRouteMapAssociationsResponse>();
}

/**
 * @summary Queries the association between an Express Connect Router (ECR) and a route map.
 *
 * @param request ListRouteMapAssociationsRequest
 * @return ListRouteMapAssociationsResponse
 */
ListRouteMapAssociationsResponse Client::listRouteMapAssociations(const ListRouteMapAssociationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRouteMapAssociationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of tags bound to an Express Connect Router (ECR).
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the list of tags bound to an Express Connect Router (ECR).
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of an Express Connect Router (ECR), such as its name.
 *
 * @description You can modify an Express Connect Router (ECR) instance only when it is in the **Active** state.
 *
 * @param request ModifyExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterResponse
 */
ModifyExpressConnectRouterResponse Client::modifyExpressConnectRouterWithOptions(const ModifyExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressConnectRouterResponse>();
}

/**
 * @summary Modifies the properties of an Express Connect Router (ECR), such as its name.
 *
 * @description You can modify an Express Connect Router (ECR) instance only when it is in the **Active** state.
 *
 * @param request ModifyExpressConnectRouterRequest
 * @return ModifyExpressConnectRouterResponse
 */
ModifyExpressConnectRouterResponse Client::modifyExpressConnectRouter(const ModifyExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a child instance associated with an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterAssociationResponse
 */
ModifyExpressConnectRouterAssociationResponse Client::modifyExpressConnectRouterAssociationWithOptions(const ModifyExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyExpressConnectRouterAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressConnectRouterAssociationResponse>();
}

/**
 * @summary Modifies the attributes of a child instance associated with an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationRequest
 * @return ModifyExpressConnectRouterAssociationResponse
 */
ModifyExpressConnectRouterAssociationResponse Client::modifyExpressConnectRouterAssociation(const ModifyExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Modifies the prefixes for a virtual private cloud (VPC) or a transit router that is attached to an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
 */
ModifyExpressConnectRouterAssociationAllowedPrefixResponse Client::modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAllowedPrefixes()) {
    body["AllowedPrefixes"] = request.getAllowedPrefixes();
  }

  if (!!request.hasAllowedPrefixesMode()) {
    body["AllowedPrefixesMode"] = request.getAllowedPrefixesMode();
  }

  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasOwnerAccount()) {
    body["OwnerAccount"] = request.getOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyExpressConnectRouterAssociationAllowedPrefix"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressConnectRouterAssociationAllowedPrefixResponse>();
}

/**
 * @summary Modifies the prefixes for a virtual private cloud (VPC) or a transit router that is attached to an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
 * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
 */
ModifyExpressConnectRouterAssociationAllowedPrefixResponse Client::modifyExpressConnectRouterAssociationAllowedPrefix(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a child instance (VBR) associated with an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterChildInstanceResponse
 */
ModifyExpressConnectRouterChildInstanceResponse Client::modifyExpressConnectRouterChildInstanceWithOptions(const ModifyExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.getChildInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyExpressConnectRouterChildInstance"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressConnectRouterChildInstanceResponse>();
}

/**
 * @summary Modifies the attributes of a child instance (VBR) associated with an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterChildInstanceRequest
 * @return ModifyExpressConnectRouterChildInstanceResponse
 */
ModifyExpressConnectRouterChildInstanceResponse Client::modifyExpressConnectRouterChildInstance(const ModifyExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the inter-region forwarding mode of an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
 */
ModifyExpressConnectRouterInterRegionTransitModeResponse Client::modifyExpressConnectRouterInterRegionTransitModeWithOptions(const ModifyExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasTransitModeList()) {
    body["TransitModeList"] = request.getTransitModeList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyExpressConnectRouterInterRegionTransitMode"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressConnectRouterInterRegionTransitModeResponse>();
}

/**
 * @summary Modifies the inter-region forwarding mode of an Express Connect Router (ECR).
 *
 * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
 * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
 */
ModifyExpressConnectRouterInterRegionTransitModeResponse Client::modifyExpressConnectRouterInterRegionTransitMode(const ModifyExpressConnectRouterInterRegionTransitModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, sampling rate, and sampling interval of a flow log.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttributeWithOptions(const ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.getFlowLogId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.getSamplingRate();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasFlowLogName()) {
    body["FlowLogName"] = request.getFlowLogName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyFlowLogAttribute"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFlowLogAttributeResponse>();
}

/**
 * @summary Modifies the name, description, sampling rate, and sampling interval of a flow log.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which an Express Connect Router (ECR) belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Modifies the resource group to which an Express Connect Router (ECR) belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Revokes the authorization of a virtual private cloud (VPC) or virtual border router (VBR) on a cross-account Express Connect Router (ECR).
 *
 * @param request RevokeInstanceFromExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeInstanceFromExpressConnectRouterResponse
 */
RevokeInstanceFromExpressConnectRouterResponse Client::revokeInstanceFromExpressConnectRouterWithOptions(const RevokeInstanceFromExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  if (!!request.hasEcrOwnerAliUid()) {
    body["EcrOwnerAliUid"] = request.getEcrOwnerAliUid();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeInstanceFromExpressConnectRouter"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeInstanceFromExpressConnectRouterResponse>();
}

/**
 * @summary Revokes the authorization of a virtual private cloud (VPC) or virtual border router (VBR) on a cross-account Express Connect Router (ECR).
 *
 * @param request RevokeInstanceFromExpressConnectRouterRequest
 * @return RevokeInstanceFromExpressConnectRouterResponse
 */
RevokeInstanceFromExpressConnectRouterResponse Client::revokeInstanceFromExpressConnectRouter(const RevokeInstanceFromExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the inter-region bandwidth limits for an Express Connect Router (ECR).
 *
 * @description You can update an ECR instance only when it is in the **Active** state.
 *
 * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
 */
SynchronizeExpressConnectRouterInterRegionBandwidthResponse Client::synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SynchronizeExpressConnectRouterInterRegionBandwidth"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SynchronizeExpressConnectRouterInterRegionBandwidthResponse>();
}

/**
 * @summary Synchronizes the inter-region bandwidth limits for an Express Connect Router (ECR).
 *
 * @description You can update an ECR instance only when it is in the **Active** state.
 *
 * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
 * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
 */
SynchronizeExpressConnectRouterInterRegionBandwidthResponse Client::synchronizeExpressConnectRouterInterRegionBandwidth(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(request, runtime);
}

/**
 * @summary Binds tags to an Express Connect Router (ECR). Each call to this operation binds tags to a single ECR instance, but you can bind multiple tags at a time.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Binds tags to an Express Connect Router (ECR). Each call to this operation binds tags to a single ECR instance, but you can bind multiple tags at a time.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from an Express Connect Router (ECR).
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.getAll();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    body["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Unbinds tags from an Express Connect Router (ECR).
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the association between an Express Connect Router (ECR) and a routing policy.
 *
 * @param request UpdateRouteMapAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRouteMapAssociationResponse
 */
UpdateRouteMapAssociationResponse Client::updateRouteMapAssociationWithOptions(const UpdateRouteMapAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssociationId()) {
    query["AssociationId"] = request.getAssociationId();
  }

  if (!!request.hasRegionIdList()) {
    query["RegionIdList"] = request.getRegionIdList();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.getEcrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRouteMapAssociation"},
    {"version" , "2023-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRouteMapAssociationResponse>();
}

/**
 * @summary Updates the association between an Express Connect Router (ECR) and a routing policy.
 *
 * @param request UpdateRouteMapAssociationRequest
 * @return UpdateRouteMapAssociationResponse
 */
UpdateRouteMapAssociationResponse Client::updateRouteMapAssociation(const UpdateRouteMapAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRouteMapAssociationWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901