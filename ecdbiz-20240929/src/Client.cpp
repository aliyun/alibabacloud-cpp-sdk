#include <darabonba/Core.hpp>
#include <alibabacloud/EcdBiz20240929.hpp>
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
using namespace AlibabaCloud::EcdBiz20240929::Models;
namespace AlibabaCloud
{
namespace EcdBiz20240929
{

AlibabaCloud::EcdBiz20240929::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "EcdBiz";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ecdbiz", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
 *
 * @description Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
 *
 * @param request ActiveRightsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveRightsResponse
 */
ActiveRightsResponse Client::activeRightsWithOptions(const ActiveRightsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataDiskSize()) {
    query["DataDiskSize"] = request.getDataDiskSize();
  }

  if (!!request.hasDesktopType()) {
    query["DesktopType"] = request.getDesktopType();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPolicyGroupId()) {
    query["PolicyGroupId"] = request.getPolicyGroupId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasRootDiskSize()) {
    query["RootDiskSize"] = request.getRootDiskSize();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.getWorkspaceIds();
  }

  if (!!request.hasWyidList()) {
    query["WyidList"] = request.getWyidList();
  }

  json body = {};
  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasCustomImageId()) {
    body["CustomImageId"] = request.getCustomImageId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHibernate()) {
    body["Hibernate"] = request.getHibernate();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.getOfficeSiteId();
  }

  json bodyFlat = {};
  if (!!request.hasRightsAssignedUser()) {
    bodyFlat["RightsAssignedUser"] = request.getRightsAssignedUser();
  }

  if (!!request.hasRightsGpuSpec()) {
    body["RightsGpuSpec"] = request.getRightsGpuSpec();
  }

  if (!!request.hasRightsIds()) {
    bodyFlat["RightsIds"] = request.getRightsIds();
  }

  if (!!request.hasRightsResourceArea()) {
    body["RightsResourceArea"] = request.getRightsResourceArea();
  }

  if (!!request.hasRightsResourceImageOs()) {
    body["RightsResourceImageOs"] = request.getRightsResourceImageOs();
  }

  if (!!request.hasRightsResourceRegion()) {
    body["RightsResourceRegion"] = request.getRightsResourceRegion();
  }

  if (!!request.hasRightsResourceType()) {
    body["RightsResourceType"] = request.getRightsResourceType();
  }

  if (!!request.hasRightsSpec()) {
    body["RightsSpec"] = request.getRightsSpec();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVSwitchId()) {
    body["VSwitchId"] = request.getVSwitchId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ActiveRights"},
    {"version" , "2024-09-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveRightsResponse>();
}

/**
 * @summary Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
 *
 * @description Activates the commercial edition rights under the current account. First, query the rights by calling ListRights, and then select the target region, office network, image, and user. A Success response indicates that the request is processed. To check the resource creation result, query the RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId parameters returned by ListRights.
 *
 * @param request ActiveRightsRequest
 * @return ActiveRightsResponse
 */
ActiveRightsResponse Client::activeRights(const ActiveRightsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeRightsWithOptions(request, runtime);
}

/**
 * @summary Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
 *
 * @description Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
 *
 * @param request ListRightsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRightsResponse
 */
ListRightsResponse Client::listRightsWithOptions(const ListRightsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessSceneCode()) {
    query["BusinessSceneCode"] = request.getBusinessSceneCode();
  }

  if (!!request.hasRightsIds()) {
    query["RightsIds"] = request.getRightsIds();
  }

  json body = {};
  if (!!request.hasAiDesktop()) {
    body["AiDesktop"] = request.getAiDesktop();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.getOrderField();
  }

  if (!!request.hasOrderType()) {
    body["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOverseas()) {
    body["Overseas"] = request.getOverseas();
  }

  if (!!request.hasRightsActiveStatus()) {
    body["RightsActiveStatus"] = request.getRightsActiveStatus();
  }

  if (!!request.hasRightsAssignedUser()) {
    body["RightsAssignedUser"] = request.getRightsAssignedUser();
  }

  if (!!request.hasRightsPeriod()) {
    body["RightsPeriod"] = request.getRightsPeriod();
  }

  if (!!request.hasRightsResourceId()) {
    body["RightsResourceId"] = request.getRightsResourceId();
  }

  if (!!request.hasRightsResourceType()) {
    body["RightsResourceType"] = request.getRightsResourceType();
  }

  json bodyFlat = {};
  if (!!request.hasRightsResourceTypes()) {
    bodyFlat["RightsResourceTypes"] = request.getRightsResourceTypes();
  }

  if (!!request.hasRightsSpec()) {
    body["RightsSpec"] = request.getRightsSpec();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRights"},
    {"version" , "2024-09-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRightsResponse>();
}

/**
 * @summary Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
 *
 * @description Queries the commercial edition rights accessible to the current caller identity by using paging. Use this operation to select rights before activation. After you call ActiveRights, you can query the processing results by using RightsActiveStatus, RightsActiveFailureCause, and RightsResourceId.
 *
 * @param request ListRightsRequest
 * @return ListRightsResponse
 */
ListRightsResponse Client::listRights(const ListRightsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRightsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EcdBiz20240929