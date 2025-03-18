// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sophonsoar_20220728.hpp>
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

using namespace Alibabacloud_Sophonsoar20220728;

Alibabacloud_Sophonsoar20220728::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sophonsoar"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sophonsoar20220728::Client::getEndpoint(shared_ptr<string> productId,
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

BatchModifyInstanceStatusResponse Alibabacloud_Sophonsoar20220728::Client::batchModifyInstanceStatusWithOptions(shared_ptr<BatchModifyInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->active)) {
    body->insert(pair<string, long>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchModifyInstanceStatus"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchModifyInstanceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return BatchModifyInstanceStatusResponse(execute(params, req, runtime));
  }
}

BatchModifyInstanceStatusResponse Alibabacloud_Sophonsoar20220728::Client::batchModifyInstanceStatus(shared_ptr<BatchModifyInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchModifyInstanceStatusWithOptions(request, runtime);
}

ComparePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::comparePlaybooksWithOptions(shared_ptr<ComparePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newPlaybookReleaseId)) {
    query->insert(pair<string, long>("NewPlaybookReleaseId", *request->newPlaybookReleaseId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oldPlaybookReleaseId)) {
    query->insert(pair<string, long>("OldPlaybookReleaseId", *request->oldPlaybookReleaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    query->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ComparePlaybooks"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ComparePlaybooksResponse(callApi(params, req, runtime));
  }
  else {
    return ComparePlaybooksResponse(execute(params, req, runtime));
  }
}

ComparePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::comparePlaybooks(shared_ptr<ComparePlaybooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return comparePlaybooksWithOptions(request, runtime);
}

ConvertPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::convertPlaybookWithOptions(shared_ptr<ConvertPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    query->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskflow)) {
    body->insert(pair<string, string>("Taskflow", *request->taskflow));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ConvertPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return ConvertPlaybookResponse(execute(params, req, runtime));
  }
}

ConvertPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::convertPlaybook(shared_ptr<ConvertPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertPlaybookWithOptions(request, runtime);
}

CopyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::copyPlaybookWithOptions(shared_ptr<CopyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    query->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseVersion)) {
    body->insert(pair<string, string>("ReleaseVersion", *request->releaseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePlaybookUuid)) {
    body->insert(pair<string, string>("SourcePlaybookUuid", *request->sourcePlaybookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CopyPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return CopyPlaybookResponse(execute(params, req, runtime));
  }
}

CopyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::copyPlaybook(shared_ptr<CopyPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyPlaybookWithOptions(request, runtime);
}

CreatePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::createPlaybookWithOptions(shared_ptr<CreatePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskflowType)) {
    body->insert(pair<string, string>("TaskflowType", *request->taskflowType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePlaybookResponse(execute(params, req, runtime));
  }
}

CreatePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::createPlaybook(shared_ptr<CreatePlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPlaybookWithOptions(request, runtime);
}

DebugPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::debugPlaybookWithOptions(shared_ptr<DebugPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->record)) {
    body->insert(pair<string, string>("Record", *request->record));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskflow)) {
    body->insert(pair<string, string>("Taskflow", *request->taskflow));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DebugPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DebugPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return DebugPlaybookResponse(execute(params, req, runtime));
  }
}

DebugPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::debugPlaybook(shared_ptr<DebugPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return debugPlaybookWithOptions(request, runtime);
}

DeleteComponentAssetResponse Alibabacloud_Sophonsoar20220728::Client::deleteComponentAssetWithOptions(shared_ptr<DeleteComponentAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assetId)) {
    query->insert(pair<string, long>("AssetId", *request->assetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteComponentAsset"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteComponentAssetResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteComponentAssetResponse(execute(params, req, runtime));
  }
}

DeleteComponentAssetResponse Alibabacloud_Sophonsoar20220728::Client::deleteComponentAsset(shared_ptr<DeleteComponentAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteComponentAssetWithOptions(request, runtime);
}

DeletePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::deletePlaybookWithOptions(shared_ptr<DeletePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePlaybookResponse(execute(params, req, runtime));
  }
}

DeletePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::deletePlaybook(shared_ptr<DeletePlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlaybookWithOptions(request, runtime);
}

DescribeComponentAssetFormResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentAssetFormWithOptions(shared_ptr<DescribeComponentAssetFormRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentAssetForm"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeComponentAssetFormResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeComponentAssetFormResponse(execute(params, req, runtime));
  }
}

DescribeComponentAssetFormResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentAssetForm(shared_ptr<DescribeComponentAssetFormRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComponentAssetFormWithOptions(request, runtime);
}

DescribeComponentAssetsResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentAssetsWithOptions(shared_ptr<DescribeComponentAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentAssets"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeComponentAssetsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeComponentAssetsResponse(execute(params, req, runtime));
  }
}

DescribeComponentAssetsResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentAssets(shared_ptr<DescribeComponentAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComponentAssetsWithOptions(request, runtime);
}

DescribeComponentListResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentListWithOptions(shared_ptr<DescribeComponentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeComponentListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeComponentListResponse(execute(params, req, runtime));
  }
}

DescribeComponentListResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentList(shared_ptr<DescribeComponentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComponentListWithOptions(request, runtime);
}

DescribeComponentPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentPlaybookWithOptions(shared_ptr<DescribeComponentPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeComponentPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeComponentPlaybookResponse(execute(params, req, runtime));
  }
}

DescribeComponentPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentPlaybook(shared_ptr<DescribeComponentPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComponentPlaybookWithOptions(request, runtime);
}

DescribeComponentsJsResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentsJsWithOptions(shared_ptr<DescribeComponentsJsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentsJs"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeComponentsJsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeComponentsJsResponse(execute(params, req, runtime));
  }
}

DescribeComponentsJsResponse Alibabacloud_Sophonsoar20220728::Client::describeComponentsJs(shared_ptr<DescribeComponentsJsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeComponentsJsWithOptions(request, runtime);
}

DescribeDistinctReleasesResponse Alibabacloud_Sophonsoar20220728::Client::describeDistinctReleasesWithOptions(shared_ptr<DescribeDistinctReleasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDistinctReleases"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDistinctReleasesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDistinctReleasesResponse(execute(params, req, runtime));
  }
}

DescribeDistinctReleasesResponse Alibabacloud_Sophonsoar20220728::Client::describeDistinctReleases(shared_ptr<DescribeDistinctReleasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDistinctReleasesWithOptions(request, runtime);
}

DescribeEnumItemsResponse Alibabacloud_Sophonsoar20220728::Client::describeEnumItemsWithOptions(shared_ptr<DescribeEnumItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnumItems"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEnumItemsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEnumItemsResponse(execute(params, req, runtime));
  }
}

DescribeEnumItemsResponse Alibabacloud_Sophonsoar20220728::Client::describeEnumItems(shared_ptr<DescribeEnumItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnumItemsWithOptions(request, runtime);
}

DescribeExecutePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::describeExecutePlaybooksWithOptions(shared_ptr<DescribeExecutePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExecutePlaybooks"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeExecutePlaybooksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeExecutePlaybooksResponse(execute(params, req, runtime));
  }
}

DescribeExecutePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::describeExecutePlaybooks(shared_ptr<DescribeExecutePlaybooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExecutePlaybooksWithOptions(request, runtime);
}

DescribeFieldResponse Alibabacloud_Sophonsoar20220728::Client::describeFieldWithOptions(shared_ptr<DescribeFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeField"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeFieldResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeFieldResponse(execute(params, req, runtime));
  }
}

DescribeFieldResponse Alibabacloud_Sophonsoar20220728::Client::describeField(shared_ptr<DescribeFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFieldWithOptions(request, runtime);
}

DescribeGroupProductionsResponse Alibabacloud_Sophonsoar20220728::Client::describeGroupProductionsWithOptions(shared_ptr<DescribeGroupProductionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupProductions"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGroupProductionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGroupProductionsResponse(execute(params, req, runtime));
  }
}

