// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/express_connect_router_20230901.hpp>
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

using namespace Alibabacloud_ExpressConnectRouter20230901;

Alibabacloud_ExpressConnectRouter20230901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("expressconnectrouter"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ExpressConnectRouter20230901::Client::getEndpoint(shared_ptr<string> productId,
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

AttachExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::attachExpressConnectRouterChildInstanceWithOptions(shared_ptr<AttachExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceId)) {
    body->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->childInstanceOwnerId)) {
    body->insert(pair<string, long>("ChildInstanceOwnerId", *request->childInstanceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceRegionId)) {
    body->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceType)) {
    body->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachExpressConnectRouterChildInstance"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachExpressConnectRouterChildInstanceResponse(callApi(params, req, runtime));
}

AttachExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::attachExpressConnectRouterChildInstance(shared_ptr<AttachExpressConnectRouterChildInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

CheckAddRegionToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::checkAddRegionToExpressConnectRouterWithOptions(shared_ptr<CheckAddRegionToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->freshRegionId)) {
    body->insert(pair<string, string>("FreshRegionId", *request->freshRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAddRegionToExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAddRegionToExpressConnectRouterResponse(callApi(params, req, runtime));
}

CheckAddRegionToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::checkAddRegionToExpressConnectRouter(shared_ptr<CheckAddRegionToExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAddRegionToExpressConnectRouterWithOptions(request, runtime);
}

CreateExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::createExpressConnectRouterWithOptions(shared_ptr<CreateExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alibabaSideAsn)) {
    body->insert(pair<string, long>("AlibabaSideAsn", *request->alibabaSideAsn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateExpressConnectRouterRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateExpressConnectRouterRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExpressConnectRouterResponse(callApi(params, req, runtime));
}

CreateExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::createExpressConnectRouter(shared_ptr<CreateExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExpressConnectRouterWithOptions(request, runtime);
}

CreateExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::createExpressConnectRouterAssociationWithOptions(shared_ptr<CreateExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowedPrefixes)) {
    body->insert(pair<string, vector<string>>("AllowedPrefixes", *request->allowedPrefixes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associationRegionId)) {
    body->insert(pair<string, string>("AssociationRegionId", *request->associationRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createAttachment)) {
    body->insert(pair<string, bool>("CreateAttachment", *request->createAttachment));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transitRouterId)) {
    body->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transitRouterOwnerId)) {
    body->insert(pair<string, long>("TransitRouterOwnerId", *request->transitRouterOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vpcOwnerId)) {
    body->insert(pair<string, long>("VpcOwnerId", *request->vpcOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExpressConnectRouterAssociation"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExpressConnectRouterAssociationResponse(callApi(params, req, runtime));
}

CreateExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::createExpressConnectRouterAssociation(shared_ptr<CreateExpressConnectRouterAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExpressConnectRouterAssociationWithOptions(request, runtime);
}

DeleteExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::deleteExpressConnectRouterWithOptions(shared_ptr<DeleteExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExpressConnectRouterResponse(callApi(params, req, runtime));
}

DeleteExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::deleteExpressConnectRouter(shared_ptr<DeleteExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExpressConnectRouterWithOptions(request, runtime);
}

DeleteExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::deleteExpressConnectRouterAssociationWithOptions(shared_ptr<DeleteExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associationId)) {
    body->insert(pair<string, string>("AssociationId", *request->associationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteAttachment)) {
    body->insert(pair<string, bool>("DeleteAttachment", *request->deleteAttachment));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExpressConnectRouterAssociation"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExpressConnectRouterAssociationResponse(callApi(params, req, runtime));
}

DeleteExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::deleteExpressConnectRouterAssociation(shared_ptr<DeleteExpressConnectRouterAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExpressConnectRouterAssociationWithOptions(request, runtime);
}

DescribeDisabledExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeDisabledExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DescribeDisabledExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDisabledExpressConnectRouterRouteEntries"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDisabledExpressConnectRouterRouteEntriesResponse(callApi(params, req, runtime));
}

DescribeDisabledExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeDisabledExpressConnectRouterRouteEntries(shared_ptr<DescribeDisabledExpressConnectRouterRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDisabledExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

DescribeExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterWithOptions(shared_ptr<DescribeExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeExpressConnectRouterRequestTagModels>>(request->tagModels)) {
    body->insert(pair<string, vector<DescribeExpressConnectRouterRequestTagModels>>("TagModels", *request->tagModels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouter(shared_ptr<DescribeExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterWithOptions(request, runtime);
}

DescribeExpressConnectRouterAllowedPrefixHistoryResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterAllowedPrefixHistoryWithOptions(shared_ptr<DescribeExpressConnectRouterAllowedPrefixHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associationId)) {
    body->insert(pair<string, string>("AssociationId", *request->associationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterAllowedPrefixHistory"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterAllowedPrefixHistoryResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterAllowedPrefixHistoryResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterAllowedPrefixHistory(shared_ptr<DescribeExpressConnectRouterAllowedPrefixHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterAllowedPrefixHistoryWithOptions(request, runtime);
}

DescribeExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterAssociationWithOptions(shared_ptr<DescribeExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associationId)) {
    body->insert(pair<string, string>("AssociationId", *request->associationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associationNodeType)) {
    body->insert(pair<string, string>("AssociationNodeType", *request->associationNodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associationRegionId)) {
    body->insert(pair<string, string>("AssociationRegionId", *request->associationRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    body->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transitRouterId)) {
    body->insert(pair<string, string>("TransitRouterId", *request->transitRouterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterAssociation"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterAssociationResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterAssociationResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterAssociation(shared_ptr<DescribeExpressConnectRouterAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterAssociationWithOptions(request, runtime);
}

DescribeExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterChildInstanceWithOptions(shared_ptr<DescribeExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->associationId)) {
    body->insert(pair<string, string>("AssociationId", *request->associationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceId)) {
    body->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceRegionId)) {
    body->insert(pair<string, string>("ChildInstanceRegionId", *request->childInstanceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceType)) {
    body->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterChildInstance"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterChildInstanceResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterChildInstance(shared_ptr<DescribeExpressConnectRouterChildInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

DescribeExpressConnectRouterInterRegionTransitModeResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterInterRegionTransitModeWithOptions(shared_ptr<DescribeExpressConnectRouterInterRegionTransitModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterInterRegionTransitMode"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterInterRegionTransitModeResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterInterRegionTransitModeResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterInterRegionTransitMode(shared_ptr<DescribeExpressConnectRouterInterRegionTransitModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

DescribeExpressConnectRouterRegionResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterRegionWithOptions(shared_ptr<DescribeExpressConnectRouterRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterRegion"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterRegionResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterRegionResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterRegion(shared_ptr<DescribeExpressConnectRouterRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterRegionWithOptions(request, runtime);
}

DescribeExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DescribeExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->asPath)) {
    body->insert(pair<string, string>("AsPath", *request->asPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->community)) {
    body->insert(pair<string, string>("Community", *request->community));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nexthopInstanceId)) {
    body->insert(pair<string, string>("NexthopInstanceId", *request->nexthopInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryRegionId)) {
    body->insert(pair<string, string>("QueryRegionId", *request->queryRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExpressConnectRouterRouteEntries"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExpressConnectRouterRouteEntriesResponse(callApi(params, req, runtime));
}

DescribeExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeExpressConnectRouterRouteEntries(shared_ptr<DescribeExpressConnectRouterRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

DescribeInstanceGrantedToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeInstanceGrantedToExpressConnectRouterWithOptions(shared_ptr<DescribeInstanceGrantedToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceOwnerId)) {
    body->insert(pair<string, long>("InstanceOwnerId", *request->instanceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRegionId)) {
    body->insert(pair<string, string>("InstanceRegionId", *request->instanceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>>(request->tagModels)) {
    body->insert(pair<string, vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>>("TagModels", *request->tagModels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceGrantedToExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceGrantedToExpressConnectRouterResponse(callApi(params, req, runtime));
}

DescribeInstanceGrantedToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::describeInstanceGrantedToExpressConnectRouter(shared_ptr<DescribeInstanceGrantedToExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceGrantedToExpressConnectRouterWithOptions(request, runtime);
}

DetachExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::detachExpressConnectRouterChildInstanceWithOptions(shared_ptr<DetachExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceId)) {
    body->insert(pair<string, string>("ChildInstanceId", *request->childInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childInstanceType)) {
    body->insert(pair<string, string>("ChildInstanceType", *request->childInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachExpressConnectRouterChildInstance"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachExpressConnectRouterChildInstanceResponse(callApi(params, req, runtime));
}

DetachExpressConnectRouterChildInstanceResponse Alibabacloud_ExpressConnectRouter20230901::Client::detachExpressConnectRouterChildInstance(shared_ptr<DetachExpressConnectRouterChildInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachExpressConnectRouterChildInstanceWithOptions(request, runtime);
}

DisableExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::disableExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DisableExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nexthopInstanceId)) {
    body->insert(pair<string, string>("NexthopInstanceId", *request->nexthopInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableExpressConnectRouterRouteEntries"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableExpressConnectRouterRouteEntriesResponse(callApi(params, req, runtime));
}

DisableExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::disableExpressConnectRouterRouteEntries(shared_ptr<DisableExpressConnectRouterRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

EnableExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::enableExpressConnectRouterRouteEntriesWithOptions(shared_ptr<EnableExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCidrBlock)) {
    body->insert(pair<string, string>("DestinationCidrBlock", *request->destinationCidrBlock));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nexthopInstanceId)) {
    body->insert(pair<string, string>("NexthopInstanceId", *request->nexthopInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableExpressConnectRouterRouteEntries"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableExpressConnectRouterRouteEntriesResponse(callApi(params, req, runtime));
}

EnableExpressConnectRouterRouteEntriesResponse Alibabacloud_ExpressConnectRouter20230901::Client::enableExpressConnectRouterRouteEntries(shared_ptr<EnableExpressConnectRouterRouteEntriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableExpressConnectRouterRouteEntriesWithOptions(request, runtime);
}

ForceDeleteExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::forceDeleteExpressConnectRouterWithOptions(shared_ptr<ForceDeleteExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForceDeleteExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForceDeleteExpressConnectRouterResponse(callApi(params, req, runtime));
}

ForceDeleteExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::forceDeleteExpressConnectRouter(shared_ptr<ForceDeleteExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forceDeleteExpressConnectRouterWithOptions(request, runtime);
}

GrantInstanceToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::grantInstanceToExpressConnectRouterWithOptions(shared_ptr<GrantInstanceToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecrOwnerAliUid)) {
    body->insert(pair<string, long>("EcrOwnerAliUid", *request->ecrOwnerAliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRegionId)) {
    body->insert(pair<string, string>("InstanceRegionId", *request->instanceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantInstanceToExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantInstanceToExpressConnectRouterResponse(callApi(params, req, runtime));
}

GrantInstanceToExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::grantInstanceToExpressConnectRouter(shared_ptr<GrantInstanceToExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantInstanceToExpressConnectRouterWithOptions(request, runtime);
}

ListExpressConnectRouterSupportedRegionResponse Alibabacloud_ExpressConnectRouter20230901::Client::listExpressConnectRouterSupportedRegionWithOptions(shared_ptr<ListExpressConnectRouterSupportedRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    body->insert(pair<string, string>("NodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExpressConnectRouterSupportedRegion"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExpressConnectRouterSupportedRegionResponse(callApi(params, req, runtime));
}

ListExpressConnectRouterSupportedRegionResponse Alibabacloud_ExpressConnectRouter20230901::Client::listExpressConnectRouterSupportedRegion(shared_ptr<ListExpressConnectRouterSupportedRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExpressConnectRouterSupportedRegionWithOptions(request, runtime);
}

ModifyExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouterWithOptions(shared_ptr<ModifyExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyExpressConnectRouterResponse(callApi(params, req, runtime));
}

ModifyExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouter(shared_ptr<ModifyExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyExpressConnectRouterWithOptions(request, runtime);
}

ModifyExpressConnectRouterAssociationAllowedPrefixResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(shared_ptr<ModifyExpressConnectRouterAssociationAllowedPrefixRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->allowedPrefixes)) {
    body->insert(pair<string, vector<string>>("AllowedPrefixes", *request->allowedPrefixes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->associationId)) {
    body->insert(pair<string, string>("AssociationId", *request->associationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    body->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyExpressConnectRouterAssociationAllowedPrefix"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyExpressConnectRouterAssociationAllowedPrefixResponse(callApi(params, req, runtime));
}

ModifyExpressConnectRouterAssociationAllowedPrefixResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouterAssociationAllowedPrefix(shared_ptr<ModifyExpressConnectRouterAssociationAllowedPrefixRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(request, runtime);
}

ModifyExpressConnectRouterInterRegionTransitModeResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouterInterRegionTransitModeWithOptions(shared_ptr<ModifyExpressConnectRouterInterRegionTransitModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList>>(request->transitModeList)) {
    body->insert(pair<string, vector<ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList>>("TransitModeList", *request->transitModeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyExpressConnectRouterInterRegionTransitMode"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyExpressConnectRouterInterRegionTransitModeResponse(callApi(params, req, runtime));
}

ModifyExpressConnectRouterInterRegionTransitModeResponse Alibabacloud_ExpressConnectRouter20230901::Client::modifyExpressConnectRouterInterRegionTransitMode(shared_ptr<ModifyExpressConnectRouterInterRegionTransitModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyExpressConnectRouterInterRegionTransitModeWithOptions(request, runtime);
}

RevokeInstanceFromExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::revokeInstanceFromExpressConnectRouterWithOptions(shared_ptr<RevokeInstanceFromExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecrOwnerAliUid)) {
    body->insert(pair<string, long>("EcrOwnerAliUid", *request->ecrOwnerAliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceRegionId)) {
    body->insert(pair<string, string>("InstanceRegionId", *request->instanceRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeInstanceFromExpressConnectRouter"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeInstanceFromExpressConnectRouterResponse(callApi(params, req, runtime));
}

RevokeInstanceFromExpressConnectRouterResponse Alibabacloud_ExpressConnectRouter20230901::Client::revokeInstanceFromExpressConnectRouter(shared_ptr<RevokeInstanceFromExpressConnectRouterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeInstanceFromExpressConnectRouterWithOptions(request, runtime);
}

SynchronizeExpressConnectRouterInterRegionBandwidthResponse Alibabacloud_ExpressConnectRouter20230901::Client::synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(shared_ptr<SynchronizeExpressConnectRouterInterRegionBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecrId)) {
    body->insert(pair<string, string>("EcrId", *request->ecrId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SynchronizeExpressConnectRouterInterRegionBandwidth"))},
    {"version", boost::any(string("2023-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SynchronizeExpressConnectRouterInterRegionBandwidthResponse(callApi(params, req, runtime));
}

SynchronizeExpressConnectRouterInterRegionBandwidthResponse Alibabacloud_ExpressConnectRouter20230901::Client::synchronizeExpressConnectRouterInterRegionBandwidth(shared_ptr<SynchronizeExpressConnectRouterInterRegionBandwidthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(request, runtime);
}

