// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mpserverless_20190615.hpp>
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

using namespace Alibabacloud_MPServerless20190615;

Alibabacloud_MPServerless20190615::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mpserverless"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MPServerless20190615::Client::getEndpoint(shared_ptr<string> productId,
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

AddCorsDomainResponse Alibabacloud_MPServerless20190615::Client::addCorsDomainWithOptions(shared_ptr<AddCorsDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCorsDomain"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCorsDomainResponse(callApi(params, req, runtime));
}

AddCorsDomainResponse Alibabacloud_MPServerless20190615::Client::addCorsDomain(shared_ptr<AddCorsDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCorsDomainWithOptions(request, runtime);
}

AddDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::addDingtalkOpenPlatformConfigWithOptions(shared_ptr<AddDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    body->insert(pair<string, string>("AppSecret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDingtalkOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDingtalkOpenPlatformConfigResponse(callApi(params, req, runtime));
}

AddDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::addDingtalkOpenPlatformConfig(shared_ptr<AddDingtalkOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDingtalkOpenPlatformConfigWithOptions(request, runtime);
}

AttachWebHostingCertificateResponse Alibabacloud_MPServerless20190615::Client::attachWebHostingCertificateWithOptions(shared_ptr<AttachWebHostingCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    body->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    body->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    body->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverCertificate)) {
    body->insert(pair<string, string>("ServerCertificate", *request->serverCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachWebHostingCertificate"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachWebHostingCertificateResponse(callApi(params, req, runtime));
}

AttachWebHostingCertificateResponse Alibabacloud_MPServerless20190615::Client::attachWebHostingCertificate(shared_ptr<AttachWebHostingCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachWebHostingCertificateWithOptions(request, runtime);
}

BatchDeleteWebHostingFilesResponse Alibabacloud_MPServerless20190615::Client::batchDeleteWebHostingFilesWithOptions(shared_ptr<BatchDeleteWebHostingFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->filePaths)) {
    body->insert(pair<string, vector<string>>("FilePaths", *request->filePaths));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteWebHostingFiles"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteWebHostingFilesResponse(callApi(params, req, runtime));
}

BatchDeleteWebHostingFilesResponse Alibabacloud_MPServerless20190615::Client::batchDeleteWebHostingFiles(shared_ptr<BatchDeleteWebHostingFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteWebHostingFilesWithOptions(request, runtime);
}

BindWebHostingCustomDomainResponse Alibabacloud_MPServerless20190615::Client::bindWebHostingCustomDomainWithOptions(shared_ptr<BindWebHostingCustomDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomain)) {
    body->insert(pair<string, string>("CustomDomain", *request->customDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindWebHostingCustomDomain"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindWebHostingCustomDomainResponse(callApi(params, req, runtime));
}

BindWebHostingCustomDomainResponse Alibabacloud_MPServerless20190615::Client::bindWebHostingCustomDomain(shared_ptr<BindWebHostingCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindWebHostingCustomDomainWithOptions(request, runtime);
}

CheckMpServerlessRoleExistsResponse Alibabacloud_MPServerless20190615::Client::checkMpServerlessRoleExistsWithOptions(shared_ptr<CheckMpServerlessRoleExistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMpServerlessRoleExists"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMpServerlessRoleExistsResponse(callApi(params, req, runtime));
}

CheckMpServerlessRoleExistsResponse Alibabacloud_MPServerless20190615::Client::checkMpServerlessRoleExists(shared_ptr<CheckMpServerlessRoleExistsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMpServerlessRoleExistsWithOptions(request, runtime);
}

CreateDBExportTaskResponse Alibabacloud_MPServerless20190615::Client::createDBExportTaskWithOptions(shared_ptr<CreateDBExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collection)) {
    body->insert(pair<string, string>("Collection", *request->collection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fields)) {
    body->insert(pair<string, string>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBExportTask"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBExportTaskResponse(callApi(params, req, runtime));
}

CreateDBExportTaskResponse Alibabacloud_MPServerless20190615::Client::createDBExportTask(shared_ptr<CreateDBExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBExportTaskWithOptions(request, runtime);
}

CreateDBImportTaskResponse Alibabacloud_MPServerless20190615::Client::createDBImportTaskWithOptions(shared_ptr<CreateDBImportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collection)) {
    body->insert(pair<string, string>("Collection", *request->collection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBImportTask"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBImportTaskResponse(callApi(params, req, runtime));
}

CreateDBImportTaskResponse Alibabacloud_MPServerless20190615::Client::createDBImportTask(shared_ptr<CreateDBImportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBImportTaskWithOptions(request, runtime);
}

CreateDBRestoreTaskResponse Alibabacloud_MPServerless20190615::Client::createDBRestoreTaskWithOptions(shared_ptr<CreateDBRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    body->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newCollections)) {
    body->insert(pair<string, string>("NewCollections", *request->newCollections));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originCollections)) {
    body->insert(pair<string, string>("OriginCollections", *request->originCollections));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDBRestoreTask"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDBRestoreTaskResponse(callApi(params, req, runtime));
}

CreateDBRestoreTaskResponse Alibabacloud_MPServerless20190615::Client::createDBRestoreTask(shared_ptr<CreateDBRestoreTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDBRestoreTaskWithOptions(request, runtime);
}

CreateFunctionResponse Alibabacloud_MPServerless20190615::Client::createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    body->insert(pair<string, string>("Runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionResponse(callApi(params, req, runtime));
}

CreateFunctionResponse Alibabacloud_MPServerless20190615::Client::createFunction(shared_ptr<CreateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFunctionWithOptions(request, runtime);
}

CreateFunctionDeploymentResponse Alibabacloud_MPServerless20190615::Client::createFunctionDeploymentWithOptions(shared_ptr<CreateFunctionDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunctionDeployment"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionDeploymentResponse(callApi(params, req, runtime));
}

CreateFunctionDeploymentResponse Alibabacloud_MPServerless20190615::Client::createFunctionDeployment(shared_ptr<CreateFunctionDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFunctionDeploymentWithOptions(request, runtime);
}

CreateSpaceResponse Alibabacloud_MPServerless20190615::Client::createSpaceWithOptions(shared_ptr<CreateSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    body->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSpace"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSpaceResponse(callApi(params, req, runtime));
}

CreateSpaceResponse Alibabacloud_MPServerless20190615::Client::createSpace(shared_ptr<CreateSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpaceWithOptions(request, runtime);
}

DeleteAntOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteAntOpenPlatformConfigWithOptions(shared_ptr<DeleteAntOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAntOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAntOpenPlatformConfigResponse(callApi(params, req, runtime));
}

DeleteAntOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteAntOpenPlatformConfig(shared_ptr<DeleteAntOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntOpenPlatformConfigWithOptions(request, runtime);
}

DeleteCorsDomainResponse Alibabacloud_MPServerless20190615::Client::deleteCorsDomainWithOptions(shared_ptr<DeleteCorsDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainId)) {
    body->insert(pair<string, string>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCorsDomain"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCorsDomainResponse(callApi(params, req, runtime));
}

DeleteCorsDomainResponse Alibabacloud_MPServerless20190615::Client::deleteCorsDomain(shared_ptr<DeleteCorsDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCorsDomainWithOptions(request, runtime);
}

DeleteDBCollectionResponse Alibabacloud_MPServerless20190615::Client::deleteDBCollectionWithOptions(shared_ptr<DeleteDBCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDBCollection"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDBCollectionResponse(callApi(params, req, runtime));
}

DeleteDBCollectionResponse Alibabacloud_MPServerless20190615::Client::deleteDBCollection(shared_ptr<DeleteDBCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDBCollectionWithOptions(request, runtime);
}

DeleteDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteDingtalkOpenPlatformConfigWithOptions(shared_ptr<DeleteDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDingtalkOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDingtalkOpenPlatformConfigResponse(callApi(params, req, runtime));
}

DeleteDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteDingtalkOpenPlatformConfig(shared_ptr<DeleteDingtalkOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDingtalkOpenPlatformConfigWithOptions(request, runtime);
}

DeleteFileResponse Alibabacloud_MPServerless20190615::Client::deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_MPServerless20190615::Client::deleteFile(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileWithOptions(request, runtime);
}

DeleteFunctionResponse Alibabacloud_MPServerless20190615::Client::deleteFunctionWithOptions(shared_ptr<DeleteFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFunctionResponse(callApi(params, req, runtime));
}

DeleteFunctionResponse Alibabacloud_MPServerless20190615::Client::deleteFunction(shared_ptr<DeleteFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFunctionWithOptions(request, runtime);
}

DeleteSpaceResponse Alibabacloud_MPServerless20190615::Client::deleteSpaceWithOptions(shared_ptr<DeleteSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSpace"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSpaceResponse(callApi(params, req, runtime));
}

DeleteSpaceResponse Alibabacloud_MPServerless20190615::Client::deleteSpace(shared_ptr<DeleteSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpaceWithOptions(request, runtime);
}

DeleteWebHostingCertificateResponse Alibabacloud_MPServerless20190615::Client::deleteWebHostingCertificateWithOptions(shared_ptr<DeleteWebHostingCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebHostingCertificate"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebHostingCertificateResponse(callApi(params, req, runtime));
}

DeleteWebHostingCertificateResponse Alibabacloud_MPServerless20190615::Client::deleteWebHostingCertificate(shared_ptr<DeleteWebHostingCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWebHostingCertificateWithOptions(request, runtime);
}

DeleteWebHostingFileResponse Alibabacloud_MPServerless20190615::Client::deleteWebHostingFileWithOptions(shared_ptr<DeleteWebHostingFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebHostingFile"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebHostingFileResponse(callApi(params, req, runtime));
}

DeleteWebHostingFileResponse Alibabacloud_MPServerless20190615::Client::deleteWebHostingFile(shared_ptr<DeleteWebHostingFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWebHostingFileWithOptions(request, runtime);
}

DeleteWechatOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteWechatOpenPlatformConfigWithOptions(shared_ptr<DeleteWechatOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWechatOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWechatOpenPlatformConfigResponse(callApi(params, req, runtime));
}

DeleteWechatOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::deleteWechatOpenPlatformConfig(shared_ptr<DeleteWechatOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWechatOpenPlatformConfigWithOptions(request, runtime);
}

DeployFunctionResponse Alibabacloud_MPServerless20190615::Client::deployFunctionWithOptions(shared_ptr<DeployFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentId)) {
    body->insert(pair<string, string>("DeploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployFunctionResponse(callApi(params, req, runtime));
}

DeployFunctionResponse Alibabacloud_MPServerless20190615::Client::deployFunction(shared_ptr<DeployFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFunctionWithOptions(request, runtime);
}

DescribeFCOpenStatusResponse Alibabacloud_MPServerless20190615::Client::describeFCOpenStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFCOpenStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFCOpenStatusResponse(callApi(params, req, runtime));
}

DescribeFCOpenStatusResponse Alibabacloud_MPServerless20190615::Client::describeFCOpenStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFCOpenStatusWithOptions(runtime);
}

DescribeFileUploadSignedUrlResponse Alibabacloud_MPServerless20190615::Client::describeFileUploadSignedUrlWithOptions(shared_ptr<DescribeFileUploadSignedUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    body->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filename)) {
    body->insert(pair<string, string>("Filename", *request->filename));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFileUploadSignedUrl"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFileUploadSignedUrlResponse(callApi(params, req, runtime));
}

DescribeFileUploadSignedUrlResponse Alibabacloud_MPServerless20190615::Client::describeFileUploadSignedUrl(shared_ptr<DescribeFileUploadSignedUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFileUploadSignedUrlWithOptions(request, runtime);
}

DescribeFunctionResponse Alibabacloud_MPServerless20190615::Client::describeFunctionWithOptions(shared_ptr<DescribeFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFunctionResponse(callApi(params, req, runtime));
}

DescribeFunctionResponse Alibabacloud_MPServerless20190615::Client::describeFunction(shared_ptr<DescribeFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFunctionWithOptions(request, runtime);
}

DescribeHttpTriggerConfigResponse Alibabacloud_MPServerless20190615::Client::describeHttpTriggerConfigWithOptions(shared_ptr<DescribeHttpTriggerConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHttpTriggerConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHttpTriggerConfigResponse(callApi(params, req, runtime));
}

DescribeHttpTriggerConfigResponse Alibabacloud_MPServerless20190615::Client::describeHttpTriggerConfig(shared_ptr<DescribeHttpTriggerConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHttpTriggerConfigWithOptions(request, runtime);
}

DescribeResourceQuotaResponse Alibabacloud_MPServerless20190615::Client::describeResourceQuotaWithOptions(shared_ptr<DescribeResourceQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceQuota"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceQuotaResponse(callApi(params, req, runtime));
}

DescribeResourceQuotaResponse Alibabacloud_MPServerless20190615::Client::describeResourceQuota(shared_ptr<DescribeResourceQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceQuotaWithOptions(request, runtime);
}

DescribeResourceUsageResponse Alibabacloud_MPServerless20190615::Client::describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    body->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceUsage"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceUsageResponse(callApi(params, req, runtime));
}

DescribeResourceUsageResponse Alibabacloud_MPServerless20190615::Client::describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceUsageWithOptions(request, runtime);
}