DescribeGroupProductionsResponse Alibabacloud_Sophonsoar20220728::Client::describeGroupProductions(shared_ptr<DescribeGroupProductionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupProductionsWithOptions(request, runtime);
}

DescribeLatestRecordSchemaResponse Alibabacloud_Sophonsoar20220728::Client::describeLatestRecordSchemaWithOptions(shared_ptr<DescribeLatestRecordSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLatestRecordSchema"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeLatestRecordSchemaResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeLatestRecordSchemaResponse(execute(params, req, runtime));
  }
}

DescribeLatestRecordSchemaResponse Alibabacloud_Sophonsoar20220728::Client::describeLatestRecordSchema(shared_ptr<DescribeLatestRecordSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLatestRecordSchemaWithOptions(request, runtime);
}

DescribeNodeParamTagsResponse Alibabacloud_Sophonsoar20220728::Client::describeNodeParamTagsWithOptions(shared_ptr<DescribeNodeParamTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodeParamTags"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNodeParamTagsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNodeParamTagsResponse(execute(params, req, runtime));
  }
}

DescribeNodeParamTagsResponse Alibabacloud_Sophonsoar20220728::Client::describeNodeParamTags(shared_ptr<DescribeNodeParamTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodeParamTagsWithOptions(request, runtime);
}

DescribeNodeUsedInfosResponse Alibabacloud_Sophonsoar20220728::Client::describeNodeUsedInfosWithOptions(shared_ptr<DescribeNodeUsedInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNodeUsedInfos"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNodeUsedInfosResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNodeUsedInfosResponse(execute(params, req, runtime));
  }
}

DescribeNodeUsedInfosResponse Alibabacloud_Sophonsoar20220728::Client::describeNodeUsedInfos(shared_ptr<DescribeNodeUsedInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNodeUsedInfosWithOptions(request, runtime);
}

DescribeNotifyTemplateListResponse Alibabacloud_Sophonsoar20220728::Client::describeNotifyTemplateListWithOptions(shared_ptr<DescribeNotifyTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNotifyTemplateList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNotifyTemplateListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNotifyTemplateListResponse(execute(params, req, runtime));
  }
}

DescribeNotifyTemplateListResponse Alibabacloud_Sophonsoar20220728::Client::describeNotifyTemplateList(shared_ptr<DescribeNotifyTemplateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotifyTemplateListWithOptions(request, runtime);
}

DescribeOpenApiInfoResponse Alibabacloud_Sophonsoar20220728::Client::describeOpenApiInfoWithOptions(shared_ptr<DescribeOpenApiInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOpenApiInfo"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeOpenApiInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeOpenApiInfoResponse(execute(params, req, runtime));
  }
}

DescribeOpenApiInfoResponse Alibabacloud_Sophonsoar20220728::Client::describeOpenApiInfo(shared_ptr<DescribeOpenApiInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOpenApiInfoWithOptions(request, runtime);
}

DescribeOpenApiListResponse Alibabacloud_Sophonsoar20220728::Client::describeOpenApiListWithOptions(shared_ptr<DescribeOpenApiListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOpenApiList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeOpenApiListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeOpenApiListResponse(execute(params, req, runtime));
  }
}

DescribeOpenApiListResponse Alibabacloud_Sophonsoar20220728::Client::describeOpenApiList(shared_ptr<DescribeOpenApiListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOpenApiListWithOptions(request, runtime);
}

DescribePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookWithOptions(shared_ptr<DescribePlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookResponse(execute(params, req, runtime));
  }
}

DescribePlaybookResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybook(shared_ptr<DescribePlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookWithOptions(request, runtime);
}

DescribePlaybookInputOutputResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookInputOutputWithOptions(shared_ptr<DescribePlaybookInputOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybookInputOutput"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookInputOutputResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookInputOutputResponse(execute(params, req, runtime));
  }
}

DescribePlaybookInputOutputResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookInputOutput(shared_ptr<DescribePlaybookInputOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookInputOutputWithOptions(request, runtime);
}

DescribePlaybookMetricsResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookMetricsWithOptions(shared_ptr<DescribePlaybookMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybookMetrics"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookMetricsResponse(execute(params, req, runtime));
  }
}

DescribePlaybookMetricsResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookMetrics(shared_ptr<DescribePlaybookMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookMetricsWithOptions(request, runtime);
}

DescribePlaybookNodesOutputResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookNodesOutputWithOptions(shared_ptr<DescribePlaybookNodesOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybookNodesOutput"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookNodesOutputResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookNodesOutputResponse(execute(params, req, runtime));
  }
}

DescribePlaybookNodesOutputResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookNodesOutput(shared_ptr<DescribePlaybookNodesOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookNodesOutputWithOptions(request, runtime);
}

DescribePlaybookNumberMetricsResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookNumberMetricsWithOptions(shared_ptr<DescribePlaybookNumberMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybookNumberMetrics"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookNumberMetricsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookNumberMetricsResponse(execute(params, req, runtime));
  }
}

DescribePlaybookNumberMetricsResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookNumberMetrics(shared_ptr<DescribePlaybookNumberMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookNumberMetricsWithOptions(request, runtime);
}

DescribePlaybookReleasesResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookReleasesWithOptions(shared_ptr<DescribePlaybookReleasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybookReleases"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybookReleasesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybookReleasesResponse(execute(params, req, runtime));
  }
}

DescribePlaybookReleasesResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybookReleases(shared_ptr<DescribePlaybookReleasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybookReleasesWithOptions(request, runtime);
}

DescribePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybooksWithOptions(shared_ptr<DescribePlaybooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlaybooks"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlaybooksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlaybooksResponse(execute(params, req, runtime));
  }
}

DescribePlaybooksResponse Alibabacloud_Sophonsoar20220728::Client::describePlaybooks(shared_ptr<DescribePlaybooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlaybooksWithOptions(request, runtime);
}

DescribePopApiResponse Alibabacloud_Sophonsoar20220728::Client::describePopApiWithOptions(shared_ptr<DescribePopApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePopApi"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePopApiResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePopApiResponse(execute(params, req, runtime));
  }
}

DescribePopApiResponse Alibabacloud_Sophonsoar20220728::Client::describePopApi(shared_ptr<DescribePopApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePopApiWithOptions(request, runtime);
}

DescribePopApiItemListResponse Alibabacloud_Sophonsoar20220728::Client::describePopApiItemListWithOptions(shared_ptr<DescribePopApiItemListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePopApiItemList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePopApiItemListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePopApiItemListResponse(execute(params, req, runtime));
  }
}

DescribePopApiItemListResponse Alibabacloud_Sophonsoar20220728::Client::describePopApiItemList(shared_ptr<DescribePopApiItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePopApiItemListWithOptions(request, runtime);
}

DescribeProcessStatisticsResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessStatisticsWithOptions(shared_ptr<DescribeProcessStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProcessStatistics"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeProcessStatisticsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeProcessStatisticsResponse(execute(params, req, runtime));
  }
}

DescribeProcessStatisticsResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessStatistics(shared_ptr<DescribeProcessStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProcessStatisticsWithOptions(request, runtime);
}

DescribeProcessTaskCountResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessTaskCountWithOptions(shared_ptr<DescribeProcessTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProcessTaskCount"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeProcessTaskCountResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeProcessTaskCountResponse(execute(params, req, runtime));
  }
}

DescribeProcessTaskCountResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessTaskCount(shared_ptr<DescribeProcessTaskCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProcessTaskCountWithOptions(request, runtime);
}

DescribeProcessTasksResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessTasksWithOptions(shared_ptr<DescribeProcessTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityName)) {
    query->insert(pair<string, string>("EntityName", *request->entityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityUuid)) {
    query->insert(pair<string, string>("EntityUuid", *request->entityUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventUuid)) {
    query->insert(pair<string, string>("EventUuid", *request->eventUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    query->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramContent)) {
    query->insert(pair<string, string>("ParamContent", *request->paramContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processActionEnd)) {
    query->insert(pair<string, long>("ProcessActionEnd", *request->processActionEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processActionStart)) {
    query->insert(pair<string, long>("ProcessActionStart", *request->processActionStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processRemoveEnd)) {
    query->insert(pair<string, long>("ProcessRemoveEnd", *request->processRemoveEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->processRemoveStart)) {
    query->insert(pair<string, long>("ProcessRemoveStart", *request->processRemoveStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processStrategyUuid)) {
    query->insert(pair<string, string>("ProcessStrategyUuid", *request->processStrategyUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerSource)) {
    query->insert(pair<string, string>("TriggerSource", *request->triggerSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->yunCode)) {
    query->insert(pair<string, string>("YunCode", *request->yunCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProcessTasks"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeProcessTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeProcessTasksResponse(execute(params, req, runtime));
  }
}

DescribeProcessTasksResponse Alibabacloud_Sophonsoar20220728::Client::describeProcessTasks(shared_ptr<DescribeProcessTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProcessTasksWithOptions(request, runtime);
}

DescribeSoarRecordActionOutputListResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecordActionOutputListWithOptions(shared_ptr<DescribeSoarRecordActionOutputListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSoarRecordActionOutputList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSoarRecordActionOutputListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSoarRecordActionOutputListResponse(execute(params, req, runtime));
  }
}

DescribeSoarRecordActionOutputListResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecordActionOutputList(shared_ptr<DescribeSoarRecordActionOutputListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSoarRecordActionOutputListWithOptions(request, runtime);
}

DescribeSoarRecordInOutputResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecordInOutputWithOptions(shared_ptr<DescribeSoarRecordInOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSoarRecordInOutput"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSoarRecordInOutputResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSoarRecordInOutputResponse(execute(params, req, runtime));
  }
}

DescribeSoarRecordInOutputResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecordInOutput(shared_ptr<DescribeSoarRecordInOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSoarRecordInOutputWithOptions(request, runtime);
}

DescribeSoarRecordsResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecordsWithOptions(shared_ptr<DescribeSoarRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSoarRecords"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSoarRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSoarRecordsResponse(execute(params, req, runtime));
  }
}

DescribeSoarRecordsResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarRecords(shared_ptr<DescribeSoarRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSoarRecordsWithOptions(request, runtime);
}

DescribeSoarTaskAndActionsResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarTaskAndActionsWithOptions(shared_ptr<DescribeSoarTaskAndActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSoarTaskAndActions"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSoarTaskAndActionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSoarTaskAndActionsResponse(execute(params, req, runtime));
  }
}

DescribeSoarTaskAndActionsResponse Alibabacloud_Sophonsoar20220728::Client::describeSoarTaskAndActions(shared_ptr<DescribeSoarTaskAndActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSoarTaskAndActionsWithOptions(request, runtime);
}

DescribeSophonCommandsResponse Alibabacloud_Sophonsoar20220728::Client::describeSophonCommandsWithOptions(shared_ptr<DescribeSophonCommandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSophonCommands"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSophonCommandsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSophonCommandsResponse(execute(params, req, runtime));
  }
}

DescribeSophonCommandsResponse Alibabacloud_Sophonsoar20220728::Client::describeSophonCommands(shared_ptr<DescribeSophonCommandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSophonCommandsWithOptions(request, runtime);
}

DescribeVendorApiListResponse Alibabacloud_Sophonsoar20220728::Client::describeVendorApiListWithOptions(shared_ptr<DescribeVendorApiListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorCode)) {
    query->insert(pair<string, string>("VendorCode", *request->vendorCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVendorApiList"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeVendorApiListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeVendorApiListResponse(execute(params, req, runtime));
  }
}

DescribeVendorApiListResponse Alibabacloud_Sophonsoar20220728::Client::describeVendorApiList(shared_ptr<DescribeVendorApiListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVendorApiListWithOptions(request, runtime);
}

DescriberPython3ScriptLogsResponse Alibabacloud_Sophonsoar20220728::Client::describerPython3ScriptLogsWithOptions(shared_ptr<DescriberPython3ScriptLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescriberPython3ScriptLogs"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescriberPython3ScriptLogsResponse(callApi(params, req, runtime));
  }
  else {
    return DescriberPython3ScriptLogsResponse(execute(params, req, runtime));
  }
}

DescriberPython3ScriptLogsResponse Alibabacloud_Sophonsoar20220728::Client::describerPython3ScriptLogs(shared_ptr<DescriberPython3ScriptLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describerPython3ScriptLogsWithOptions(request, runtime);
}

ModifyComponentAssetResponse Alibabacloud_Sophonsoar20220728::Client::modifyComponentAssetWithOptions(shared_ptr<ModifyComponentAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetConfig)) {
    query->insert(pair<string, string>("AssetConfig", *request->assetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyComponentAsset"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyComponentAssetResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyComponentAssetResponse(execute(params, req, runtime));
  }
}

ModifyComponentAssetResponse Alibabacloud_Sophonsoar20220728::Client::modifyComponentAsset(shared_ptr<ModifyComponentAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyComponentAssetWithOptions(request, runtime);
}

ModifyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybookWithOptions(shared_ptr<ModifyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskflow)) {
    body->insert(pair<string, string>("Taskflow", *request->taskflow));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPlaybookResponse(execute(params, req, runtime));
  }
}

ModifyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybook(shared_ptr<ModifyPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPlaybookWithOptions(request, runtime);
}

ModifyPlaybookInputOutputResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybookInputOutputWithOptions(shared_ptr<ModifyPlaybookInputOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exeConfig)) {
    body->insert(pair<string, string>("ExeConfig", *request->exeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParams)) {
    body->insert(pair<string, string>("InputParams", *request->inputParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputParams)) {
    body->insert(pair<string, string>("OutputParams", *request->outputParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    body->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPlaybookInputOutput"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPlaybookInputOutputResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPlaybookInputOutputResponse(execute(params, req, runtime));
  }
}

ModifyPlaybookInputOutputResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybookInputOutput(shared_ptr<ModifyPlaybookInputOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPlaybookInputOutputWithOptions(request, runtime);
}

ModifyPlaybookInstanceStatusResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybookInstanceStatusWithOptions(shared_ptr<ModifyPlaybookInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->active)) {
    body->insert(pair<string, long>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPlaybookInstanceStatus"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyPlaybookInstanceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyPlaybookInstanceStatusResponse(execute(params, req, runtime));
  }
}

ModifyPlaybookInstanceStatusResponse Alibabacloud_Sophonsoar20220728::Client::modifyPlaybookInstanceStatus(shared_ptr<ModifyPlaybookInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPlaybookInstanceStatusWithOptions(request, runtime);
}

PublishPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::publishPlaybookWithOptions(shared_ptr<PublishPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PublishPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return PublishPlaybookResponse(execute(params, req, runtime));
  }
}

PublishPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::publishPlaybook(shared_ptr<PublishPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishPlaybookWithOptions(request, runtime);
}

QueryTreeDataResponse Alibabacloud_Sophonsoar20220728::Client::queryTreeDataWithOptions(shared_ptr<QueryTreeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTreeData"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryTreeDataResponse(callApi(params, req, runtime));
  }
  else {
    return QueryTreeDataResponse(execute(params, req, runtime));
  }
}

QueryTreeDataResponse Alibabacloud_Sophonsoar20220728::Client::queryTreeData(shared_ptr<QueryTreeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTreeDataWithOptions(request, runtime);
}

RenamePlaybookNodeResponse Alibabacloud_Sophonsoar20220728::Client::renamePlaybookNodeWithOptions(shared_ptr<RenamePlaybookNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newNodeName)) {
    query->insert(pair<string, string>("NewNodeName", *request->newNodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldNodeName)) {
    query->insert(pair<string, string>("OldNodeName", *request->oldNodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    query->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenamePlaybookNode"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenamePlaybookNodeResponse(callApi(params, req, runtime));
  }
  else {
    return RenamePlaybookNodeResponse(execute(params, req, runtime));
  }
}

RenamePlaybookNodeResponse Alibabacloud_Sophonsoar20220728::Client::renamePlaybookNode(shared_ptr<RenamePlaybookNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renamePlaybookNodeWithOptions(request, runtime);
}

RevertPlaybookReleaseResponse Alibabacloud_Sophonsoar20220728::Client::revertPlaybookReleaseWithOptions(shared_ptr<RevertPlaybookReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPublish)) {
    body->insert(pair<string, bool>("IsPublish", *request->isPublish));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playReleaseId)) {
    body->insert(pair<string, long>("PlayReleaseId", *request->playReleaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevertPlaybookRelease"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevertPlaybookReleaseResponse(callApi(params, req, runtime));
  }
  else {
    return RevertPlaybookReleaseResponse(execute(params, req, runtime));
  }
}

RevertPlaybookReleaseResponse Alibabacloud_Sophonsoar20220728::Client::revertPlaybookRelease(shared_ptr<RevertPlaybookReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revertPlaybookReleaseWithOptions(request, runtime);
}

RunNotifyComponentWithEmailResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithEmailWithOptions(shared_ptr<RunNotifyComponentWithEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionName)) {
    query->insert(pair<string, string>("ActionName", *request->actionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assetId)) {
    query->insert(pair<string, long>("AssetId", *request->assetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    query->insert(pair<string, string>("ComponentName", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    query->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->receivers)) {
    query->insert(pair<string, vector<string>>("Receivers", *request->receivers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    query->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunNotifyComponentWithEmail"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunNotifyComponentWithEmailResponse(callApi(params, req, runtime));
  }
  else {
    return RunNotifyComponentWithEmailResponse(execute(params, req, runtime));
  }
}

RunNotifyComponentWithEmailResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithEmail(shared_ptr<RunNotifyComponentWithEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runNotifyComponentWithEmailWithOptions(request, runtime);
}

RunNotifyComponentWithMessageCenterResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithMessageCenterWithOptions(shared_ptr<RunNotifyComponentWithMessageCenterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionName)) {
    query->insert(pair<string, string>("ActionName", *request->actionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliuid)) {
    query->insert(pair<string, string>("Aliuid", *request->aliuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assetId)) {
    query->insert(pair<string, long>("AssetId", *request->assetId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelTypeList)) {
    query->insert(pair<string, vector<string>>("ChannelTypeList", *request->channelTypeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    query->insert(pair<string, string>("ComponentName", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    query->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    query->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunNotifyComponentWithMessageCenter"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunNotifyComponentWithMessageCenterResponse(callApi(params, req, runtime));
  }
  else {
    return RunNotifyComponentWithMessageCenterResponse(execute(params, req, runtime));
  }
}

RunNotifyComponentWithMessageCenterResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithMessageCenter(shared_ptr<RunNotifyComponentWithMessageCenterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runNotifyComponentWithMessageCenterWithOptions(request, runtime);
}

RunNotifyComponentWithWebhookResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithWebhookWithOptions(shared_ptr<RunNotifyComponentWithWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionName)) {
    query->insert(pair<string, string>("ActionName", *request->actionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->assetId)) {
    query->insert(pair<string, long>("AssetId", *request->assetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    query->insert(pair<string, string>("ComponentName", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgType)) {
    query->insert(pair<string, string>("MsgType", *request->msgType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    query->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    query->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roleFor)) {
    query->insert(pair<string, long>("RoleFor", *request->roleFor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secret)) {
    query->insert(pair<string, string>("Secret", *request->secret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhook)) {
    query->insert(pair<string, string>("Webhook", *request->webhook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunNotifyComponentWithWebhook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunNotifyComponentWithWebhookResponse(callApi(params, req, runtime));
  }
  else {
    return RunNotifyComponentWithWebhookResponse(execute(params, req, runtime));
  }
}

RunNotifyComponentWithWebhookResponse Alibabacloud_Sophonsoar20220728::Client::runNotifyComponentWithWebhook(shared_ptr<RunNotifyComponentWithWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runNotifyComponentWithWebhookWithOptions(request, runtime);
}

RunPython3ScriptResponse Alibabacloud_Sophonsoar20220728::Client::runPython3ScriptWithOptions(shared_ptr<RunPython3ScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pythonScript)) {
    body->insert(pair<string, string>("PythonScript", *request->pythonScript));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunPython3Script"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RunPython3ScriptResponse(callApi(params, req, runtime));
  }
  else {
    return RunPython3ScriptResponse(execute(params, req, runtime));
  }
}

RunPython3ScriptResponse Alibabacloud_Sophonsoar20220728::Client::runPython3Script(shared_ptr<RunPython3ScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runPython3ScriptWithOptions(request, runtime);
}

TriggerPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::triggerPlaybookWithOptions(shared_ptr<TriggerPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParam)) {
    body->insert(pair<string, string>("InputParam", *request->inputParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TriggerPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return TriggerPlaybookResponse(execute(params, req, runtime));
  }
}

TriggerPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::triggerPlaybook(shared_ptr<TriggerPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerPlaybookWithOptions(request, runtime);
}

TriggerProcessTaskResponse Alibabacloud_Sophonsoar20220728::Client::triggerProcessTaskWithOptions(shared_ptr<TriggerProcessTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    query->insert(pair<string, string>("ActionType", *request->actionType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerProcessTask"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TriggerProcessTaskResponse(callApi(params, req, runtime));
  }
  else {
    return TriggerProcessTaskResponse(execute(params, req, runtime));
  }
}

TriggerProcessTaskResponse Alibabacloud_Sophonsoar20220728::Client::triggerProcessTask(shared_ptr<TriggerProcessTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerProcessTaskWithOptions(request, runtime);
}

TriggerSophonPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::triggerSophonPlaybookWithOptions(shared_ptr<TriggerSophonPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandName)) {
    query->insert(pair<string, string>("CommandName", *request->commandName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputParams)) {
    query->insert(pair<string, string>("InputParams", *request->inputParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sophonTaskId)) {
    query->insert(pair<string, string>("SophonTaskId", *request->sophonTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    query->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerSophonPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TriggerSophonPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return TriggerSophonPlaybookResponse(execute(params, req, runtime));
  }
}

TriggerSophonPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::triggerSophonPlaybook(shared_ptr<TriggerSophonPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerSophonPlaybookWithOptions(request, runtime);
}

VerifyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::verifyPlaybookWithOptions(shared_ptr<VerifyPlaybookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->playbookUuid)) {
    body->insert(pair<string, string>("PlaybookUuid", *request->playbookUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskFlow)) {
    body->insert(pair<string, string>("TaskFlow", *request->taskFlow));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyPlaybook"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifyPlaybookResponse(callApi(params, req, runtime));
  }
  else {
    return VerifyPlaybookResponse(execute(params, req, runtime));
  }
}

VerifyPlaybookResponse Alibabacloud_Sophonsoar20220728::Client::verifyPlaybook(shared_ptr<VerifyPlaybookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyPlaybookWithOptions(request, runtime);
}

VerifyPythonFileResponse Alibabacloud_Sophonsoar20220728::Client::verifyPythonFileWithOptions(shared_ptr<VerifyPythonFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyPythonFile"))},
    {"version", boost::any(string("2022-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifyPythonFileResponse(callApi(params, req, runtime));
  }
  else {
    return VerifyPythonFileResponse(execute(params, req, runtime));
  }
}

VerifyPythonFileResponse Alibabacloud_Sophonsoar20220728::Client::verifyPythonFile(shared_ptr<VerifyPythonFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyPythonFileWithOptions(request, runtime);
}

