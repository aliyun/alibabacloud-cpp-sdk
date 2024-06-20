// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/baas_20181221.hpp>
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

using namespace Alibabacloud_Baas20181221;

Alibabacloud_Baas20181221::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "baas.aliyuncs.com"},
    {"cn-beijing", "baas.aliyuncs.com"},
    {"cn-zhangjiakou", "baas.aliyuncs.com"},
    {"cn-huhehaote", "baas.aliyuncs.com"},
    {"cn-shanghai", "baas.aliyuncs.com"},
    {"cn-shenzhen", "baas.aliyuncs.com"},
    {"cn-hongkong", "baas.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "baas.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1", "baas.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "baas.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "baas.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "baas.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1", "baas.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "baas.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("baas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Baas20181221::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptFabricInvitationResponse Alibabacloud_Baas20181221::Client::acceptFabricInvitationWithOptions(shared_ptr<AcceptFabricInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAccepted)) {
    body->insert(pair<string, bool>("IsAccepted", *request->isAccepted));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptFabricInvitation"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptFabricInvitationResponse(callApi(params, req, runtime));
}

AcceptFabricInvitationResponse Alibabacloud_Baas20181221::Client::acceptFabricInvitation(shared_ptr<AcceptFabricInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptFabricInvitationWithOptions(request, runtime);
}

ApplyAntChainCertificateResponse Alibabacloud_Baas20181221::Client::applyAntChainCertificateWithOptions(shared_ptr<ApplyAntChainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadReq)) {
    body->insert(pair<string, string>("UploadReq", *request->uploadReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAntChainCertificate"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAntChainCertificateResponse(callApi(params, req, runtime));
}

ApplyAntChainCertificateResponse Alibabacloud_Baas20181221::Client::applyAntChainCertificate(shared_ptr<ApplyAntChainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainCertificateWithOptions(request, runtime);
}

ApplyAntChainCertificateWithKeyAutoCreationResponse Alibabacloud_Baas20181221::Client::applyAntChainCertificateWithKeyAutoCreationWithOptions(shared_ptr<ApplyAntChainCertificateWithKeyAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    body->insert(pair<string, string>("CommonName", *request->commonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryName)) {
    body->insert(pair<string, string>("CountryName", *request->countryName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->localityName)) {
    body->insert(pair<string, string>("LocalityName", *request->localityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationName)) {
    body->insert(pair<string, string>("OrganizationName", *request->organizationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationUnitName)) {
    body->insert(pair<string, string>("OrganizationUnitName", *request->organizationUnitName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stateOrProvinceName)) {
    body->insert(pair<string, string>("StateOrProvinceName", *request->stateOrProvinceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAntChainCertificateWithKeyAutoCreation"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAntChainCertificateWithKeyAutoCreationResponse(callApi(params, req, runtime));
}

ApplyAntChainCertificateWithKeyAutoCreationResponse Alibabacloud_Baas20181221::Client::applyAntChainCertificateWithKeyAutoCreation(shared_ptr<ApplyAntChainCertificateWithKeyAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainCertificateWithKeyAutoCreationWithOptions(request, runtime);
}

ApproveFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::approveFabricChaincodeDefinitionWithOptions(shared_ptr<ApproveFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodePackageId)) {
    body->insert(pair<string, string>("ChaincodePackageId", *request->chaincodePackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveFabricChaincodeDefinition"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveFabricChaincodeDefinitionResponse(callApi(params, req, runtime));
}

ApproveFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::approveFabricChaincodeDefinition(shared_ptr<ApproveFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveFabricChaincodeDefinitionWithOptions(request, runtime);
}

BatchAddAntChainMiniAppQRCodeAuthorizedUsersResponse Alibabacloud_Baas20181221::Client::batchAddAntChainMiniAppQRCodeAuthorizedUsersWithOptions(shared_ptr<BatchAddAntChainMiniAppQRCodeAuthorizedUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchAddAntChainMiniAppQRCodeAuthorizedUsersShrinkRequest> request = make_shared<BatchAddAntChainMiniAppQRCodeAuthorizedUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->phoneList)) {
    request->phoneListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phoneList, make_shared<string>("PhoneList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneListShrink)) {
    body->insert(pair<string, string>("PhoneList", *request->phoneListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddAntChainMiniAppQRCodeAuthorizedUsers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddAntChainMiniAppQRCodeAuthorizedUsersResponse(callApi(params, req, runtime));
}

BatchAddAntChainMiniAppQRCodeAuthorizedUsersResponse Alibabacloud_Baas20181221::Client::batchAddAntChainMiniAppQRCodeAuthorizedUsers(shared_ptr<BatchAddAntChainMiniAppQRCodeAuthorizedUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddAntChainMiniAppQRCodeAuthorizedUsersWithOptions(request, runtime);
}

CheckFabricConsortiumDomainResponse Alibabacloud_Baas20181221::Client::checkFabricConsortiumDomainWithOptions(shared_ptr<CheckFabricConsortiumDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainCode)) {
    body->insert(pair<string, string>("DomainCode", *request->domainCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFabricConsortiumDomain"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFabricConsortiumDomainResponse(callApi(params, req, runtime));
}

CheckFabricConsortiumDomainResponse Alibabacloud_Baas20181221::Client::checkFabricConsortiumDomain(shared_ptr<CheckFabricConsortiumDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFabricConsortiumDomainWithOptions(request, runtime);
}

CheckFabricOrganizationDomainResponse Alibabacloud_Baas20181221::Client::checkFabricOrganizationDomainWithOptions(shared_ptr<CheckFabricOrganizationDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainCode)) {
    body->insert(pair<string, string>("DomainCode", *request->domainCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFabricOrganizationDomain"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFabricOrganizationDomainResponse(callApi(params, req, runtime));
}

CheckFabricOrganizationDomainResponse Alibabacloud_Baas20181221::Client::checkFabricOrganizationDomain(shared_ptr<CheckFabricOrganizationDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFabricOrganizationDomainWithOptions(request, runtime);
}

ConfirmFabricConsortiumMemberResponse Alibabacloud_Baas20181221::Client::confirmFabricConsortiumMemberWithOptions(shared_ptr<ConfirmFabricConsortiumMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ConfirmFabricConsortiumMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<ConfirmFabricConsortiumMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmFabricConsortiumMember"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmFabricConsortiumMemberResponse(callApi(params, req, runtime));
}

ConfirmFabricConsortiumMemberResponse Alibabacloud_Baas20181221::Client::confirmFabricConsortiumMember(shared_ptr<ConfirmFabricConsortiumMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmFabricConsortiumMemberWithOptions(request, runtime);
}

CopyAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::copyAntChainContractProjectWithOptions(shared_ptr<CopyAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectDescription)) {
    body->insert(pair<string, string>("ProjectDescription", *request->projectDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectVersion)) {
    body->insert(pair<string, string>("ProjectVersion", *request->projectVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyAntChainContractProject"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyAntChainContractProjectResponse(callApi(params, req, runtime));
}

CopyAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::copyAntChainContractProject(shared_ptr<CopyAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyAntChainContractProjectWithOptions(request, runtime);
}

CreateAntChainAccountResponse Alibabacloud_Baas20181221::Client::createAntChainAccountWithOptions(shared_ptr<CreateAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPubKey)) {
    body->insert(pair<string, string>("AccountPubKey", *request->accountPubKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountRecoverPubKey)) {
    body->insert(pair<string, string>("AccountRecoverPubKey", *request->accountRecoverPubKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainAccount"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainAccountResponse(callApi(params, req, runtime));
}

CreateAntChainAccountResponse Alibabacloud_Baas20181221::Client::createAntChainAccount(shared_ptr<CreateAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainAccountWithOptions(request, runtime);
}

CreateAntChainAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20181221::Client::createAntChainAccountWithKeyPairAutoCreationWithOptions(shared_ptr<CreateAntChainAccountWithKeyPairAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoverPassword)) {
    body->insert(pair<string, string>("RecoverPassword", *request->recoverPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainAccountWithKeyPairAutoCreation"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainAccountWithKeyPairAutoCreationResponse(callApi(params, req, runtime));
}

CreateAntChainAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20181221::Client::createAntChainAccountWithKeyPairAutoCreation(shared_ptr<CreateAntChainAccountWithKeyPairAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainAccountWithKeyPairAutoCreationWithOptions(request, runtime);
}

CreateAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::createAntChainConsortiumWithOptions(shared_ptr<CreateAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumDescription)) {
    body->insert(pair<string, string>("ConsortiumDescription", *request->consortiumDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumName)) {
    body->insert(pair<string, string>("ConsortiumName", *request->consortiumName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainConsortium"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainConsortiumResponse(callApi(params, req, runtime));
}

CreateAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::createAntChainConsortium(shared_ptr<CreateAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainConsortiumWithOptions(request, runtime);
}

CreateAntChainContractContentResponse Alibabacloud_Baas20181221::Client::createAntChainContractContentWithOptions(shared_ptr<CreateAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentName)) {
    body->insert(pair<string, string>("ContentName", *request->contentName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDirectory)) {
    body->insert(pair<string, bool>("IsDirectory", *request->isDirectory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentContentId)) {
    body->insert(pair<string, string>("ParentContentId", *request->parentContentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainContractContent"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainContractContentResponse(callApi(params, req, runtime));
}

CreateAntChainContractContentResponse Alibabacloud_Baas20181221::Client::createAntChainContractContent(shared_ptr<CreateAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainContractContentWithOptions(request, runtime);
}

CreateAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::createAntChainContractProjectWithOptions(shared_ptr<CreateAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectDescription)) {
    body->insert(pair<string, string>("ProjectDescription", *request->projectDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectVersion)) {
    body->insert(pair<string, string>("ProjectVersion", *request->projectVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainContractProject"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainContractProjectResponse(callApi(params, req, runtime));
}

CreateAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::createAntChainContractProject(shared_ptr<CreateAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainContractProjectWithOptions(request, runtime);
}

CreateAntChainKmsAccountNewResponse Alibabacloud_Baas20181221::Client::createAntChainKmsAccountNewWithOptions(shared_ptr<CreateAntChainKmsAccountNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChainKmsAccountNew"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainKmsAccountNewResponse(callApi(params, req, runtime));
}

CreateAntChainKmsAccountNewResponse Alibabacloud_Baas20181221::Client::createAntChainKmsAccountNew(shared_ptr<CreateAntChainKmsAccountNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainKmsAccountNewWithOptions(request, runtime);
}

CreateFabricChaincodeResponse Alibabacloud_Baas20181221::Client::createFabricChaincodeWithOptions(shared_ptr<CreateFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endorsePolicy)) {
    body->insert(pair<string, string>("EndorsePolicy", *request->endorsePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    body->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossUrl)) {
    body->insert(pair<string, string>("OssUrl", *request->ossUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricChaincodeResponse(callApi(params, req, runtime));
}

CreateFabricChaincodeResponse Alibabacloud_Baas20181221::Client::createFabricChaincode(shared_ptr<CreateFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricChaincodeWithOptions(request, runtime);
}

CreateFabricChaincodePackageResponse Alibabacloud_Baas20181221::Client::createFabricChaincodePackageWithOptions(shared_ptr<CreateFabricChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossUrl)) {
    body->insert(pair<string, string>("OssUrl", *request->ossUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricChaincodePackage"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricChaincodePackageResponse(callApi(params, req, runtime));
}

CreateFabricChaincodePackageResponse Alibabacloud_Baas20181221::Client::createFabricChaincodePackage(shared_ptr<CreateFabricChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricChaincodePackageWithOptions(request, runtime);
}

CreateFabricChannelResponse Alibabacloud_Baas20181221::Client::createFabricChannelWithOptions(shared_ptr<CreateFabricChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFabricChannelRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateFabricChannelRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->batchTimeout)) {
    body->insert(pair<string, long>("BatchTimeout", *request->batchTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageCount)) {
    body->insert(pair<string, long>("MaxMessageCount", *request->maxMessageCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preferredMaxBytes)) {
    body->insert(pair<string, long>("PreferredMaxBytes", *request->preferredMaxBytes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricChannel"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricChannelResponse(callApi(params, req, runtime));
}

CreateFabricChannelResponse Alibabacloud_Baas20181221::Client::createFabricChannel(shared_ptr<CreateFabricChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricChannelWithOptions(request, runtime);
}

CreateFabricChannelMemberResponse Alibabacloud_Baas20181221::Client::createFabricChannelMemberWithOptions(shared_ptr<CreateFabricChannelMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFabricChannelMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateFabricChannelMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricChannelMember"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricChannelMemberResponse(callApi(params, req, runtime));
}

CreateFabricChannelMemberResponse Alibabacloud_Baas20181221::Client::createFabricChannelMember(shared_ptr<CreateFabricChannelMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricChannelMemberWithOptions(request, runtime);
}

CreateFabricConsortiumResponse Alibabacloud_Baas20181221::Client::createFabricConsortiumWithOptions(shared_ptr<CreateFabricConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPolicy)) {
    body->insert(pair<string, string>("ChannelPolicy", *request->channelPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumDescription)) {
    body->insert(pair<string, string>("ConsortiumDescription", *request->consortiumDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumName)) {
    body->insert(pair<string, string>("ConsortiumName", *request->consortiumName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ordererType)) {
    body->insert(pair<string, string>("OrdererType", *request->ordererType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderersCount)) {
    body->insert(pair<string, long>("OrderersCount", *request->orderersCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFabricConsortiumRequestOrganization>>(request->organization)) {
    body->insert(pair<string, vector<CreateFabricConsortiumRequestOrganization>>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentDuration)) {
    body->insert(pair<string, long>("PaymentDuration", *request->paymentDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDurationUnit)) {
    body->insert(pair<string, string>("PaymentDurationUnit", *request->paymentDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->peersCount)) {
    body->insert(pair<string, long>("PeersCount", *request->peersCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specName)) {
    body->insert(pair<string, string>("SpecName", *request->specName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricConsortium"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricConsortiumResponse(callApi(params, req, runtime));
}

CreateFabricConsortiumResponse Alibabacloud_Baas20181221::Client::createFabricConsortium(shared_ptr<CreateFabricConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricConsortiumWithOptions(request, runtime);
}

CreateFabricConsortiumMemberResponse Alibabacloud_Baas20181221::Client::createFabricConsortiumMemberWithOptions(shared_ptr<CreateFabricConsortiumMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFabricConsortiumMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateFabricConsortiumMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricConsortiumMember"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricConsortiumMemberResponse(callApi(params, req, runtime));
}

CreateFabricConsortiumMemberResponse Alibabacloud_Baas20181221::Client::createFabricConsortiumMember(shared_ptr<CreateFabricConsortiumMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricConsortiumMemberWithOptions(request, runtime);
}

CreateFabricOrganizationResponse Alibabacloud_Baas20181221::Client::createFabricOrganizationWithOptions(shared_ptr<CreateFabricOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationName)) {
    query->insert(pair<string, string>("OrganizationName", *request->organizationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specName)) {
    query->insert(pair<string, string>("SpecName", *request->specName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentDuration)) {
    body->insert(pair<string, long>("PaymentDuration", *request->paymentDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDurationUnit)) {
    body->insert(pair<string, string>("PaymentDurationUnit", *request->paymentDurationUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->peersCount)) {
    body->insert(pair<string, long>("PeersCount", *request->peersCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricOrganization"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricOrganizationResponse(callApi(params, req, runtime));
}

CreateFabricOrganizationResponse Alibabacloud_Baas20181221::Client::createFabricOrganization(shared_ptr<CreateFabricOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricOrganizationWithOptions(request, runtime);
}

CreateFabricOrganizationUserResponse Alibabacloud_Baas20181221::Client::createFabricOrganizationUserWithOptions(shared_ptr<CreateFabricOrganizationUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attrs)) {
    body->insert(pair<string, string>("Attrs", *request->attrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFabricOrganizationUser"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFabricOrganizationUserResponse(callApi(params, req, runtime));
}

CreateFabricOrganizationUserResponse Alibabacloud_Baas20181221::Client::createFabricOrganizationUser(shared_ptr<CreateFabricOrganizationUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricOrganizationUserWithOptions(request, runtime);
}

DeleteAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::deleteAntChainConsortiumWithOptions(shared_ptr<DeleteAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAntChainConsortium"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAntChainConsortiumResponse(callApi(params, req, runtime));
}

DeleteAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::deleteAntChainConsortium(shared_ptr<DeleteAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainConsortiumWithOptions(request, runtime);
}

DeleteAntChainContractContentResponse Alibabacloud_Baas20181221::Client::deleteAntChainContractContentWithOptions(shared_ptr<DeleteAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentId)) {
    body->insert(pair<string, string>("ContentId", *request->contentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAntChainContractContent"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAntChainContractContentResponse(callApi(params, req, runtime));
}

DeleteAntChainContractContentResponse Alibabacloud_Baas20181221::Client::deleteAntChainContractContent(shared_ptr<DeleteAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainContractContentWithOptions(request, runtime);
}

DeleteAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::deleteAntChainContractProjectWithOptions(shared_ptr<DeleteAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAntChainContractProject"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAntChainContractProjectResponse(callApi(params, req, runtime));
}

DeleteAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::deleteAntChainContractProject(shared_ptr<DeleteAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainContractProjectWithOptions(request, runtime);
}

DeleteAntChainMiniAppQRCodeAuthorizedUserResponse Alibabacloud_Baas20181221::Client::deleteAntChainMiniAppQRCodeAuthorizedUserWithOptions(shared_ptr<DeleteAntChainMiniAppQRCodeAuthorizedUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAntChainMiniAppQRCodeAuthorizedUser"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAntChainMiniAppQRCodeAuthorizedUserResponse(callApi(params, req, runtime));
}

DeleteAntChainMiniAppQRCodeAuthorizedUserResponse Alibabacloud_Baas20181221::Client::deleteAntChainMiniAppQRCodeAuthorizedUser(shared_ptr<DeleteAntChainMiniAppQRCodeAuthorizedUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainMiniAppQRCodeAuthorizedUserWithOptions(request, runtime);
}

DeleteFabricChaincodeResponse Alibabacloud_Baas20181221::Client::deleteFabricChaincodeWithOptions(shared_ptr<DeleteFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFabricChaincodeResponse(callApi(params, req, runtime));
}

DeleteFabricChaincodeResponse Alibabacloud_Baas20181221::Client::deleteFabricChaincode(shared_ptr<DeleteFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFabricChaincodeWithOptions(request, runtime);
}

DescribeAntChainAccountsResponse Alibabacloud_Baas20181221::Client::describeAntChainAccountsWithOptions(shared_ptr<DescribeAntChainAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
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
    {"action", boost::any(string("DescribeAntChainAccounts"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainAccountsResponse(callApi(params, req, runtime));
}

DescribeAntChainAccountsResponse Alibabacloud_Baas20181221::Client::describeAntChainAccounts(shared_ptr<DescribeAntChainAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainAccountsWithOptions(request, runtime);
}

DescribeAntChainAccountsV2Response Alibabacloud_Baas20181221::Client::describeAntChainAccountsV2WithOptions(shared_ptr<DescribeAntChainAccountsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainAccountsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainAccountsV2Response(callApi(params, req, runtime));
}

DescribeAntChainAccountsV2Response Alibabacloud_Baas20181221::Client::describeAntChainAccountsV2(shared_ptr<DescribeAntChainAccountsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainAccountsV2WithOptions(request, runtime);
}

DescribeAntChainBlockResponse Alibabacloud_Baas20181221::Client::describeAntChainBlockWithOptions(shared_ptr<DescribeAntChainBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("Height", *request->height));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainBlock"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainBlockResponse(callApi(params, req, runtime));
}

DescribeAntChainBlockResponse Alibabacloud_Baas20181221::Client::describeAntChainBlock(shared_ptr<DescribeAntChainBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainBlockWithOptions(request, runtime);
}

DescribeAntChainBlockV2Response Alibabacloud_Baas20181221::Client::describeAntChainBlockV2WithOptions(shared_ptr<DescribeAntChainBlockV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("Height", *request->height));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainBlockV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainBlockV2Response(callApi(params, req, runtime));
}

DescribeAntChainBlockV2Response Alibabacloud_Baas20181221::Client::describeAntChainBlockV2(shared_ptr<DescribeAntChainBlockV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainBlockV2WithOptions(request, runtime);
}

DescribeAntChainCertificateApplicationsResponse Alibabacloud_Baas20181221::Client::describeAntChainCertificateApplicationsWithOptions(shared_ptr<DescribeAntChainCertificateApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainCertificateApplications"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainCertificateApplicationsResponse(callApi(params, req, runtime));
}

DescribeAntChainCertificateApplicationsResponse Alibabacloud_Baas20181221::Client::describeAntChainCertificateApplications(shared_ptr<DescribeAntChainCertificateApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainCertificateApplicationsWithOptions(request, runtime);
}

DescribeAntChainCertificateApplicationsV2Response Alibabacloud_Baas20181221::Client::describeAntChainCertificateApplicationsV2WithOptions(shared_ptr<DescribeAntChainCertificateApplicationsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainCertificateApplicationsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainCertificateApplicationsV2Response(callApi(params, req, runtime));
}

DescribeAntChainCertificateApplicationsV2Response Alibabacloud_Baas20181221::Client::describeAntChainCertificateApplicationsV2(shared_ptr<DescribeAntChainCertificateApplicationsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainCertificateApplicationsV2WithOptions(request, runtime);
}

DescribeAntChainConsortiumsResponse Alibabacloud_Baas20181221::Client::describeAntChainConsortiumsWithOptions(shared_ptr<DescribeAntChainConsortiumsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainConsortiums"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainConsortiumsResponse(callApi(params, req, runtime));
}

DescribeAntChainConsortiumsResponse Alibabacloud_Baas20181221::Client::describeAntChainConsortiums(shared_ptr<DescribeAntChainConsortiumsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainConsortiumsWithOptions(request, runtime);
}

DescribeAntChainConsortiumsV2Response Alibabacloud_Baas20181221::Client::describeAntChainConsortiumsV2WithOptions(shared_ptr<DescribeAntChainConsortiumsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainConsortiumsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainConsortiumsV2Response(callApi(params, req, runtime));
}

DescribeAntChainConsortiumsV2Response Alibabacloud_Baas20181221::Client::describeAntChainConsortiumsV2(shared_ptr<DescribeAntChainConsortiumsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainConsortiumsV2WithOptions(request, runtime);
}

DescribeAntChainContractProjectContentTreeResponse Alibabacloud_Baas20181221::Client::describeAntChainContractProjectContentTreeWithOptions(shared_ptr<DescribeAntChainContractProjectContentTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainContractProjectContentTree"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectContentTreeResponse(callApi(params, req, runtime));
}

DescribeAntChainContractProjectContentTreeResponse Alibabacloud_Baas20181221::Client::describeAntChainContractProjectContentTree(shared_ptr<DescribeAntChainContractProjectContentTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectContentTreeWithOptions(request, runtime);
}

DescribeAntChainContractProjectContentTreeV2Response Alibabacloud_Baas20181221::Client::describeAntChainContractProjectContentTreeV2WithOptions(shared_ptr<DescribeAntChainContractProjectContentTreeV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainContractProjectContentTreeV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectContentTreeV2Response(callApi(params, req, runtime));
}

DescribeAntChainContractProjectContentTreeV2Response Alibabacloud_Baas20181221::Client::describeAntChainContractProjectContentTreeV2(shared_ptr<DescribeAntChainContractProjectContentTreeV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectContentTreeV2WithOptions(request, runtime);
}

DescribeAntChainContractProjectsResponse Alibabacloud_Baas20181221::Client::describeAntChainContractProjectsWithOptions(shared_ptr<DescribeAntChainContractProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainContractProjects"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectsResponse(callApi(params, req, runtime));
}

DescribeAntChainContractProjectsResponse Alibabacloud_Baas20181221::Client::describeAntChainContractProjects(shared_ptr<DescribeAntChainContractProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectsWithOptions(request, runtime);
}

DescribeAntChainContractProjectsV2Response Alibabacloud_Baas20181221::Client::describeAntChainContractProjectsV2WithOptions(shared_ptr<DescribeAntChainContractProjectsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainContractProjectsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectsV2Response(callApi(params, req, runtime));
}

DescribeAntChainContractProjectsV2Response Alibabacloud_Baas20181221::Client::describeAntChainContractProjectsV2(shared_ptr<DescribeAntChainContractProjectsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectsV2WithOptions(request, runtime);
}

DescribeAntChainDownloadPathsResponse Alibabacloud_Baas20181221::Client::describeAntChainDownloadPathsWithOptions(shared_ptr<DescribeAntChainDownloadPathsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainDownloadPaths"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainDownloadPathsResponse(callApi(params, req, runtime));
}

DescribeAntChainDownloadPathsResponse Alibabacloud_Baas20181221::Client::describeAntChainDownloadPaths(shared_ptr<DescribeAntChainDownloadPathsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainDownloadPathsWithOptions(request, runtime);
}

DescribeAntChainDownloadPathsV2Response Alibabacloud_Baas20181221::Client::describeAntChainDownloadPathsV2WithOptions(shared_ptr<DescribeAntChainDownloadPathsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainDownloadPathsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainDownloadPathsV2Response(callApi(params, req, runtime));
}

DescribeAntChainDownloadPathsV2Response Alibabacloud_Baas20181221::Client::describeAntChainDownloadPathsV2(shared_ptr<DescribeAntChainDownloadPathsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainDownloadPathsV2WithOptions(request, runtime);
}

DescribeAntChainInformationResponse Alibabacloud_Baas20181221::Client::describeAntChainInformationWithOptions(shared_ptr<DescribeAntChainInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainInformation"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainInformationResponse(callApi(params, req, runtime));
}

DescribeAntChainInformationResponse Alibabacloud_Baas20181221::Client::describeAntChainInformation(shared_ptr<DescribeAntChainInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainInformationWithOptions(request, runtime);
}

DescribeAntChainInformationV2Response Alibabacloud_Baas20181221::Client::describeAntChainInformationV2WithOptions(shared_ptr<DescribeAntChainInformationV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainInformationV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainInformationV2Response(callApi(params, req, runtime));
}

DescribeAntChainInformationV2Response Alibabacloud_Baas20181221::Client::describeAntChainInformationV2(shared_ptr<DescribeAntChainInformationV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainInformationV2WithOptions(request, runtime);
}

DescribeAntChainLatestBlocksResponse Alibabacloud_Baas20181221::Client::describeAntChainLatestBlocksWithOptions(shared_ptr<DescribeAntChainLatestBlocksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainLatestBlocks"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestBlocksResponse(callApi(params, req, runtime));
}

DescribeAntChainLatestBlocksResponse Alibabacloud_Baas20181221::Client::describeAntChainLatestBlocks(shared_ptr<DescribeAntChainLatestBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestBlocksWithOptions(request, runtime);
}

DescribeAntChainLatestBlocksV2Response Alibabacloud_Baas20181221::Client::describeAntChainLatestBlocksV2WithOptions(shared_ptr<DescribeAntChainLatestBlocksV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainLatestBlocksV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestBlocksV2Response(callApi(params, req, runtime));
}

DescribeAntChainLatestBlocksV2Response Alibabacloud_Baas20181221::Client::describeAntChainLatestBlocksV2(shared_ptr<DescribeAntChainLatestBlocksV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestBlocksV2WithOptions(request, runtime);
}

DescribeAntChainLatestTransactionDigestsResponse Alibabacloud_Baas20181221::Client::describeAntChainLatestTransactionDigestsWithOptions(shared_ptr<DescribeAntChainLatestTransactionDigestsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainLatestTransactionDigests"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestTransactionDigestsResponse(callApi(params, req, runtime));
}

DescribeAntChainLatestTransactionDigestsResponse Alibabacloud_Baas20181221::Client::describeAntChainLatestTransactionDigests(shared_ptr<DescribeAntChainLatestTransactionDigestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestTransactionDigestsWithOptions(request, runtime);
}

DescribeAntChainLatestTransactionDigestsV2Response Alibabacloud_Baas20181221::Client::describeAntChainLatestTransactionDigestsV2WithOptions(shared_ptr<DescribeAntChainLatestTransactionDigestsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainLatestTransactionDigestsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestTransactionDigestsV2Response(callApi(params, req, runtime));
}

DescribeAntChainLatestTransactionDigestsV2Response Alibabacloud_Baas20181221::Client::describeAntChainLatestTransactionDigestsV2(shared_ptr<DescribeAntChainLatestTransactionDigestsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestTransactionDigestsV2WithOptions(request, runtime);
}

DescribeAntChainMembersResponse Alibabacloud_Baas20181221::Client::describeAntChainMembersWithOptions(shared_ptr<DescribeAntChainMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainMembers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMembersResponse(callApi(params, req, runtime));
}

DescribeAntChainMembersResponse Alibabacloud_Baas20181221::Client::describeAntChainMembers(shared_ptr<DescribeAntChainMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMembersWithOptions(request, runtime);
}

DescribeAntChainMembersV2Response Alibabacloud_Baas20181221::Client::describeAntChainMembersV2WithOptions(shared_ptr<DescribeAntChainMembersV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainMembersV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMembersV2Response(callApi(params, req, runtime));
}

DescribeAntChainMembersV2Response Alibabacloud_Baas20181221::Client::describeAntChainMembersV2(shared_ptr<DescribeAntChainMembersV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMembersV2WithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAccessLogWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAccessLog"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAccessLogResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAccessLog(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAccessLogWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogV2Response Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAccessLogV2WithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAccessLogV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAccessLogV2Response(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogV2Response Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAccessLogV2(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAccessLogV2WithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsers(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAuthorizedUsersWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2Response Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2WithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2Response(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2Response Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAuthorizedUsersV2WithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserTransactionQRCodeResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserTransactionQRCodeWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionHash)) {
    body->insert(pair<string, string>("TransactionHash", *request->transactionHash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserTransactionQRCode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserTransactionQRCodeResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserTransactionQRCodeResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserTransactionQRCode(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserTransactionQRCodeWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserTransactionQRCodeNewResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserTransactionQRCodeNewWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractId)) {
    body->insert(pair<string, string>("ContractId", *request->contractId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionHash)) {
    body->insert(pair<string, string>("TransactionHash", *request->transactionHash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserTransactionQRCodeNew"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserTransactionQRCodeNewResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserTransactionQRCodeNewResponse Alibabacloud_Baas20181221::Client::describeAntChainMiniAppBrowserTransactionQRCodeNew(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserTransactionQRCodeNewWithOptions(request, runtime);
}

DescribeAntChainNodesResponse Alibabacloud_Baas20181221::Client::describeAntChainNodesWithOptions(shared_ptr<DescribeAntChainNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainNodes"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainNodesResponse(callApi(params, req, runtime));
}

DescribeAntChainNodesResponse Alibabacloud_Baas20181221::Client::describeAntChainNodes(shared_ptr<DescribeAntChainNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainNodesWithOptions(request, runtime);
}

DescribeAntChainNodesV2Response Alibabacloud_Baas20181221::Client::describeAntChainNodesV2WithOptions(shared_ptr<DescribeAntChainNodesV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainNodesV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainNodesV2Response(callApi(params, req, runtime));
}

DescribeAntChainNodesV2Response Alibabacloud_Baas20181221::Client::describeAntChainNodesV2(shared_ptr<DescribeAntChainNodesV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainNodesV2WithOptions(request, runtime);
}

DescribeAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20181221::Client::describeAntChainQRCodeAuthorizationWithOptions(shared_ptr<DescribeAntChainQRCodeAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainQRCodeAuthorization"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainQRCodeAuthorizationResponse(callApi(params, req, runtime));
}

DescribeAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20181221::Client::describeAntChainQRCodeAuthorization(shared_ptr<DescribeAntChainQRCodeAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainQRCodeAuthorizationWithOptions(request, runtime);
}

DescribeAntChainQRCodeAuthorizationV2Response Alibabacloud_Baas20181221::Client::describeAntChainQRCodeAuthorizationV2WithOptions(shared_ptr<DescribeAntChainQRCodeAuthorizationV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainQRCodeAuthorizationV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainQRCodeAuthorizationV2Response(callApi(params, req, runtime));
}

DescribeAntChainQRCodeAuthorizationV2Response Alibabacloud_Baas20181221::Client::describeAntChainQRCodeAuthorizationV2(shared_ptr<DescribeAntChainQRCodeAuthorizationV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainQRCodeAuthorizationV2WithOptions(request, runtime);
}

DescribeAntChainTransactionResponse Alibabacloud_Baas20181221::Client::describeAntChainTransactionWithOptions(shared_ptr<DescribeAntChainTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransaction"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionResponse Alibabacloud_Baas20181221::Client::describeAntChainTransaction(shared_ptr<DescribeAntChainTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionWithOptions(request, runtime);
}

DescribeAntChainTransactionReceiptResponse Alibabacloud_Baas20181221::Client::describeAntChainTransactionReceiptWithOptions(shared_ptr<DescribeAntChainTransactionReceiptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransactionReceipt"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionReceiptResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionReceiptResponse Alibabacloud_Baas20181221::Client::describeAntChainTransactionReceipt(shared_ptr<DescribeAntChainTransactionReceiptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionReceiptWithOptions(request, runtime);
}

DescribeAntChainTransactionReceiptV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionReceiptV2WithOptions(shared_ptr<DescribeAntChainTransactionReceiptV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransactionReceiptV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionReceiptV2Response(callApi(params, req, runtime));
}

DescribeAntChainTransactionReceiptV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionReceiptV2(shared_ptr<DescribeAntChainTransactionReceiptV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionReceiptV2WithOptions(request, runtime);
}

DescribeAntChainTransactionStatisticsResponse Alibabacloud_Baas20181221::Client::describeAntChainTransactionStatisticsWithOptions(shared_ptr<DescribeAntChainTransactionStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    body->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransactionStatistics"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionStatisticsResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionStatisticsResponse Alibabacloud_Baas20181221::Client::describeAntChainTransactionStatistics(shared_ptr<DescribeAntChainTransactionStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionStatisticsWithOptions(request, runtime);
}

DescribeAntChainTransactionStatisticsV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionStatisticsV2WithOptions(shared_ptr<DescribeAntChainTransactionStatisticsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    body->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransactionStatisticsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionStatisticsV2Response(callApi(params, req, runtime));
}

DescribeAntChainTransactionStatisticsV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionStatisticsV2(shared_ptr<DescribeAntChainTransactionStatisticsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionStatisticsV2WithOptions(request, runtime);
}

DescribeAntChainTransactionV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionV2WithOptions(shared_ptr<DescribeAntChainTransactionV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainTransactionV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionV2Response(callApi(params, req, runtime));
}

DescribeAntChainTransactionV2Response Alibabacloud_Baas20181221::Client::describeAntChainTransactionV2(shared_ptr<DescribeAntChainTransactionV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionV2WithOptions(request, runtime);
}

DescribeAntChainsResponse Alibabacloud_Baas20181221::Client::describeAntChainsWithOptions(shared_ptr<DescribeAntChainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChains"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainsResponse(callApi(params, req, runtime));
}

DescribeAntChainsResponse Alibabacloud_Baas20181221::Client::describeAntChains(shared_ptr<DescribeAntChainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainsWithOptions(request, runtime);
}

DescribeAntChainsV2Response Alibabacloud_Baas20181221::Client::describeAntChainsV2WithOptions(shared_ptr<DescribeAntChainsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
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
    {"action", boost::any(string("DescribeAntChainsV2"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainsV2Response(callApi(params, req, runtime));
}

DescribeAntChainsV2Response Alibabacloud_Baas20181221::Client::describeAntChainsV2(shared_ptr<DescribeAntChainsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainsV2WithOptions(request, runtime);
}

DescribeEthereumDeletableResponse Alibabacloud_Baas20181221::Client::describeEthereumDeletableWithOptions(shared_ptr<DescribeEthereumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumDeletable"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumDeletableResponse(callApi(params, req, runtime));
}

DescribeEthereumDeletableResponse Alibabacloud_Baas20181221::Client::describeEthereumDeletable(shared_ptr<DescribeEthereumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumDeletableWithOptions(request, runtime);
}

DescribeFabricCandidateOrganizationsResponse Alibabacloud_Baas20181221::Client::describeFabricCandidateOrganizationsWithOptions(shared_ptr<DescribeFabricCandidateOrganizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricCandidateOrganizations"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricCandidateOrganizationsResponse(callApi(params, req, runtime));
}

DescribeFabricCandidateOrganizationsResponse Alibabacloud_Baas20181221::Client::describeFabricCandidateOrganizations(shared_ptr<DescribeFabricCandidateOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricCandidateOrganizationsWithOptions(request, runtime);
}

DescribeFabricChaincodeDefinitionTaskResponse Alibabacloud_Baas20181221::Client::describeFabricChaincodeDefinitionTaskWithOptions(shared_ptr<DescribeFabricChaincodeDefinitionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChaincodeDefinitionTask"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChaincodeDefinitionTaskResponse(callApi(params, req, runtime));
}

DescribeFabricChaincodeDefinitionTaskResponse Alibabacloud_Baas20181221::Client::describeFabricChaincodeDefinitionTask(shared_ptr<DescribeFabricChaincodeDefinitionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChaincodeDefinitionTaskWithOptions(request, runtime);
}

DescribeFabricChaincodeUploadPolicyResponse Alibabacloud_Baas20181221::Client::describeFabricChaincodeUploadPolicyWithOptions(shared_ptr<DescribeFabricChaincodeUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChaincodeUploadPolicy"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChaincodeUploadPolicyResponse(callApi(params, req, runtime));
}

DescribeFabricChaincodeUploadPolicyResponse Alibabacloud_Baas20181221::Client::describeFabricChaincodeUploadPolicy(shared_ptr<DescribeFabricChaincodeUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChaincodeUploadPolicyWithOptions(request, runtime);
}

DescribeFabricChannelMembersResponse Alibabacloud_Baas20181221::Client::describeFabricChannelMembersWithOptions(shared_ptr<DescribeFabricChannelMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChannelMembers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChannelMembersResponse(callApi(params, req, runtime));
}

DescribeFabricChannelMembersResponse Alibabacloud_Baas20181221::Client::describeFabricChannelMembers(shared_ptr<DescribeFabricChannelMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChannelMembersWithOptions(request, runtime);
}

DescribeFabricConsortiumAdminStatusResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumAdminStatusWithOptions(shared_ptr<DescribeFabricConsortiumAdminStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumAdminStatus"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumAdminStatusResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumAdminStatusResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumAdminStatus(shared_ptr<DescribeFabricConsortiumAdminStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumAdminStatusWithOptions(request, runtime);
}

DescribeFabricConsortiumChaincodesResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumChaincodesWithOptions(shared_ptr<DescribeFabricConsortiumChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumChaincodes"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumChaincodesResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumChaincodesResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumChaincodes(shared_ptr<DescribeFabricConsortiumChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumChaincodesWithOptions(request, runtime);
}

DescribeFabricConsortiumChannelsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumChannelsWithOptions(shared_ptr<DescribeFabricConsortiumChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumChannels"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumChannelsResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumChannelsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumChannels(shared_ptr<DescribeFabricConsortiumChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumChannelsWithOptions(request, runtime);
}

DescribeFabricConsortiumConfigResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumConfig"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumConfigResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumConfigResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumConfigWithOptions(runtime);
}

DescribeFabricConsortiumDeletableResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumDeletableWithOptions(shared_ptr<DescribeFabricConsortiumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumDeletable"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumDeletableResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumDeletableResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumDeletable(shared_ptr<DescribeFabricConsortiumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumDeletableWithOptions(request, runtime);
}

DescribeFabricConsortiumMemberApprovalResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumMemberApprovalWithOptions(shared_ptr<DescribeFabricConsortiumMemberApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumMemberApproval"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumMemberApprovalResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumMemberApprovalResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumMemberApproval(shared_ptr<DescribeFabricConsortiumMemberApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumMemberApprovalWithOptions(request, runtime);
}

DescribeFabricConsortiumMembersResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumMembersWithOptions(shared_ptr<DescribeFabricConsortiumMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumMembers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumMembersResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumMembersResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumMembers(shared_ptr<DescribeFabricConsortiumMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumMembersWithOptions(request, runtime);
}

DescribeFabricConsortiumOrderersResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumOrderersWithOptions(shared_ptr<DescribeFabricConsortiumOrderersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumOrderers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumOrderersResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumOrderersResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumOrderers(shared_ptr<DescribeFabricConsortiumOrderersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumOrderersWithOptions(request, runtime);
}

DescribeFabricConsortiumSpecsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiumSpecs"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumSpecsResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumSpecsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumSpecsWithOptions(runtime);
}

DescribeFabricConsortiumsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiumsWithOptions(shared_ptr<DescribeFabricConsortiumsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeFabricConsortiumsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeFabricConsortiumsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricConsortiums"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricConsortiumsResponse(callApi(params, req, runtime));
}

DescribeFabricConsortiumsResponse Alibabacloud_Baas20181221::Client::describeFabricConsortiums(shared_ptr<DescribeFabricConsortiumsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricConsortiumsWithOptions(request, runtime);
}

DescribeFabricExplorerResponse Alibabacloud_Baas20181221::Client::describeFabricExplorerWithOptions(shared_ptr<DescribeFabricExplorerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exBody)) {
    query->insert(pair<string, string>("ExBody", *request->exBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exMethod)) {
    query->insert(pair<string, string>("ExMethod", *request->exMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exUrl)) {
    query->insert(pair<string, string>("ExUrl", *request->exUrl));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricExplorer"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricExplorerResponse(callApi(params, req, runtime));
}

DescribeFabricExplorerResponse Alibabacloud_Baas20181221::Client::describeFabricExplorer(shared_ptr<DescribeFabricExplorerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricExplorerWithOptions(request, runtime);
}

DescribeFabricInvitationCodeResponse Alibabacloud_Baas20181221::Client::describeFabricInvitationCodeWithOptions(shared_ptr<DescribeFabricInvitationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricInvitationCode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricInvitationCodeResponse(callApi(params, req, runtime));
}

DescribeFabricInvitationCodeResponse Alibabacloud_Baas20181221::Client::describeFabricInvitationCode(shared_ptr<DescribeFabricInvitationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricInvitationCodeWithOptions(request, runtime);
}

DescribeFabricInviterResponse Alibabacloud_Baas20181221::Client::describeFabricInviterWithOptions(shared_ptr<DescribeFabricInviterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricInviter"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricInviterResponse(callApi(params, req, runtime));
}

DescribeFabricInviterResponse Alibabacloud_Baas20181221::Client::describeFabricInviter(shared_ptr<DescribeFabricInviterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricInviterWithOptions(request, runtime);
}

DescribeFabricOrdererLogsResponse Alibabacloud_Baas20181221::Client::describeFabricOrdererLogsWithOptions(shared_ptr<DescribeFabricOrdererLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lines)) {
    query->insert(pair<string, string>("Lines", *request->lines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ordererName)) {
    query->insert(pair<string, string>("OrdererName", *request->ordererName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrdererLogs"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrdererLogsResponse(callApi(params, req, runtime));
}

DescribeFabricOrdererLogsResponse Alibabacloud_Baas20181221::Client::describeFabricOrdererLogs(shared_ptr<DescribeFabricOrdererLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrdererLogsWithOptions(request, runtime);
}

DescribeFabricOrganizationResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationWithOptions(shared_ptr<DescribeFabricOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeFabricOrganizationRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeFabricOrganizationRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganization"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationResponse Alibabacloud_Baas20181221::Client::describeFabricOrganization(shared_ptr<DescribeFabricOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationWithOptions(request, runtime);
}

DescribeFabricOrganizationChaincodePackageResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChaincodePackageWithOptions(shared_ptr<DescribeFabricOrganizationChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationChaincodePackage"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationChaincodePackageResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationChaincodePackageResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChaincodePackage(shared_ptr<DescribeFabricOrganizationChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationChaincodePackageWithOptions(request, runtime);
}

DescribeFabricOrganizationChaincodesResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChaincodesWithOptions(shared_ptr<DescribeFabricOrganizationChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationChaincodes"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationChaincodesResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationChaincodesResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChaincodes(shared_ptr<DescribeFabricOrganizationChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationChaincodesWithOptions(request, runtime);
}

DescribeFabricOrganizationChannelsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChannelsWithOptions(shared_ptr<DescribeFabricOrganizationChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationChannels"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationChannelsResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationChannelsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationChannels(shared_ptr<DescribeFabricOrganizationChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationChannelsWithOptions(request, runtime);
}

DescribeFabricOrganizationDeletableResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationDeletableWithOptions(shared_ptr<DescribeFabricOrganizationDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationDeletable"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationDeletableResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationDeletableResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationDeletable(shared_ptr<DescribeFabricOrganizationDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationDeletableWithOptions(request, runtime);
}

DescribeFabricOrganizationMembersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationMembersWithOptions(shared_ptr<DescribeFabricOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationMembers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationMembersResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationMembersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationMembers(shared_ptr<DescribeFabricOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationMembersWithOptions(request, runtime);
}

DescribeFabricOrganizationPeersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationPeersWithOptions(shared_ptr<DescribeFabricOrganizationPeersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationPeers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationPeersResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationPeersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationPeers(shared_ptr<DescribeFabricOrganizationPeersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationPeersWithOptions(request, runtime);
}

DescribeFabricOrganizationSpecsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationSpecs"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationSpecsResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationSpecsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationSpecsWithOptions(runtime);
}

DescribeFabricOrganizationUsersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationUsersWithOptions(shared_ptr<DescribeFabricOrganizationUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationUsers"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationUsersResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationUsersResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationUsers(shared_ptr<DescribeFabricOrganizationUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationUsersWithOptions(request, runtime);
}

DescribeFabricOrganizationsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizationsWithOptions(shared_ptr<DescribeFabricOrganizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeFabricOrganizationsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeFabricOrganizationsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizations"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationsResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationsResponse Alibabacloud_Baas20181221::Client::describeFabricOrganizations(shared_ptr<DescribeFabricOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationsWithOptions(request, runtime);
}

DescribeFabricPeerLogsResponse Alibabacloud_Baas20181221::Client::describeFabricPeerLogsWithOptions(shared_ptr<DescribeFabricPeerLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lines)) {
    query->insert(pair<string, string>("Lines", *request->lines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->peerName)) {
    query->insert(pair<string, string>("PeerName", *request->peerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricPeerLogs"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricPeerLogsResponse(callApi(params, req, runtime));
}

DescribeFabricPeerLogsResponse Alibabacloud_Baas20181221::Client::describeFabricPeerLogs(shared_ptr<DescribeFabricPeerLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricPeerLogsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Baas20181221::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Baas20181221::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRootDomainResponse Alibabacloud_Baas20181221::Client::describeRootDomainWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRootDomain"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRootDomainResponse(callApi(params, req, runtime));
}

DescribeRootDomainResponse Alibabacloud_Baas20181221::Client::describeRootDomain() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRootDomainWithOptions(runtime);
}

DescribeTasksResponse Alibabacloud_Baas20181221::Client::describeTasksWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTasksResponse(callApi(params, req, runtime));
}

DescribeTasksResponse Alibabacloud_Baas20181221::Client::describeTasks() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(runtime);
}

DownloadFabricOrganizationSDKResponse Alibabacloud_Baas20181221::Client::downloadFabricOrganizationSDKWithOptions(shared_ptr<DownloadFabricOrganizationSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadFabricOrganizationSDK"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadFabricOrganizationSDKResponse(callApi(params, req, runtime));
}

DownloadFabricOrganizationSDKResponse Alibabacloud_Baas20181221::Client::downloadFabricOrganizationSDK(shared_ptr<DownloadFabricOrganizationSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadFabricOrganizationSDKWithOptions(request, runtime);
}

FreezeAntChainAccountResponse Alibabacloud_Baas20181221::Client::freezeAntChainAccountWithOptions(shared_ptr<FreezeAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FreezeAntChainAccount"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FreezeAntChainAccountResponse(callApi(params, req, runtime));
}

FreezeAntChainAccountResponse Alibabacloud_Baas20181221::Client::freezeAntChainAccount(shared_ptr<FreezeAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return freezeAntChainAccountWithOptions(request, runtime);
}

InstallFabricChaincodeResponse Alibabacloud_Baas20181221::Client::installFabricChaincodeWithOptions(shared_ptr<InstallFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallFabricChaincodeResponse(callApi(params, req, runtime));
}

InstallFabricChaincodeResponse Alibabacloud_Baas20181221::Client::installFabricChaincode(shared_ptr<InstallFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installFabricChaincodeWithOptions(request, runtime);
}

InstallFabricChaincodePackageResponse Alibabacloud_Baas20181221::Client::installFabricChaincodePackageWithOptions(shared_ptr<InstallFabricChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodePackageId)) {
    body->insert(pair<string, string>("ChaincodePackageId", *request->chaincodePackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallFabricChaincodePackage"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallFabricChaincodePackageResponse(callApi(params, req, runtime));
}

InstallFabricChaincodePackageResponse Alibabacloud_Baas20181221::Client::installFabricChaincodePackage(shared_ptr<InstallFabricChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installFabricChaincodePackageWithOptions(request, runtime);
}

InstantiateFabricChaincodeResponse Alibabacloud_Baas20181221::Client::instantiateFabricChaincodeWithOptions(shared_ptr<InstantiateFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionConfig)) {
    body->insert(pair<string, string>("CollectionConfig", *request->collectionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endorsePolicy)) {
    body->insert(pair<string, string>("EndorsePolicy", *request->endorsePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstantiateFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstantiateFabricChaincodeResponse(callApi(params, req, runtime));
}

InstantiateFabricChaincodeResponse Alibabacloud_Baas20181221::Client::instantiateFabricChaincode(shared_ptr<InstantiateFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return instantiateFabricChaincodeWithOptions(request, runtime);
}

JoinFabricChannelResponse Alibabacloud_Baas20181221::Client::joinFabricChannelWithOptions(shared_ptr<JoinFabricChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->do_)) {
    query->insert(pair<string, string>("Do_", *request->do_));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinFabricChannel"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return JoinFabricChannelResponse(callApi(params, req, runtime));
}

JoinFabricChannelResponse Alibabacloud_Baas20181221::Client::joinFabricChannel(shared_ptr<JoinFabricChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinFabricChannelWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Baas20181221::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Baas20181221::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ResetAntChainCertificateResponse Alibabacloud_Baas20181221::Client::resetAntChainCertificateWithOptions(shared_ptr<ResetAntChainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAntChainCertificate"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAntChainCertificateResponse(callApi(params, req, runtime));
}

ResetAntChainCertificateResponse Alibabacloud_Baas20181221::Client::resetAntChainCertificate(shared_ptr<ResetAntChainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAntChainCertificateWithOptions(request, runtime);
}

ResetAntChainUserCertificateResponse Alibabacloud_Baas20181221::Client::resetAntChainUserCertificateWithOptions(shared_ptr<ResetAntChainUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAntChainUserCertificate"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAntChainUserCertificateResponse(callApi(params, req, runtime));
}

ResetAntChainUserCertificateResponse Alibabacloud_Baas20181221::Client::resetAntChainUserCertificate(shared_ptr<ResetAntChainUserCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAntChainUserCertificateWithOptions(request, runtime);
}

ResetFabricOrganizationUserPasswordResponse Alibabacloud_Baas20181221::Client::resetFabricOrganizationUserPasswordWithOptions(shared_ptr<ResetFabricOrganizationUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetFabricOrganizationUserPassword"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetFabricOrganizationUserPasswordResponse(callApi(params, req, runtime));
}

ResetFabricOrganizationUserPasswordResponse Alibabacloud_Baas20181221::Client::resetFabricOrganizationUserPassword(shared_ptr<ResetFabricOrganizationUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetFabricOrganizationUserPasswordWithOptions(request, runtime);
}

SubmitFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::submitFabricChaincodeDefinitionWithOptions(shared_ptr<SubmitFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodePackageId)) {
    body->insert(pair<string, string>("ChaincodePackageId", *request->chaincodePackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeVersion)) {
    body->insert(pair<string, string>("ChaincodeVersion", *request->chaincodeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionConfig)) {
    body->insert(pair<string, string>("CollectionConfig", *request->collectionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endorsePolicy)) {
    body->insert(pair<string, string>("EndorsePolicy", *request->endorsePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initRequired)) {
    body->insert(pair<string, bool>("InitRequired", *request->initRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitFabricChaincodeDefinition"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitFabricChaincodeDefinitionResponse(callApi(params, req, runtime));
}

SubmitFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::submitFabricChaincodeDefinition(shared_ptr<SubmitFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFabricChaincodeDefinitionWithOptions(request, runtime);
}

SynchronizeFabricChaincodeResponse Alibabacloud_Baas20181221::Client::synchronizeFabricChaincodeWithOptions(shared_ptr<SynchronizeFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SynchronizeFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SynchronizeFabricChaincodeResponse(callApi(params, req, runtime));
}

SynchronizeFabricChaincodeResponse Alibabacloud_Baas20181221::Client::synchronizeFabricChaincode(shared_ptr<SynchronizeFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeFabricChaincodeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Baas20181221::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Baas20181221::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnfreezeAntChainAccountResponse Alibabacloud_Baas20181221::Client::unfreezeAntChainAccountWithOptions(shared_ptr<UnfreezeAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnfreezeAntChainAccount"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnfreezeAntChainAccountResponse(callApi(params, req, runtime));
}

UnfreezeAntChainAccountResponse Alibabacloud_Baas20181221::Client::unfreezeAntChainAccount(shared_ptr<UnfreezeAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unfreezeAntChainAccountWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Baas20181221::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Baas20181221::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAntChainResponse Alibabacloud_Baas20181221::Client::updateAntChainWithOptions(shared_ptr<UpdateAntChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainName)) {
    body->insert(pair<string, string>("AntChainName", *request->antChainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChain"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainResponse(callApi(params, req, runtime));
}

UpdateAntChainResponse Alibabacloud_Baas20181221::Client::updateAntChain(shared_ptr<UpdateAntChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainWithOptions(request, runtime);
}

UpdateAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::updateAntChainConsortiumWithOptions(shared_ptr<UpdateAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumDescription)) {
    body->insert(pair<string, string>("ConsortiumDescription", *request->consortiumDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumName)) {
    body->insert(pair<string, string>("ConsortiumName", *request->consortiumName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChainConsortium"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainConsortiumResponse(callApi(params, req, runtime));
}

UpdateAntChainConsortiumResponse Alibabacloud_Baas20181221::Client::updateAntChainConsortium(shared_ptr<UpdateAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainConsortiumWithOptions(request, runtime);
}

UpdateAntChainContractContentResponse Alibabacloud_Baas20181221::Client::updateAntChainContractContentWithOptions(shared_ptr<UpdateAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentId)) {
    body->insert(pair<string, string>("ContentId", *request->contentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentName)) {
    body->insert(pair<string, string>("ContentName", *request->contentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentContentId)) {
    body->insert(pair<string, string>("ParentContentId", *request->parentContentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChainContractContent"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainContractContentResponse(callApi(params, req, runtime));
}

UpdateAntChainContractContentResponse Alibabacloud_Baas20181221::Client::updateAntChainContractContent(shared_ptr<UpdateAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainContractContentWithOptions(request, runtime);
}

UpdateAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::updateAntChainContractProjectWithOptions(shared_ptr<UpdateAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectDescription)) {
    body->insert(pair<string, string>("ProjectDescription", *request->projectDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectVersion)) {
    body->insert(pair<string, string>("ProjectVersion", *request->projectVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChainContractProject"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainContractProjectResponse(callApi(params, req, runtime));
}

UpdateAntChainContractProjectResponse Alibabacloud_Baas20181221::Client::updateAntChainContractProject(shared_ptr<UpdateAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainContractProjectWithOptions(request, runtime);
}

UpdateAntChainMemberResponse Alibabacloud_Baas20181221::Client::updateAntChainMemberWithOptions(shared_ptr<UpdateAntChainMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    body->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberName)) {
    body->insert(pair<string, string>("MemberName", *request->memberName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChainMember"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainMemberResponse(callApi(params, req, runtime));
}

UpdateAntChainMemberResponse Alibabacloud_Baas20181221::Client::updateAntChainMember(shared_ptr<UpdateAntChainMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainMemberWithOptions(request, runtime);
}

UpdateAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20181221::Client::updateAntChainQRCodeAuthorizationWithOptions(shared_ptr<UpdateAntChainQRCodeAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationType)) {
    body->insert(pair<string, string>("AuthorizationType", *request->authorizationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->QRCodeType)) {
    body->insert(pair<string, string>("QRCodeType", *request->QRCodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAntChainQRCodeAuthorization"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAntChainQRCodeAuthorizationResponse(callApi(params, req, runtime));
}

UpdateAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20181221::Client::updateAntChainQRCodeAuthorization(shared_ptr<UpdateAntChainQRCodeAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainQRCodeAuthorizationWithOptions(request, runtime);
}

UpgradeFabricChaincodeResponse Alibabacloud_Baas20181221::Client::upgradeFabricChaincodeWithOptions(shared_ptr<UpgradeFabricChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionConfig)) {
    body->insert(pair<string, string>("CollectionConfig", *request->collectionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endorsePolicy)) {
    body->insert(pair<string, string>("EndorsePolicy", *request->endorsePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeFabricChaincode"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeFabricChaincodeResponse(callApi(params, req, runtime));
}

UpgradeFabricChaincodeResponse Alibabacloud_Baas20181221::Client::upgradeFabricChaincode(shared_ptr<UpgradeFabricChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeFabricChaincodeWithOptions(request, runtime);
}

UpgradeFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::upgradeFabricChaincodeDefinitionWithOptions(shared_ptr<UpgradeFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodePackageId)) {
    body->insert(pair<string, string>("ChaincodePackageId", *request->chaincodePackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeVersion)) {
    body->insert(pair<string, string>("ChaincodeVersion", *request->chaincodeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->collectionConfig)) {
    body->insert(pair<string, string>("CollectionConfig", *request->collectionConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endorsePolicy)) {
    body->insert(pair<string, string>("EndorsePolicy", *request->endorsePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initRequired)) {
    body->insert(pair<string, bool>("InitRequired", *request->initRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeFabricChaincodeDefinition"))},
    {"version", boost::any(string("2018-12-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeFabricChaincodeDefinitionResponse(callApi(params, req, runtime));
}

UpgradeFabricChaincodeDefinitionResponse Alibabacloud_Baas20181221::Client::upgradeFabricChaincodeDefinition(shared_ptr<UpgradeFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeFabricChaincodeDefinitionWithOptions(request, runtime);
}