DescribeServicePolicyResponse Alibabacloud_MPServerless20190615::Client::describeServicePolicyWithOptions(shared_ptr<DescribeServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionName)) {
    body->insert(pair<string, string>("CollectionName", *request->collectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServicePolicy"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServicePolicyResponse(callApi(params, req, runtime));
}

DescribeServicePolicyResponse Alibabacloud_MPServerless20190615::Client::describeServicePolicy(shared_ptr<DescribeServicePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServicePolicyWithOptions(request, runtime);
}

DescribeSpaceClientConfigResponse Alibabacloud_MPServerless20190615::Client::describeSpaceClientConfigWithOptions(shared_ptr<DescribeSpaceClientConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->detail)) {
    body->insert(pair<string, string>("Detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->workspaceId)) {
    body->insert(pair<string, long>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSpaceClientConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSpaceClientConfigResponse(callApi(params, req, runtime));
}

DescribeSpaceClientConfigResponse Alibabacloud_MPServerless20190615::Client::describeSpaceClientConfig(shared_ptr<DescribeSpaceClientConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSpaceClientConfigWithOptions(request, runtime);
}

DescribeWebHostingFileResponse Alibabacloud_MPServerless20190615::Client::describeWebHostingFileWithOptions(shared_ptr<DescribeWebHostingFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebHostingFile"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebHostingFileResponse(callApi(params, req, runtime));
}

DescribeWebHostingFileResponse Alibabacloud_MPServerless20190615::Client::describeWebHostingFile(shared_ptr<DescribeWebHostingFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWebHostingFileWithOptions(request, runtime);
}

EnableExtensionResponse Alibabacloud_MPServerless20190615::Client::enableExtensionWithOptions(shared_ptr<EnableExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionId)) {
    body->insert(pair<string, string>("ExtensionId", *request->extensionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableExtension"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableExtensionResponse(callApi(params, req, runtime));
}

EnableExtensionResponse Alibabacloud_MPServerless20190615::Client::enableExtension(shared_ptr<EnableExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableExtensionWithOptions(request, runtime);
}

GetWebHostingCertificateDetailResponse Alibabacloud_MPServerless20190615::Client::getWebHostingCertificateDetailWithOptions(shared_ptr<GetWebHostingCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomain)) {
    body->insert(pair<string, string>("CustomDomain", *request->customDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebHostingCertificateDetail"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebHostingCertificateDetailResponse(callApi(params, req, runtime));
}

GetWebHostingCertificateDetailResponse Alibabacloud_MPServerless20190615::Client::getWebHostingCertificateDetail(shared_ptr<GetWebHostingCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebHostingCertificateDetailWithOptions(request, runtime);
}

GetWebHostingConfigResponse Alibabacloud_MPServerless20190615::Client::getWebHostingConfigWithOptions(shared_ptr<GetWebHostingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebHostingConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebHostingConfigResponse(callApi(params, req, runtime));
}

GetWebHostingConfigResponse Alibabacloud_MPServerless20190615::Client::getWebHostingConfig(shared_ptr<GetWebHostingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebHostingConfigWithOptions(request, runtime);
}

GetWebHostingDomainVerificationContentResponse Alibabacloud_MPServerless20190615::Client::getWebHostingDomainVerificationContentWithOptions(shared_ptr<GetWebHostingDomainVerificationContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebHostingDomainVerificationContent"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebHostingDomainVerificationContentResponse(callApi(params, req, runtime));
}

GetWebHostingDomainVerificationContentResponse Alibabacloud_MPServerless20190615::Client::getWebHostingDomainVerificationContent(shared_ptr<GetWebHostingDomainVerificationContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebHostingDomainVerificationContentWithOptions(request, runtime);
}

GetWebHostingStatusResponse Alibabacloud_MPServerless20190615::Client::getWebHostingStatusWithOptions(shared_ptr<GetWebHostingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebHostingStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebHostingStatusResponse(callApi(params, req, runtime));
}

GetWebHostingStatusResponse Alibabacloud_MPServerless20190615::Client::getWebHostingStatus(shared_ptr<GetWebHostingStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebHostingStatusWithOptions(request, runtime);
}

GetWebHostingUploadCredentialResponse Alibabacloud_MPServerless20190615::Client::getWebHostingUploadCredentialWithOptions(shared_ptr<GetWebHostingUploadCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    body->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebHostingUploadCredential"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebHostingUploadCredentialResponse(callApi(params, req, runtime));
}

GetWebHostingUploadCredentialResponse Alibabacloud_MPServerless20190615::Client::getWebHostingUploadCredential(shared_ptr<GetWebHostingUploadCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebHostingUploadCredentialWithOptions(request, runtime);
}

ListAvailableCertificatesResponse Alibabacloud_MPServerless20190615::Client::listAvailableCertificatesWithOptions(shared_ptr<ListAvailableCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableCertificates"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableCertificatesResponse(callApi(params, req, runtime));
}

ListAvailableCertificatesResponse Alibabacloud_MPServerless20190615::Client::listAvailableCertificates(shared_ptr<ListAvailableCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvailableCertificatesWithOptions(request, runtime);
}

ListCorsDomainsResponse Alibabacloud_MPServerless20190615::Client::listCorsDomainsWithOptions(shared_ptr<ListCorsDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCorsDomains"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCorsDomainsResponse(callApi(params, req, runtime));
}

ListCorsDomainsResponse Alibabacloud_MPServerless20190615::Client::listCorsDomains(shared_ptr<ListCorsDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCorsDomainsWithOptions(request, runtime);
}

ListDingtalkOpenPlatformConfigsResponse Alibabacloud_MPServerless20190615::Client::listDingtalkOpenPlatformConfigsWithOptions(shared_ptr<ListDingtalkOpenPlatformConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDingtalkOpenPlatformConfigs"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDingtalkOpenPlatformConfigsResponse(callApi(params, req, runtime));
}

ListDingtalkOpenPlatformConfigsResponse Alibabacloud_MPServerless20190615::Client::listDingtalkOpenPlatformConfigs(shared_ptr<ListDingtalkOpenPlatformConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDingtalkOpenPlatformConfigsWithOptions(request, runtime);
}

ListExtensionsResponse Alibabacloud_MPServerless20190615::Client::listExtensionsWithOptions(shared_ptr<ListExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExtensions"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExtensionsResponse(callApi(params, req, runtime));
}

ListExtensionsResponse Alibabacloud_MPServerless20190615::Client::listExtensions(shared_ptr<ListExtensionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExtensionsWithOptions(request, runtime);
}

ListFileResponse Alibabacloud_MPServerless20190615::Client::listFileWithOptions(shared_ptr<ListFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    body->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFile"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFileResponse(callApi(params, req, runtime));
}

ListFileResponse Alibabacloud_MPServerless20190615::Client::listFile(shared_ptr<ListFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileWithOptions(request, runtime);
}

ListFunctionResponse Alibabacloud_MPServerless20190615::Client::listFunctionWithOptions(shared_ptr<ListFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterBy)) {
    body->insert(pair<string, string>("FilterBy", *request->filterBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionResponse(callApi(params, req, runtime));
}

ListFunctionResponse Alibabacloud_MPServerless20190615::Client::listFunction(shared_ptr<ListFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionWithOptions(request, runtime);
}

ListFunctionDeploymentResponse Alibabacloud_MPServerless20190615::Client::listFunctionDeploymentWithOptions(shared_ptr<ListFunctionDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionDeployment"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionDeploymentResponse(callApi(params, req, runtime));
}

ListFunctionDeploymentResponse Alibabacloud_MPServerless20190615::Client::listFunctionDeployment(shared_ptr<ListFunctionDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionDeploymentWithOptions(request, runtime);
}

ListFunctionLogResponse Alibabacloud_MPServerless20190615::Client::listFunctionLogWithOptions(shared_ptr<ListFunctionLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fromDate)) {
    body->insert(pair<string, long>("FromDate", *request->fromDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    body->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toDate)) {
    body->insert(pair<string, long>("ToDate", *request->toDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionLog"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionLogResponse(callApi(params, req, runtime));
}

ListFunctionLogResponse Alibabacloud_MPServerless20190615::Client::listFunctionLog(shared_ptr<ListFunctionLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFunctionLogWithOptions(request, runtime);
}

ListOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::listOpenPlatformConfigWithOptions(shared_ptr<ListOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOpenPlatformConfigResponse(callApi(params, req, runtime));
}

ListOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::listOpenPlatformConfig(shared_ptr<ListOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOpenPlatformConfigWithOptions(request, runtime);
}

ListSpaceResponse Alibabacloud_MPServerless20190615::Client::listSpaceWithOptions(shared_ptr<ListSpaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSpaceShrinkRequest> request = make_shared<ListSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->spaceIds)) {
    request->spaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->spaceIds, make_shared<string>("SpaceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceIdsShrink)) {
    body->insert(pair<string, string>("SpaceIds", *request->spaceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpace"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSpaceResponse(callApi(params, req, runtime));
}

ListSpaceResponse Alibabacloud_MPServerless20190615::Client::listSpace(shared_ptr<ListSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSpaceWithOptions(request, runtime);
}

ListWebHostingCustomDomainsResponse Alibabacloud_MPServerless20190615::Client::listWebHostingCustomDomainsWithOptions(shared_ptr<ListWebHostingCustomDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebHostingCustomDomains"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebHostingCustomDomainsResponse(callApi(params, req, runtime));
}

ListWebHostingCustomDomainsResponse Alibabacloud_MPServerless20190615::Client::listWebHostingCustomDomains(shared_ptr<ListWebHostingCustomDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWebHostingCustomDomainsWithOptions(request, runtime);
}

ListWebHostingFilesResponse Alibabacloud_MPServerless20190615::Client::listWebHostingFilesWithOptions(shared_ptr<ListWebHostingFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    body->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    body->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWebHostingFiles"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWebHostingFilesResponse(callApi(params, req, runtime));
}

ListWebHostingFilesResponse Alibabacloud_MPServerless20190615::Client::listWebHostingFiles(shared_ptr<ListWebHostingFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWebHostingFilesWithOptions(request, runtime);
}

ModifyWebHostingConfigResponse Alibabacloud_MPServerless20190615::Client::modifyWebHostingConfigWithOptions(shared_ptr<ModifyWebHostingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->allowedIps)) {
    body->insert(pair<string, string>("AllowedIps", *request->allowedIps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorPath)) {
    body->insert(pair<string, string>("ErrorPath", *request->errorPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyModePath)) {
    body->insert(pair<string, string>("HistoryModePath", *request->historyModePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexPath)) {
    body->insert(pair<string, string>("IndexPath", *request->indexPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyWebHostingConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyWebHostingConfigResponse(callApi(params, req, runtime));
}

ModifyWebHostingConfigResponse Alibabacloud_MPServerless20190615::Client::modifyWebHostingConfig(shared_ptr<ModifyWebHostingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWebHostingConfigWithOptions(request, runtime);
}

OpenServiceResponse Alibabacloud_MPServerless20190615::Client::openServiceWithOptions(shared_ptr<OpenServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenService"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenServiceResponse(callApi(params, req, runtime));
}

OpenServiceResponse Alibabacloud_MPServerless20190615::Client::openService(shared_ptr<OpenServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openServiceWithOptions(request, runtime);
}

OpenWebHostingServiceResponse Alibabacloud_MPServerless20190615::Client::openWebHostingServiceWithOptions(shared_ptr<OpenWebHostingServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenWebHostingService"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenWebHostingServiceResponse(callApi(params, req, runtime));
}

OpenWebHostingServiceResponse Alibabacloud_MPServerless20190615::Client::openWebHostingService(shared_ptr<OpenWebHostingServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openWebHostingServiceWithOptions(request, runtime);
}

QueryDBBackupCollectionsResponse Alibabacloud_MPServerless20190615::Client::queryDBBackupCollectionsWithOptions(shared_ptr<QueryDBBackupCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backupId)) {
    body->insert(pair<string, string>("BackupId", *request->backupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDBBackupCollections"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDBBackupCollectionsResponse(callApi(params, req, runtime));
}

QueryDBBackupCollectionsResponse Alibabacloud_MPServerless20190615::Client::queryDBBackupCollections(shared_ptr<QueryDBBackupCollectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDBBackupCollectionsWithOptions(request, runtime);
}

QueryDBBackupDumpTimesResponse Alibabacloud_MPServerless20190615::Client::queryDBBackupDumpTimesWithOptions(shared_ptr<QueryDBBackupDumpTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDBBackupDumpTimes"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDBBackupDumpTimesResponse(callApi(params, req, runtime));
}

QueryDBBackupDumpTimesResponse Alibabacloud_MPServerless20190615::Client::queryDBBackupDumpTimes(shared_ptr<QueryDBBackupDumpTimesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDBBackupDumpTimesWithOptions(request, runtime);
}

QueryDBExportTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBExportTaskStatusWithOptions(shared_ptr<QueryDBExportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDBExportTaskStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDBExportTaskStatusResponse(callApi(params, req, runtime));
}

QueryDBExportTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBExportTaskStatus(shared_ptr<QueryDBExportTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDBExportTaskStatusWithOptions(request, runtime);
}

QueryDBImportTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBImportTaskStatusWithOptions(shared_ptr<QueryDBImportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDBImportTaskStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDBImportTaskStatusResponse(callApi(params, req, runtime));
}

QueryDBImportTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBImportTaskStatus(shared_ptr<QueryDBImportTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDBImportTaskStatusWithOptions(request, runtime);
}

QueryDBRestoreTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBRestoreTaskStatusWithOptions(shared_ptr<QueryDBRestoreTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDBRestoreTaskStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDBRestoreTaskStatusResponse(callApi(params, req, runtime));
}

QueryDBRestoreTaskStatusResponse Alibabacloud_MPServerless20190615::Client::queryDBRestoreTaskStatus(shared_ptr<QueryDBRestoreTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDBRestoreTaskStatusWithOptions(request, runtime);
}

QueryServiceStatusResponse Alibabacloud_MPServerless20190615::Client::queryServiceStatusWithOptions(shared_ptr<QueryServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryServiceStatus"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryServiceStatusResponse(callApi(params, req, runtime));
}

QueryServiceStatusResponse Alibabacloud_MPServerless20190615::Client::queryServiceStatus(shared_ptr<QueryServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryServiceStatusWithOptions(request, runtime);
}

RegisterFileResponse Alibabacloud_MPServerless20190615::Client::registerFileWithOptions(shared_ptr<RegisterFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterFile"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterFileResponse(callApi(params, req, runtime));
}

RegisterFileResponse Alibabacloud_MPServerless20190615::Client::registerFile(shared_ptr<RegisterFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerFileWithOptions(request, runtime);
}

RenameDBCollectionResponse Alibabacloud_MPServerless20190615::Client::renameDBCollectionWithOptions(shared_ptr<RenameDBCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newCollection)) {
    body->insert(pair<string, string>("NewCollection", *request->newCollection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originCollection)) {
    body->insert(pair<string, string>("OriginCollection", *request->originCollection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameDBCollection"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameDBCollectionResponse(callApi(params, req, runtime));
}

RenameDBCollectionResponse Alibabacloud_MPServerless20190615::Client::renameDBCollection(shared_ptr<RenameDBCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameDBCollectionWithOptions(request, runtime);
}

ResetServerSecretResponse Alibabacloud_MPServerless20190615::Client::resetServerSecretWithOptions(shared_ptr<ResetServerSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetServerSecret"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetServerSecretResponse(callApi(params, req, runtime));
}

ResetServerSecretResponse Alibabacloud_MPServerless20190615::Client::resetServerSecret(shared_ptr<ResetServerSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetServerSecretWithOptions(request, runtime);
}

RunDBCommandResponse Alibabacloud_MPServerless20190615::Client::runDBCommandWithOptions(shared_ptr<RunDBCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunDBCommand"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunDBCommandResponse(callApi(params, req, runtime));
}

RunDBCommandResponse Alibabacloud_MPServerless20190615::Client::runDBCommand(shared_ptr<RunDBCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runDBCommandWithOptions(request, runtime);
}

RunFunctionResponse Alibabacloud_MPServerless20190615::Client::runFunctionWithOptions(shared_ptr<RunFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunFunctionResponse(callApi(params, req, runtime));
}

RunFunctionResponse Alibabacloud_MPServerless20190615::Client::runFunction(shared_ptr<RunFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runFunctionWithOptions(request, runtime);
}

SaveAntOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::saveAntOpenPlatformConfigWithOptions(shared_ptr<SaveAntOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCert)) {
    body->insert(pair<string, string>("AppCert", *request->appCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    body->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicCert)) {
    body->insert(pair<string, string>("PublicCert", *request->publicCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKey)) {
    body->insert(pair<string, string>("PublicKey", *request->publicKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCert)) {
    body->insert(pair<string, string>("RootCert", *request->rootCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signMode)) {
    body->insert(pair<string, string>("SignMode", *request->signMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAntOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveAntOpenPlatformConfigResponse(callApi(params, req, runtime));
}

SaveAntOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::saveAntOpenPlatformConfig(shared_ptr<SaveAntOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAntOpenPlatformConfigWithOptions(request, runtime);
}

SaveAppAuthTokenResponse Alibabacloud_MPServerless20190615::Client::saveAppAuthTokenWithOptions(shared_ptr<SaveAppAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appAuthToken)) {
    body->insert(pair<string, string>("AppAuthToken", *request->appAuthToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvAppId)) {
    body->insert(pair<string, string>("IsvAppId", *request->isvAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAppAuthToken"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveAppAuthTokenResponse(callApi(params, req, runtime));
}

SaveAppAuthTokenResponse Alibabacloud_MPServerless20190615::Client::saveAppAuthToken(shared_ptr<SaveAppAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAppAuthTokenWithOptions(request, runtime);
}

SaveWebHostingCustomDomainConfigResponse Alibabacloud_MPServerless20190615::Client::saveWebHostingCustomDomainConfigWithOptions(shared_ptr<SaveWebHostingCustomDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forceRedirectType)) {
    body->insert(pair<string, string>("ForceRedirectType", *request->forceRedirectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveWebHostingCustomDomainConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveWebHostingCustomDomainConfigResponse(callApi(params, req, runtime));
}

SaveWebHostingCustomDomainConfigResponse Alibabacloud_MPServerless20190615::Client::saveWebHostingCustomDomainConfig(shared_ptr<SaveWebHostingCustomDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebHostingCustomDomainConfigWithOptions(request, runtime);
}

SaveWebHostingCustomDomainCorsConfigResponse Alibabacloud_MPServerless20190615::Client::saveWebHostingCustomDomainCorsConfigWithOptions(shared_ptr<SaveWebHostingCustomDomainCorsConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessControlAllowOrigin)) {
    body->insert(pair<string, string>("AccessControlAllowOrigin", *request->accessControlAllowOrigin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCors)) {
    body->insert(pair<string, bool>("EnableCors", *request->enableCors));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveWebHostingCustomDomainCorsConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveWebHostingCustomDomainCorsConfigResponse(callApi(params, req, runtime));
}

SaveWebHostingCustomDomainCorsConfigResponse Alibabacloud_MPServerless20190615::Client::saveWebHostingCustomDomainCorsConfig(shared_ptr<SaveWebHostingCustomDomainCorsConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebHostingCustomDomainCorsConfigWithOptions(request, runtime);
}

SaveWechatOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::saveWechatOpenPlatformConfigWithOptions(shared_ptr<SaveWechatOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    body->insert(pair<string, string>("AppSecret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveWechatOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveWechatOpenPlatformConfigResponse(callApi(params, req, runtime));
}

SaveWechatOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::saveWechatOpenPlatformConfig(shared_ptr<SaveWechatOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWechatOpenPlatformConfigWithOptions(request, runtime);
}

UnbindWebHostingCustomDomainResponse Alibabacloud_MPServerless20190615::Client::unbindWebHostingCustomDomainWithOptions(shared_ptr<UnbindWebHostingCustomDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomain)) {
    body->insert(pair<string, string>("CustomDomain", *request->customDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindWebHostingCustomDomain"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindWebHostingCustomDomainResponse(callApi(params, req, runtime));
}

UnbindWebHostingCustomDomainResponse Alibabacloud_MPServerless20190615::Client::unbindWebHostingCustomDomain(shared_ptr<UnbindWebHostingCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindWebHostingCustomDomainWithOptions(request, runtime);
}

UpdateDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::updateDingtalkOpenPlatformConfigWithOptions(shared_ptr<UpdateDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    body->insert(pair<string, string>("AppSecret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDingtalkOpenPlatformConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDingtalkOpenPlatformConfigResponse(callApi(params, req, runtime));
}

UpdateDingtalkOpenPlatformConfigResponse Alibabacloud_MPServerless20190615::Client::updateDingtalkOpenPlatformConfig(shared_ptr<UpdateDingtalkOpenPlatformConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDingtalkOpenPlatformConfigWithOptions(request, runtime);
}

UpdateFunctionResponse Alibabacloud_MPServerless20190615::Client::updateFunctionWithOptions(shared_ptr<UpdateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpTriggerPath)) {
    body->insert(pair<string, string>("HttpTriggerPath", *request->httpTriggerPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceConcurrency)) {
    body->insert(pair<string, long>("InstanceConcurrency", *request->instanceConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    body->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    body->insert(pair<string, string>("Runtime", *request->runtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timingTriggerConfig)) {
    body->insert(pair<string, string>("TimingTriggerConfig", *request->timingTriggerConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunction"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionResponse(callApi(params, req, runtime));
}

UpdateFunctionResponse Alibabacloud_MPServerless20190615::Client::updateFunction(shared_ptr<UpdateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFunctionWithOptions(request, runtime);
}

UpdateHttpTriggerConfigResponse Alibabacloud_MPServerless20190615::Client::updateHttpTriggerConfigWithOptions(shared_ptr<UpdateHttpTriggerConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomain)) {
    body->insert(pair<string, string>("CustomDomain", *request->customDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainCertificate)) {
    body->insert(pair<string, string>("CustomDomainCertificate", *request->customDomainCertificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainPrivateKey)) {
    body->insert(pair<string, string>("CustomDomainPrivateKey", *request->customDomainPrivateKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableService)) {
    body->insert(pair<string, bool>("EnableService", *request->enableService));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpTriggerConfig"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHttpTriggerConfigResponse(callApi(params, req, runtime));
}

UpdateHttpTriggerConfigResponse Alibabacloud_MPServerless20190615::Client::updateHttpTriggerConfig(shared_ptr<UpdateHttpTriggerConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHttpTriggerConfigWithOptions(request, runtime);
}

UpdateServicePolicyResponse Alibabacloud_MPServerless20190615::Client::updateServicePolicyWithOptions(shared_ptr<UpdateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionName)) {
    body->insert(pair<string, string>("CollectionName", *request->collectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    body->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServicePolicy"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServicePolicyResponse(callApi(params, req, runtime));
}

UpdateServicePolicyResponse Alibabacloud_MPServerless20190615::Client::updateServicePolicy(shared_ptr<UpdateServicePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServicePolicyWithOptions(request, runtime);
}

UpdateSpaceResponse Alibabacloud_MPServerless20190615::Client::updateSpaceWithOptions(shared_ptr<UpdateSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSpace"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSpaceResponse(callApi(params, req, runtime));
}

UpdateSpaceResponse Alibabacloud_MPServerless20190615::Client::updateSpace(shared_ptr<UpdateSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSpaceWithOptions(request, runtime);
}

VerifyWebHostingDomainOwnerResponse Alibabacloud_MPServerless20190615::Client::verifyWebHostingDomainOwnerWithOptions(shared_ptr<VerifyWebHostingDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyType)) {
    body->insert(pair<string, string>("VerifyType", *request->verifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyWebHostingDomainOwner"))},
    {"version", boost::any(string("2019-06-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyWebHostingDomainOwnerResponse(callApi(params, req, runtime));
}

VerifyWebHostingDomainOwnerResponse Alibabacloud_MPServerless20190615::Client::verifyWebHostingDomainOwner(shared_ptr<VerifyWebHostingDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyWebHostingDomainOwnerWithOptions(request, runtime);
}

