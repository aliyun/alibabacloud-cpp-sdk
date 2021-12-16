// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eipanycast_20200309.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Eipanycast20200309;

Alibabacloud_Eipanycast20200309::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eipanycast"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eipanycast20200309::Client::getEndpoint(shared_ptr<string> productId,
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

AllocateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::allocateAnycastEipAddressWithOptions(shared_ptr<AllocateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("ServiceLocation", *request->serviceLocation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllocateAnycastEipAddress"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllocateAnycastEipAddressResponse(callApi(params, req, runtime));
}

AllocateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::allocateAnycastEipAddress(shared_ptr<AllocateAnycastEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateAnycastEipAddressWithOptions(request, runtime);
}

AssociateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::associateAnycastEipAddressWithOptions(shared_ptr<AssociateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("AssociationMode", *request->associationMode));
  query->insert(pair<string, string>("BindInstanceId", *request->bindInstanceId));
  query->insert(pair<string, string>("BindInstanceRegionId", *request->bindInstanceRegionId));
  query->insert(pair<string, string>("BindInstanceType", *request->bindInstanceType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<AssociateAnycastEipAddressRequestPopLocations>>("PopLocations", *request->popLocations));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateAnycastEipAddress"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssociateAnycastEipAddressResponse(callApi(params, req, runtime));
}

AssociateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::associateAnycastEipAddress(shared_ptr<AssociateAnycastEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateAnycastEipAddressWithOptions(request, runtime);
}

DescribeAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastEipAddressWithOptions(shared_ptr<DescribeAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("BindInstanceId", *request->bindInstanceId));
  query->insert(pair<string, string>("Ip", *request->ip));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnycastEipAddress"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnycastEipAddressResponse(callApi(params, req, runtime));
}

DescribeAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastEipAddress(shared_ptr<DescribeAnycastEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnycastEipAddressWithOptions(request, runtime);
}

DescribeAnycastPopLocationsResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastPopLocationsWithOptions(shared_ptr<DescribeAnycastPopLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ServiceLocation", *request->serviceLocation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnycastPopLocations"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnycastPopLocationsResponse(callApi(params, req, runtime));
}

DescribeAnycastPopLocationsResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastPopLocations(shared_ptr<DescribeAnycastPopLocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnycastPopLocationsWithOptions(request, runtime);
}

DescribeAnycastServerRegionsResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastServerRegionsWithOptions(shared_ptr<DescribeAnycastServerRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ServiceLocation", *request->serviceLocation));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnycastServerRegions"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnycastServerRegionsResponse(callApi(params, req, runtime));
}

DescribeAnycastServerRegionsResponse Alibabacloud_Eipanycast20200309::Client::describeAnycastServerRegions(shared_ptr<DescribeAnycastServerRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnycastServerRegionsWithOptions(request, runtime);
}

ListAnycastEipAddressesResponse Alibabacloud_Eipanycast20200309::Client::listAnycastEipAddressesWithOptions(shared_ptr<ListAnycastEipAddressesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastEipAddress", *request->anycastEipAddress));
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, vector<string>>("BindInstanceIds", *request->bindInstanceIds));
  query->insert(pair<string, string>("BusinessStatus", *request->businessStatus));
  query->insert(pair<string, string>("InstanceChargeType", *request->instanceChargeType));
  query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("ServiceLocation", *request->serviceLocation));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnycastEipAddresses"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnycastEipAddressesResponse(callApi(params, req, runtime));
}

ListAnycastEipAddressesResponse Alibabacloud_Eipanycast20200309::Client::listAnycastEipAddresses(shared_ptr<ListAnycastEipAddressesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnycastEipAddressesWithOptions(request, runtime);
}

ModifyAnycastEipAddressAttributeResponse Alibabacloud_Eipanycast20200309::Client::modifyAnycastEipAddressAttributeWithOptions(shared_ptr<ModifyAnycastEipAddressAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Name", *request->name));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAnycastEipAddressAttribute"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAnycastEipAddressAttributeResponse(callApi(params, req, runtime));
}

ModifyAnycastEipAddressAttributeResponse Alibabacloud_Eipanycast20200309::Client::modifyAnycastEipAddressAttribute(shared_ptr<ModifyAnycastEipAddressAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAnycastEipAddressAttributeWithOptions(request, runtime);
}

ModifyAnycastEipAddressSpecResponse Alibabacloud_Eipanycast20200309::Client::modifyAnycastEipAddressSpecWithOptions(shared_ptr<ModifyAnycastEipAddressSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("Bandwidth", *request->bandwidth));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAnycastEipAddressSpec"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAnycastEipAddressSpecResponse(callApi(params, req, runtime));
}

ModifyAnycastEipAddressSpecResponse Alibabacloud_Eipanycast20200309::Client::modifyAnycastEipAddressSpec(shared_ptr<ModifyAnycastEipAddressSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAnycastEipAddressSpecWithOptions(request, runtime);
}

ReleaseAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::releaseAnycastEipAddressWithOptions(shared_ptr<ReleaseAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseAnycastEipAddress"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseAnycastEipAddressResponse(callApi(params, req, runtime));
}

ReleaseAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::releaseAnycastEipAddress(shared_ptr<ReleaseAnycastEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseAnycastEipAddressWithOptions(request, runtime);
}

UnassociateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::unassociateAnycastEipAddressWithOptions(shared_ptr<UnassociateAnycastEipAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("BindInstanceId", *request->bindInstanceId));
  query->insert(pair<string, string>("BindInstanceRegionId", *request->bindInstanceRegionId));
  query->insert(pair<string, string>("BindInstanceType", *request->bindInstanceType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("PrivateIpAddress", *request->privateIpAddress));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnassociateAnycastEipAddress"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnassociateAnycastEipAddressResponse(callApi(params, req, runtime));
}

UnassociateAnycastEipAddressResponse Alibabacloud_Eipanycast20200309::Client::unassociateAnycastEipAddress(shared_ptr<UnassociateAnycastEipAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unassociateAnycastEipAddressWithOptions(request, runtime);
}

UpdateAnycastEipAddressAssociationsResponse Alibabacloud_Eipanycast20200309::Client::updateAnycastEipAddressAssociationsWithOptions(shared_ptr<UpdateAnycastEipAddressAssociationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AnycastId", *request->anycastId));
  query->insert(pair<string, string>("AssociationMode", *request->associationMode));
  query->insert(pair<string, string>("BindInstanceId", *request->bindInstanceId));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationAddList>>("PopLocationAddList", *request->popLocationAddList));
  query->insert(pair<string, vector<UpdateAnycastEipAddressAssociationsRequestPopLocationDeleteList>>("PopLocationDeleteList", *request->popLocationDeleteList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAnycastEipAddressAssociations"))},
    {"version", boost::any(string("2020-03-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAnycastEipAddressAssociationsResponse(callApi(params, req, runtime));
}

UpdateAnycastEipAddressAssociationsResponse Alibabacloud_Eipanycast20200309::Client::updateAnycastEipAddressAssociations(shared_ptr<UpdateAnycastEipAddressAssociationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAnycastEipAddressAssociationsWithOptions(request, runtime);
}

