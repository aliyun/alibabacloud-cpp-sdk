#include <darabonba/Core.hpp>
#include <alibabacloud/ExpressConnectRouter20230901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::ExpressConnectRouter20230901::Models;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{

AlibabaCloud::ExpressConnectRouter20230901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
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
 * @summary Enables log delivery for flow logs.
 *
 * @param request ActivateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateFlowLogResponse
 */
ActivateFlowLogResponse Client::activateFlowLogWithOptions(const ActivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasFlowLogId()) {
    body["FlowLogId"] = request.flowLogId();
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
 * @summary Enables log delivery for flow logs.
 *
 * @param request ActivateFlowLogRequest
 * @return ActivateFlowLogResponse
 */
ActivateFlowLogResponse Client::activateFlowLog(const ActivateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Associates a virtual border router (VBR) with an Express Connect router (ECR).
 *
 * @description Before you call the **AttachExpressConnectRouterChildInstance** operation to associate a VBR with an ECR, make sure that the ECR is in the **Active** state.
 *
 * @param request AttachExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachExpressConnectRouterChildInstanceResponse
 */
AttachExpressConnectRouterChildInstanceResponse Client::attachExpressConnectRouterChildInstanceWithOptions(const AttachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceOwnerId()) {
    body["ChildInstanceOwnerId"] = request.childInstanceOwnerId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    body["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Associates a virtual border router (VBR) with an Express Connect router (ECR).
 *
 * @description Before you call the **AttachExpressConnectRouterChildInstance** operation to associate a VBR with an ECR, make sure that the ECR is in the **Active** state.
 *
 * @param request AttachExpressConnectRouterChildInstanceRequest
 * @return AttachExpressConnectRouterChildInstanceResponse
 */
AttachExpressConnectRouterChildInstanceResponse Client::attachExpressConnectRouterChildInstance(const AttachExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Checks the Cloud Data Transfer (CDT) service required to add a region to an Express Connect router (ECR).
 *
 * @param request CheckAddRegionToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAddRegionToExpressConnectRouterResponse
 */
CheckAddRegionToExpressConnectRouterResponse Client::checkAddRegionToExpressConnectRouterWithOptions(const CheckAddRegionToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasFreshRegionId()) {
    body["FreshRegionId"] = request.freshRegionId();
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
 * @summary Checks the Cloud Data Transfer (CDT) service required to add a region to an Express Connect router (ECR).
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
 * @description After you create an ECR, it enters the **Active** state.
 *
 * @param request CreateExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressConnectRouterResponse
 */
CreateExpressConnectRouterResponse Client::createExpressConnectRouterWithOptions(const CreateExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAlibabaSideAsn()) {
    body["AlibabaSideAsn"] = request.alibabaSideAsn();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
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
 * @description After you create an ECR, it enters the **Active** state.
 *
 * @param request CreateExpressConnectRouterRequest
 * @return CreateExpressConnectRouterResponse
 */
CreateExpressConnectRouterResponse Client::createExpressConnectRouter(const CreateExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Associates a virtual private cloud (VPC) or a transit router (TR) with an Express Connect router (ECR).
 *
 * @param request CreateExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressConnectRouterAssociationResponse
 */
CreateExpressConnectRouterAssociationResponse Client::createExpressConnectRouterAssociationWithOptions(const CreateExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAllowedPrefixes()) {
    body["AllowedPrefixes"] = request.allowedPrefixes();
  }

  if (!!request.hasAllowedPrefixesMode()) {
    body["AllowedPrefixesMode"] = request.allowedPrefixesMode();
  }

  if (!!request.hasAssociationRegionId()) {
    body["AssociationRegionId"] = request.associationRegionId();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCreateAttachment()) {
    body["CreateAttachment"] = request.createAttachment();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasTransitRouterId()) {
    body["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasTransitRouterOwnerId()) {
    body["TransitRouterOwnerId"] = request.transitRouterOwnerId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    body["VpcOwnerId"] = request.vpcOwnerId();
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
 * @summary Associates a virtual private cloud (VPC) or a transit router (TR) with an Express Connect router (ECR).
 *
 * @param request CreateExpressConnectRouterAssociationRequest
 * @return CreateExpressConnectRouterAssociationResponse
 */
CreateExpressConnectRouterAssociationResponse Client::createExpressConnectRouterAssociation(const CreateExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Creates a flow log and enables log delivery.
 *
 * @param request CreateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLogWithOptions(const CreateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.samplingRate();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasFlowLogName()) {
    body["FlowLogName"] = request.flowLogName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Creates a flow log and enables log delivery.
 *
 * @param request CreateFlowLogRequest
 * @return CreateFlowLogResponse
 */
CreateFlowLogResponse Client::createFlowLog(const CreateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowLogWithOptions(request, runtime);
}

/**
 * @summary Disables log delivery.
 *
 * @param request DeactivateFlowLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateFlowLogResponse
 */
DeactivateFlowLogResponse Client::deactivateFlowLogWithOptions(const DeactivateFlowLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasFlowLogId()) {
    body["FlowLogId"] = request.flowLogId();
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
 * @summary Disables log delivery.
 *
 * @param request DeactivateFlowLogRequest
 * @return DeactivateFlowLogResponse
 */
DeactivateFlowLogResponse Client::deactivateFlowLog(const DeactivateFlowLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactivateFlowLogWithOptions(request, runtime);
}

/**
 * @summary Deletes an Express Connect router (ECR).
 *
 * @description Take note of the following items:
 * *   Before you call this operation, make sure that all resources are disassociated from the ECR.
 * *   You can delete only ECRs that are in the **Active** state.
 *
 * @param request DeleteExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressConnectRouterResponse
 */
DeleteExpressConnectRouterResponse Client::deleteExpressConnectRouterWithOptions(const DeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Deletes an Express Connect router (ECR).
 *
 * @description Take note of the following items:
 * *   Before you call this operation, make sure that all resources are disassociated from the ECR.
 * *   You can delete only ECRs that are in the **Active** state.
 *
 * @param request DeleteExpressConnectRouterRequest
 * @return DeleteExpressConnectRouterResponse
 */
DeleteExpressConnectRouterResponse Client::deleteExpressConnectRouter(const DeleteExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Disassociates an Express Connect router (ECR) from a virtual private cloud (VPC) or a transit router (TR).
 *
 * @param request DeleteExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressConnectRouterAssociationResponse
 */
DeleteExpressConnectRouterAssociationResponse Client::deleteExpressConnectRouterAssociationWithOptions(const DeleteExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeleteAttachment()) {
    body["DeleteAttachment"] = request.deleteAttachment();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Disassociates an Express Connect router (ECR) from a virtual private cloud (VPC) or a transit router (TR).
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
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Queries the route entries that are disabled on an Express Connect router (ECR).
 *
 * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
 */
DescribeDisabledExpressConnectRouterRouteEntriesResponse Client::describeDisabledExpressConnectRouterRouteEntriesWithOptions(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
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
 * @summary Queries the route entries that are disabled on an Express Connect router (ECR).
 *
 * @param request DescribeDisabledExpressConnectRouterRouteEntriesRequest
 * @return DescribeDisabledExpressConnectRouterRouteEntriesResponse
 */
DescribeDisabledExpressConnectRouterRouteEntriesResponse Client::describeDisabledExpressConnectRouterRouteEntries(const DescribeDisabledExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDisabledExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Express Connect routers (ECRs).
 *
 * @param request DescribeExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterResponse
 */
DescribeExpressConnectRouterResponse Client::describeExpressConnectRouterWithOptions(const DescribeExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
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
 * @summary Queries a list of Express Connect routers (ECRs).
 *
 * @param request DescribeExpressConnectRouterRequest
 * @return DescribeExpressConnectRouterResponse
 */
DescribeExpressConnectRouterResponse Client::describeExpressConnectRouter(const DescribeExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Queries the historical route prefixes of an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
 */
DescribeExpressConnectRouterAllowedPrefixHistoryResponse Client::describeExpressConnectRouterAllowedPrefixHistoryWithOptions(const DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
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
 * @summary Queries the historical route prefixes of an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterAllowedPrefixHistoryRequest
 * @return DescribeExpressConnectRouterAllowedPrefixHistoryResponse
 */
DescribeExpressConnectRouterAllowedPrefixHistoryResponse Client::describeExpressConnectRouterAllowedPrefixHistory(const DescribeExpressConnectRouterAllowedPrefixHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterAllowedPrefixHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterAssociationResponse
 */
DescribeExpressConnectRouterAssociationResponse Client::describeExpressConnectRouterAssociationWithOptions(const DescribeExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasAssociationNodeType()) {
    body["AssociationNodeType"] = request.associationNodeType();
  }

  if (!!request.hasAssociationRegionId()) {
    body["AssociationRegionId"] = request.associationRegionId();
  }

  if (!!request.hasCenId()) {
    body["CenId"] = request.cenId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTransitRouterId()) {
    body["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
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
 * @summary Queries the virtual private clouds (VPCs) and transit routers (TRs) associated with an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterAssociationRequest
 * @return DescribeExpressConnectRouterAssociationResponse
 */
DescribeExpressConnectRouterAssociationResponse Client::describeExpressConnectRouterAssociation(const DescribeExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual border routers (VBRs) that are associated with an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterChildInstanceResponse
 */
DescribeExpressConnectRouterChildInstanceResponse Client::describeExpressConnectRouterChildInstanceWithOptions(const DescribeExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceRegionId()) {
    body["ChildInstanceRegionId"] = request.childInstanceRegionId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
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
 * @summary Queries the virtual border routers (VBRs) that are associated with an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterChildInstanceRequest
 * @return DescribeExpressConnectRouterChildInstanceResponse
 */
DescribeExpressConnectRouterChildInstanceResponse Client::describeExpressConnectRouterChildInstance(const DescribeExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the cross-region forwarding modes of an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
 */
DescribeExpressConnectRouterInterRegionTransitModeResponse Client::describeExpressConnectRouterInterRegionTransitModeWithOptions(const DescribeExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Queries the cross-region forwarding modes of an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterInterRegionTransitModeRequest
 * @return DescribeExpressConnectRouterInterRegionTransitModeResponse
 */
DescribeExpressConnectRouterInterRegionTransitModeResponse Client::describeExpressConnectRouterInterRegionTransitMode(const DescribeExpressConnectRouterInterRegionTransitModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of regions in which resources related to an Express Connect router (ECR) are deployed.
 *
 * @param request DescribeExpressConnectRouterRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterRegionResponse
 */
DescribeExpressConnectRouterRegionResponse Client::describeExpressConnectRouterRegionWithOptions(const DescribeExpressConnectRouterRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Queries a list of regions in which resources related to an Express Connect router (ECR) are deployed.
 *
 * @param request DescribeExpressConnectRouterRegionRequest
 * @return DescribeExpressConnectRouterRegionResponse
 */
DescribeExpressConnectRouterRegionResponse Client::describeExpressConnectRouterRegion(const DescribeExpressConnectRouterRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressConnectRouterRegionWithOptions(request, runtime);
}

/**
 * @summary Queries the route entries of an Express Connect router (ECR).
 *
 * @param request DescribeExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressConnectRouterRouteEntriesResponse
 */
DescribeExpressConnectRouterRouteEntriesResponse Client::describeExpressConnectRouterRouteEntriesWithOptions(const DescribeExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAsPath()) {
    body["AsPath"] = request.asPath();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommunity()) {
    body["Community"] = request.community();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.nexthopInstanceId();
  }

  if (!!request.hasQueryRegionId()) {
    body["QueryRegionId"] = request.queryRegionId();
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
 * @summary Queries the route entries of an Express Connect router (ECR).
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
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasFlowLogName()) {
    query["FlowLogName"] = request.flowLogName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLogStoreName()) {
    query["LogStoreName"] = request.logStoreName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Queries the network instances whose permissions are granted to an Express Connect router (ECR).
 *
 * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceGrantedToExpressConnectRouterResponse
 */
DescribeInstanceGrantedToExpressConnectRouterResponse Client::describeInstanceGrantedToExpressConnectRouterWithOptions(const DescribeInstanceGrantedToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasCallerType()) {
    body["CallerType"] = request.callerType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    body["InstanceOwnerId"] = request.instanceOwnerId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.instanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagModels()) {
    body["TagModels"] = request.tagModels();
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
 * @summary Queries the network instances whose permissions are granted to an Express Connect router (ECR).
 *
 * @param request DescribeInstanceGrantedToExpressConnectRouterRequest
 * @return DescribeInstanceGrantedToExpressConnectRouterResponse
 */
DescribeInstanceGrantedToExpressConnectRouterResponse Client::describeInstanceGrantedToExpressConnectRouter(const DescribeInstanceGrantedToExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceGrantedToExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Disassociates a virtual border router (VBR) from an Express Connect router (ECR).
 *
 * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to uninstall a VBR from an ECR, make sure that the ECR is in the **Active** state.
 *
 * @param request DetachExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachExpressConnectRouterChildInstanceResponse
 */
DetachExpressConnectRouterChildInstanceResponse Client::detachExpressConnectRouterChildInstanceWithOptions(const DetachExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Disassociates a virtual border router (VBR) from an Express Connect router (ECR).
 *
 * @description Before you call the **DetachExpressConnectRouterChildInstance** operation to uninstall a VBR from an ECR, make sure that the ECR is in the **Active** state.
 *
 * @param request DetachExpressConnectRouterChildInstanceRequest
 * @return DetachExpressConnectRouterChildInstanceResponse
 */
DetachExpressConnectRouterChildInstanceResponse Client::detachExpressConnectRouterChildInstance(const DetachExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Disables route entries of an Express Connect router (ECR).
 *
 * @param request DisableExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableExpressConnectRouterRouteEntriesResponse
 */
DisableExpressConnectRouterRouteEntriesResponse Client::disableExpressConnectRouterRouteEntriesWithOptions(const DisableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.nexthopInstanceId();
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
 * @summary Disables route entries of an Express Connect router (ECR).
 *
 * @param request DisableExpressConnectRouterRouteEntriesRequest
 * @return DisableExpressConnectRouterRouteEntriesResponse
 */
DisableExpressConnectRouterRouteEntriesResponse Client::disableExpressConnectRouterRouteEntries(const DisableExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Enables route entries of an Express Connect router (ECR).
 *
 * @param request EnableExpressConnectRouterRouteEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableExpressConnectRouterRouteEntriesResponse
 */
EnableExpressConnectRouterRouteEntriesResponse Client::enableExpressConnectRouterRouteEntriesWithOptions(const EnableExpressConnectRouterRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDestinationCidrBlock()) {
    body["DestinationCidrBlock"] = request.destinationCidrBlock();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasNexthopInstanceId()) {
    body["NexthopInstanceId"] = request.nexthopInstanceId();
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
 * @summary Enables route entries of an Express Connect router (ECR).
 *
 * @param request EnableExpressConnectRouterRouteEntriesRequest
 * @return EnableExpressConnectRouterRouteEntriesResponse
 */
EnableExpressConnectRouterRouteEntriesResponse Client::enableExpressConnectRouterRouteEntries(const EnableExpressConnectRouterRouteEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

/**
 * @summary Deletes an Express Connect router (ECR) and disassociates the virtual private cloud (VPC), transit router (TR), and virtual border router (VBR) associated with the ECR.
 *
 * @description *   If you forcefully delete an ECR, all the resources associated with the ECR are disassociated at a time. Make sure that the disassociation does not affect the stability of your business.
 * *   You can delete only ECRs that are in the **Active** state.
 *
 * @param request ForceDeleteExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForceDeleteExpressConnectRouterResponse
 */
ForceDeleteExpressConnectRouterResponse Client::forceDeleteExpressConnectRouterWithOptions(const ForceDeleteExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Deletes an Express Connect router (ECR) and disassociates the virtual private cloud (VPC), transit router (TR), and virtual border router (VBR) associated with the ECR.
 *
 * @description *   If you forcefully delete an ECR, all the resources associated with the ECR are disassociated at a time. Make sure that the disassociation does not affect the stability of your business.
 * *   You can delete only ECRs that are in the **Active** state.
 *
 * @param request ForceDeleteExpressConnectRouterRequest
 * @return ForceDeleteExpressConnectRouterResponse
 */
ForceDeleteExpressConnectRouterResponse Client::forceDeleteExpressConnectRouter(const ForceDeleteExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forceDeleteExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on a virtual private cloud (VPC) or a virtual border router (VBR) to an Express Connect router (ECR) of another account.
 *
 * @description When you associate a network instance of another account with an ECR, you must grant permissions on the network instance to the ECR.
 *
 * @param request GrantInstanceToExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantInstanceToExpressConnectRouterResponse
 */
GrantInstanceToExpressConnectRouterResponse Client::grantInstanceToExpressConnectRouterWithOptions(const GrantInstanceToExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasEcrOwnerAliUid()) {
    body["EcrOwnerAliUid"] = request.ecrOwnerAliUid();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.instanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
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
 * @summary Grants permissions on a virtual private cloud (VPC) or a virtual border router (VBR) to an Express Connect router (ECR) of another account.
 *
 * @description When you associate a network instance of another account with an ECR, you must grant permissions on the network instance to the ECR.
 *
 * @param request GrantInstanceToExpressConnectRouterRequest
 * @return GrantInstanceToExpressConnectRouterResponse
 */
GrantInstanceToExpressConnectRouterResponse Client::grantInstanceToExpressConnectRouter(const GrantInstanceToExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantInstanceToExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Queries a list of regions in which the Express Connect router (ECR) feature is activated.
 *
 * @param request ListExpressConnectRouterSupportedRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExpressConnectRouterSupportedRegionResponse
 */
ListExpressConnectRouterSupportedRegionResponse Client::listExpressConnectRouterSupportedRegionWithOptions(const ListExpressConnectRouterSupportedRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasNodeType()) {
    body["NodeType"] = request.nodeType();
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
 * @summary Queries a list of regions in which the Express Connect router (ECR) feature is activated.
 *
 * @param request ListExpressConnectRouterSupportedRegionRequest
 * @return ListExpressConnectRouterSupportedRegionResponse
 */
ListExpressConnectRouterSupportedRegionResponse Client::listExpressConnectRouterSupportedRegion(const ListExpressConnectRouterSupportedRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExpressConnectRouterSupportedRegionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags that are added to an Express Connect router (ECR).
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
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
 * @summary Queries a list of tags that are added to an Express Connect router (ECR).
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties such as the name of an Express Connect router (ECR).
 *
 * @description You can modify only properties of ECRs in the **Active** state.
 *
 * @param request ModifyExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterResponse
 */
ModifyExpressConnectRouterResponse Client::modifyExpressConnectRouterWithOptions(const ModifyExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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
 * @summary Modifies the properties such as the name of an Express Connect router (ECR).
 *
 * @description You can modify only properties of ECRs in the **Active** state.
 *
 * @param request ModifyExpressConnectRouterRequest
 * @return ModifyExpressConnectRouterResponse
 */
ModifyExpressConnectRouterResponse Client::modifyExpressConnectRouter(const ModifyExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary 修改专线网关关联的属性
 *
 * @param request ModifyExpressConnectRouterAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterAssociationResponse
 */
ModifyExpressConnectRouterAssociationResponse Client::modifyExpressConnectRouterAssociationWithOptions(const ModifyExpressConnectRouterAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary 修改专线网关关联的属性
 *
 * @param request ModifyExpressConnectRouterAssociationRequest
 * @return ModifyExpressConnectRouterAssociationResponse
 */
ModifyExpressConnectRouterAssociationResponse Client::modifyExpressConnectRouterAssociation(const ModifyExpressConnectRouterAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterAssociationWithOptions(request, runtime);
}

/**
 * @summary Modifies the route prefixes of a virtual private cloud (VPC) or a transit router (TR) that is associated with an Express Connect router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
 */
ModifyExpressConnectRouterAssociationAllowedPrefixResponse Client::modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAllowedPrefixes()) {
    body["AllowedPrefixes"] = request.allowedPrefixes();
  }

  if (!!request.hasAllowedPrefixesMode()) {
    body["AllowedPrefixesMode"] = request.allowedPrefixesMode();
  }

  if (!!request.hasAssociationId()) {
    body["AssociationId"] = request.associationId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasOwnerAccount()) {
    body["OwnerAccount"] = request.ownerAccount();
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
 * @summary Modifies the route prefixes of a virtual private cloud (VPC) or a transit router (TR) that is associated with an Express Connect router (ECR).
 *
 * @param request ModifyExpressConnectRouterAssociationAllowedPrefixRequest
 * @return ModifyExpressConnectRouterAssociationAllowedPrefixResponse
 */
ModifyExpressConnectRouterAssociationAllowedPrefixResponse Client::modifyExpressConnectRouterAssociationAllowedPrefix(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(request, runtime);
}

/**
 * @summary 修改专线网关子实例的属性
 *
 * @param request ModifyExpressConnectRouterChildInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterChildInstanceResponse
 */
ModifyExpressConnectRouterChildInstanceResponse Client::modifyExpressConnectRouterChildInstanceWithOptions(const ModifyExpressConnectRouterChildInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasChildInstanceId()) {
    body["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasChildInstanceType()) {
    body["ChildInstanceType"] = request.childInstanceType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary 修改专线网关子实例的属性
 *
 * @param request ModifyExpressConnectRouterChildInstanceRequest
 * @return ModifyExpressConnectRouterChildInstanceResponse
 */
ModifyExpressConnectRouterChildInstanceResponse Client::modifyExpressConnectRouterChildInstance(const ModifyExpressConnectRouterChildInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the cross-region forwarding mode of an Express Connect router (ECR).
 *
 * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
 */
ModifyExpressConnectRouterInterRegionTransitModeResponse Client::modifyExpressConnectRouterInterRegionTransitModeWithOptions(const ModifyExpressConnectRouterInterRegionTransitModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasTransitModeList()) {
    body["TransitModeList"] = request.transitModeList();
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
 * @summary Modifies the cross-region forwarding mode of an Express Connect router (ECR).
 *
 * @param request ModifyExpressConnectRouterInterRegionTransitModeRequest
 * @return ModifyExpressConnectRouterInterRegionTransitModeResponse
 */
ModifyExpressConnectRouterInterRegionTransitModeResponse Client::modifyExpressConnectRouterInterRegionTransitMode(const ModifyExpressConnectRouterInterRegionTransitModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, description, sampling rate, and sampling interval.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttributeWithOptions(const ModifyFlowLogAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFlowLogId()) {
    query["FlowLogId"] = request.flowLogId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.samplingRate();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasFlowLogName()) {
    body["FlowLogName"] = request.flowLogName();
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
 * @summary Modifies the name, description, sampling rate, and sampling interval.
 *
 * @param request ModifyFlowLogAttributeRequest
 * @return ModifyFlowLogAttributeResponse
 */
ModifyFlowLogAttributeResponse Client::modifyFlowLogAttribute(const ModifyFlowLogAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFlowLogAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which an Express Connect router (ECR) belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
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
 * @summary Modifies the resource group to which an Express Connect router (ECR) belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on a virtual private cloud (VPC) or a virtual border router (VBR) from an Express Connect router (ECR) owned by another account.
 *
 * @param request RevokeInstanceFromExpressConnectRouterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeInstanceFromExpressConnectRouterResponse
 */
RevokeInstanceFromExpressConnectRouterResponse Client::revokeInstanceFromExpressConnectRouterWithOptions(const RevokeInstanceFromExpressConnectRouterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
  }

  if (!!request.hasEcrOwnerAliUid()) {
    body["EcrOwnerAliUid"] = request.ecrOwnerAliUid();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceRegionId()) {
    body["InstanceRegionId"] = request.instanceRegionId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.instanceType();
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
 * @summary Revokes permissions on a virtual private cloud (VPC) or a virtual border router (VBR) from an Express Connect router (ECR) owned by another account.
 *
 * @param request RevokeInstanceFromExpressConnectRouterRequest
 * @return RevokeInstanceFromExpressConnectRouterResponse
 */
RevokeInstanceFromExpressConnectRouterResponse Client::revokeInstanceFromExpressConnectRouter(const RevokeInstanceFromExpressConnectRouterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeInstanceFromExpressConnectRouterWithOptions(request, runtime);
}

/**
 * @summary Synchronizes the forwarding bandwidth limit between regions for an Express Connect router (ECR).
 *
 * @description Updates are allowed only when the ECR is in the **Active** state.
 *
 * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
 */
SynchronizeExpressConnectRouterInterRegionBandwidthResponse Client::synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasEcrId()) {
    body["EcrId"] = request.ecrId();
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
 * @summary Synchronizes the forwarding bandwidth limit between regions for an Express Connect router (ECR).
 *
 * @description Updates are allowed only when the ECR is in the **Active** state.
 *
 * @param request SynchronizeExpressConnectRouterInterRegionBandwidthRequest
 * @return SynchronizeExpressConnectRouterInterRegionBandwidthResponse
 */
SynchronizeExpressConnectRouterInterRegionBandwidthResponse Client::synchronizeExpressConnectRouterInterRegionBandwidth(const SynchronizeExpressConnectRouterInterRegionBandwidthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(request, runtime);
}

/**
 * @summary Adds tags to an Express Connect router (ECR). You can add tags to only one ECR each time you call this operation. You can add multiple tags at a time.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
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
 * @summary Adds tags to an Express Connect router (ECR). You can add tags to only one ECR each time you call this operation. You can add multiple tags at a time.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from an Express Connect router (ECR).
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.all();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    body["TagKey"] = request.tagKey();
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
 * @summary Removes tags from an Express Connect router (ECR).
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901