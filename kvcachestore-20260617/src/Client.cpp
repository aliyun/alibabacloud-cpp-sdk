#include <darabonba/Core.hpp>
#include <alibabacloud/Kvcachestore20260617.hpp>
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
using namespace AlibabaCloud::Kvcachestore20260617::Models;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{

AlibabaCloud::Kvcachestore20260617::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Kvcachestore";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("kvcachestore", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Mounts multiple KVCache instances to the virtualization side.
 *
 * @description * This operation is asynchronous. A return value of Attaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query the mount records. When the record status changes to Attached, the mounting is complete.
 * * The KVCacheStore must be in the Available or InUse state to be mounted.
 *
 * @param request AttachKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachKVCacheStoreResponse
 */
AttachKVCacheStoreResponse Client::attachKVCacheStoreWithOptions(const AttachKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArns()) {
    query["Arns"] = request.getArns();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachKVCacheStoreResponse>();
}

/**
 * @summary Mounts multiple KVCache instances to the virtualization side.
 *
 * @description * This operation is asynchronous. A return value of Attaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query the mount records. When the record status changes to Attached, the mounting is complete.
 * * The KVCacheStore must be in the Available or InUse state to be mounted.
 *
 * @param request AttachKVCacheStoreRequest
 * @return AttachKVCacheStoreResponse
 */
AttachKVCacheStoreResponse Client::attachKVCacheStore(const AttachKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachKVCacheStoreWithOptions(request, runtime);
}

/**
 * @summary Creates a KVCacheInstance.
 *
 * @description * This operation is asynchronous. After a successful response is returned, the KVCacheStore enters the Creating state. You can call the GetKVCacheStore or ListKVCacheStores operation to query the status of the KVCacheStore. The KVCacheStore becomes available after its status changes to Available.
 * * Use ClientToken to ensure request idempotence in case of network exceptions. If you make repeated calls with the same ClientToken and request parameters, the same KVCacheStore ID and order ID are returned. If the request parameters change, an IdempotentParameterMismatch error is returned.
 * * Creating a KVCacheStore synchronously generates an order. The operation returns an OrderId. You can view the order in the Expenses and Costs console. For more information, see View and manage orders.
 *
 * @param request CreateKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKVCacheStoreResponse
 */
CreateKVCacheStoreResponse Client::createKVCacheStoreWithOptions(const CreateKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHpnZone()) {
    query["HpnZone"] = request.getHpnZone();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKVCacheStoreResponse>();
}

/**
 * @summary Creates a KVCacheInstance.
 *
 * @description * This operation is asynchronous. After a successful response is returned, the KVCacheStore enters the Creating state. You can call the GetKVCacheStore or ListKVCacheStores operation to query the status of the KVCacheStore. The KVCacheStore becomes available after its status changes to Available.
 * * Use ClientToken to ensure request idempotence in case of network exceptions. If you make repeated calls with the same ClientToken and request parameters, the same KVCacheStore ID and order ID are returned. If the request parameters change, an IdempotentParameterMismatch error is returned.
 * * Creating a KVCacheStore synchronously generates an order. The operation returns an OrderId. You can view the order in the Expenses and Costs console. For more information, see View and manage orders.
 *
 * @param request CreateKVCacheStoreRequest
 * @return CreateKVCacheStoreResponse
 */
CreateKVCacheStoreResponse Client::createKVCacheStore(const CreateKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKVCacheStoreWithOptions(request, runtime);
}

/**
 * @summary Deletes a KVCacheInstance instance.
 *
 * @description * The delete operation is irreversible. Data in the KVCacheStore will be cleared and cannot be recovered. Proceed with caution.
 * * Billing stops after the deletion process starts.
 * * The KVCacheStore to be deleted cannot be in the Creating state.
 * * The KVCacheStore to be deleted cannot have mount records in the Attaching or Attached state.
 *
 * @param request DeleteKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKVCacheStoreResponse
 */
DeleteKVCacheStoreResponse Client::deleteKVCacheStoreWithOptions(const DeleteKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKvcsId()) {
    query["KvcsId"] = request.getKvcsId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKVCacheStoreResponse>();
}

/**
 * @summary Deletes a KVCacheInstance instance.
 *
 * @description * The delete operation is irreversible. Data in the KVCacheStore will be cleared and cannot be recovered. Proceed with caution.
 * * Billing stops after the deletion process starts.
 * * The KVCacheStore to be deleted cannot be in the Creating state.
 * * The KVCacheStore to be deleted cannot have mount records in the Attaching or Attached state.
 *
 * @param request DeleteKVCacheStoreRequest
 * @return DeleteKVCacheStoreResponse
 */
DeleteKVCacheStoreResponse Client::deleteKVCacheStore(const DeleteKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKVCacheStoreWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where KVCacheStore is available.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2026-06-17"},
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
 * @summary Queries the regions where KVCacheStore is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the available zones for KVCacheStore in a specified region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2026-06-17"},
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
 * @summary Queries the available zones for KVCacheStore in a specified region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Unmounts multiple KVCache instances from the virtualization stack.
 *
 * @description * This operation is asynchronous. A return value of Detaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query mount records. If no record is found for the specified KvcsId and VscId, the unmount operation is complete.
 *
 * @param request DetachKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachKVCacheStoreResponse
 */
DetachKVCacheStoreResponse Client::detachKVCacheStoreWithOptions(const DetachKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachKVCacheStoreResponse>();
}

/**
 * @summary Unmounts multiple KVCache instances from the virtualization stack.
 *
 * @description * This operation is asynchronous. A return value of Detaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query mount records. If no record is found for the specified KvcsId and VscId, the unmount operation is complete.
 *
 * @param request DetachKVCacheStoreRequest
 * @return DetachKVCacheStoreResponse
 */
DetachKVCacheStoreResponse Client::detachKVCacheStore(const DetachKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachKVCacheStoreWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a KvCacheStore instance.
 *
 * @param request GetKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKVCacheStoreResponse
 */
GetKVCacheStoreResponse Client::getKVCacheStoreWithOptions(const GetKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKvcsId()) {
    query["KvcsId"] = request.getKvcsId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKVCacheStoreResponse>();
}

/**
 * @summary Queries the details of a KvCacheStore instance.
 *
 * @param request GetKVCacheStoreRequest
 * @return GetKVCacheStoreResponse
 */
GetKVCacheStoreResponse Client::getKVCacheStore(const GetKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKVCacheStoreWithOptions(request, runtime);
}

/**
 * @summary Queries the attachment information of multiple KVCache instances.
 *
 * @description * This operation has no status restrictions on KVCacheStore. If a KVCacheStore is in the Creating state, an empty list is returned.
 * * A KVCacheStore can be attached to multiple VSCs. Multiple attachment records may be returned for each KVCacheStore.
 * * This operation supports batch queries. You can query up to 100 KVCacheStores in a single request.
 * * This operation supports page number-based pagination (PageNumber and PageSize) and cursor-based pagination (NextToken and MaxResults). If both sets of pagination parameters are specified, cursor-based pagination takes precedence.
 *
 * @param request ListKVCacheStoreAttachInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKVCacheStoreAttachInfoResponse
 */
ListKVCacheStoreAttachInfoResponse Client::listKVCacheStoreAttachInfoWithOptions(const ListKVCacheStoreAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKvcsIds()) {
    query["KvcsIds"] = request.getKvcsIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVscId()) {
    query["VscId"] = request.getVscId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKVCacheStoreAttachInfo"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKVCacheStoreAttachInfoResponse>();
}

/**
 * @summary Queries the attachment information of multiple KVCache instances.
 *
 * @description * This operation has no status restrictions on KVCacheStore. If a KVCacheStore is in the Creating state, an empty list is returned.
 * * A KVCacheStore can be attached to multiple VSCs. Multiple attachment records may be returned for each KVCacheStore.
 * * This operation supports batch queries. You can query up to 100 KVCacheStores in a single request.
 * * This operation supports page number-based pagination (PageNumber and PageSize) and cursor-based pagination (NextToken and MaxResults). If both sets of pagination parameters are specified, cursor-based pagination takes precedence.
 *
 * @param request ListKVCacheStoreAttachInfoRequest
 * @return ListKVCacheStoreAttachInfoResponse
 */
ListKVCacheStoreAttachInfoResponse Client::listKVCacheStoreAttachInfo(const ListKVCacheStoreAttachInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKVCacheStoreAttachInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of available HpnZones for a specified KVCacheStore instance.
 *
 * @description * This operation queries available HpnZones for a KVCacheStore instance. Use this operation to query optional HPN cluster IDs before you scale out or migrate a KVCacheStore instance.
 *
 * @param request ListKVCacheStoreAvailableHpnZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKVCacheStoreAvailableHpnZonesResponse
 */
ListKVCacheStoreAvailableHpnZonesResponse Client::listKVCacheStoreAvailableHpnZonesWithOptions(const ListKVCacheStoreAvailableHpnZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKvcsIds()) {
    query["KvcsIds"] = request.getKvcsIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKVCacheStoreAvailableHpnZones"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKVCacheStoreAvailableHpnZonesResponse>();
}

/**
 * @summary Queries the list of available HpnZones for a specified KVCacheStore instance.
 *
 * @description * This operation queries available HpnZones for a KVCacheStore instance. Use this operation to query optional HPN cluster IDs before you scale out or migrate a KVCacheStore instance.
 *
 * @param request ListKVCacheStoreAvailableHpnZonesRequest
 * @return ListKVCacheStoreAvailableHpnZonesResponse
 */
ListKVCacheStoreAvailableHpnZonesResponse Client::listKVCacheStoreAvailableHpnZones(const ListKVCacheStoreAvailableHpnZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKVCacheStoreAvailableHpnZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the available VSC resources associated with a specified KVCacheStore instance.
 *
 * @param request ListKVCacheStoreAvailableVscsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKVCacheStoreAvailableVscsResponse
 */
ListKVCacheStoreAvailableVscsResponse Client::listKVCacheStoreAvailableVscsWithOptions(const ListKVCacheStoreAvailableVscsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArns()) {
    query["Arns"] = request.getArns();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasKvcsId()) {
    query["KvcsId"] = request.getKvcsId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKVCacheStoreAvailableVscs"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKVCacheStoreAvailableVscsResponse>();
}

/**
 * @summary Queries the available VSC resources associated with a specified KVCacheStore instance.
 *
 * @param request ListKVCacheStoreAvailableVscsRequest
 * @return ListKVCacheStoreAvailableVscsResponse
 */
ListKVCacheStoreAvailableVscsResponse Client::listKVCacheStoreAvailableVscs(const ListKVCacheStoreAvailableVscsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKVCacheStoreAvailableVscsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of KVCache instances.
 *
 * @description * Supports two pagination methods: page number pagination (PageNumber + PageSize) and cursor pagination (NextToken + MaxResults). If both are provided, page number pagination takes precedence.
 *
 * @param request ListKVCacheStoresRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKVCacheStoresResponse
 */
ListKVCacheStoresResponse Client::listKVCacheStoresWithOptions(const ListKVCacheStoresRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKvcsIds()) {
    query["KvcsIds"] = request.getKvcsIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKVCacheStores"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKVCacheStoresResponse>();
}

/**
 * @summary Queries a list of KVCache instances.
 *
 * @description * Supports two pagination methods: page number pagination (PageNumber + PageSize) and cursor pagination (NextToken + MaxResults). If both are provided, page number pagination takes precedence.
 *
 * @param request ListKVCacheStoresRequest
 * @return ListKVCacheStoresResponse
 */
ListKVCacheStoresResponse Client::listKVCacheStores(const ListKVCacheStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKVCacheStoresWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a KVCacheStore.
 *
 * @description * You can modify the Name, Description, and Capacity. The cluster ID (HpnZone) cannot be modified after creation.
 * * Modifying the Capacity triggers a specification change order, and the API returns an OrderId. Modifying only the Name or Description does not generate an order.
 *
 * @param request UpdateKVCacheStoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKVCacheStoreResponse
 */
UpdateKVCacheStoreResponse Client::updateKVCacheStoreWithOptions(const UpdateKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKvcsId()) {
    query["KvcsId"] = request.getKvcsId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateKVCacheStore"},
    {"version" , "2026-06-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKVCacheStoreResponse>();
}

/**
 * @summary Modifies the attributes of a KVCacheStore.
 *
 * @description * You can modify the Name, Description, and Capacity. The cluster ID (HpnZone) cannot be modified after creation.
 * * Modifying the Capacity triggers a specification change order, and the API returns an OrderId. Modifying only the Name or Description does not generate an order.
 *
 * @param request UpdateKVCacheStoreRequest
 * @return UpdateKVCacheStoreResponse
 */
UpdateKVCacheStoreResponse Client::updateKVCacheStore(const UpdateKVCacheStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateKVCacheStoreWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617