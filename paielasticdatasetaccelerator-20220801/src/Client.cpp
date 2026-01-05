#include <darabonba/Core.hpp>
#include <alibabacloud/PAIElasticDatasetAccelerator20220801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PAIElasticDatasetAccelerator20220801::Models;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{

AlibabaCloud::PAIElasticDatasetAccelerator20220801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("paielasticdatasetaccelerator", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 将一个挂载点关联到一个数据集加速槽上。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindEndpointResponse
 */
BindEndpointResponse Client::bindEndpointWithOptions(const string &EndpointId, const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindEndpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints/" , Darabonba::Encode::Encoder::percentEncode(EndpointId) , "/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindEndpointResponse>();
}

/**
 * @summary 将一个挂载点关联到一个数据集加速槽上。
 *
 * @return BindEndpointResponse
 */
BindEndpointResponse Client::bindEndpoint(const string &EndpointId, const string &SlotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindEndpointWithOptions(EndpointId, SlotId, headers, runtime);
}

/**
 * @summary 创建并注册一个数据集加速槽挂载点。
 *
 * @param request CreateEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpointWithOptions(const CreateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    body["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEndpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointResponse>();
}

/**
 * @summary 创建并注册一个数据集加速槽挂载点。
 *
 * @param request CreateEndpointRequest
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpoint(const CreateEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEndpointWithOptions(request, headers, runtime);
}

/**
 * @summary 创建数据集加速实例
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCapacity()) {
    body["Capacity"] = request.getCapacity();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMaxEndpoint()) {
    body["MaxEndpoint"] = request.getMaxEndpoint();
  }

  if (!!request.hasMaxSlot()) {
    body["MaxSlot"] = request.getMaxSlot();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasProviderType()) {
    body["ProviderType"] = request.getProviderType();
  }

  if (!!request.hasStorageType()) {
    body["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary 创建数据集加速实例
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建并注册一个 数据集加速槽。
 *
 * @param request CreateSlotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlotResponse
 */
CreateSlotResponse Client::createSlotWithOptions(const CreateSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCapacity()) {
    body["Capacity"] = request.getCapacity();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointIds()) {
    body["EndpointIds"] = request.getEndpointIds();
  }

  if (!!request.hasEndpoints()) {
    body["Endpoints"] = request.getEndpoints();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIoType()) {
    body["IoType"] = request.getIoType();
  }

  if (!!request.hasLifeCycle()) {
    body["LifeCycle"] = request.getLifeCycle();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasStorageType()) {
    body["StorageType"] = request.getStorageType();
  }

  if (!!request.hasStorageUri()) {
    body["StorageUri"] = request.getStorageUri();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlotResponse>();
}

/**
 * @summary 创建并注册一个 数据集加速槽。
 *
 * @param request CreateSlotRequest
 * @return CreateSlotResponse
 */
CreateSlotResponse Client::createSlot(const CreateSlotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSlotWithOptions(request, headers, runtime);
}

/**
 * @summary 同时创建并注册多个数据集加速槽，并使用相同的一组数据加速槽挂载点。
 *
 * @param request CreateSlotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlotsResponse
 */
CreateSlotsResponse Client::createSlotsWithOptions(const CreateSlotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasSlots()) {
    body["Slots"] = request.getSlots();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSlots"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/batch/slots/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlotsResponse>();
}

/**
 * @summary 同时创建并注册多个数据集加速槽，并使用相同的一组数据加速槽挂载点。
 *
 * @param request CreateSlotsRequest
 * @return CreateSlotsResponse
 */
CreateSlotsResponse Client::createSlots(const CreateSlotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSlotsWithOptions(request, headers, runtime);
}

/**
 * @summary 针对一个资源，创建一个标签。
 *
 * @param request CreateTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKey()) {
    body["Key"] = request.getKey();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary 针对一个资源，创建一个标签。
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTagWithOptions(request, headers, runtime);
}

/**
 * @summary 删除一个数据集加速槽挂载点。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpointWithOptions(const string &EndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints/" , Darabonba::Encode::Encoder::percentEncode(EndpointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointResponse>();
}

/**
 * @summary 删除一个数据集加速槽挂载点。
 *
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpoint(const string &EndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEndpointWithOptions(EndpointId, headers, runtime);
}

/**
 * @summary 删除一个数据集加速实例。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary 删除一个数据集加速实例。
 *
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 删除一个数据集加速槽。
 *
 * @param request DeleteSlotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSlotResponse
 */
DeleteSlotResponse Client::deleteSlotWithOptions(const string &SlotId, const DeleteSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSlotResponse>();
}

/**
 * @summary 删除一个数据集加速槽。
 *
 * @param request DeleteSlotRequest
 * @return DeleteSlotResponse
 */
DeleteSlotResponse Client::deleteSlot(const string &SlotId, const DeleteSlotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSlotWithOptions(SlotId, request, headers, runtime);
}

/**
 * @summary 删除一个资源上的一个标签。
 *
 * @param request DeleteTagRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const DeleteTagRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary 删除一个资源上的一个标签。
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTagWithOptions(request, headers, runtime);
}

/**
 * @summary 获取指定数据集加速组件的信息。
 *
 * @param tmpReq DescribeComponentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComponentResponse
 */
DescribeComponentResponse Client::describeComponentWithOptions(const string &ComponentId, const DescribeComponentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeComponentShrinkRequest request = DescribeComponentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValues(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasRenderTemplate()) {
    query["RenderTemplate"] = request.getRenderTemplate();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.getValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComponent"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/components/" , Darabonba::Encode::Encoder::percentEncode(ComponentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComponentResponse>();
}

/**
 * @summary 获取指定数据集加速组件的信息。
 *
 * @param request DescribeComponentRequest
 * @return DescribeComponentResponse
 */
DescribeComponentResponse Client::describeComponent(const string &ComponentId, const DescribeComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeComponentWithOptions(ComponentId, request, headers, runtime);
}

/**
 * @summary 获取指定数据集加速槽挂载点的信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointResponse
 */
DescribeEndpointResponse Client::describeEndpointWithOptions(const string &EndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints/" , Darabonba::Encode::Encoder::percentEncode(EndpointId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointResponse>();
}

/**
 * @summary 获取指定数据集加速槽挂载点的信息。
 *
 * @return DescribeEndpointResponse
 */
DescribeEndpointResponse Client::describeEndpoint(const string &EndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeEndpointWithOptions(EndpointId, headers, runtime);
}

/**
 * @summary 获取指定数据集加速实例信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary 获取指定数据集加速实例信息。
 *
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取指定数据集加速槽的信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlotResponse
 */
DescribeSlotResponse Client::describeSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlotResponse>();
}

/**
 * @summary 获取指定数据集加速槽的信息。
 *
 * @return DescribeSlotResponse
 */
DescribeSlotResponse Client::describeSlot(const string &SlotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSlotWithOptions(SlotId, headers, runtime);
}

/**
 * @summary 获取数据集加速组件的信息列表。
 *
 * @param request ListComponentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentIds()) {
    query["ComponentIds"] = request.getComponentIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/components")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary 获取数据集加速组件的信息列表。
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComponentsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据集加速槽挂载点的信息列表。
 *
 * @param request ListEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEndpointsResponse
 */
ListEndpointsResponse Client::listEndpointsWithOptions(const ListEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointIds()) {
    query["EndpointIds"] = request.getEndpointIds();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSlotIds()) {
    query["SlotIds"] = request.getSlotIds();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEndpoints"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEndpointsResponse>();
}

/**
 * @summary 获取数据集加速槽挂载点的信息列表。
 *
 * @param request ListEndpointsRequest
 * @return ListEndpointsResponse
 */
ListEndpointsResponse Client::listEndpoints(const ListEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEndpointsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据集加速实例信息列表。
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary 获取数据集加速实例信息列表。
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据集加速槽的信息列表。
 *
 * @param request ListSlotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSlotsResponse
 */
ListSlotsResponse Client::listSlotsWithOptions(const ListSlotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointIds()) {
    query["EndpointIds"] = request.getEndpointIds();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasSlotIds()) {
    query["SlotIds"] = request.getSlotIds();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasStorageUri()) {
    query["StorageUri"] = request.getStorageUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSlots"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSlotsResponse>();
}

/**
 * @summary 获取数据集加速槽的信息列表。
 *
 * @param request ListSlotsRequest
 * @return ListSlotsResponse
 */
ListSlotsResponse Client::listSlots(const ListSlotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSlotsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取标签列表信息。
 *
 * @param request ListTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary 获取标签列表信息。
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询并获取监控指标信息。
 *
 * @param tmpReq QueryInstanceMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceMetricsResponse
 */
QueryInstanceMetricsResponse Client::queryInstanceMetricsWithOptions(const string &InstanceId, const QueryInstanceMetricsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryInstanceMetricsShrinkRequest request = QueryInstanceMetricsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDimensions()) {
    request.setDimensionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDimensions(), "Dimensions", "json"));
  }

  json query = {};
  if (!!request.hasDimensionsShrink()) {
    query["Dimensions"] = request.getDimensionsShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstanceMetrics"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/metrics/action/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceMetricsResponse>();
}

/**
 * @summary 查询并获取监控指标信息。
 *
 * @param request QueryInstanceMetricsRequest
 * @return QueryInstanceMetricsResponse
 */
QueryInstanceMetricsResponse Client::queryInstanceMetrics(const string &InstanceId, const QueryInstanceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryInstanceMetricsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 查询并获取监控指标信息
 *
 * @param tmpReq QuerySlotMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySlotMetricsResponse
 */
QuerySlotMetricsResponse Client::querySlotMetricsWithOptions(const string &SlotId, const QuerySlotMetricsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySlotMetricsShrinkRequest request = QuerySlotMetricsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDimensions()) {
    request.setDimensionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDimensions(), "Dimensions", "json"));
  }

  json query = {};
  if (!!request.hasDimensionsShrink()) {
    query["Dimensions"] = request.getDimensionsShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.getMetricType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeStep()) {
    query["TimeStep"] = request.getTimeStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySlotMetrics"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId) , "/metrics/action/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySlotMetricsResponse>();
}

/**
 * @summary 查询并获取监控指标信息
 *
 * @param request QuerySlotMetricsRequest
 * @return QuerySlotMetricsResponse
 */
QuerySlotMetricsResponse Client::querySlotMetrics(const string &SlotId, const QuerySlotMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return querySlotMetricsWithOptions(SlotId, request, headers, runtime);
}

/**
 * @summary 查询当前账号下数据集加速相关的统计信息。
 *
 * @param request QueryStatisticRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryStatisticResponse
 */
QueryStatisticResponse Client::queryStatisticWithOptions(const QueryStatisticRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryStatistic"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/action/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryStatisticResponse>();
}

/**
 * @summary 查询当前账号下数据集加速相关的统计信息。
 *
 * @param request QueryStatisticRequest
 * @return QueryStatisticResponse
 */
QueryStatisticResponse Client::queryStatistic(const QueryStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryStatisticWithOptions(request, headers, runtime);
}

/**
 * @summary 重载数据加速槽的数据
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReloadSlotResponse
 */
ReloadSlotResponse Client::reloadSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReloadSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId) , "/action/reload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReloadSlotResponse>();
}

