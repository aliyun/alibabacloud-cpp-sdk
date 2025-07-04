// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/resource_center_20221201.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ResourceCenter20221201;

Alibabacloud_ResourceCenter20221201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("resourcecenter"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ResourceCenter20221201::Client::getEndpoint(shared_ptr<string> productId,
                                                                shared_ptr<string> regionId,
                                                                shared_ptr<string> endpointRule,
                                                                shared_ptr<string> network,
                                                                shared_ptr<string> suffix,
                                                                shared_ptr<map<string, string>> endpointMap,
                                                                shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AssociateDefaultFilterResponse Alibabacloud_ResourceCenter20221201::Client::associateDefaultFilterWithOptions(shared_ptr<AssociateDefaultFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterName)) {
    query->insert(pair<string, string>("FilterName", *request->filterName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateDefaultFilter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateDefaultFilterResponse(callApi(params, req, runtime));
}

AssociateDefaultFilterResponse Alibabacloud_ResourceCenter20221201::Client::associateDefaultFilter(shared_ptr<AssociateDefaultFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateDefaultFilterWithOptions(request, runtime);
}

CreateDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::createDeliveryChannelWithOptions(shared_ptr<CreateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelDescription)) {
    query->insert(pair<string, string>("DeliveryChannelDescription", *request->deliveryChannelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryChannelRequestDeliveryChannelFilter>(request->deliveryChannelFilter)) {
    query->insert(pair<string, CreateDeliveryChannelRequestDeliveryChannelFilter>("DeliveryChannelFilter", *request->deliveryChannelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryChannelRequestResourceChangeDelivery>(request->resourceChangeDelivery)) {
    query->insert(pair<string, CreateDeliveryChannelRequestResourceChangeDelivery>("ResourceChangeDelivery", *request->resourceChangeDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryChannelRequestResourceSnapshotDelivery>(request->resourceSnapshotDelivery)) {
    query->insert(pair<string, CreateDeliveryChannelRequestResourceSnapshotDelivery>("ResourceSnapshotDelivery", *request->resourceSnapshotDelivery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryChannelResponse(callApi(params, req, runtime));
}

CreateDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::createDeliveryChannel(shared_ptr<CreateDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeliveryChannelWithOptions(request, runtime);
}

CreateFilterResponse Alibabacloud_ResourceCenter20221201::Client::createFilterWithOptions(shared_ptr<CreateFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConfiguration)) {
    query->insert(pair<string, string>("FilterConfiguration", *request->filterConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterName)) {
    query->insert(pair<string, string>("FilterName", *request->filterName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFilter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFilterResponse(callApi(params, req, runtime));
}

CreateFilterResponse Alibabacloud_ResourceCenter20221201::Client::createFilter(shared_ptr<CreateFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFilterWithOptions(request, runtime);
}

CreateMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::createMultiAccountDeliveryChannelWithOptions(shared_ptr<CreateMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelDescription)) {
    query->insert(pair<string, string>("DeliveryChannelDescription", *request->deliveryChannelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>(request->deliveryChannelFilter)) {
    query->insert(pair<string, CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>("DeliveryChannelFilter", *request->deliveryChannelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery>(request->resourceChangeDelivery)) {
    query->insert(pair<string, CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery>("ResourceChangeDelivery", *request->resourceChangeDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>(request->resourceSnapshotDelivery)) {
    query->insert(pair<string, CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>("ResourceSnapshotDelivery", *request->resourceSnapshotDelivery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMultiAccountDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMultiAccountDeliveryChannelResponse(callApi(params, req, runtime));
}

CreateMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::createMultiAccountDeliveryChannel(shared_ptr<CreateMultiAccountDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMultiAccountDeliveryChannelWithOptions(request, runtime);
}

CreateSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::createSavedQueryWithOptions(shared_ptr<CreateSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSavedQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSavedQueryResponse(callApi(params, req, runtime));
}

CreateSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::createSavedQuery(shared_ptr<CreateSavedQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSavedQueryWithOptions(request, runtime);
}

DeleteDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::deleteDeliveryChannelWithOptions(shared_ptr<DeleteDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeliveryChannelResponse(callApi(params, req, runtime));
}

DeleteDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::deleteDeliveryChannel(shared_ptr<DeleteDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeliveryChannelWithOptions(request, runtime);
}

DeleteFilterResponse Alibabacloud_ResourceCenter20221201::Client::deleteFilterWithOptions(shared_ptr<DeleteFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterName)) {
    query->insert(pair<string, string>("FilterName", *request->filterName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFilter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFilterResponse(callApi(params, req, runtime));
}

DeleteFilterResponse Alibabacloud_ResourceCenter20221201::Client::deleteFilter(shared_ptr<DeleteFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFilterWithOptions(request, runtime);
}

DeleteMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::deleteMultiAccountDeliveryChannelWithOptions(shared_ptr<DeleteMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMultiAccountDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMultiAccountDeliveryChannelResponse(callApi(params, req, runtime));
}

DeleteMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::deleteMultiAccountDeliveryChannel(shared_ptr<DeleteMultiAccountDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMultiAccountDeliveryChannelWithOptions(request, runtime);
}

DeleteSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::deleteSavedQueryWithOptions(shared_ptr<DeleteSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryId)) {
    query->insert(pair<string, string>("QueryId", *request->queryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSavedQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSavedQueryResponse(callApi(params, req, runtime));
}

DeleteSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::deleteSavedQuery(shared_ptr<DeleteSavedQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSavedQueryWithOptions(request, runtime);
}

DisableMultiAccountResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::disableMultiAccountResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableMultiAccountResourceCenter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableMultiAccountResourceCenterResponse(callApi(params, req, runtime));
}

DisableMultiAccountResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::disableMultiAccountResourceCenter() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableMultiAccountResourceCenterWithOptions(runtime);
}

DisableResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::disableResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableResourceCenter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableResourceCenterResponse(callApi(params, req, runtime));
}

DisableResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::disableResourceCenter() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableResourceCenterWithOptions(runtime);
}

DisassociateDefaultFilterResponse Alibabacloud_ResourceCenter20221201::Client::disassociateDefaultFilterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociateDefaultFilter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisassociateDefaultFilterResponse(callApi(params, req, runtime));
}

DisassociateDefaultFilterResponse Alibabacloud_ResourceCenter20221201::Client::disassociateDefaultFilter() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateDefaultFilterWithOptions(runtime);
}

EnableMultiAccountResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::enableMultiAccountResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableMultiAccountResourceCenter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableMultiAccountResourceCenterResponse(callApi(params, req, runtime));
}

EnableMultiAccountResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::enableMultiAccountResourceCenter() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableMultiAccountResourceCenterWithOptions(runtime);
}

EnableResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::enableResourceCenterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableResourceCenter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableResourceCenterResponse(callApi(params, req, runtime));
}

EnableResourceCenterResponse Alibabacloud_ResourceCenter20221201::Client::enableResourceCenter() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableResourceCenterWithOptions(runtime);
}

ExecuteMultiAccountSQLQueryResponse Alibabacloud_ResourceCenter20221201::Client::executeMultiAccountSQLQueryWithOptions(shared_ptr<ExecuteMultiAccountSQLQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteMultiAccountSQLQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteMultiAccountSQLQueryResponse(callApi(params, req, runtime));
}

ExecuteMultiAccountSQLQueryResponse Alibabacloud_ResourceCenter20221201::Client::executeMultiAccountSQLQuery(shared_ptr<ExecuteMultiAccountSQLQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeMultiAccountSQLQueryWithOptions(request, runtime);
}

ExecuteSQLQueryResponse Alibabacloud_ResourceCenter20221201::Client::executeSQLQueryWithOptions(shared_ptr<ExecuteSQLQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteSQLQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteSQLQueryResponse(callApi(params, req, runtime));
}

ExecuteSQLQueryResponse Alibabacloud_ResourceCenter20221201::Client::executeSQLQuery(shared_ptr<ExecuteSQLQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeSQLQueryWithOptions(request, runtime);
}

GetDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::getDeliveryChannelWithOptions(shared_ptr<GetDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeliveryChannelResponse(callApi(params, req, runtime));
}

GetDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::getDeliveryChannel(shared_ptr<GetDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeliveryChannelWithOptions(request, runtime);
}

GetDeliveryChannelStatisticsResponse Alibabacloud_ResourceCenter20221201::Client::getDeliveryChannelStatisticsWithOptions(shared_ptr<GetDeliveryChannelStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeliveryChannelStatistics"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeliveryChannelStatisticsResponse(callApi(params, req, runtime));
}

GetDeliveryChannelStatisticsResponse Alibabacloud_ResourceCenter20221201::Client::getDeliveryChannelStatistics(shared_ptr<GetDeliveryChannelStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeliveryChannelStatisticsWithOptions(request, runtime);
}

GetExampleQueryResponse Alibabacloud_ResourceCenter20221201::Client::getExampleQueryWithOptions(shared_ptr<GetExampleQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryId)) {
    query->insert(pair<string, string>("QueryId", *request->queryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExampleQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExampleQueryResponse(callApi(params, req, runtime));
}

GetExampleQueryResponse Alibabacloud_ResourceCenter20221201::Client::getExampleQuery(shared_ptr<GetExampleQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExampleQueryWithOptions(request, runtime);
}

GetMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountDeliveryChannelWithOptions(shared_ptr<GetMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiAccountDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiAccountDeliveryChannelResponse(callApi(params, req, runtime));
}

GetMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountDeliveryChannel(shared_ptr<GetMultiAccountDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiAccountDeliveryChannelWithOptions(request, runtime);
}

GetMultiAccountDeliveryChannelStatisticsResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountDeliveryChannelStatisticsWithOptions(shared_ptr<GetMultiAccountDeliveryChannelStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiAccountDeliveryChannelStatistics"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiAccountDeliveryChannelStatisticsResponse(callApi(params, req, runtime));
}

GetMultiAccountDeliveryChannelStatisticsResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountDeliveryChannelStatistics(shared_ptr<GetMultiAccountDeliveryChannelStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiAccountDeliveryChannelStatisticsWithOptions(request, runtime);
}

GetMultiAccountResourceCenterServiceStatusResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceCenterServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiAccountResourceCenterServiceStatus"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiAccountResourceCenterServiceStatusResponse(callApi(params, req, runtime));
}

GetMultiAccountResourceCenterServiceStatusResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceCenterServiceStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiAccountResourceCenterServiceStatusWithOptions(runtime);
}

GetMultiAccountResourceConfigurationResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceConfigurationWithOptions(shared_ptr<GetMultiAccountResourceConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiAccountResourceConfiguration"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiAccountResourceConfigurationResponse(callApi(params, req, runtime));
}

GetMultiAccountResourceConfigurationResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceConfiguration(shared_ptr<GetMultiAccountResourceConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiAccountResourceConfigurationWithOptions(request, runtime);
}

GetMultiAccountResourceCountsResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceCountsWithOptions(shared_ptr<GetMultiAccountResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetMultiAccountResourceCountsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<GetMultiAccountResourceCountsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupByKey)) {
    query->insert(pair<string, string>("GroupByKey", *request->groupByKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiAccountResourceCounts"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiAccountResourceCountsResponse(callApi(params, req, runtime));
}

GetMultiAccountResourceCountsResponse Alibabacloud_ResourceCenter20221201::Client::getMultiAccountResourceCounts(shared_ptr<GetMultiAccountResourceCountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiAccountResourceCountsWithOptions(request, runtime);
}

GetResourceCenterServiceStatusResponse Alibabacloud_ResourceCenter20221201::Client::getResourceCenterServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceCenterServiceStatus"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceCenterServiceStatusResponse(callApi(params, req, runtime));
}

GetResourceCenterServiceStatusResponse Alibabacloud_ResourceCenter20221201::Client::getResourceCenterServiceStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceCenterServiceStatusWithOptions(runtime);
}

GetResourceConfigurationResponse Alibabacloud_ResourceCenter20221201::Client::getResourceConfigurationWithOptions(shared_ptr<GetResourceConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceConfiguration"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceConfigurationResponse(callApi(params, req, runtime));
}

GetResourceConfigurationResponse Alibabacloud_ResourceCenter20221201::Client::getResourceConfiguration(shared_ptr<GetResourceConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceConfigurationWithOptions(request, runtime);
}

GetResourceCountsResponse Alibabacloud_ResourceCenter20221201::Client::getResourceCountsWithOptions(shared_ptr<GetResourceCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetResourceCountsRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<GetResourceCountsRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupByKey)) {
    query->insert(pair<string, string>("GroupByKey", *request->groupByKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceCounts"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceCountsResponse(callApi(params, req, runtime));
}

GetResourceCountsResponse Alibabacloud_ResourceCenter20221201::Client::getResourceCounts(shared_ptr<GetResourceCountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceCountsWithOptions(request, runtime);
}

GetSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::getSavedQueryWithOptions(shared_ptr<GetSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryId)) {
    query->insert(pair<string, string>("QueryId", *request->queryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavedQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavedQueryResponse(callApi(params, req, runtime));
}

GetSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::getSavedQuery(shared_ptr<GetSavedQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSavedQueryWithOptions(request, runtime);
}

ListDeliveryChannelsResponse Alibabacloud_ResourceCenter20221201::Client::listDeliveryChannelsWithOptions(shared_ptr<ListDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeliveryChannels"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeliveryChannelsResponse(callApi(params, req, runtime));
}

ListDeliveryChannelsResponse Alibabacloud_ResourceCenter20221201::Client::listDeliveryChannels(shared_ptr<ListDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeliveryChannelsWithOptions(request, runtime);
}

ListExampleQueriesResponse Alibabacloud_ResourceCenter20221201::Client::listExampleQueriesWithOptions(shared_ptr<ListExampleQueriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExampleQueries"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExampleQueriesResponse(callApi(params, req, runtime));
}

ListExampleQueriesResponse Alibabacloud_ResourceCenter20221201::Client::listExampleQueries(shared_ptr<ListExampleQueriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExampleQueriesWithOptions(request, runtime);
}

ListFiltersResponse Alibabacloud_ResourceCenter20221201::Client::listFiltersWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFilters"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFiltersResponse(callApi(params, req, runtime));
}

ListFiltersResponse Alibabacloud_ResourceCenter20221201::Client::listFilters() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFiltersWithOptions(runtime);
}

ListMultiAccountDeliveryChannelsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountDeliveryChannelsWithOptions(shared_ptr<ListMultiAccountDeliveryChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiAccountDeliveryChannels"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiAccountDeliveryChannelsResponse(callApi(params, req, runtime));
}

ListMultiAccountDeliveryChannelsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountDeliveryChannels(shared_ptr<ListMultiAccountDeliveryChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiAccountDeliveryChannelsWithOptions(request, runtime);
}

ListMultiAccountResourceGroupsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountResourceGroupsWithOptions(shared_ptr<ListMultiAccountResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceGroupIds)) {
    query->insert(pair<string, vector<string>>("ResourceGroupIds", *request->resourceGroupIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiAccountResourceGroups"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiAccountResourceGroupsResponse(callApi(params, req, runtime));
}

ListMultiAccountResourceGroupsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountResourceGroups(shared_ptr<ListMultiAccountResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiAccountResourceGroupsWithOptions(request, runtime);
}

ListMultiAccountResourceRelationshipsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountResourceRelationshipsWithOptions(shared_ptr<ListMultiAccountResourceRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>>(request->relatedResourceFilter)) {
    query->insert(pair<string, vector<ListMultiAccountResourceRelationshipsRequestRelatedResourceFilter>>("RelatedResourceFilter", *request->relatedResourceFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiAccountResourceRelationships"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiAccountResourceRelationshipsResponse(callApi(params, req, runtime));
}

ListMultiAccountResourceRelationshipsResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountResourceRelationships(shared_ptr<ListMultiAccountResourceRelationshipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiAccountResourceRelationshipsWithOptions(request, runtime);
}

ListMultiAccountTagKeysResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountTagKeysWithOptions(shared_ptr<ListMultiAccountTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiAccountTagKeys"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiAccountTagKeysResponse(callApi(params, req, runtime));
}

ListMultiAccountTagKeysResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountTagKeys(shared_ptr<ListMultiAccountTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiAccountTagKeysWithOptions(request, runtime);
}

ListMultiAccountTagValuesResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountTagValuesWithOptions(shared_ptr<ListMultiAccountTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValue)) {
    query->insert(pair<string, string>("TagValue", *request->tagValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiAccountTagValues"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiAccountTagValuesResponse(callApi(params, req, runtime));
}

ListMultiAccountTagValuesResponse Alibabacloud_ResourceCenter20221201::Client::listMultiAccountTagValues(shared_ptr<ListMultiAccountTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiAccountTagValuesWithOptions(request, runtime);
}

ListResourceRelationshipsResponse Alibabacloud_ResourceCenter20221201::Client::listResourceRelationshipsWithOptions(shared_ptr<ListResourceRelationshipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListResourceRelationshipsRequestRelatedResourceFilter>>(request->relatedResourceFilter)) {
    query->insert(pair<string, vector<ListResourceRelationshipsRequestRelatedResourceFilter>>("RelatedResourceFilter", *request->relatedResourceFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceRelationships"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceRelationshipsResponse(callApi(params, req, runtime));
}

ListResourceRelationshipsResponse Alibabacloud_ResourceCenter20221201::Client::listResourceRelationships(shared_ptr<ListResourceRelationshipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceRelationshipsWithOptions(request, runtime);
}

ListResourceTypesResponse Alibabacloud_ResourceCenter20221201::Client::listResourceTypesWithOptions(shared_ptr<ListResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->query)) {
    query->insert(pair<string, vector<string>>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceTypes"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceTypesResponse(callApi(params, req, runtime));
}

ListResourceTypesResponse Alibabacloud_ResourceCenter20221201::Client::listResourceTypes(shared_ptr<ListResourceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTypesWithOptions(request, runtime);
}

ListSavedQueriesResponse Alibabacloud_ResourceCenter20221201::Client::listSavedQueriesWithOptions(shared_ptr<ListSavedQueriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSavedQueries"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSavedQueriesResponse(callApi(params, req, runtime));
}

ListSavedQueriesResponse Alibabacloud_ResourceCenter20221201::Client::listSavedQueries(shared_ptr<ListSavedQueriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSavedQueriesWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ResourceCenter20221201::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_ResourceCenter20221201::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ResourceCenter20221201::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchType)) {
    query->insert(pair<string, string>("MatchType", *request->matchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValue)) {
    query->insert(pair<string, string>("TagValue", *request->tagValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_ResourceCenter20221201::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

SearchMultiAccountResourcesResponse Alibabacloud_ResourceCenter20221201::Client::searchMultiAccountResourcesWithOptions(shared_ptr<SearchMultiAccountResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SearchMultiAccountResourcesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<SearchMultiAccountResourcesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<SearchMultiAccountResourcesRequestSortCriterion>(request->sortCriterion)) {
    query->insert(pair<string, SearchMultiAccountResourcesRequestSortCriterion>("SortCriterion", *request->sortCriterion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMultiAccountResources"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMultiAccountResourcesResponse(callApi(params, req, runtime));
}

SearchMultiAccountResourcesResponse Alibabacloud_ResourceCenter20221201::Client::searchMultiAccountResources(shared_ptr<SearchMultiAccountResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMultiAccountResourcesWithOptions(request, runtime);
}

SearchResourcesResponse Alibabacloud_ResourceCenter20221201::Client::searchResourcesWithOptions(shared_ptr<SearchResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SearchResourcesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<SearchResourcesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<SearchResourcesRequestSortCriterion>(request->sortCriterion)) {
    query->insert(pair<string, SearchResourcesRequestSortCriterion>("SortCriterion", *request->sortCriterion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchResources"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchResourcesResponse(callApi(params, req, runtime));
}

SearchResourcesResponse Alibabacloud_ResourceCenter20221201::Client::searchResources(shared_ptr<SearchResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchResourcesWithOptions(request, runtime);
}

UpdateDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::updateDeliveryChannelWithOptions(shared_ptr<UpdateDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelDescription)) {
    query->insert(pair<string, string>("DeliveryChannelDescription", *request->deliveryChannelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDeliveryChannelRequestDeliveryChannelFilter>(request->deliveryChannelFilter)) {
    query->insert(pair<string, UpdateDeliveryChannelRequestDeliveryChannelFilter>("DeliveryChannelFilter", *request->deliveryChannelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDeliveryChannelRequestResourceChangeDelivery>(request->resourceChangeDelivery)) {
    query->insert(pair<string, UpdateDeliveryChannelRequestResourceChangeDelivery>("ResourceChangeDelivery", *request->resourceChangeDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateDeliveryChannelRequestResourceSnapshotDelivery>(request->resourceSnapshotDelivery)) {
    query->insert(pair<string, UpdateDeliveryChannelRequestResourceSnapshotDelivery>("ResourceSnapshotDelivery", *request->resourceSnapshotDelivery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeliveryChannelResponse(callApi(params, req, runtime));
}

UpdateDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::updateDeliveryChannel(shared_ptr<UpdateDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeliveryChannelWithOptions(request, runtime);
}

UpdateFilterResponse Alibabacloud_ResourceCenter20221201::Client::updateFilterWithOptions(shared_ptr<UpdateFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterConfiguration)) {
    query->insert(pair<string, string>("FilterConfiguration", *request->filterConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterName)) {
    query->insert(pair<string, string>("FilterName", *request->filterName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFilter"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFilterResponse(callApi(params, req, runtime));
}

UpdateFilterResponse Alibabacloud_ResourceCenter20221201::Client::updateFilter(shared_ptr<UpdateFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFilterWithOptions(request, runtime);
}

UpdateMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::updateMultiAccountDeliveryChannelWithOptions(shared_ptr<UpdateMultiAccountDeliveryChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelDescription)) {
    query->insert(pair<string, string>("DeliveryChannelDescription", *request->deliveryChannelDescription));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>(request->deliveryChannelFilter)) {
    query->insert(pair<string, UpdateMultiAccountDeliveryChannelRequestDeliveryChannelFilter>("DeliveryChannelFilter", *request->deliveryChannelFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelId)) {
    query->insert(pair<string, string>("DeliveryChannelId", *request->deliveryChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryChannelName)) {
    query->insert(pair<string, string>("DeliveryChannelName", *request->deliveryChannelName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery>(request->resourceChangeDelivery)) {
    query->insert(pair<string, UpdateMultiAccountDeliveryChannelRequestResourceChangeDelivery>("ResourceChangeDelivery", *request->resourceChangeDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>(request->resourceSnapshotDelivery)) {
    query->insert(pair<string, UpdateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery>("ResourceSnapshotDelivery", *request->resourceSnapshotDelivery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMultiAccountDeliveryChannel"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMultiAccountDeliveryChannelResponse(callApi(params, req, runtime));
}

UpdateMultiAccountDeliveryChannelResponse Alibabacloud_ResourceCenter20221201::Client::updateMultiAccountDeliveryChannel(shared_ptr<UpdateMultiAccountDeliveryChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMultiAccountDeliveryChannelWithOptions(request, runtime);
}

UpdateSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::updateSavedQueryWithOptions(shared_ptr<UpdateSavedQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryId)) {
    query->insert(pair<string, string>("QueryId", *request->queryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSavedQuery"))},
    {"version", boost::any(string("2022-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSavedQueryResponse(callApi(params, req, runtime));
}

UpdateSavedQueryResponse Alibabacloud_ResourceCenter20221201::Client::updateSavedQuery(shared_ptr<UpdateSavedQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSavedQueryWithOptions(request, runtime);
}

