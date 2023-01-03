// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eflo_20220530.hpp>
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

using namespace Alibabacloud_Eflo20220530;

Alibabacloud_Eflo20220530::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eflo"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eflo20220530::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSubnetResponse Alibabacloud_Eflo20220530::Client::createSubnetWithOptions(shared_ptr<CreateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidr)) {
    body->insert(pair<string, string>("Cidr", *request->cidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubnetResponse(callApi(params, req, runtime));
}

CreateSubnetResponse Alibabacloud_Eflo20220530::Client::createSubnet(shared_ptr<CreateSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubnetWithOptions(request, runtime);
}

CreateVccResponse Alibabacloud_Eflo20220530::Client::createVccWithOptions(shared_ptr<CreateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessCouldService)) {
    body->insert(pair<string, bool>("AccessCouldService", *request->accessCouldService));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgpCidr)) {
    body->insert(pair<string, string>("BgpCidr", *request->bgpCidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVccResponse(callApi(params, req, runtime));
}

CreateVccResponse Alibabacloud_Eflo20220530::Client::createVcc(shared_ptr<CreateVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVccWithOptions(request, runtime);
}

CreateVpdResponse Alibabacloud_Eflo20220530::Client::createVpdWithOptions(shared_ptr<CreateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidr)) {
    body->insert(pair<string, string>("Cidr", *request->cidr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVpdRequestSubnets>>(request->subnets)) {
    body->insert(pair<string, vector<CreateVpdRequestSubnets>>("Subnets", *request->subnets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpdResponse(callApi(params, req, runtime));
}

CreateVpdResponse Alibabacloud_Eflo20220530::Client::createVpd(shared_ptr<CreateVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVpdWithOptions(request, runtime);
}

DeleteSubnetResponse Alibabacloud_Eflo20220530::Client::deleteSubnetWithOptions(shared_ptr<DeleteSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubnetResponse(callApi(params, req, runtime));
}

DeleteSubnetResponse Alibabacloud_Eflo20220530::Client::deleteSubnet(shared_ptr<DeleteSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubnetWithOptions(request, runtime);
}

DeleteVpdResponse Alibabacloud_Eflo20220530::Client::deleteVpdWithOptions(shared_ptr<DeleteVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpdResponse(callApi(params, req, runtime));
}

DeleteVpdResponse Alibabacloud_Eflo20220530::Client::deleteVpd(shared_ptr<DeleteVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVpdWithOptions(request, runtime);
}

GetSubnetResponse Alibabacloud_Eflo20220530::Client::getSubnetWithOptions(shared_ptr<GetSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubnetResponse(callApi(params, req, runtime));
}

GetSubnetResponse Alibabacloud_Eflo20220530::Client::getSubnet(shared_ptr<GetSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubnetWithOptions(request, runtime);
}

GetVccResponse Alibabacloud_Eflo20220530::Client::getVccWithOptions(shared_ptr<GetVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVccResponse(callApi(params, req, runtime));
}

GetVccResponse Alibabacloud_Eflo20220530::Client::getVcc(shared_ptr<GetVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVccWithOptions(request, runtime);
}

GetVpdResponse Alibabacloud_Eflo20220530::Client::getVpdWithOptions(shared_ptr<GetVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVpdResponse(callApi(params, req, runtime));
}

GetVpdResponse Alibabacloud_Eflo20220530::Client::getVpd(shared_ptr<GetVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVpdWithOptions(request, runtime);
}

InitializeVccResponse Alibabacloud_Eflo20220530::Client::initializeVccWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeVccResponse(callApi(params, req, runtime));
}

InitializeVccResponse Alibabacloud_Eflo20220530::Client::initializeVcc() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeVccWithOptions(runtime);
}

ListSubnetsResponse Alibabacloud_Eflo20220530::Client::listSubnetsWithOptions(shared_ptr<ListSubnetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubnets"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubnetsResponse(callApi(params, req, runtime));
}

ListSubnetsResponse Alibabacloud_Eflo20220530::Client::listSubnets(shared_ptr<ListSubnetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubnetsWithOptions(request, runtime);
}

ListVccsResponse Alibabacloud_Eflo20220530::Client::listVccsWithOptions(shared_ptr<ListVccsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exStatus)) {
    body->insert(pair<string, string>("ExStatus", *request->exStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVccs"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVccsResponse(callApi(params, req, runtime));
}

ListVccsResponse Alibabacloud_Eflo20220530::Client::listVccs(shared_ptr<ListVccsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVccsWithOptions(request, runtime);
}

ListVpdsResponse Alibabacloud_Eflo20220530::Client::listVpdsWithOptions(shared_ptr<ListVpdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePage)) {
    body->insert(pair<string, bool>("EnablePage", *request->enablePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterErId)) {
    body->insert(pair<string, string>("FilterErId", *request->filterErId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forSelect)) {
    body->insert(pair<string, bool>("ForSelect", *request->forSelect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withDependence)) {
    body->insert(pair<string, bool>("WithDependence", *request->withDependence));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutVcc)) {
    body->insert(pair<string, bool>("WithoutVcc", *request->withoutVcc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpds"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpdsResponse(callApi(params, req, runtime));
}

ListVpdsResponse Alibabacloud_Eflo20220530::Client::listVpds(shared_ptr<ListVpdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVpdsWithOptions(request, runtime);
}

UpdateSubnetResponse Alibabacloud_Eflo20220530::Client::updateSubnetWithOptions(shared_ptr<UpdateSubnetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subnetId)) {
    body->insert(pair<string, string>("SubnetId", *request->subnetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubnet"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubnetResponse(callApi(params, req, runtime));
}

UpdateSubnetResponse Alibabacloud_Eflo20220530::Client::updateSubnet(shared_ptr<UpdateSubnetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubnetWithOptions(request, runtime);
}

UpdateVccResponse Alibabacloud_Eflo20220530::Client::updateVccWithOptions(shared_ptr<UpdateVccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bandwidth)) {
    body->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccId)) {
    body->insert(pair<string, string>("VccId", *request->vccId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vccName)) {
    body->insert(pair<string, string>("VccName", *request->vccName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVcc"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVccResponse(callApi(params, req, runtime));
}

UpdateVccResponse Alibabacloud_Eflo20220530::Client::updateVcc(shared_ptr<UpdateVccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVccWithOptions(request, runtime);
}

UpdateVpdResponse Alibabacloud_Eflo20220530::Client::updateVpdWithOptions(shared_ptr<UpdateVpdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpdId)) {
    body->insert(pair<string, string>("VpdId", *request->vpdId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVpd"))},
    {"version", boost::any(string("2022-05-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVpdResponse(callApi(params, req, runtime));
}

UpdateVpdResponse Alibabacloud_Eflo20220530::Client::updateVpd(shared_ptr<UpdateVpdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVpdWithOptions(request, runtime);
}