/**
 * @summary 重载数据加速槽的数据
 *
 * @return ReloadSlotResponse
 */
ReloadSlotResponse Client::reloadSlot(const string &SlotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reloadSlotWithOptions(SlotId, headers, runtime);
}

/**
 * @summary 停止一个数据集加速槽。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSlotResponse
 */
StopSlotResponse Client::stopSlotWithOptions(const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSlotResponse>();
}

/**
 * @summary 停止一个数据集加速槽。
 *
 * @return StopSlotResponse
 */
StopSlotResponse Client::stopSlot(const string &SlotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSlotWithOptions(SlotId, headers, runtime);
}

/**
 * @summary 取消挂载点关联和指定数据集加速槽的关联关系。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindEndpointResponse
 */
UnbindEndpointResponse Client::unbindEndpointWithOptions(const string &EndpointId, const string &SlotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindEndpoint"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/endpoints/" , Darabonba::Encode::Encoder::percentEncode(EndpointId) , "/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindEndpointResponse>();
}

/**
 * @summary 取消挂载点关联和指定数据集加速槽的关联关系。
 *
 * @return UnbindEndpointResponse
 */
UnbindEndpointResponse Client::unbindEndpoint(const string &EndpointId, const string &SlotId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindEndpointWithOptions(EndpointId, SlotId, headers, runtime);
}

/**
 * @summary 更新一个数据集加速实例的信息。
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const string &InstanceId, const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMaxSlot()) {
    body["MaxSlot"] = request.getMaxSlot();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 更新一个数据集加速实例的信息。
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const string &InstanceId, const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 更新一个数据集加速槽的信息。
 *
 * @param request UpdateSlotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSlotResponse
 */
UpdateSlotResponse Client::updateSlotWithOptions(const string &SlotId, const UpdateSlotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCapacity()) {
    body["Capacity"] = request.getCapacity();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasLifeCycle()) {
    body["LifeCycle"] = request.getLifeCycle();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasStorageType()) {
    body["StorageType"] = request.getStorageType();
  }

  if (!!request.hasStorageUri()) {
    body["StorageUri"] = request.getStorageUri();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSlot"},
    {"version" , "2022-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/slots/" , Darabonba::Encode::Encoder::percentEncode(SlotId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSlotResponse>();
}

/**
 * @summary 更新一个数据集加速槽的信息。
 *
 * @param request UpdateSlotRequest
 * @return UpdateSlotResponse
 */
UpdateSlotResponse Client::updateSlot(const string &SlotId, const UpdateSlotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSlotWithOptions(SlotId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801