#include <darabonba/Core.hpp>
#include <alibabacloud/Gwlb20240415.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Gwlb20240415::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Gwlb20240415
{

AlibabaCloud::Gwlb20240415::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("gwlb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds backend servers to the server group of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the ListServerGroups operation to query the status of the server group.
 * *   If the server group is in the **Configuring** state, the server group is being modified.
 * *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call the ListServerGroupServers operation to query the status of the backend server.
 * *   If the backend server is in the **Adding** state, the backend server is being added to the server group.
 * *   If the backend server is in the **Available** state, the server is running.
 *
 * @param request AddServersToServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroupWithOptions(const AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasServers()) {
    bodyFlat["Servers"] = request.getServers();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddServersToServerGroup"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddServersToServerGroupResponse>();
}

/**
 * @summary Adds backend servers to the server group of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the ListServerGroups operation to query the status of the server group.
 * *   If the server group is in the **Configuring** state, the server group is being modified.
 * *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call the ListServerGroupServers operation to query the status of the backend server.
 * *   If the backend server is in the **Adding** state, the backend server is being added to the server group.
 * *   If the backend server is in the **Available** state, the server is running.
 *
 * @param request AddServersToServerGroupRequest
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroup(const AddServersToServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServersToServerGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a listener for a Gateway Load Balancer (GWLB) instance.
 *
 * @description **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
 * *   If the listener is in the **Provisioning** state, the listener is being created.
 * *   If the listener is in the **Running** state, the listener is running.
 *
 * @param request CreateListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListenerWithOptions(const CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerDescription()) {
    body["ListenerDescription"] = request.getListenerDescription();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasTcpIdleTimeout()) {
    body["TcpIdleTimeout"] = request.getTcpIdleTimeout();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateListener"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateListenerResponse>();
}

/**
 * @summary Creates a listener for a Gateway Load Balancer (GWLB) instance.
 *
 * @description **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
 * *   If the listener is in the **Provisioning** state, the listener is being created.
 * *   If the listener is in the **Running** state, the listener is running.
 *
 * @param request CreateListenerRequest
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListener(const CreateListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a Gateway Load Balancer (GWLB) instance.
 *
 * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
 * *   When you create a GWLB instance, the service-linked role AliyunServiceRoleForGwlb is automatically created.
 * *   **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of a GWLB instance.
 *     *   If the GWLB instance is in the **Provisioning** state, the GWLB instance is being created.
 *     *   If the GWLB instance is in the **Active** state, the GWLB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressIpVersion()) {
    body["AddressIpVersion"] = request.getAddressIpVersion();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerName()) {
    body["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerResponse>();
}

/**
 * @summary Creates a Gateway Load Balancer (GWLB) instance.
 *
 * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
 * *   When you create a GWLB instance, the service-linked role AliyunServiceRoleForGwlb is automatically created.
 * *   **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of a GWLB instance.
 *     *   If the GWLB instance is in the **Provisioning** state, the GWLB instance is being created.
 *     *   If the GWLB instance is in the **Active** state, the GWLB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Creates a server group for a Gateway Load Balancer (GWLB) instance.
 *
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
 * *   If the server group is in the **Creating** state, it indicates that the server group is being created.
 * *   If the server group is in the **Available** state, it indicates that the server group is created.
 *
 * @param request CreateServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroupWithOptions(const CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  json bodyFlat = {};
  if (!!request.hasConnectionDrainConfig()) {
    bodyFlat["ConnectionDrainConfig"] = request.getConnectionDrainConfig();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasHealthCheckConfig()) {
    bodyFlat["HealthCheckConfig"] = request.getHealthCheckConfig();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerFailoverMode()) {
    body["ServerFailoverMode"] = request.getServerFailoverMode();
  }

  if (!!request.hasServerGroupName()) {
    body["ServerGroupName"] = request.getServerGroupName();
  }

  if (!!request.hasServerGroupType()) {
    body["ServerGroupType"] = request.getServerGroupType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateServerGroup"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServerGroupResponse>();
}

/**
 * @summary Creates a server group for a Gateway Load Balancer (GWLB) instance.
 *
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
 * *   If the server group is in the **Creating** state, it indicates that the server group is being created.
 * *   If the server group is in the **Available** state, it indicates that the server group is created.
 *
 * @param request CreateServerGroupRequest
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroup(const CreateServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a listener from a Gateway Load Balancer (GWLB) instance.
 *
 * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
 * *   If the listener is in the **Deleting** state, the listener is being deleted.
 * *   If the listener cannot be found, the listener is deleted.
 *
 * @param request DeleteListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListenerWithOptions(const DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteListener"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteListenerResponse>();
}

/**
 * @summary Deletes a listener from a Gateway Load Balancer (GWLB) instance.
 *
 * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of the task.
 * *   If the listener is in the **Deleting** state, the listener is being deleted.
 * *   If the listener cannot be found, the listener is deleted.
 *
 * @param request DeleteListenerRequest
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListener(const DeleteListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes a Gateway Load Balancer (GWLB) instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerResponse>();
}

/**
 * @summary Deletes a Gateway Load Balancer (GWLB) instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Deletes a server group from a Gateway Load Balancer (GWLB) instance.
 *
 * @description You can delete server groups that are not associated with listeners.
 *
 * @param request DeleteServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroupWithOptions(const DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteServerGroup"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServerGroupResponse>();
}

/**
 * @summary Deletes a server group from a Gateway Load Balancer (GWLB) instance.
 *
 * @description You can delete server groups that are not associated with listeners.
 *
 * @param request DeleteServerGroupRequest
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroup(const DeleteServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the most recent region list of Gateway Load Balancer (GWLB).
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the most recent region list of Gateway Load Balancer (GWLB).
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the most recent zone list of Gateway Load Balancer (GWLB).
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcceptLanguage()) {
    body["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries the most recent zone list of Gateway Load Balancer (GWLB).
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Gateway Load Balancer (GWLB) listener.
 *
 * @param request GetListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttributeWithOptions(const GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetListenerAttribute"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListenerAttributeResponse>();
}

/**
 * @summary Queries the details of a Gateway Load Balancer (GWLB) listener.
 *
 * @param request GetListenerAttributeRequest
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttribute(const GetListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the health check status of a Gateway Load Balancer (GWLB) listener.
 *
 * @param request GetListenerHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatusWithOptions(const GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasFilter()) {
    bodyFlat["Filter"] = request.getFilter();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetListenerHealthStatus"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListenerHealthStatusResponse>();
}

/**
 * @summary Queries the health check status of a Gateway Load Balancer (GWLB) listener.
 *
 * @param request GetListenerHealthStatusRequest
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttributeWithOptions(const GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLoadBalancerAttribute"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoadBalancerAttributeResponse>();
}

/**
 * @summary Queries the details of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries Gateway Load Balancer (GWLB) listeners.
 *
 * @param request ListListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListenersWithOptions(const ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasListenerIds()) {
    bodyFlat["ListenerIds"] = request.getListenerIds();
  }

  if (!!request.hasLoadBalancerIds()) {
    bodyFlat["LoadBalancerIds"] = request.getLoadBalancerIds();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListListeners"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListenersResponse>();
}

/**
 * @summary Queries Gateway Load Balancer (GWLB) listeners.
 *
 * @param request ListListenersRequest
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListeners(const ListListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersWithOptions(request, runtime);
}

/**
 * @summary Queries Gateway Load Balancer (GWLB) instances.
 *
 * @param request ListLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancersWithOptions(const ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressIpVersion()) {
    body["AddressIpVersion"] = request.getAddressIpVersion();
  }

  if (!!request.hasLoadBalancerBusinessStatus()) {
    body["LoadBalancerBusinessStatus"] = request.getLoadBalancerBusinessStatus();
  }

  json bodyFlat = {};
  if (!!request.hasLoadBalancerIds()) {
    bodyFlat["LoadBalancerIds"] = request.getLoadBalancerIds();
  }

  if (!!request.hasLoadBalancerNames()) {
    bodyFlat["LoadBalancerNames"] = request.getLoadBalancerNames();
  }

  if (!!request.hasLoadBalancerStatus()) {
    body["LoadBalancerStatus"] = request.getLoadBalancerStatus();
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

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasTrafficMode()) {
    body["TrafficMode"] = request.getTrafficMode();
  }

  if (!!request.hasVpcIds()) {
    bodyFlat["VpcIds"] = request.getVpcIds();
  }

  if (!!request.hasZoneIds()) {
    bodyFlat["ZoneIds"] = request.getZoneIds();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancers"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLoadBalancersResponse>();
}

/**
 * @summary Queries Gateway Load Balancer (GWLB) instances.
 *
 * @param request ListLoadBalancersRequest
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancers(const ListLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request ListServerGroupServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServersWithOptions(const ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasServerIds()) {
    bodyFlat["ServerIds"] = request.getServerIds();
  }

  if (!!request.hasServerIps()) {
    bodyFlat["ServerIps"] = request.getServerIps();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListServerGroupServers"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerGroupServersResponse>();
}

/**
 * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request ListServerGroupServersRequest
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServers(const ListServerGroupServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupServersWithOptions(request, runtime);
}

/**
 * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request ListServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroupsWithOptions(const ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasServerGroupIds()) {
    bodyFlat["ServerGroupIds"] = request.getServerGroupIds();
  }

  if (!!request.hasServerGroupNames()) {
    bodyFlat["ServerGroupNames"] = request.getServerGroupNames();
  }

  if (!!request.hasServerGroupType()) {
    body["ServerGroupType"] = request.getServerGroupType();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.getSkip();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListServerGroups"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerGroupsResponse>();
}

/**
 * @summary Queries the server groups of a Gateway Load Balancer (GWLB) instance.
 *
 * @param request ListServerGroupsRequest
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroups(const ListServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2024-04-15"},
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
 * @summary Queries the tags of resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a specified cloud resource belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2024-04-15"},
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
 * @summary Changes the resource group to which a specified cloud resource belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Removes backend servers from the server group of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the ListServerGroups operation to query the status of a server group.
 *     *   If the server group is in the **Configuring** state, the server group is being modified.
 *     *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call the ListServerGroupServers operation to query the status of a backend server.
 *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
 *     *   If the backend server cannot be found, the backend server is no longer in the server group.
 * > 
 * *   If connection draining id enabled (**ConnectionDrainEnabled** set to true) for the server group of the backend server, the backend server that you remove enters the **Removing** state before entering the **Draining** state. When the connection draining timeout period (**ConnectionDrainTimeout**) ends, the backend server is removed from the server group.
 * *   You can add the backend server to the server group again before the connection draining timeout period ends. In this case, the status of the backend server changes from **Draining** to **Adding**. After the backend server is added to the server group, the backend server enters the **Available** state.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroupWithOptions(const RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasServers()) {
    bodyFlat["Servers"] = request.getServers();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveServersFromServerGroup"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveServersFromServerGroupResponse>();
}

/**
 * @summary Removes backend servers from the server group of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the ListServerGroups operation to query the status of a server group.
 *     *   If the server group is in the **Configuring** state, the server group is being modified.
 *     *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call the ListServerGroupServers operation to query the status of a backend server.
 *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
 *     *   If the backend server cannot be found, the backend server is no longer in the server group.
 * > 
 * *   If connection draining id enabled (**ConnectionDrainEnabled** set to true) for the server group of the backend server, the backend server that you remove enters the **Removing** state before entering the **Draining** state. When the connection draining timeout period (**ConnectionDrainTimeout**) ends, the backend server is removed from the server group.
 * *   You can add the backend server to the server group again before the connection draining timeout period ends. In this case, the status of the backend server changes from **Draining** to **Adding**. After the backend server is added to the server group, the backend server enters the **Available** state.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeServersFromServerGroupWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2024-04-15"},
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
 * @summary Creates and adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    bodyFlat["TagKey"] = request.getTagKey();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2024-04-15"},
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
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of a Gateway Load Balancer (GWLB) listener.
 *
 * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of a listener.
 * *   If the listener is in the **Configuring** state, the listener is being modified.
 * *   If the listener is in the **Running** state, the listener is modified.
 *
 * @param request UpdateListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttributeWithOptions(const UpdateListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerDescription()) {
    body["ListenerDescription"] = request.getListenerDescription();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasTcpIdleTimeout()) {
    body["TcpIdleTimeout"] = request.getTcpIdleTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateListenerAttribute"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateListenerAttributeResponse>();
}

/**
 * @summary Updates the configurations of a Gateway Load Balancer (GWLB) listener.
 *
 * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the **GetListenerAttribute** operation to query the status of a listener.
 * *   If the listener is in the **Configuring** state, the listener is being modified.
 * *   If the listener is in the **Running** state, the listener is modified.
 *
 * @param request UpdateListenerAttributeRequest
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttribute(const UpdateListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a Gateway Load Balancer (GWLB) instance.
 *
 * @description *   UpdateLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the GetLoadBalancerAttribute operation to query the status of the GWLB instance.
 *     *   If the GWLB instance is in the Configuring state, the GWLB instance is being modified.
 *     *   If the GWLB instance is in the Active state, the GWLB instance is modified.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttributeWithOptions(const UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    body["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasTrafficMode()) {
    body["TrafficMode"] = request.getTrafficMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerAttribute"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerAttributeResponse>();
}

/**
 * @summary Updates the attributes of a Gateway Load Balancer (GWLB) instance.
 *
 * @description *   UpdateLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the GetLoadBalancerAttribute operation to query the status of the GWLB instance.
 *     *   If the GWLB instance is in the Configuring state, the GWLB instance is being modified.
 *     *   If the GWLB instance is in the Active state, the GWLB instance is modified.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the zones of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
 * **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of the GWLB instance.
 * *   If the GWLB instance is in the **Configuring** state, the GWLB instance is being modified.
 * *   If the GWLB instance is in the **Active** state, the GWLB instance is modified.
 * >  Before you initiate a call, ensure that all zones, including the current zones and the zones that you want to add, are specified. The zones that you do not specify are deleted. You can call the GetLoadBalancerAttribute operation to query the current zones of your GWLB instance.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZonesWithOptions(const UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  json bodyFlat = {};
  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerZones"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerZonesResponse>();
}

/**
 * @summary Updates the zones of a Gateway Load Balancer (GWLB) instance.
 *
 * @description **Ensure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/2806160.html) of GWLB before calling this operation.**
 * **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2853555.html) operation to query the status of the GWLB instance.
 * *   If the GWLB instance is in the **Configuring** state, the GWLB instance is being modified.
 * *   If the GWLB instance is in the **Active** state, the GWLB instance is modified.
 * >  Before you initiate a call, ensure that all zones, including the current zones and the zones that you want to add, are specified. The zones that you do not specify are deleted. You can call the GetLoadBalancerAttribute operation to query the current zones of your GWLB instance.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a server group.
 *
 * @description **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
 * *   If the server group is in the **Configuring** state, the configuration of the server group is being modified.
 * *   If the server group is in the **Available** state, the configuration of the server group is modified.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttributeWithOptions(const UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  json bodyFlat = {};
  if (!!request.hasConnectionDrainConfig()) {
    bodyFlat["ConnectionDrainConfig"] = request.getConnectionDrainConfig();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasHealthCheckConfig()) {
    bodyFlat["HealthCheckConfig"] = request.getHealthCheckConfig();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerFailoverMode()) {
    body["ServerFailoverMode"] = request.getServerFailoverMode();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasServerGroupName()) {
    body["ServerGroupName"] = request.getServerGroupName();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateServerGroupAttribute"},
    {"version" , "2024-04-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServerGroupAttributeResponse>();
}

/**
 * @summary Updates the attributes of a server group.
 *
 * @description **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the ListServerGroups operation to query the status of the task.
 * *   If the server group is in the **Configuring** state, the configuration of the server group is being modified.
 * *   If the server group is in the **Available** state, the configuration of the server group is modified.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServerGroupAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Gwlb20240415