// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/baas_20180731.hpp>
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

using namespace Alibabacloud_Baas20180731;

Alibabacloud_Baas20180731::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
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

string Alibabacloud_Baas20180731::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptEthereumInvitationResponse Alibabacloud_Baas20180731::Client::acceptEthereumInvitationWithOptions(shared_ptr<AcceptEthereumInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptEthereumInvitation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptEthereumInvitationResponse(callApi(params, req, runtime));
}

AcceptEthereumInvitationResponse Alibabacloud_Baas20180731::Client::acceptEthereumInvitation(shared_ptr<AcceptEthereumInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptEthereumInvitationWithOptions(request, runtime);
}

AcceptInvitationResponse Alibabacloud_Baas20180731::Client::acceptInvitationWithOptions(shared_ptr<AcceptInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("AcceptInvitation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptInvitationResponse(callApi(params, req, runtime));
}

AcceptInvitationResponse Alibabacloud_Baas20180731::Client::acceptInvitation(shared_ptr<AcceptInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptInvitationWithOptions(request, runtime);
}

AddAntChainSubnetMemberCheckResponse Alibabacloud_Baas20180731::Client::addAntChainSubnetMemberCheckWithOptions(shared_ptr<AddAntChainSubnetMemberCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("AddAntChainSubnetMemberCheck"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAntChainSubnetMemberCheckResponse(callApi(params, req, runtime));
}

AddAntChainSubnetMemberCheckResponse Alibabacloud_Baas20180731::Client::addAntChainSubnetMemberCheck(shared_ptr<AddAntChainSubnetMemberCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAntChainSubnetMemberCheckWithOptions(request, runtime);
}

AddAntChainSubnetNodeCheckResponse Alibabacloud_Baas20180731::Client::addAntChainSubnetNodeCheckWithOptions(shared_ptr<AddAntChainSubnetNodeCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("AddAntChainSubnetNodeCheck"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAntChainSubnetNodeCheckResponse(callApi(params, req, runtime));
}

AddAntChainSubnetNodeCheckResponse Alibabacloud_Baas20180731::Client::addAntChainSubnetNodeCheck(shared_ptr<AddAntChainSubnetNodeCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAntChainSubnetNodeCheckWithOptions(request, runtime);
}

AddEthereumNodeResponse Alibabacloud_Baas20180731::Client::addEthereumNodeWithOptions(shared_ptr<AddEthereumNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->externalNode)) {
    body->insert(pair<string, bool>("ExternalNode", *request->externalNode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEthereumNode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEthereumNodeResponse(callApi(params, req, runtime));
}

AddEthereumNodeResponse Alibabacloud_Baas20180731::Client::addEthereumNode(shared_ptr<AddEthereumNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEthereumNodeWithOptions(request, runtime);
}

AddFabricExternalOrganizationToChannelResponse Alibabacloud_Baas20180731::Client::addFabricExternalOrganizationToChannelWithOptions(shared_ptr<AddFabricExternalOrganizationToChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->joinRequest)) {
    body->insert(pair<string, string>("JoinRequest", *request->joinRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFabricExternalOrganizationToChannel"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFabricExternalOrganizationToChannelResponse(callApi(params, req, runtime));
}

AddFabricExternalOrganizationToChannelResponse Alibabacloud_Baas20180731::Client::addFabricExternalOrganizationToChannel(shared_ptr<AddFabricExternalOrganizationToChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFabricExternalOrganizationToChannelWithOptions(request, runtime);
}

AddFabricOrganizationToExternalChannelResponse Alibabacloud_Baas20180731::Client::addFabricOrganizationToExternalChannelWithOptions(shared_ptr<AddFabricOrganizationToExternalChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->joinResponse)) {
    body->insert(pair<string, string>("JoinResponse", *request->joinResponse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFabricOrganizationToExternalChannel"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFabricOrganizationToExternalChannelResponse(callApi(params, req, runtime));
}

AddFabricOrganizationToExternalChannelResponse Alibabacloud_Baas20180731::Client::addFabricOrganizationToExternalChannel(shared_ptr<AddFabricOrganizationToExternalChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFabricOrganizationToExternalChannelWithOptions(request, runtime);
}

ApplyAntChainResponse Alibabacloud_Baas20180731::Client::applyAntChainWithOptions(shared_ptr<ApplyAntChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadReq)) {
    body->insert(pair<string, string>("UploadReq", *request->uploadReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAntChain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAntChainResponse(callApi(params, req, runtime));
}

ApplyAntChainResponse Alibabacloud_Baas20180731::Client::applyAntChain(shared_ptr<ApplyAntChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainWithOptions(request, runtime);
}

ApplyAntChainCertificateResponse Alibabacloud_Baas20180731::Client::applyAntChainCertificateWithOptions(shared_ptr<ApplyAntChainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

ApplyAntChainCertificateResponse Alibabacloud_Baas20180731::Client::applyAntChainCertificate(shared_ptr<ApplyAntChainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainCertificateWithOptions(request, runtime);
}

ApplyAntChainCertificateWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyAntChainCertificateWithKeyAutoCreationWithOptions(shared_ptr<ApplyAntChainCertificateWithKeyAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

ApplyAntChainCertificateWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyAntChainCertificateWithKeyAutoCreation(shared_ptr<ApplyAntChainCertificateWithKeyAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainCertificateWithKeyAutoCreationWithOptions(request, runtime);
}

ApplyAntChainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyAntChainWithKeyAutoCreationWithOptions(shared_ptr<ApplyAntChainWithKeyAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ApplyAntChainWithKeyAutoCreation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAntChainWithKeyAutoCreationResponse(callApi(params, req, runtime));
}

ApplyAntChainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyAntChainWithKeyAutoCreation(shared_ptr<ApplyAntChainWithKeyAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAntChainWithKeyAutoCreationWithOptions(request, runtime);
}

ApplyBlockchainResponse Alibabacloud_Baas20180731::Client::applyBlockchainWithOptions(shared_ptr<ApplyBlockchainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchain)) {
    body->insert(pair<string, string>("Blockchain", *request->blockchain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadReq)) {
    body->insert(pair<string, string>("UploadReq", *request->uploadReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyBlockchain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyBlockchainResponse(callApi(params, req, runtime));
}

ApplyBlockchainResponse Alibabacloud_Baas20180731::Client::applyBlockchain(shared_ptr<ApplyBlockchainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyBlockchainWithOptions(request, runtime);
}

ApplyBlockchainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyBlockchainWithKeyAutoCreationWithOptions(shared_ptr<ApplyBlockchainWithKeyAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    body->insert(pair<string, string>("CommonName", *request->commonName));
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
    {"action", boost::any(string("ApplyBlockchainWithKeyAutoCreation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyBlockchainWithKeyAutoCreationResponse(callApi(params, req, runtime));
}

ApplyBlockchainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyBlockchainWithKeyAutoCreation(shared_ptr<ApplyBlockchainWithKeyAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyBlockchainWithKeyAutoCreationWithOptions(request, runtime);
}

ApplyPublicAntChainResponse Alibabacloud_Baas20180731::Client::applyPublicAntChainWithOptions(shared_ptr<ApplyPublicAntChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadReq)) {
    body->insert(pair<string, string>("UploadReq", *request->uploadReq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyPublicAntChain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyPublicAntChainResponse(callApi(params, req, runtime));
}

ApplyPublicAntChainResponse Alibabacloud_Baas20180731::Client::applyPublicAntChain(shared_ptr<ApplyPublicAntChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyPublicAntChainWithOptions(request, runtime);
}

ApplyPublicAntChainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyPublicAntChainWithKeyAutoCreationWithOptions(shared_ptr<ApplyPublicAntChainWithKeyAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonName)) {
    body->insert(pair<string, string>("CommonName", *request->commonName));
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
    {"action", boost::any(string("ApplyPublicAntChainWithKeyAutoCreation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyPublicAntChainWithKeyAutoCreationResponse(callApi(params, req, runtime));
}

ApplyPublicAntChainWithKeyAutoCreationResponse Alibabacloud_Baas20180731::Client::applyPublicAntChainWithKeyAutoCreation(shared_ptr<ApplyPublicAntChainWithKeyAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyPublicAntChainWithKeyAutoCreationWithOptions(request, runtime);
}

ApproveEthereumInviteeResponse Alibabacloud_Baas20180731::Client::approveEthereumInviteeWithOptions(shared_ptr<ApproveEthereumInviteeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApproveEthereumInviteeRequestInvitee>>(request->invitee)) {
    body->insert(pair<string, vector<ApproveEthereumInviteeRequestInvitee>>("Invitee", *request->invitee));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveEthereumInvitee"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApproveEthereumInviteeResponse(callApi(params, req, runtime));
}

ApproveEthereumInviteeResponse Alibabacloud_Baas20180731::Client::approveEthereumInvitee(shared_ptr<ApproveEthereumInviteeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveEthereumInviteeWithOptions(request, runtime);
}

ApproveFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::approveFabricChaincodeDefinitionWithOptions(shared_ptr<ApproveFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

ApproveFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::approveFabricChaincodeDefinition(shared_ptr<ApproveFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveFabricChaincodeDefinitionWithOptions(request, runtime);
}

BatchAddAntChainMiniAppQRCodeAuthorizedUsersResponse Alibabacloud_Baas20180731::Client::batchAddAntChainMiniAppQRCodeAuthorizedUsersWithOptions(shared_ptr<BatchAddAntChainMiniAppQRCodeAuthorizedUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

BatchAddAntChainMiniAppQRCodeAuthorizedUsersResponse Alibabacloud_Baas20180731::Client::batchAddAntChainMiniAppQRCodeAuthorizedUsers(shared_ptr<BatchAddAntChainMiniAppQRCodeAuthorizedUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddAntChainMiniAppQRCodeAuthorizedUsersWithOptions(request, runtime);
}

BindFabricManagementChaincodeResponse Alibabacloud_Baas20180731::Client::bindFabricManagementChaincodeWithOptions(shared_ptr<BindFabricManagementChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindFabricManagementChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindFabricManagementChaincodeResponse(callApi(params, req, runtime));
}

BindFabricManagementChaincodeResponse Alibabacloud_Baas20180731::Client::bindFabricManagementChaincode(shared_ptr<BindFabricManagementChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindFabricManagementChaincodeWithOptions(request, runtime);
}

CheckConsortiumDomainResponse Alibabacloud_Baas20180731::Client::checkConsortiumDomainWithOptions(shared_ptr<CheckConsortiumDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainCode)) {
    body->insert(pair<string, string>("DomainCode", *request->domainCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckConsortiumDomain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckConsortiumDomainResponse(callApi(params, req, runtime));
}

CheckConsortiumDomainResponse Alibabacloud_Baas20180731::Client::checkConsortiumDomain(shared_ptr<CheckConsortiumDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkConsortiumDomainWithOptions(request, runtime);
}

CheckOrganizationDomainResponse Alibabacloud_Baas20180731::Client::checkOrganizationDomainWithOptions(shared_ptr<CheckOrganizationDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("CheckOrganizationDomain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckOrganizationDomainResponse(callApi(params, req, runtime));
}

CheckOrganizationDomainResponse Alibabacloud_Baas20180731::Client::checkOrganizationDomain(shared_ptr<CheckOrganizationDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkOrganizationDomainWithOptions(request, runtime);
}

ConfirmConsortiumMemberResponse Alibabacloud_Baas20180731::Client::confirmConsortiumMemberWithOptions(shared_ptr<ConfirmConsortiumMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ConfirmConsortiumMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<ConfirmConsortiumMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmConsortiumMember"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmConsortiumMemberResponse(callApi(params, req, runtime));
}

ConfirmConsortiumMemberResponse Alibabacloud_Baas20180731::Client::confirmConsortiumMember(shared_ptr<ConfirmConsortiumMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmConsortiumMemberWithOptions(request, runtime);
}

CopyAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::copyAntChainContractProjectWithOptions(shared_ptr<CopyAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CopyAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::copyAntChainContractProject(shared_ptr<CopyAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyAntChainContractProjectWithOptions(request, runtime);
}

CreateAccessTokenResponse Alibabacloud_Baas20180731::Client::createAccessTokenWithOptions(shared_ptr<CreateAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessTokenLifetime)) {
    body->insert(pair<string, string>("AccessTokenLifetime", *request->accessTokenLifetime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshTokenLifetime)) {
    body->insert(pair<string, string>("RefreshTokenLifetime", *request->refreshTokenLifetime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessToken"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessTokenResponse(callApi(params, req, runtime));
}

CreateAccessTokenResponse Alibabacloud_Baas20180731::Client::createAccessToken(shared_ptr<CreateAccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessTokenWithOptions(request, runtime);
}

CreateAccountResponse Alibabacloud_Baas20180731::Client::createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccount"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccountResponse(callApi(params, req, runtime));
}

CreateAccountResponse Alibabacloud_Baas20180731::Client::createAccount(shared_ptr<CreateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithOptions(request, runtime);
}

CreateAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createAccountWithKeyPairAutoCreationWithOptions(shared_ptr<CreateAccountWithKeyPairAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccountWithKeyPairAutoCreation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccountWithKeyPairAutoCreationResponse(callApi(params, req, runtime));
}

CreateAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createAccountWithKeyPairAutoCreation(shared_ptr<CreateAccountWithKeyPairAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccountWithKeyPairAutoCreationWithOptions(request, runtime);
}

CreateAntChainResponse Alibabacloud_Baas20180731::Client::createAntChainWithOptions(shared_ptr<CreateAntChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainName)) {
    body->insert(pair<string, string>("AntChainName", *request->antChainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchainRegionId)) {
    body->insert(pair<string, string>("BlockchainRegionId", *request->blockchainRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cipherSuit)) {
    body->insert(pair<string, string>("CipherSuit", *request->cipherSuit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveTime)) {
    body->insert(pair<string, long>("LiveTime", *request->liveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merkleTreeSuit)) {
    body->insert(pair<string, string>("MerkleTreeSuit", *request->merkleTreeSuit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeNum)) {
    body->insert(pair<string, long>("NodeNum", *request->nodeNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceSize)) {
    body->insert(pair<string, long>("ResourceSize", *request->resourceSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsAlgo)) {
    body->insert(pair<string, string>("TlsAlgo", *request->tlsAlgo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAntChain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAntChainResponse(callApi(params, req, runtime));
}

CreateAntChainResponse Alibabacloud_Baas20180731::Client::createAntChain(shared_ptr<CreateAntChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainWithOptions(request, runtime);
}

CreateAntChainAccountResponse Alibabacloud_Baas20180731::Client::createAntChainAccountWithOptions(shared_ptr<CreateAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CreateAntChainAccountResponse Alibabacloud_Baas20180731::Client::createAntChainAccount(shared_ptr<CreateAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainAccountWithOptions(request, runtime);
}

CreateAntChainAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createAntChainAccountWithKeyPairAutoCreationWithOptions(shared_ptr<CreateAntChainAccountWithKeyPairAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CreateAntChainAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createAntChainAccountWithKeyPairAutoCreation(shared_ptr<CreateAntChainAccountWithKeyPairAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainAccountWithKeyPairAutoCreationWithOptions(request, runtime);
}

CreateAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::createAntChainConsortiumWithOptions(shared_ptr<CreateAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CreateAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::createAntChainConsortium(shared_ptr<CreateAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainConsortiumWithOptions(request, runtime);
}

CreateAntChainContractContentResponse Alibabacloud_Baas20180731::Client::createAntChainContractContentWithOptions(shared_ptr<CreateAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CreateAntChainContractContentResponse Alibabacloud_Baas20180731::Client::createAntChainContractContent(shared_ptr<CreateAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainContractContentWithOptions(request, runtime);
}

CreateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::createAntChainContractProjectWithOptions(shared_ptr<CreateAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

CreateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::createAntChainContractProject(shared_ptr<CreateAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAntChainContractProjectWithOptions(request, runtime);
}

CreateBlockchainResponse Alibabacloud_Baas20180731::Client::createBlockchainWithOptions(shared_ptr<CreateBlockchainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchainRegionId)) {
    body->insert(pair<string, string>("BlockchainRegionId", *request->blockchainRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchainType)) {
    body->insert(pair<string, string>("BlockchainType", *request->blockchainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cipherSuit)) {
    body->insert(pair<string, string>("CipherSuit", *request->cipherSuit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveTime)) {
    body->insert(pair<string, long>("LiveTime", *request->liveTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->machineNum)) {
    body->insert(pair<string, long>("MachineNum", *request->machineNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merkleTreeSuit)) {
    body->insert(pair<string, string>("MerkleTreeSuit", *request->merkleTreeSuit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsAlgo)) {
    body->insert(pair<string, string>("TlsAlgo", *request->tlsAlgo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBlockchain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBlockchainResponse(callApi(params, req, runtime));
}

CreateBlockchainResponse Alibabacloud_Baas20180731::Client::createBlockchain(shared_ptr<CreateBlockchainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBlockchainWithOptions(request, runtime);
}

CreateBlockchainApplicationResponse Alibabacloud_Baas20180731::Client::createBlockchainApplicationWithOptions(shared_ptr<CreateBlockchainApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchainRegionId)) {
    body->insert(pair<string, string>("BlockchainRegionId", *request->blockchainRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockchainType)) {
    body->insert(pair<string, string>("BlockchainType", *request->blockchainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cipherSuit)) {
    body->insert(pair<string, string>("CipherSuit", *request->cipherSuit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveTime)) {
    body->insert(pair<string, long>("LiveTime", *request->liveTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->machineNum)) {
    body->insert(pair<string, long>("MachineNum", *request->machineNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merkleTreeSuit)) {
    body->insert(pair<string, string>("MerkleTreeSuit", *request->merkleTreeSuit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tlsAlgo)) {
    body->insert(pair<string, string>("TlsAlgo", *request->tlsAlgo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBlockchainApplication"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBlockchainApplicationResponse(callApi(params, req, runtime));
}

CreateBlockchainApplicationResponse Alibabacloud_Baas20180731::Client::createBlockchainApplication(shared_ptr<CreateBlockchainApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBlockchainApplicationWithOptions(request, runtime);
}

CreateBlockchainApplyResponse Alibabacloud_Baas20180731::Client::createBlockchainApplyWithOptions(shared_ptr<CreateBlockchainApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveTime)) {
    body->insert(pair<string, long>("LiveTime", *request->liveTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->machineNum)) {
    body->insert(pair<string, long>("MachineNum", *request->machineNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBlockchainApply"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBlockchainApplyResponse(callApi(params, req, runtime));
}

CreateBlockchainApplyResponse Alibabacloud_Baas20180731::Client::createBlockchainApply(shared_ptr<CreateBlockchainApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBlockchainApplyWithOptions(request, runtime);
}

CreateChaincodeResponse Alibabacloud_Baas20180731::Client::createChaincodeWithOptions(shared_ptr<CreateChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("CreateChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChaincodeResponse(callApi(params, req, runtime));
}

CreateChaincodeResponse Alibabacloud_Baas20180731::Client::createChaincode(shared_ptr<CreateChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChaincodeWithOptions(request, runtime);
}

CreateChannelResponse Alibabacloud_Baas20180731::Client::createChannelWithOptions(shared_ptr<CreateChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateChannelRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateChannelRequestOrganization>>("Organization", *request->organization));
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
    {"action", boost::any(string("CreateChannel"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChannelResponse(callApi(params, req, runtime));
}

CreateChannelResponse Alibabacloud_Baas20180731::Client::createChannel(shared_ptr<CreateChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChannelWithOptions(request, runtime);
}

CreateChannelMemberResponse Alibabacloud_Baas20180731::Client::createChannelMemberWithOptions(shared_ptr<CreateChannelMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateChannelMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateChannelMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChannelMember"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChannelMemberResponse(callApi(params, req, runtime));
}

CreateChannelMemberResponse Alibabacloud_Baas20180731::Client::createChannelMember(shared_ptr<CreateChannelMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChannelMemberWithOptions(request, runtime);
}

CreateCloudIntegrationServiceTokenResponse Alibabacloud_Baas20180731::Client::createCloudIntegrationServiceTokenWithOptions(shared_ptr<CreateCloudIntegrationServiceTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudIntegrationServiceToken"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudIntegrationServiceTokenResponse(callApi(params, req, runtime));
}

CreateCloudIntegrationServiceTokenResponse Alibabacloud_Baas20180731::Client::createCloudIntegrationServiceToken(shared_ptr<CreateCloudIntegrationServiceTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudIntegrationServiceTokenWithOptions(request, runtime);
}

CreateCloudServiceIntegrationResponse Alibabacloud_Baas20180731::Client::createCloudServiceIntegrationWithOptions(shared_ptr<CreateCloudServiceIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudServiceIntegration"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudServiceIntegrationResponse(callApi(params, req, runtime));
}

CreateCloudServiceIntegrationResponse Alibabacloud_Baas20180731::Client::createCloudServiceIntegration(shared_ptr<CreateCloudServiceIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudServiceIntegrationWithOptions(request, runtime);
}

CreateCloudServiceSessionResponse Alibabacloud_Baas20180731::Client::createCloudServiceSessionWithOptions(shared_ptr<CreateCloudServiceSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCloudServiceSession"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCloudServiceSessionResponse(callApi(params, req, runtime));
}

CreateCloudServiceSessionResponse Alibabacloud_Baas20180731::Client::createCloudServiceSession(shared_ptr<CreateCloudServiceSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCloudServiceSessionWithOptions(request, runtime);
}

CreateConsortiumResponse Alibabacloud_Baas20180731::Client::createConsortiumWithOptions(shared_ptr<CreateConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPolicy)) {
    body->insert(pair<string, string>("ChannelPolicy", *request->channelPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorVersion)) {
    body->insert(pair<string, string>("MajorVersion", *request->majorVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ordererType)) {
    body->insert(pair<string, string>("OrdererType", *request->ordererType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderersCount)) {
    body->insert(pair<string, long>("OrderersCount", *request->orderersCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateConsortiumRequestOrganization>>(request->organization)) {
    body->insert(pair<string, vector<CreateConsortiumRequestOrganization>>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->peersCount)) {
    body->insert(pair<string, long>("PeersCount", *request->peersCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    body->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
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
    {"action", boost::any(string("CreateConsortium"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsortiumResponse(callApi(params, req, runtime));
}

CreateConsortiumResponse Alibabacloud_Baas20180731::Client::createConsortium(shared_ptr<CreateConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsortiumWithOptions(request, runtime);
}

CreateConsortiumMemberResponse Alibabacloud_Baas20180731::Client::createConsortiumMemberWithOptions(shared_ptr<CreateConsortiumMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateConsortiumMemberRequestOrganization>>(request->organization)) {
    query->insert(pair<string, vector<CreateConsortiumMemberRequestOrganization>>("Organization", *request->organization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsortiumMember"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsortiumMemberResponse(callApi(params, req, runtime));
}

CreateConsortiumMemberResponse Alibabacloud_Baas20180731::Client::createConsortiumMember(shared_ptr<CreateConsortiumMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsortiumMemberWithOptions(request, runtime);
}

CreateEcosphereResponse Alibabacloud_Baas20180731::Client::createEcosphereWithOptions(shared_ptr<CreateEcosphereRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelPolicy)) {
    body->insert(pair<string, string>("ChannelPolicy", *request->channelPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumName)) {
    body->insert(pair<string, string>("ConsortiumName", *request->consortiumName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorVersion)) {
    body->insert(pair<string, string>("MajorVersion", *request->majorVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ordererDomain)) {
    body->insert(pair<string, string>("OrdererDomain", *request->ordererDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ordererType)) {
    body->insert(pair<string, string>("OrdererType", *request->ordererType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderersCount)) {
    body->insert(pair<string, long>("OrderersCount", *request->orderersCount));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEcosphereRequestOrganization>>(request->organization)) {
    body->insert(pair<string, vector<CreateEcosphereRequestOrganization>>("Organization", *request->organization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->peersCount)) {
    body->insert(pair<string, long>("PeersCount", *request->peersCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    body->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
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
    {"action", boost::any(string("CreateEcosphere"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEcosphereResponse(callApi(params, req, runtime));
}

CreateEcosphereResponse Alibabacloud_Baas20180731::Client::createEcosphere(shared_ptr<CreateEcosphereRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEcosphereWithOptions(request, runtime);
}

CreateEthereumResponse Alibabacloud_Baas20180731::Client::createEthereumWithOptions(shared_ptr<CreateEthereumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consensus)) {
    body->insert(pair<string, string>("Consensus", *request->consensus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->difficulty)) {
    body->insert(pair<string, string>("Difficulty", *request->difficulty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gas)) {
    body->insert(pair<string, string>("Gas", *request->gas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkId)) {
    body->insert(pair<string, string>("NetworkId", *request->networkId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEthereumRequestNode>>(request->node)) {
    body->insert(pair<string, vector<CreateEthereumRequestNode>>("Node", *request->node));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEthereum"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEthereumResponse(callApi(params, req, runtime));
}

CreateEthereumResponse Alibabacloud_Baas20180731::Client::createEthereum(shared_ptr<CreateEthereumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEthereumWithOptions(request, runtime);
}

CreateEthereumInvitationResponse Alibabacloud_Baas20180731::Client::createEthereumInvitationWithOptions(shared_ptr<CreateEthereumInvitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEthereumInvitation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEthereumInvitationResponse(callApi(params, req, runtime));
}

CreateEthereumInvitationResponse Alibabacloud_Baas20180731::Client::createEthereumInvitation(shared_ptr<CreateEthereumInvitationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEthereumInvitationWithOptions(request, runtime);
}

CreateFabricChaincodePackageResponse Alibabacloud_Baas20180731::Client::createFabricChaincodePackageWithOptions(shared_ptr<CreateFabricChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("CreateFabricChaincodePackage"))},
    {"version", boost::any(string("2018-07-31"))},
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

CreateFabricChaincodePackageResponse Alibabacloud_Baas20180731::Client::createFabricChaincodePackage(shared_ptr<CreateFabricChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFabricChaincodePackageWithOptions(request, runtime);
}

CreateOrganizationResponse Alibabacloud_Baas20180731::Client::createOrganizationWithOptions(shared_ptr<CreateOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->peersCount)) {
    query->insert(pair<string, long>("PeersCount", *request->peersCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specName)) {
    query->insert(pair<string, string>("SpecName", *request->specName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->majorVersion)) {
    body->insert(pair<string, string>("MajorVersion", *request->majorVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrganization"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrganizationResponse(callApi(params, req, runtime));
}

CreateOrganizationResponse Alibabacloud_Baas20180731::Client::createOrganization(shared_ptr<CreateOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrganizationWithOptions(request, runtime);
}

CreateOrganizationUserResponse Alibabacloud_Baas20180731::Client::createOrganizationUserWithOptions(shared_ptr<CreateOrganizationUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("CreateOrganizationUser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrganizationUserResponse(callApi(params, req, runtime));
}

CreateOrganizationUserResponse Alibabacloud_Baas20180731::Client::createOrganizationUser(shared_ptr<CreateOrganizationUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrganizationUserWithOptions(request, runtime);
}

CreateOwnAccountResponse Alibabacloud_Baas20180731::Client::createOwnAccountWithOptions(shared_ptr<CreateOwnAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identity)) {
    body->insert(pair<string, string>("Identity", *request->identity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKey)) {
    body->insert(pair<string, string>("PublicKey", *request->publicKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryKey)) {
    body->insert(pair<string, string>("RecoveryKey", *request->recoveryKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOwnAccount"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOwnAccountResponse(callApi(params, req, runtime));
}

CreateOwnAccountResponse Alibabacloud_Baas20180731::Client::createOwnAccount(shared_ptr<CreateOwnAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOwnAccountWithOptions(request, runtime);
}

CreatePublicAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createPublicAccountWithKeyPairAutoCreationWithOptions(shared_ptr<CreatePublicAccountWithKeyPairAutoCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
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
    {"action", boost::any(string("CreatePublicAccountWithKeyPairAutoCreation"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePublicAccountWithKeyPairAutoCreationResponse(callApi(params, req, runtime));
}

CreatePublicAccountWithKeyPairAutoCreationResponse Alibabacloud_Baas20180731::Client::createPublicAccountWithKeyPairAutoCreation(shared_ptr<CreatePublicAccountWithKeyPairAutoCreationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPublicAccountWithKeyPairAutoCreationWithOptions(request, runtime);
}

CreatePublicAntChainAccountResponse Alibabacloud_Baas20180731::Client::createPublicAntChainAccountWithOptions(shared_ptr<CreatePublicAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePublicAntChainAccount"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePublicAntChainAccountResponse(callApi(params, req, runtime));
}

CreatePublicAntChainAccountResponse Alibabacloud_Baas20180731::Client::createPublicAntChainAccount(shared_ptr<CreatePublicAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPublicAntChainAccountWithOptions(request, runtime);
}

CreateSmartContractJobResponse Alibabacloud_Baas20180731::Client::createSmartContractJobWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSmartContractJob"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSmartContractJobResponse(callApi(params, req, runtime));
}

CreateSmartContractJobResponse Alibabacloud_Baas20180731::Client::createSmartContractJob() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSmartContractJobWithOptions(runtime);
}

CreateTriggerResponse Alibabacloud_Baas20180731::Client::createTriggerWithOptions(shared_ptr<CreateTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
}

CreateTriggerResponse Alibabacloud_Baas20180731::Client::createTrigger(shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTriggerWithOptions(request, runtime);
}

DeleteAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::deleteAntChainConsortiumWithOptions(shared_ptr<DeleteAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DeleteAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::deleteAntChainConsortium(shared_ptr<DeleteAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainConsortiumWithOptions(request, runtime);
}

DeleteAntChainContractContentResponse Alibabacloud_Baas20180731::Client::deleteAntChainContractContentWithOptions(shared_ptr<DeleteAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DeleteAntChainContractContentResponse Alibabacloud_Baas20180731::Client::deleteAntChainContractContent(shared_ptr<DeleteAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainContractContentWithOptions(request, runtime);
}

DeleteAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::deleteAntChainContractProjectWithOptions(shared_ptr<DeleteAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DeleteAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::deleteAntChainContractProject(shared_ptr<DeleteAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainContractProjectWithOptions(request, runtime);
}

DeleteAntChainMiniAppQRCodeAuthorizedUserResponse Alibabacloud_Baas20180731::Client::deleteAntChainMiniAppQRCodeAuthorizedUserWithOptions(shared_ptr<DeleteAntChainMiniAppQRCodeAuthorizedUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DeleteAntChainMiniAppQRCodeAuthorizedUserResponse Alibabacloud_Baas20180731::Client::deleteAntChainMiniAppQRCodeAuthorizedUser(shared_ptr<DeleteAntChainMiniAppQRCodeAuthorizedUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAntChainMiniAppQRCodeAuthorizedUserWithOptions(request, runtime);
}

DeleteChaincodeResponse Alibabacloud_Baas20180731::Client::deleteChaincodeWithOptions(shared_ptr<DeleteChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChaincodeResponse(callApi(params, req, runtime));
}

DeleteChaincodeResponse Alibabacloud_Baas20180731::Client::deleteChaincode(shared_ptr<DeleteChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChaincodeWithOptions(request, runtime);
}

DeleteGovernanceTaskResponse Alibabacloud_Baas20180731::Client::deleteGovernanceTaskWithOptions(shared_ptr<DeleteGovernanceTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGovernanceTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGovernanceTaskResponse(callApi(params, req, runtime));
}

DeleteGovernanceTaskResponse Alibabacloud_Baas20180731::Client::deleteGovernanceTask(shared_ptr<DeleteGovernanceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGovernanceTaskWithOptions(request, runtime);
}

DeleteTriggerResponse Alibabacloud_Baas20180731::Client::deleteTriggerWithOptions(shared_ptr<DeleteTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_Baas20180731::Client::deleteTrigger(shared_ptr<DeleteTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTriggerWithOptions(request, runtime);
}

DescribeAntChainAccountsResponse Alibabacloud_Baas20180731::Client::describeAntChainAccountsWithOptions(shared_ptr<DescribeAntChainAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainAccountsResponse Alibabacloud_Baas20180731::Client::describeAntChainAccounts(shared_ptr<DescribeAntChainAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainAccountsWithOptions(request, runtime);
}

DescribeAntChainAccountsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainAccountsNewWithOptions(shared_ptr<DescribeAntChainAccountsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainAccountsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainAccountsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainAccountsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainAccountsNew(shared_ptr<DescribeAntChainAccountsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainAccountsNewWithOptions(request, runtime);
}

DescribeAntChainApplicationsResponse Alibabacloud_Baas20180731::Client::describeAntChainApplicationsWithOptions(shared_ptr<DescribeAntChainApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
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
    {"action", boost::any(string("DescribeAntChainApplications"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainApplicationsResponse(callApi(params, req, runtime));
}

DescribeAntChainApplicationsResponse Alibabacloud_Baas20180731::Client::describeAntChainApplications(shared_ptr<DescribeAntChainApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainApplicationsWithOptions(request, runtime);
}

DescribeAntChainBlockResponse Alibabacloud_Baas20180731::Client::describeAntChainBlockWithOptions(shared_ptr<DescribeAntChainBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainBlockResponse Alibabacloud_Baas20180731::Client::describeAntChainBlock(shared_ptr<DescribeAntChainBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainBlockWithOptions(request, runtime);
}

DescribeAntChainBlockNewResponse Alibabacloud_Baas20180731::Client::describeAntChainBlockNewWithOptions(shared_ptr<DescribeAntChainBlockNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainBlockNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainBlockNewResponse(callApi(params, req, runtime));
}

DescribeAntChainBlockNewResponse Alibabacloud_Baas20180731::Client::describeAntChainBlockNew(shared_ptr<DescribeAntChainBlockNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainBlockNewWithOptions(request, runtime);
}

DescribeAntChainCertificateApplicationsResponse Alibabacloud_Baas20180731::Client::describeAntChainCertificateApplicationsWithOptions(shared_ptr<DescribeAntChainCertificateApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainCertificateApplicationsResponse Alibabacloud_Baas20180731::Client::describeAntChainCertificateApplications(shared_ptr<DescribeAntChainCertificateApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainCertificateApplicationsWithOptions(request, runtime);
}

DescribeAntChainCertificateApplicationsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainCertificateApplicationsNewWithOptions(shared_ptr<DescribeAntChainCertificateApplicationsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainCertificateApplicationsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainCertificateApplicationsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainCertificateApplicationsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainCertificateApplicationsNew(shared_ptr<DescribeAntChainCertificateApplicationsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainCertificateApplicationsNewWithOptions(request, runtime);
}

DescribeAntChainConfigOptionsResponse Alibabacloud_Baas20180731::Client::describeAntChainConfigOptionsWithOptions(shared_ptr<DescribeAntChainConfigOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->purpose)) {
    query->insert(pair<string, string>("Purpose", *request->purpose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainConfigOptions"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainConfigOptionsResponse(callApi(params, req, runtime));
}

DescribeAntChainConfigOptionsResponse Alibabacloud_Baas20180731::Client::describeAntChainConfigOptions(shared_ptr<DescribeAntChainConfigOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainConfigOptionsWithOptions(request, runtime);
}

DescribeAntChainConsortiumsResponse Alibabacloud_Baas20180731::Client::describeAntChainConsortiumsWithOptions(shared_ptr<DescribeAntChainConsortiumsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainConsortiumsResponse Alibabacloud_Baas20180731::Client::describeAntChainConsortiums(shared_ptr<DescribeAntChainConsortiumsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainConsortiumsWithOptions(request, runtime);
}

DescribeAntChainConsortiumsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainConsortiumsNewWithOptions(shared_ptr<DescribeAntChainConsortiumsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainConsortiumsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainConsortiumsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainConsortiumsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainConsortiumsNew(shared_ptr<DescribeAntChainConsortiumsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainConsortiumsNewWithOptions(request, runtime);
}

DescribeAntChainContractProjectContentTreeResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectContentTreeWithOptions(shared_ptr<DescribeAntChainContractProjectContentTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainContractProjectContentTreeResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectContentTree(shared_ptr<DescribeAntChainContractProjectContentTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectContentTreeWithOptions(request, runtime);
}

DescribeAntChainContractProjectContentTreeNewResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectContentTreeNewWithOptions(shared_ptr<DescribeAntChainContractProjectContentTreeNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainContractProjectContentTreeNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectContentTreeNewResponse(callApi(params, req, runtime));
}

DescribeAntChainContractProjectContentTreeNewResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectContentTreeNew(shared_ptr<DescribeAntChainContractProjectContentTreeNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectContentTreeNewWithOptions(request, runtime);
}

DescribeAntChainContractProjectsResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectsWithOptions(shared_ptr<DescribeAntChainContractProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainContractProjectsResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjects(shared_ptr<DescribeAntChainContractProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectsWithOptions(request, runtime);
}

DescribeAntChainContractProjectsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectsNewWithOptions(shared_ptr<DescribeAntChainContractProjectsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainContractProjectsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainContractProjectsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainContractProjectsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainContractProjectsNew(shared_ptr<DescribeAntChainContractProjectsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainContractProjectsNewWithOptions(request, runtime);
}

DescribeAntChainDownloadPathsResponse Alibabacloud_Baas20180731::Client::describeAntChainDownloadPathsWithOptions(shared_ptr<DescribeAntChainDownloadPathsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainDownloadPathsResponse Alibabacloud_Baas20180731::Client::describeAntChainDownloadPaths(shared_ptr<DescribeAntChainDownloadPathsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainDownloadPathsWithOptions(request, runtime);
}

DescribeAntChainDownloadPathsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainDownloadPathsNewWithOptions(shared_ptr<DescribeAntChainDownloadPathsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainDownloadPathsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainDownloadPathsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainDownloadPathsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainDownloadPathsNew(shared_ptr<DescribeAntChainDownloadPathsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainDownloadPathsNewWithOptions(request, runtime);
}

DescribeAntChainInformationResponse Alibabacloud_Baas20180731::Client::describeAntChainInformationWithOptions(shared_ptr<DescribeAntChainInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainInformationResponse Alibabacloud_Baas20180731::Client::describeAntChainInformation(shared_ptr<DescribeAntChainInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainInformationWithOptions(request, runtime);
}

DescribeAntChainInformationNewResponse Alibabacloud_Baas20180731::Client::describeAntChainInformationNewWithOptions(shared_ptr<DescribeAntChainInformationNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainInformationNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainInformationNewResponse(callApi(params, req, runtime));
}

DescribeAntChainInformationNewResponse Alibabacloud_Baas20180731::Client::describeAntChainInformationNew(shared_ptr<DescribeAntChainInformationNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainInformationNewWithOptions(request, runtime);
}

DescribeAntChainLatestBlocksResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestBlocksWithOptions(shared_ptr<DescribeAntChainLatestBlocksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainLatestBlocksResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestBlocks(shared_ptr<DescribeAntChainLatestBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestBlocksWithOptions(request, runtime);
}

DescribeAntChainLatestBlocksNewResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestBlocksNewWithOptions(shared_ptr<DescribeAntChainLatestBlocksNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainLatestBlocksNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestBlocksNewResponse(callApi(params, req, runtime));
}

DescribeAntChainLatestBlocksNewResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestBlocksNew(shared_ptr<DescribeAntChainLatestBlocksNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestBlocksNewWithOptions(request, runtime);
}

DescribeAntChainLatestTransactionDigestsResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestTransactionDigestsWithOptions(shared_ptr<DescribeAntChainLatestTransactionDigestsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainLatestTransactionDigestsResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestTransactionDigests(shared_ptr<DescribeAntChainLatestTransactionDigestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestTransactionDigestsWithOptions(request, runtime);
}

DescribeAntChainLatestTransactionDigestsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestTransactionDigestsNewWithOptions(shared_ptr<DescribeAntChainLatestTransactionDigestsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainLatestTransactionDigestsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainLatestTransactionDigestsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainLatestTransactionDigestsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainLatestTransactionDigestsNew(shared_ptr<DescribeAntChainLatestTransactionDigestsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainLatestTransactionDigestsNewWithOptions(request, runtime);
}

DescribeAntChainMembersResponse Alibabacloud_Baas20180731::Client::describeAntChainMembersWithOptions(shared_ptr<DescribeAntChainMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainMembersResponse Alibabacloud_Baas20180731::Client::describeAntChainMembers(shared_ptr<DescribeAntChainMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMembersWithOptions(request, runtime);
}

DescribeAntChainMembersNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMembersNewWithOptions(shared_ptr<DescribeAntChainMembersNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainMembersNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMembersNewResponse(callApi(params, req, runtime));
}

DescribeAntChainMembersNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMembersNew(shared_ptr<DescribeAntChainMembersNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMembersNewWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAccessLogWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainMiniAppBrowserQRCodeAccessLogResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAccessLog(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAccessLogWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAccessLogNewWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAccessLogNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAccessLogNewResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAccessLogNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAccessLogNew(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAccessLogNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAccessLogNewWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsers(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAuthorizedUsersWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewResponse(callApi(params, req, runtime));
}

DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserQRCodeAuthorizedUsersNew(shared_ptr<DescribeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserQRCodeAuthorizedUsersNewWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserTransactionQRCodeResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserTransactionQRCodeWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainMiniAppBrowserTransactionQRCodeResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserTransactionQRCode(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserTransactionQRCodeWithOptions(request, runtime);
}

DescribeAntChainMiniAppBrowserTransactionQRCodeNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserTransactionQRCodeNewWithOptions(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainMiniAppBrowserTransactionQRCodeNewResponse Alibabacloud_Baas20180731::Client::describeAntChainMiniAppBrowserTransactionQRCodeNew(shared_ptr<DescribeAntChainMiniAppBrowserTransactionQRCodeNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainMiniAppBrowserTransactionQRCodeNewWithOptions(request, runtime);
}

DescribeAntChainNodesNewResponse Alibabacloud_Baas20180731::Client::describeAntChainNodesNewWithOptions(shared_ptr<DescribeAntChainNodesNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainNodesNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainNodesNewResponse(callApi(params, req, runtime));
}

DescribeAntChainNodesNewResponse Alibabacloud_Baas20180731::Client::describeAntChainNodesNew(shared_ptr<DescribeAntChainNodesNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainNodesNewWithOptions(request, runtime);
}

DescribeAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20180731::Client::describeAntChainQRCodeAuthorizationWithOptions(shared_ptr<DescribeAntChainQRCodeAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20180731::Client::describeAntChainQRCodeAuthorization(shared_ptr<DescribeAntChainQRCodeAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainQRCodeAuthorizationWithOptions(request, runtime);
}

DescribeAntChainQRCodeAuthorizationNewResponse Alibabacloud_Baas20180731::Client::describeAntChainQRCodeAuthorizationNewWithOptions(shared_ptr<DescribeAntChainQRCodeAuthorizationNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainQRCodeAuthorizationNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainQRCodeAuthorizationNewResponse(callApi(params, req, runtime));
}

DescribeAntChainQRCodeAuthorizationNewResponse Alibabacloud_Baas20180731::Client::describeAntChainQRCodeAuthorizationNew(shared_ptr<DescribeAntChainQRCodeAuthorizationNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainQRCodeAuthorizationNewWithOptions(request, runtime);
}

DescribeAntChainRegionNamesResponse Alibabacloud_Baas20180731::Client::describeAntChainRegionNamesWithOptions(shared_ptr<DescribeAntChainRegionNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    body->insert(pair<string, string>("Locale", *request->locale));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainRegionNames"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainRegionNamesResponse(callApi(params, req, runtime));
}

DescribeAntChainRegionNamesResponse Alibabacloud_Baas20180731::Client::describeAntChainRegionNames(shared_ptr<DescribeAntChainRegionNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainRegionNamesWithOptions(request, runtime);
}

DescribeAntChainRegionsForSaleResponse Alibabacloud_Baas20180731::Client::describeAntChainRegionsForSaleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainRegionsForSale"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainRegionsForSaleResponse(callApi(params, req, runtime));
}

DescribeAntChainRegionsForSaleResponse Alibabacloud_Baas20180731::Client::describeAntChainRegionsForSale() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainRegionsForSaleWithOptions(runtime);
}

DescribeAntChainResourceTypesResponse Alibabacloud_Baas20180731::Client::describeAntChainResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainResourceTypes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainResourceTypesResponse(callApi(params, req, runtime));
}

DescribeAntChainResourceTypesResponse Alibabacloud_Baas20180731::Client::describeAntChainResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainResourceTypesWithOptions(runtime);
}

DescribeAntChainRestResponse Alibabacloud_Baas20180731::Client::describeAntChainRestWithOptions(shared_ptr<DescribeAntChainRestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainRest"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainRestResponse(callApi(params, req, runtime));
}

DescribeAntChainRestResponse Alibabacloud_Baas20180731::Client::describeAntChainRest(shared_ptr<DescribeAntChainRestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainRestWithOptions(request, runtime);
}

DescribeAntChainSubnetListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetListWithOptions(shared_ptr<DescribeAntChainSubnetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainSubnetList"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainSubnetListResponse(callApi(params, req, runtime));
}

DescribeAntChainSubnetListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetList(shared_ptr<DescribeAntChainSubnetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainSubnetListWithOptions(request, runtime);
}

DescribeAntChainSubnetMemberListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetMemberListWithOptions(shared_ptr<DescribeAntChainSubnetMemberListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    body->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntChainSubnetMemberList"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainSubnetMemberListResponse(callApi(params, req, runtime));
}

DescribeAntChainSubnetMemberListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetMemberList(shared_ptr<DescribeAntChainSubnetMemberListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainSubnetMemberListWithOptions(request, runtime);
}

DescribeAntChainSubnetNodeListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetNodeListWithOptions(shared_ptr<DescribeAntChainSubnetNodeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainSubnetNodeList"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainSubnetNodeListResponse(callApi(params, req, runtime));
}

DescribeAntChainSubnetNodeListResponse Alibabacloud_Baas20180731::Client::describeAntChainSubnetNodeList(shared_ptr<DescribeAntChainSubnetNodeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainSubnetNodeListWithOptions(request, runtime);
}

DescribeAntChainTransactionResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionWithOptions(shared_ptr<DescribeAntChainTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainTransactionResponse Alibabacloud_Baas20180731::Client::describeAntChainTransaction(shared_ptr<DescribeAntChainTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionWithOptions(request, runtime);
}

DescribeAntChainTransactionNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionNewWithOptions(shared_ptr<DescribeAntChainTransactionNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainTransactionNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionNewResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionNew(shared_ptr<DescribeAntChainTransactionNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionNewWithOptions(request, runtime);
}

DescribeAntChainTransactionReceiptNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionReceiptNewWithOptions(shared_ptr<DescribeAntChainTransactionReceiptNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainTransactionReceiptNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionReceiptNewResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionReceiptNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionReceiptNew(shared_ptr<DescribeAntChainTransactionReceiptNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionReceiptNewWithOptions(request, runtime);
}

DescribeAntChainTransactionStatisticsResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionStatisticsWithOptions(shared_ptr<DescribeAntChainTransactionStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainTransactionStatisticsResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionStatistics(shared_ptr<DescribeAntChainTransactionStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionStatisticsWithOptions(request, runtime);
}

DescribeAntChainTransactionStatisticsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionStatisticsNewWithOptions(shared_ptr<DescribeAntChainTransactionStatisticsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainTransactionStatisticsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainTransactionStatisticsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainTransactionStatisticsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainTransactionStatisticsNew(shared_ptr<DescribeAntChainTransactionStatisticsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainTransactionStatisticsNewWithOptions(request, runtime);
}

DescribeAntChainsResponse Alibabacloud_Baas20180731::Client::describeAntChainsWithOptions(shared_ptr<DescribeAntChainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeAntChainsResponse Alibabacloud_Baas20180731::Client::describeAntChains(shared_ptr<DescribeAntChainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainsWithOptions(request, runtime);
}

DescribeAntChainsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainsNewWithOptions(shared_ptr<DescribeAntChainsNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeAntChainsNew"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntChainsNewResponse(callApi(params, req, runtime));
}

DescribeAntChainsNewResponse Alibabacloud_Baas20180731::Client::describeAntChainsNew(shared_ptr<DescribeAntChainsNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntChainsNewWithOptions(request, runtime);
}

DescribeAntRegionsResponse Alibabacloud_Baas20180731::Client::describeAntRegionsWithOptions(shared_ptr<DescribeAntRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->locale)) {
    body->insert(pair<string, string>("Locale", *request->locale));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAntRegions"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAntRegionsResponse(callApi(params, req, runtime));
}

DescribeAntRegionsResponse Alibabacloud_Baas20180731::Client::describeAntRegions(shared_ptr<DescribeAntRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAntRegionsWithOptions(request, runtime);
}

DescribeAppliesResponse Alibabacloud_Baas20180731::Client::describeAppliesWithOptions(shared_ptr<DescribeAppliesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
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
    {"action", boost::any(string("DescribeApplies"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppliesResponse(callApi(params, req, runtime));
}

DescribeAppliesResponse Alibabacloud_Baas20180731::Client::describeApplies(shared_ptr<DescribeAppliesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppliesWithOptions(request, runtime);
}

DescribeBcSchemaResponse Alibabacloud_Baas20180731::Client::describeBcSchemaWithOptions(shared_ptr<DescribeBcSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBcSchema"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBcSchemaResponse(callApi(params, req, runtime));
}

DescribeBcSchemaResponse Alibabacloud_Baas20180731::Client::describeBcSchema(shared_ptr<DescribeBcSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBcSchemaWithOptions(request, runtime);
}

DescribeBlockResponse Alibabacloud_Baas20180731::Client::describeBlockWithOptions(shared_ptr<DescribeBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("Height", *request->height));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlock"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockResponse(callApi(params, req, runtime));
}

DescribeBlockResponse Alibabacloud_Baas20180731::Client::describeBlock(shared_ptr<DescribeBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockWithOptions(request, runtime);
}

DescribeBlockchainApplicationResponse Alibabacloud_Baas20180731::Client::describeBlockchainApplicationWithOptions(shared_ptr<DescribeBlockchainApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
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
    {"action", boost::any(string("DescribeBlockchainApplication"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainApplicationResponse(callApi(params, req, runtime));
}

DescribeBlockchainApplicationResponse Alibabacloud_Baas20180731::Client::describeBlockchainApplication(shared_ptr<DescribeBlockchainApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainApplicationWithOptions(request, runtime);
}

DescribeBlockchainConfigOptionResponse Alibabacloud_Baas20180731::Client::describeBlockchainConfigOptionWithOptions(shared_ptr<DescribeBlockchainConfigOptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->purpose)) {
    query->insert(pair<string, string>("Purpose", *request->purpose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainConfigOption"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainConfigOptionResponse(callApi(params, req, runtime));
}

DescribeBlockchainConfigOptionResponse Alibabacloud_Baas20180731::Client::describeBlockchainConfigOption(shared_ptr<DescribeBlockchainConfigOptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainConfigOptionWithOptions(request, runtime);
}

DescribeBlockchainCreateTaskResponse Alibabacloud_Baas20180731::Client::describeBlockchainCreateTaskWithOptions(shared_ptr<DescribeBlockchainCreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainCreateTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainCreateTaskResponse(callApi(params, req, runtime));
}

DescribeBlockchainCreateTaskResponse Alibabacloud_Baas20180731::Client::describeBlockchainCreateTask(shared_ptr<DescribeBlockchainCreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainCreateTaskWithOptions(request, runtime);
}

DescribeBlockchainCreationConfigOptionsResponse Alibabacloud_Baas20180731::Client::describeBlockchainCreationConfigOptionsWithOptions(shared_ptr<DescribeBlockchainCreationConfigOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->purpose)) {
    query->insert(pair<string, string>("Purpose", *request->purpose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainCreationConfigOptions"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainCreationConfigOptionsResponse(callApi(params, req, runtime));
}

DescribeBlockchainCreationConfigOptionsResponse Alibabacloud_Baas20180731::Client::describeBlockchainCreationConfigOptions(shared_ptr<DescribeBlockchainCreationConfigOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainCreationConfigOptionsWithOptions(request, runtime);
}

DescribeBlockchainInfoResponse Alibabacloud_Baas20180731::Client::describeBlockchainInfoWithOptions(shared_ptr<DescribeBlockchainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainInfo"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainInfoResponse(callApi(params, req, runtime));
}

DescribeBlockchainInfoResponse Alibabacloud_Baas20180731::Client::describeBlockchainInfo(shared_ptr<DescribeBlockchainInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainInfoWithOptions(request, runtime);
}

DescribeBlockchainSchemaResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaWithOptions(shared_ptr<DescribeBlockchainSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainSchema"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainSchemaResponse(callApi(params, req, runtime));
}

DescribeBlockchainSchemaResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchema(shared_ptr<DescribeBlockchainSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainSchemaWithOptions(request, runtime);
}

DescribeBlockchainSchemaDetailResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaDetailWithOptions(shared_ptr<DescribeBlockchainSchemaDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaId)) {
    body->insert(pair<string, long>("SchemaId", *request->schemaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainSchemaDetail"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainSchemaDetailResponse(callApi(params, req, runtime));
}

DescribeBlockchainSchemaDetailResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaDetail(shared_ptr<DescribeBlockchainSchemaDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainSchemaDetailWithOptions(request, runtime);
}

DescribeBlockchainSchemaFileOSSPropertiesResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaFileOSSPropertiesWithOptions(shared_ptr<DescribeBlockchainSchemaFileOSSPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainSchemaFileOSSProperties"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainSchemaFileOSSPropertiesResponse(callApi(params, req, runtime));
}

DescribeBlockchainSchemaFileOSSPropertiesResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaFileOSSProperties(shared_ptr<DescribeBlockchainSchemaFileOSSPropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainSchemaFileOSSPropertiesWithOptions(request, runtime);
}

DescribeBlockchainSchemaTemplatesResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaTemplatesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlockchainSchemaTemplates"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlockchainSchemaTemplatesResponse(callApi(params, req, runtime));
}

DescribeBlockchainSchemaTemplatesResponse Alibabacloud_Baas20180731::Client::describeBlockchainSchemaTemplates() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlockchainSchemaTemplatesWithOptions(runtime);
}

DescribeCSIGatewayEndpointResponse Alibabacloud_Baas20180731::Client::describeCSIGatewayEndpointWithOptions(shared_ptr<DescribeCSIGatewayEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCSIGatewayEndpoint"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCSIGatewayEndpointResponse(callApi(params, req, runtime));
}

DescribeCSIGatewayEndpointResponse Alibabacloud_Baas20180731::Client::describeCSIGatewayEndpoint(shared_ptr<DescribeCSIGatewayEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCSIGatewayEndpointWithOptions(request, runtime);
}

DescribeCandidateOrganizationsResponse Alibabacloud_Baas20180731::Client::describeCandidateOrganizationsWithOptions(shared_ptr<DescribeCandidateOrganizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCandidateOrganizations"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCandidateOrganizationsResponse(callApi(params, req, runtime));
}

DescribeCandidateOrganizationsResponse Alibabacloud_Baas20180731::Client::describeCandidateOrganizations(shared_ptr<DescribeCandidateOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCandidateOrganizationsWithOptions(request, runtime);
}

DescribeChaincodeCollectionConfigResponse Alibabacloud_Baas20180731::Client::describeChaincodeCollectionConfigWithOptions(shared_ptr<DescribeChaincodeCollectionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    body->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChaincodeCollectionConfig"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChaincodeCollectionConfigResponse(callApi(params, req, runtime));
}

DescribeChaincodeCollectionConfigResponse Alibabacloud_Baas20180731::Client::describeChaincodeCollectionConfig(shared_ptr<DescribeChaincodeCollectionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChaincodeCollectionConfigWithOptions(request, runtime);
}

DescribeChaincodeDefinitionTaskResponse Alibabacloud_Baas20180731::Client::describeChaincodeDefinitionTaskWithOptions(shared_ptr<DescribeChaincodeDefinitionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeChaincodeDefinitionTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChaincodeDefinitionTaskResponse(callApi(params, req, runtime));
}

DescribeChaincodeDefinitionTaskResponse Alibabacloud_Baas20180731::Client::describeChaincodeDefinitionTask(shared_ptr<DescribeChaincodeDefinitionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChaincodeDefinitionTaskWithOptions(request, runtime);
}

DescribeChaincodeUploadPolicyResponse Alibabacloud_Baas20180731::Client::describeChaincodeUploadPolicyWithOptions(shared_ptr<DescribeChaincodeUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChaincodeUploadPolicy"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChaincodeUploadPolicyResponse(callApi(params, req, runtime));
}

DescribeChaincodeUploadPolicyResponse Alibabacloud_Baas20180731::Client::describeChaincodeUploadPolicy(shared_ptr<DescribeChaincodeUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChaincodeUploadPolicyWithOptions(request, runtime);
}

DescribeChannelChaincodesResponse Alibabacloud_Baas20180731::Client::describeChannelChaincodesWithOptions(shared_ptr<DescribeChannelChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelChaincodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelChaincodesResponse(callApi(params, req, runtime));
}

DescribeChannelChaincodesResponse Alibabacloud_Baas20180731::Client::describeChannelChaincodes(shared_ptr<DescribeChannelChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelChaincodesWithOptions(request, runtime);
}

DescribeChannelMembersResponse Alibabacloud_Baas20180731::Client::describeChannelMembersWithOptions(shared_ptr<DescribeChannelMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelMembers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelMembersResponse(callApi(params, req, runtime));
}

DescribeChannelMembersResponse Alibabacloud_Baas20180731::Client::describeChannelMembers(shared_ptr<DescribeChannelMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelMembersWithOptions(request, runtime);
}

DescribeChannelTriggersResponse Alibabacloud_Baas20180731::Client::describeChannelTriggersWithOptions(shared_ptr<DescribeChannelTriggersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelTriggers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelTriggersResponse(callApi(params, req, runtime));
}

DescribeChannelTriggersResponse Alibabacloud_Baas20180731::Client::describeChannelTriggers(shared_ptr<DescribeChannelTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelTriggersWithOptions(request, runtime);
}

DescribeCloudIntegrationServiceTokenResponse Alibabacloud_Baas20180731::Client::describeCloudIntegrationServiceTokenWithOptions(shared_ptr<DescribeCloudIntegrationServiceTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudIntegrationServiceToken"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudIntegrationServiceTokenResponse(callApi(params, req, runtime));
}

DescribeCloudIntegrationServiceTokenResponse Alibabacloud_Baas20180731::Client::describeCloudIntegrationServiceToken(shared_ptr<DescribeCloudIntegrationServiceTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudIntegrationServiceTokenWithOptions(request, runtime);
}

DescribeCloudServiceOrganizationStatusResponse Alibabacloud_Baas20180731::Client::describeCloudServiceOrganizationStatusWithOptions(shared_ptr<DescribeCloudServiceOrganizationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudServiceOrganizationStatus"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudServiceOrganizationStatusResponse(callApi(params, req, runtime));
}

DescribeCloudServiceOrganizationStatusResponse Alibabacloud_Baas20180731::Client::describeCloudServiceOrganizationStatus(shared_ptr<DescribeCloudServiceOrganizationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudServiceOrganizationStatusWithOptions(request, runtime);
}

DescribeCloudServiceTypeStatusResponse Alibabacloud_Baas20180731::Client::describeCloudServiceTypeStatusWithOptions(shared_ptr<DescribeCloudServiceTypeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    body->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCloudServiceTypeStatus"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCloudServiceTypeStatusResponse(callApi(params, req, runtime));
}

DescribeCloudServiceTypeStatusResponse Alibabacloud_Baas20180731::Client::describeCloudServiceTypeStatus(shared_ptr<DescribeCloudServiceTypeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCloudServiceTypeStatusWithOptions(request, runtime);
}

DescribeConsortiumAdminStatusResponse Alibabacloud_Baas20180731::Client::describeConsortiumAdminStatusWithOptions(shared_ptr<DescribeConsortiumAdminStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsortiumAdminStatus"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumAdminStatusResponse(callApi(params, req, runtime));
}

DescribeConsortiumAdminStatusResponse Alibabacloud_Baas20180731::Client::describeConsortiumAdminStatus(shared_ptr<DescribeConsortiumAdminStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumAdminStatusWithOptions(request, runtime);
}

DescribeConsortiumChaincodesResponse Alibabacloud_Baas20180731::Client::describeConsortiumChaincodesWithOptions(shared_ptr<DescribeConsortiumChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumChaincodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumChaincodesResponse(callApi(params, req, runtime));
}

DescribeConsortiumChaincodesResponse Alibabacloud_Baas20180731::Client::describeConsortiumChaincodes(shared_ptr<DescribeConsortiumChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumChaincodesWithOptions(request, runtime);
}

DescribeConsortiumChannelsResponse Alibabacloud_Baas20180731::Client::describeConsortiumChannelsWithOptions(shared_ptr<DescribeConsortiumChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumChannels"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumChannelsResponse(callApi(params, req, runtime));
}

DescribeConsortiumChannelsResponse Alibabacloud_Baas20180731::Client::describeConsortiumChannels(shared_ptr<DescribeConsortiumChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumChannelsWithOptions(request, runtime);
}

DescribeConsortiumConfigResponse Alibabacloud_Baas20180731::Client::describeConsortiumConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsortiumConfig"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumConfigResponse(callApi(params, req, runtime));
}

DescribeConsortiumConfigResponse Alibabacloud_Baas20180731::Client::describeConsortiumConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumConfigWithOptions(runtime);
}

DescribeConsortiumDeletableResponse Alibabacloud_Baas20180731::Client::describeConsortiumDeletableWithOptions(shared_ptr<DescribeConsortiumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumDeletable"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumDeletableResponse(callApi(params, req, runtime));
}

DescribeConsortiumDeletableResponse Alibabacloud_Baas20180731::Client::describeConsortiumDeletable(shared_ptr<DescribeConsortiumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumDeletableWithOptions(request, runtime);
}

DescribeConsortiumMemberApprovalResponse Alibabacloud_Baas20180731::Client::describeConsortiumMemberApprovalWithOptions(shared_ptr<DescribeConsortiumMemberApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumMemberApproval"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumMemberApprovalResponse(callApi(params, req, runtime));
}

DescribeConsortiumMemberApprovalResponse Alibabacloud_Baas20180731::Client::describeConsortiumMemberApproval(shared_ptr<DescribeConsortiumMemberApprovalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumMemberApprovalWithOptions(request, runtime);
}

DescribeConsortiumMembersResponse Alibabacloud_Baas20180731::Client::describeConsortiumMembersWithOptions(shared_ptr<DescribeConsortiumMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumMembers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumMembersResponse(callApi(params, req, runtime));
}

DescribeConsortiumMembersResponse Alibabacloud_Baas20180731::Client::describeConsortiumMembers(shared_ptr<DescribeConsortiumMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumMembersWithOptions(request, runtime);
}

DescribeConsortiumOrderersResponse Alibabacloud_Baas20180731::Client::describeConsortiumOrderersWithOptions(shared_ptr<DescribeConsortiumOrderersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeConsortiumOrderers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumOrderersResponse(callApi(params, req, runtime));
}

DescribeConsortiumOrderersResponse Alibabacloud_Baas20180731::Client::describeConsortiumOrderers(shared_ptr<DescribeConsortiumOrderersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumOrderersWithOptions(request, runtime);
}

DescribeConsortiumSpecsResponse Alibabacloud_Baas20180731::Client::describeConsortiumSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsortiumSpecs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumSpecsResponse(callApi(params, req, runtime));
}

DescribeConsortiumSpecsResponse Alibabacloud_Baas20180731::Client::describeConsortiumSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumSpecsWithOptions(runtime);
}

DescribeConsortiumsResponse Alibabacloud_Baas20180731::Client::describeConsortiumsWithOptions(shared_ptr<DescribeConsortiumsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    query->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeConsortiumsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeConsortiumsRequestTag>>("Tag", *request->tag));
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
    {"action", boost::any(string("DescribeConsortiums"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsortiumsResponse(callApi(params, req, runtime));
}

DescribeConsortiumsResponse Alibabacloud_Baas20180731::Client::describeConsortiums(shared_ptr<DescribeConsortiumsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsortiumsWithOptions(request, runtime);
}

DescribeDownloadPathsResponse Alibabacloud_Baas20180731::Client::describeDownloadPathsWithOptions(shared_ptr<DescribeDownloadPathsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadPaths"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadPathsResponse(callApi(params, req, runtime));
}

DescribeDownloadPathsResponse Alibabacloud_Baas20180731::Client::describeDownloadPaths(shared_ptr<DescribeDownloadPathsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadPathsWithOptions(request, runtime);
}

DescribeDownloadPathsOfContractChainResponse Alibabacloud_Baas20180731::Client::describeDownloadPathsOfContractChainWithOptions(shared_ptr<DescribeDownloadPathsOfContractChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadPathsOfContractChain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadPathsOfContractChainResponse(callApi(params, req, runtime));
}

DescribeDownloadPathsOfContractChainResponse Alibabacloud_Baas20180731::Client::describeDownloadPathsOfContractChain(shared_ptr<DescribeDownloadPathsOfContractChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadPathsOfContractChainWithOptions(request, runtime);
}

DescribeDownloadPathsOfNotaryChainResponse Alibabacloud_Baas20180731::Client::describeDownloadPathsOfNotaryChainWithOptions(shared_ptr<DescribeDownloadPathsOfNotaryChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDownloadPathsOfNotaryChain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDownloadPathsOfNotaryChainResponse(callApi(params, req, runtime));
}

DescribeDownloadPathsOfNotaryChainResponse Alibabacloud_Baas20180731::Client::describeDownloadPathsOfNotaryChain(shared_ptr<DescribeDownloadPathsOfNotaryChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDownloadPathsOfNotaryChainWithOptions(request, runtime);
}

DescribeEcosphereSpecsResponse Alibabacloud_Baas20180731::Client::describeEcosphereSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEcosphereSpecs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEcosphereSpecsResponse(callApi(params, req, runtime));
}

DescribeEcosphereSpecsResponse Alibabacloud_Baas20180731::Client::describeEcosphereSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEcosphereSpecsWithOptions(runtime);
}

DescribeEthereumResponse Alibabacloud_Baas20180731::Client::describeEthereumWithOptions(shared_ptr<DescribeEthereumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereum"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumResponse(callApi(params, req, runtime));
}

DescribeEthereumResponse Alibabacloud_Baas20180731::Client::describeEthereum(shared_ptr<DescribeEthereumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumWithOptions(request, runtime);
}

DescribeEthereumClientUsersResponse Alibabacloud_Baas20180731::Client::describeEthereumClientUsersWithOptions(shared_ptr<DescribeEthereumClientUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumClientUsers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumClientUsersResponse(callApi(params, req, runtime));
}

DescribeEthereumClientUsersResponse Alibabacloud_Baas20180731::Client::describeEthereumClientUsers(shared_ptr<DescribeEthereumClientUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumClientUsersWithOptions(request, runtime);
}

DescribeEthereumDeletableResponse Alibabacloud_Baas20180731::Client::describeEthereumDeletableWithOptions(shared_ptr<DescribeEthereumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeEthereumDeletableResponse Alibabacloud_Baas20180731::Client::describeEthereumDeletable(shared_ptr<DescribeEthereumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumDeletableWithOptions(request, runtime);
}

DescribeEthereumInvitaionResponse Alibabacloud_Baas20180731::Client::describeEthereumInvitaionWithOptions(shared_ptr<DescribeEthereumInvitaionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumInvitaion"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumInvitaionResponse(callApi(params, req, runtime));
}

DescribeEthereumInvitaionResponse Alibabacloud_Baas20180731::Client::describeEthereumInvitaion(shared_ptr<DescribeEthereumInvitaionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumInvitaionWithOptions(request, runtime);
}

DescribeEthereumInviteeResponse Alibabacloud_Baas20180731::Client::describeEthereumInviteeWithOptions(shared_ptr<DescribeEthereumInviteeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumInvitee"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumInviteeResponse(callApi(params, req, runtime));
}

DescribeEthereumInviteeResponse Alibabacloud_Baas20180731::Client::describeEthereumInvitee(shared_ptr<DescribeEthereumInviteeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumInviteeWithOptions(request, runtime);
}

DescribeEthereumNodeResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeWithOptions(shared_ptr<DescribeEthereumNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumNode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumNodeResponse(callApi(params, req, runtime));
}

DescribeEthereumNodeResponse Alibabacloud_Baas20180731::Client::describeEthereumNode(shared_ptr<DescribeEthereumNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumNodeWithOptions(request, runtime);
}

DescribeEthereumNodeConfigurationResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeConfigurationWithOptions(shared_ptr<DescribeEthereumNodeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumNodeConfiguration"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumNodeConfigurationResponse(callApi(params, req, runtime));
}

DescribeEthereumNodeConfigurationResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeConfiguration(shared_ptr<DescribeEthereumNodeConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumNodeConfigurationWithOptions(request, runtime);
}

DescribeEthereumNodeInfoResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeInfoWithOptions(shared_ptr<DescribeEthereumNodeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumNodeInfo"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumNodeInfoResponse(callApi(params, req, runtime));
}

DescribeEthereumNodeInfoResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeInfo(shared_ptr<DescribeEthereumNodeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumNodeInfoWithOptions(request, runtime);
}

DescribeEthereumNodeLogsResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeLogsWithOptions(shared_ptr<DescribeEthereumNodeLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lines)) {
    body->insert(pair<string, string>("Lines", *request->lines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    body->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumNodeLogs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumNodeLogsResponse(callApi(params, req, runtime));
}

DescribeEthereumNodeLogsResponse Alibabacloud_Baas20180731::Client::describeEthereumNodeLogs(shared_ptr<DescribeEthereumNodeLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumNodeLogsWithOptions(request, runtime);
}

DescribeEthereumNodesResponse Alibabacloud_Baas20180731::Client::describeEthereumNodesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereumNodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumNodesResponse(callApi(params, req, runtime));
}

DescribeEthereumNodesResponse Alibabacloud_Baas20180731::Client::describeEthereumNodes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumNodesWithOptions(runtime);
}

DescribeEthereumsResponse Alibabacloud_Baas20180731::Client::describeEthereumsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEthereums"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEthereumsResponse(callApi(params, req, runtime));
}

DescribeEthereumsResponse Alibabacloud_Baas20180731::Client::describeEthereums() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEthereumsWithOptions(runtime);
}

DescribeExplorerResponse Alibabacloud_Baas20180731::Client::describeExplorerWithOptions(shared_ptr<DescribeExplorerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeExplorer"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExplorerResponse(callApi(params, req, runtime));
}

DescribeExplorerResponse Alibabacloud_Baas20180731::Client::describeExplorer(shared_ptr<DescribeExplorerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExplorerWithOptions(request, runtime);
}

DescribeExplorerURLResponse Alibabacloud_Baas20180731::Client::describeExplorerURLWithOptions(shared_ptr<DescribeExplorerURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeExplorerURL"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeExplorerURLResponse(callApi(params, req, runtime));
}

DescribeExplorerURLResponse Alibabacloud_Baas20180731::Client::describeExplorerURL(shared_ptr<DescribeExplorerURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeExplorerURLWithOptions(request, runtime);
}

DescribeFabricChaincodeEndorsePolicyResponse Alibabacloud_Baas20180731::Client::describeFabricChaincodeEndorsePolicyWithOptions(shared_ptr<DescribeFabricChaincodeEndorsePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeName)) {
    body->insert(pair<string, string>("ChaincodeName", *request->chaincodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChaincodeEndorsePolicy"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChaincodeEndorsePolicyResponse(callApi(params, req, runtime));
}

DescribeFabricChaincodeEndorsePolicyResponse Alibabacloud_Baas20180731::Client::describeFabricChaincodeEndorsePolicy(shared_ptr<DescribeFabricChaincodeEndorsePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChaincodeEndorsePolicyWithOptions(request, runtime);
}

DescribeFabricChaincodeLogsResponse Alibabacloud_Baas20180731::Client::describeFabricChaincodeLogsWithOptions(shared_ptr<DescribeFabricChaincodeLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chaincodeId)) {
    query->insert(pair<string, string>("ChaincodeId", *request->chaincodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lines)) {
    query->insert(pair<string, string>("Lines", *request->lines));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("Offset", *request->offset));
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
    {"action", boost::any(string("DescribeFabricChaincodeLogs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChaincodeLogsResponse(callApi(params, req, runtime));
}

DescribeFabricChaincodeLogsResponse Alibabacloud_Baas20180731::Client::describeFabricChaincodeLogs(shared_ptr<DescribeFabricChaincodeLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChaincodeLogsWithOptions(request, runtime);
}

DescribeFabricChannelConfigResponse Alibabacloud_Baas20180731::Client::describeFabricChannelConfigWithOptions(shared_ptr<DescribeFabricChannelConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChannelConfig"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChannelConfigResponse(callApi(params, req, runtime));
}

DescribeFabricChannelConfigResponse Alibabacloud_Baas20180731::Client::describeFabricChannelConfig(shared_ptr<DescribeFabricChannelConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChannelConfigWithOptions(request, runtime);
}

DescribeFabricChannelOrdererResponse Alibabacloud_Baas20180731::Client::describeFabricChannelOrdererWithOptions(shared_ptr<DescribeFabricChannelOrdererRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChannelOrderer"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChannelOrdererResponse(callApi(params, req, runtime));
}

DescribeFabricChannelOrdererResponse Alibabacloud_Baas20180731::Client::describeFabricChannelOrderer(shared_ptr<DescribeFabricChannelOrdererRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChannelOrdererWithOptions(request, runtime);
}

DescribeFabricChannelOrganizationsResponse Alibabacloud_Baas20180731::Client::describeFabricChannelOrganizationsWithOptions(shared_ptr<DescribeFabricChannelOrganizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricChannelOrganizations"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricChannelOrganizationsResponse(callApi(params, req, runtime));
}

DescribeFabricChannelOrganizationsResponse Alibabacloud_Baas20180731::Client::describeFabricChannelOrganizations(shared_ptr<DescribeFabricChannelOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricChannelOrganizationsWithOptions(request, runtime);
}

DescribeFabricJoinRequestResponse Alibabacloud_Baas20180731::Client::describeFabricJoinRequestWithOptions(shared_ptr<DescribeFabricJoinRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricJoinRequest"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricJoinRequestResponse(callApi(params, req, runtime));
}

DescribeFabricJoinRequestResponse Alibabacloud_Baas20180731::Client::describeFabricJoinRequest(shared_ptr<DescribeFabricJoinRequestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricJoinRequestWithOptions(request, runtime);
}

DescribeFabricJoinResponseResponse Alibabacloud_Baas20180731::Client::describeFabricJoinResponseWithOptions(shared_ptr<DescribeFabricJoinResponseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricJoinResponse"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricJoinResponseResponse(callApi(params, req, runtime));
}

DescribeFabricJoinResponseResponse Alibabacloud_Baas20180731::Client::describeFabricJoinResponse(shared_ptr<DescribeFabricJoinResponseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricJoinResponseWithOptions(request, runtime);
}

DescribeFabricManagementChaincodesResponse Alibabacloud_Baas20180731::Client::describeFabricManagementChaincodesWithOptions(shared_ptr<DescribeFabricManagementChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricManagementChaincodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricManagementChaincodesResponse(callApi(params, req, runtime));
}

DescribeFabricManagementChaincodesResponse Alibabacloud_Baas20180731::Client::describeFabricManagementChaincodes(shared_ptr<DescribeFabricManagementChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricManagementChaincodesWithOptions(request, runtime);
}

DescribeFabricOrganizationChaincodePackageResponse Alibabacloud_Baas20180731::Client::describeFabricOrganizationChaincodePackageWithOptions(shared_ptr<DescribeFabricOrganizationChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

DescribeFabricOrganizationChaincodePackageResponse Alibabacloud_Baas20180731::Client::describeFabricOrganizationChaincodePackage(shared_ptr<DescribeFabricOrganizationChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationChaincodePackageWithOptions(request, runtime);
}

DescribeFabricOrganizationEgressResponse Alibabacloud_Baas20180731::Client::describeFabricOrganizationEgressWithOptions(shared_ptr<DescribeFabricOrganizationEgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricOrganizationEgress"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricOrganizationEgressResponse(callApi(params, req, runtime));
}

DescribeFabricOrganizationEgressResponse Alibabacloud_Baas20180731::Client::describeFabricOrganizationEgress(shared_ptr<DescribeFabricOrganizationEgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricOrganizationEgressWithOptions(request, runtime);
}

DescribeFabricPeerChannelsResponse Alibabacloud_Baas20180731::Client::describeFabricPeerChannelsWithOptions(shared_ptr<DescribeFabricPeerChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFabricPeerChannels"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFabricPeerChannelsResponse(callApi(params, req, runtime));
}

DescribeFabricPeerChannelsResponse Alibabacloud_Baas20180731::Client::describeFabricPeerChannels(shared_ptr<DescribeFabricPeerChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFabricPeerChannelsWithOptions(request, runtime);
}

DescribeGovernanceTaskResponse Alibabacloud_Baas20180731::Client::describeGovernanceTaskWithOptions(shared_ptr<DescribeGovernanceTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGovernanceTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGovernanceTaskResponse(callApi(params, req, runtime));
}

DescribeGovernanceTaskResponse Alibabacloud_Baas20180731::Client::describeGovernanceTask(shared_ptr<DescribeGovernanceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGovernanceTaskWithOptions(request, runtime);
}

DescribeGovernanceTasksResponse Alibabacloud_Baas20180731::Client::describeGovernanceTasksWithOptions(shared_ptr<DescribeGovernanceTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGovernanceTasks"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGovernanceTasksResponse(callApi(params, req, runtime));
}

DescribeGovernanceTasksResponse Alibabacloud_Baas20180731::Client::describeGovernanceTasks(shared_ptr<DescribeGovernanceTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGovernanceTasksWithOptions(request, runtime);
}

DescribeInvitationCodeResponse Alibabacloud_Baas20180731::Client::describeInvitationCodeWithOptions(shared_ptr<DescribeInvitationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvitationCode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInvitationCodeResponse(callApi(params, req, runtime));
}

DescribeInvitationCodeResponse Alibabacloud_Baas20180731::Client::describeInvitationCode(shared_ptr<DescribeInvitationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvitationCodeWithOptions(request, runtime);
}

DescribeInvitationListResponse Alibabacloud_Baas20180731::Client::describeInvitationListWithOptions(shared_ptr<DescribeInvitationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvitationList"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInvitationListResponse(callApi(params, req, runtime));
}

DescribeInvitationListResponse Alibabacloud_Baas20180731::Client::describeInvitationList(shared_ptr<DescribeInvitationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvitationListWithOptions(request, runtime);
}

DescribeInviterResponse Alibabacloud_Baas20180731::Client::describeInviterWithOptions(shared_ptr<DescribeInviterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInviter"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInviterResponse(callApi(params, req, runtime));
}

DescribeInviterResponse Alibabacloud_Baas20180731::Client::describeInviter(shared_ptr<DescribeInviterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInviterWithOptions(request, runtime);
}

DescribeLatest15BlocksResponse Alibabacloud_Baas20180731::Client::describeLatest15BlocksWithOptions(shared_ptr<DescribeLatest15BlocksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLatest15Blocks"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLatest15BlocksResponse(callApi(params, req, runtime));
}

DescribeLatest15BlocksResponse Alibabacloud_Baas20180731::Client::describeLatest15Blocks(shared_ptr<DescribeLatest15BlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLatest15BlocksWithOptions(request, runtime);
}

DescribeLatest15TransDigestsResponse Alibabacloud_Baas20180731::Client::describeLatest15TransDigestsWithOptions(shared_ptr<DescribeLatest15TransDigestsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLatest15TransDigests"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLatest15TransDigestsResponse(callApi(params, req, runtime));
}

DescribeLatest15TransDigestsResponse Alibabacloud_Baas20180731::Client::describeLatest15TransDigests(shared_ptr<DescribeLatest15TransDigestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLatest15TransDigestsWithOptions(request, runtime);
}

DescribeLatestBlocksResponse Alibabacloud_Baas20180731::Client::describeLatestBlocksWithOptions(shared_ptr<DescribeLatestBlocksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLatestBlocks"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLatestBlocksResponse(callApi(params, req, runtime));
}

DescribeLatestBlocksResponse Alibabacloud_Baas20180731::Client::describeLatestBlocks(shared_ptr<DescribeLatestBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLatestBlocksWithOptions(request, runtime);
}

DescribeLatestTransactionDigestsResponse Alibabacloud_Baas20180731::Client::describeLatestTransactionDigestsWithOptions(shared_ptr<DescribeLatestTransactionDigestsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLatestTransactionDigests"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLatestTransactionDigestsResponse(callApi(params, req, runtime));
}

DescribeLatestTransactionDigestsResponse Alibabacloud_Baas20180731::Client::describeLatestTransactionDigests(shared_ptr<DescribeLatestTransactionDigestsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLatestTransactionDigestsWithOptions(request, runtime);
}

DescribeMemberRoleResponse Alibabacloud_Baas20180731::Client::describeMemberRoleWithOptions(shared_ptr<DescribeMemberRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMemberRole"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMemberRoleResponse(callApi(params, req, runtime));
}

DescribeMemberRoleResponse Alibabacloud_Baas20180731::Client::describeMemberRole(shared_ptr<DescribeMemberRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMemberRoleWithOptions(request, runtime);
}

DescribeMembersResponse Alibabacloud_Baas20180731::Client::describeMembersWithOptions(shared_ptr<DescribeMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMembers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMembersResponse(callApi(params, req, runtime));
}

DescribeMembersResponse Alibabacloud_Baas20180731::Client::describeMembers(shared_ptr<DescribeMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMembersWithOptions(request, runtime);
}

DescribeMetricResponse Alibabacloud_Baas20180731::Client::describeMetricWithOptions(shared_ptr<DescribeMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    query->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->innerIp)) {
    body->insert(pair<string, string>("InnerIp", *request->innerIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    body->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    body->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeArea)) {
    body->insert(pair<string, string>("TimeArea", *request->timeArea));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMetric"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMetricResponse(callApi(params, req, runtime));
}

DescribeMetricResponse Alibabacloud_Baas20180731::Client::describeMetric(shared_ptr<DescribeMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetricWithOptions(request, runtime);
}

DescribeMyBlockchainsResponse Alibabacloud_Baas20180731::Client::describeMyBlockchainsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMyBlockchains"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMyBlockchainsResponse(callApi(params, req, runtime));
}

DescribeMyBlockchainsResponse Alibabacloud_Baas20180731::Client::describeMyBlockchains() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMyBlockchainsWithOptions(runtime);
}

DescribeMyBlockchanInfosResponse Alibabacloud_Baas20180731::Client::describeMyBlockchanInfosWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMyBlockchanInfos"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMyBlockchanInfosResponse(callApi(params, req, runtime));
}

DescribeMyBlockchanInfosResponse Alibabacloud_Baas20180731::Client::describeMyBlockchanInfos() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMyBlockchanInfosWithOptions(runtime);
}

DescribeMySuccessAppliesResponse Alibabacloud_Baas20180731::Client::describeMySuccessAppliesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMySuccessApplies"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMySuccessAppliesResponse(callApi(params, req, runtime));
}

DescribeMySuccessAppliesResponse Alibabacloud_Baas20180731::Client::describeMySuccessApplies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMySuccessAppliesWithOptions(runtime);
}

DescribeMySuccessfulApplicationResponse Alibabacloud_Baas20180731::Client::describeMySuccessfulApplicationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMySuccessfulApplication"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMySuccessfulApplicationResponse(callApi(params, req, runtime));
}

DescribeMySuccessfulApplicationResponse Alibabacloud_Baas20180731::Client::describeMySuccessfulApplication() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMySuccessfulApplicationWithOptions(runtime);
}

DescribeNetstatURLResponse Alibabacloud_Baas20180731::Client::describeNetstatURLWithOptions(shared_ptr<DescribeNetstatURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNetstatURL"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNetstatURLResponse(callApi(params, req, runtime));
}

DescribeNetstatURLResponse Alibabacloud_Baas20180731::Client::describeNetstatURL(shared_ptr<DescribeNetstatURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNetstatURLWithOptions(request, runtime);
}

DescribeOrdererLogsResponse Alibabacloud_Baas20180731::Client::describeOrdererLogsWithOptions(shared_ptr<DescribeOrdererLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrdererLogs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrdererLogsResponse(callApi(params, req, runtime));
}

DescribeOrdererLogsResponse Alibabacloud_Baas20180731::Client::describeOrdererLogs(shared_ptr<DescribeOrdererLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrdererLogsWithOptions(request, runtime);
}

DescribeOrganizationResponse Alibabacloud_Baas20180731::Client::describeOrganizationWithOptions(shared_ptr<DescribeOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeOrganizationRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeOrganizationRequestTag>>("Tag", *request->tag));
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
    {"action", boost::any(string("DescribeOrganization"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationResponse(callApi(params, req, runtime));
}

DescribeOrganizationResponse Alibabacloud_Baas20180731::Client::describeOrganization(shared_ptr<DescribeOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationWithOptions(request, runtime);
}

DescribeOrganizationChaincodesResponse Alibabacloud_Baas20180731::Client::describeOrganizationChaincodesWithOptions(shared_ptr<DescribeOrganizationChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationChaincodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationChaincodesResponse(callApi(params, req, runtime));
}

DescribeOrganizationChaincodesResponse Alibabacloud_Baas20180731::Client::describeOrganizationChaincodes(shared_ptr<DescribeOrganizationChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationChaincodesWithOptions(request, runtime);
}

DescribeOrganizationChannelsResponse Alibabacloud_Baas20180731::Client::describeOrganizationChannelsWithOptions(shared_ptr<DescribeOrganizationChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationChannels"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationChannelsResponse(callApi(params, req, runtime));
}

DescribeOrganizationChannelsResponse Alibabacloud_Baas20180731::Client::describeOrganizationChannels(shared_ptr<DescribeOrganizationChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationChannelsWithOptions(request, runtime);
}

DescribeOrganizationDeletableResponse Alibabacloud_Baas20180731::Client::describeOrganizationDeletableWithOptions(shared_ptr<DescribeOrganizationDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationDeletable"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationDeletableResponse(callApi(params, req, runtime));
}

DescribeOrganizationDeletableResponse Alibabacloud_Baas20180731::Client::describeOrganizationDeletable(shared_ptr<DescribeOrganizationDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationDeletableWithOptions(request, runtime);
}

DescribeOrganizationMembersResponse Alibabacloud_Baas20180731::Client::describeOrganizationMembersWithOptions(shared_ptr<DescribeOrganizationMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationMembers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationMembersResponse(callApi(params, req, runtime));
}

DescribeOrganizationMembersResponse Alibabacloud_Baas20180731::Client::describeOrganizationMembers(shared_ptr<DescribeOrganizationMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationMembersWithOptions(request, runtime);
}

DescribeOrganizationPeersResponse Alibabacloud_Baas20180731::Client::describeOrganizationPeersWithOptions(shared_ptr<DescribeOrganizationPeersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationPeers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationPeersResponse(callApi(params, req, runtime));
}

DescribeOrganizationPeersResponse Alibabacloud_Baas20180731::Client::describeOrganizationPeers(shared_ptr<DescribeOrganizationPeersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationPeersWithOptions(request, runtime);
}

DescribeOrganizationSpecsResponse Alibabacloud_Baas20180731::Client::describeOrganizationSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOrganizationSpecs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationSpecsResponse(callApi(params, req, runtime));
}

DescribeOrganizationSpecsResponse Alibabacloud_Baas20180731::Client::describeOrganizationSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationSpecsWithOptions(runtime);
}

DescribeOrganizationTriggersResponse Alibabacloud_Baas20180731::Client::describeOrganizationTriggersWithOptions(shared_ptr<DescribeOrganizationTriggersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOrganizationTriggers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationTriggersResponse(callApi(params, req, runtime));
}

DescribeOrganizationTriggersResponse Alibabacloud_Baas20180731::Client::describeOrganizationTriggers(shared_ptr<DescribeOrganizationTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationTriggersWithOptions(request, runtime);
}

DescribeOrganizationUserCertsResponse Alibabacloud_Baas20180731::Client::describeOrganizationUserCertsWithOptions(shared_ptr<DescribeOrganizationUserCertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOrganizationUserCerts"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationUserCertsResponse(callApi(params, req, runtime));
}

DescribeOrganizationUserCertsResponse Alibabacloud_Baas20180731::Client::describeOrganizationUserCerts(shared_ptr<DescribeOrganizationUserCertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationUserCertsWithOptions(request, runtime);
}

DescribeOrganizationUsersResponse Alibabacloud_Baas20180731::Client::describeOrganizationUsersWithOptions(shared_ptr<DescribeOrganizationUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrganizationUsers"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationUsersResponse(callApi(params, req, runtime));
}

DescribeOrganizationUsersResponse Alibabacloud_Baas20180731::Client::describeOrganizationUsers(shared_ptr<DescribeOrganizationUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationUsersWithOptions(request, runtime);
}

DescribeOrganizationsResponse Alibabacloud_Baas20180731::Client::describeOrganizationsWithOptions(shared_ptr<DescribeOrganizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DescribeOrganizationsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeOrganizationsRequestTag>>("Tag", *request->tag));
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
    {"action", boost::any(string("DescribeOrganizations"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrganizationsResponse(callApi(params, req, runtime));
}

DescribeOrganizationsResponse Alibabacloud_Baas20180731::Client::describeOrganizations(shared_ptr<DescribeOrganizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrganizationsWithOptions(request, runtime);
}

DescribeOrgnaizationChaincodesResponse Alibabacloud_Baas20180731::Client::describeOrgnaizationChaincodesWithOptions(shared_ptr<DescribeOrgnaizationChaincodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribeOrgnaizationChaincodes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOrgnaizationChaincodesResponse(callApi(params, req, runtime));
}

DescribeOrgnaizationChaincodesResponse Alibabacloud_Baas20180731::Client::describeOrgnaizationChaincodes(shared_ptr<DescribeOrgnaizationChaincodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOrgnaizationChaincodesWithOptions(request, runtime);
}

DescribeOssPropertiesResponse Alibabacloud_Baas20180731::Client::describeOssPropertiesWithOptions(shared_ptr<DescribeOssPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssProperties"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssPropertiesResponse(callApi(params, req, runtime));
}

DescribeOssPropertiesResponse Alibabacloud_Baas20180731::Client::describeOssProperties(shared_ptr<DescribeOssPropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssPropertiesWithOptions(request, runtime);
}

DescribePeerLogsResponse Alibabacloud_Baas20180731::Client::describePeerLogsWithOptions(shared_ptr<DescribePeerLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DescribePeerLogs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePeerLogsResponse(callApi(params, req, runtime));
}

DescribePeerLogsResponse Alibabacloud_Baas20180731::Client::describePeerLogs(shared_ptr<DescribePeerLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePeerLogsWithOptions(request, runtime);
}

DescribePublicAntChainContractProjectContentTreeResponse Alibabacloud_Baas20180731::Client::describePublicAntChainContractProjectContentTreeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePublicAntChainContractProjectContentTree"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePublicAntChainContractProjectContentTreeResponse(callApi(params, req, runtime));
}

DescribePublicAntChainContractProjectContentTreeResponse Alibabacloud_Baas20180731::Client::describePublicAntChainContractProjectContentTree() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePublicAntChainContractProjectContentTreeWithOptions(runtime);
}

DescribePublicAntChainDownloadPathsResponse Alibabacloud_Baas20180731::Client::describePublicAntChainDownloadPathsWithOptions(shared_ptr<DescribePublicAntChainDownloadPathsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePublicAntChainDownloadPaths"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePublicAntChainDownloadPathsResponse(callApi(params, req, runtime));
}

DescribePublicAntChainDownloadPathsResponse Alibabacloud_Baas20180731::Client::describePublicAntChainDownloadPaths(shared_ptr<DescribePublicAntChainDownloadPathsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePublicAntChainDownloadPathsWithOptions(request, runtime);
}

DescribePublicCloudIDEEnvConfigsResponse Alibabacloud_Baas20180731::Client::describePublicCloudIDEEnvConfigsWithOptions(shared_ptr<DescribePublicCloudIDEEnvConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePublicCloudIDEEnvConfigs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePublicCloudIDEEnvConfigsResponse(callApi(params, req, runtime));
}

DescribePublicCloudIDEEnvConfigsResponse Alibabacloud_Baas20180731::Client::describePublicCloudIDEEnvConfigs(shared_ptr<DescribePublicCloudIDEEnvConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePublicCloudIDEEnvConfigsWithOptions(request, runtime);
}

DescribeQRCodeAccessLogResponse Alibabacloud_Baas20180731::Client::describeQRCodeAccessLogWithOptions(shared_ptr<DescribeQRCodeAccessLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQRCodeAccessLog"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQRCodeAccessLogResponse(callApi(params, req, runtime));
}

DescribeQRCodeAccessLogResponse Alibabacloud_Baas20180731::Client::describeQRCodeAccessLog(shared_ptr<DescribeQRCodeAccessLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQRCodeAccessLogWithOptions(request, runtime);
}

DescribeQRCodeAuthorityResponse Alibabacloud_Baas20180731::Client::describeQRCodeAuthorityWithOptions(shared_ptr<DescribeQRCodeAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQRCodeAuthority"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQRCodeAuthorityResponse(callApi(params, req, runtime));
}

DescribeQRCodeAuthorityResponse Alibabacloud_Baas20180731::Client::describeQRCodeAuthority(shared_ptr<DescribeQRCodeAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQRCodeAuthorityWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Baas20180731::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2018-07-31"))},
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

DescribeRegionsResponse Alibabacloud_Baas20180731::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeResourceTypeResponse Alibabacloud_Baas20180731::Client::describeResourceTypeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceType"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceTypeResponse(callApi(params, req, runtime));
}

DescribeResourceTypeResponse Alibabacloud_Baas20180731::Client::describeResourceType() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceTypeWithOptions(runtime);
}

DescribeResourceTypesResponse Alibabacloud_Baas20180731::Client::describeResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceTypes"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceTypesResponse(callApi(params, req, runtime));
}

DescribeResourceTypesResponse Alibabacloud_Baas20180731::Client::describeResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceTypesWithOptions(runtime);
}

DescribeRootDomainResponse Alibabacloud_Baas20180731::Client::describeRootDomainWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRootDomain"))},
    {"version", boost::any(string("2018-07-31"))},
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

DescribeRootDomainResponse Alibabacloud_Baas20180731::Client::describeRootDomain() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRootDomainWithOptions(runtime);
}

DescribeSchemaDetailResponse Alibabacloud_Baas20180731::Client::describeSchemaDetailWithOptions(shared_ptr<DescribeSchemaDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaId)) {
    body->insert(pair<string, long>("SchemaId", *request->schemaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSchemaDetail"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSchemaDetailResponse(callApi(params, req, runtime));
}

DescribeSchemaDetailResponse Alibabacloud_Baas20180731::Client::describeSchemaDetail(shared_ptr<DescribeSchemaDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSchemaDetailWithOptions(request, runtime);
}

DescribeSmartContractJobStatusResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobStatusWithOptions(shared_ptr<DescribeSmartContractJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartContractJobStatus"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartContractJobStatusResponse(callApi(params, req, runtime));
}

DescribeSmartContractJobStatusResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobStatus(shared_ptr<DescribeSmartContractJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartContractJobStatusWithOptions(request, runtime);
}

DescribeSmartContractJobsResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobsWithOptions(shared_ptr<DescribeSmartContractJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartContractJobs"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartContractJobsResponse(callApi(params, req, runtime));
}

DescribeSmartContractJobsResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobs(shared_ptr<DescribeSmartContractJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartContractJobsWithOptions(request, runtime);
}

DescribeSmartContractJobsByNameResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobsByNameWithOptions(shared_ptr<DescribeSmartContractJobsByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    body->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartContractJobsByName"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartContractJobsByNameResponse(callApi(params, req, runtime));
}

DescribeSmartContractJobsByNameResponse Alibabacloud_Baas20180731::Client::describeSmartContractJobsByName(shared_ptr<DescribeSmartContractJobsByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartContractJobsByNameWithOptions(request, runtime);
}

DescribeSmartContractResultResponse Alibabacloud_Baas20180731::Client::describeSmartContractResultWithOptions(shared_ptr<DescribeSmartContractResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartContractResult"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartContractResultResponse(callApi(params, req, runtime));
}

DescribeSmartContractResultResponse Alibabacloud_Baas20180731::Client::describeSmartContractResult(shared_ptr<DescribeSmartContractResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartContractResultWithOptions(request, runtime);
}

DescribeSmartContractResultContentResponse Alibabacloud_Baas20180731::Client::describeSmartContractResultContentWithOptions(shared_ptr<DescribeSmartContractResultContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartContractResultContent"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartContractResultContentResponse(callApi(params, req, runtime));
}

DescribeSmartContractResultContentResponse Alibabacloud_Baas20180731::Client::describeSmartContractResultContent(shared_ptr<DescribeSmartContractResultContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartContractResultContentWithOptions(request, runtime);
}

DescribeSubscribeCloudServiceIntegrationStateResponse Alibabacloud_Baas20180731::Client::describeSubscribeCloudServiceIntegrationStateWithOptions(shared_ptr<DescribeSubscribeCloudServiceIntegrationStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscribeCloudServiceIntegrationState"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscribeCloudServiceIntegrationStateResponse(callApi(params, req, runtime));
}

DescribeSubscribeCloudServiceIntegrationStateResponse Alibabacloud_Baas20180731::Client::describeSubscribeCloudServiceIntegrationState(shared_ptr<DescribeSubscribeCloudServiceIntegrationStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscribeCloudServiceIntegrationStateWithOptions(request, runtime);
}

DescribeTasksResponse Alibabacloud_Baas20180731::Client::describeTasksWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTasks"))},
    {"version", boost::any(string("2018-07-31"))},
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

DescribeTasksResponse Alibabacloud_Baas20180731::Client::describeTasks() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTasksWithOptions(runtime);
}

DescribeTemplatesResponse Alibabacloud_Baas20180731::Client::describeTemplatesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplates"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplatesResponse(callApi(params, req, runtime));
}

DescribeTemplatesResponse Alibabacloud_Baas20180731::Client::describeTemplates() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTemplatesWithOptions(runtime);
}

DescribeTransactionResponse Alibabacloud_Baas20180731::Client::describeTransactionWithOptions(shared_ptr<DescribeTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransaction"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransactionResponse(callApi(params, req, runtime));
}

DescribeTransactionResponse Alibabacloud_Baas20180731::Client::describeTransaction(shared_ptr<DescribeTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransactionWithOptions(request, runtime);
}

DescribeTransactionFor2CBrowserResponse Alibabacloud_Baas20180731::Client::describeTransactionFor2CBrowserWithOptions(shared_ptr<DescribeTransactionFor2CBrowserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayAuthCode)) {
    body->insert(pair<string, string>("AlipayAuthCode", *request->alipayAuthCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransactionFor2CBrowser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransactionFor2CBrowserResponse(callApi(params, req, runtime));
}

DescribeTransactionFor2CBrowserResponse Alibabacloud_Baas20180731::Client::describeTransactionFor2CBrowser(shared_ptr<DescribeTransactionFor2CBrowserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransactionFor2CBrowserWithOptions(request, runtime);
}

DescribeTransactionQRCodeResponse Alibabacloud_Baas20180731::Client::describeTransactionQRCodeWithOptions(shared_ptr<DescribeTransactionQRCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransactionQRCode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransactionQRCodeResponse(callApi(params, req, runtime));
}

DescribeTransactionQRCodeResponse Alibabacloud_Baas20180731::Client::describeTransactionQRCode(shared_ptr<DescribeTransactionQRCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransactionQRCodeWithOptions(request, runtime);
}

DescribeTransactionReceiptFor2CBrowserResponse Alibabacloud_Baas20180731::Client::describeTransactionReceiptFor2CBrowserWithOptions(shared_ptr<DescribeTransactionReceiptFor2CBrowserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayAuthCode)) {
    body->insert(pair<string, string>("AlipayAuthCode", *request->alipayAuthCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransactionReceiptFor2CBrowser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransactionReceiptFor2CBrowserResponse(callApi(params, req, runtime));
}

DescribeTransactionReceiptFor2CBrowserResponse Alibabacloud_Baas20180731::Client::describeTransactionReceiptFor2CBrowser(shared_ptr<DescribeTransactionReceiptFor2CBrowserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransactionReceiptFor2CBrowserWithOptions(request, runtime);
}

DescribeTriggerResponse Alibabacloud_Baas20180731::Client::describeTriggerWithOptions(shared_ptr<DescribeTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrigger"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTriggerResponse(callApi(params, req, runtime));
}

DescribeTriggerResponse Alibabacloud_Baas20180731::Client::describeTrigger(shared_ptr<DescribeTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTriggerWithOptions(request, runtime);
}

DestroyConsortiumResponse Alibabacloud_Baas20180731::Client::destroyConsortiumWithOptions(shared_ptr<DestroyConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consortiumId)) {
    body->insert(pair<string, string>("ConsortiumId", *request->consortiumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DestroyConsortium"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DestroyConsortiumResponse(callApi(params, req, runtime));
}

DestroyConsortiumResponse Alibabacloud_Baas20180731::Client::destroyConsortium(shared_ptr<DestroyConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyConsortiumWithOptions(request, runtime);
}

DestroyEthereumResponse Alibabacloud_Baas20180731::Client::destroyEthereumWithOptions(shared_ptr<DestroyEthereumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DestroyEthereum"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DestroyEthereumResponse(callApi(params, req, runtime));
}

DestroyEthereumResponse Alibabacloud_Baas20180731::Client::destroyEthereum(shared_ptr<DestroyEthereumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyEthereumWithOptions(request, runtime);
}

DestroyOrganizationResponse Alibabacloud_Baas20180731::Client::destroyOrganizationWithOptions(shared_ptr<DestroyOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DestroyOrganization"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DestroyOrganizationResponse(callApi(params, req, runtime));
}

DestroyOrganizationResponse Alibabacloud_Baas20180731::Client::destroyOrganization(shared_ptr<DestroyOrganizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyOrganizationWithOptions(request, runtime);
}

DownloadAllResponse Alibabacloud_Baas20180731::Client::downloadAllWithOptions(shared_ptr<DownloadAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadAll"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadAllResponse(callApi(params, req, runtime));
}

DownloadAllResponse Alibabacloud_Baas20180731::Client::downloadAll(shared_ptr<DownloadAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadAllWithOptions(request, runtime);
}

DownloadBizviewResponse Alibabacloud_Baas20180731::Client::downloadBizviewWithOptions(shared_ptr<DownloadBizviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadBizview"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadBizviewResponse(callApi(params, req, runtime));
}

DownloadBizviewResponse Alibabacloud_Baas20180731::Client::downloadBizview(shared_ptr<DownloadBizviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadBizviewWithOptions(request, runtime);
}

DownloadFabricChannelSDKResponse Alibabacloud_Baas20180731::Client::downloadFabricChannelSDKWithOptions(shared_ptr<DownloadFabricChannelSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadFabricChannelSDK"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadFabricChannelSDKResponse(callApi(params, req, runtime));
}

DownloadFabricChannelSDKResponse Alibabacloud_Baas20180731::Client::downloadFabricChannelSDK(shared_ptr<DownloadFabricChannelSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadFabricChannelSDKWithOptions(request, runtime);
}

DownloadOrganizationSDKResponse Alibabacloud_Baas20180731::Client::downloadOrganizationSDKWithOptions(shared_ptr<DownloadOrganizationSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DownloadOrganizationSDK"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadOrganizationSDKResponse(callApi(params, req, runtime));
}

DownloadOrganizationSDKResponse Alibabacloud_Baas20180731::Client::downloadOrganizationSDK(shared_ptr<DownloadOrganizationSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadOrganizationSDKWithOptions(request, runtime);
}

DownloadSDK2Response Alibabacloud_Baas20180731::Client::downloadSDK2WithOptions(shared_ptr<DownloadSDK2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadSDK2"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadSDK2Response(callApi(params, req, runtime));
}

DownloadSDK2Response Alibabacloud_Baas20180731::Client::downloadSDK2(shared_ptr<DownloadSDK2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadSDK2WithOptions(request, runtime);
}

DownloadSdkResponse Alibabacloud_Baas20180731::Client::downloadSdkWithOptions(shared_ptr<DownloadSdkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadSdk"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadSdkResponse(callApi(params, req, runtime));
}

DownloadSdkResponse Alibabacloud_Baas20180731::Client::downloadSdk(shared_ptr<DownloadSdkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadSdkWithOptions(request, runtime);
}

DownloadSignedDataResponse Alibabacloud_Baas20180731::Client::downloadSignedDataWithOptions(shared_ptr<DownloadSignedDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadSignedData"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadSignedDataResponse(callApi(params, req, runtime));
}

DownloadSignedDataResponse Alibabacloud_Baas20180731::Client::downloadSignedData(shared_ptr<DownloadSignedDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadSignedDataWithOptions(request, runtime);
}

DuplicateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::duplicateAntChainContractProjectWithOptions(shared_ptr<DuplicateAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectVersion)) {
    body->insert(pair<string, string>("ProjectVersion", *request->projectVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DuplicateAntChainContractProject"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DuplicateAntChainContractProjectResponse(callApi(params, req, runtime));
}

DuplicateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::duplicateAntChainContractProject(shared_ptr<DuplicateAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return duplicateAntChainContractProjectWithOptions(request, runtime);
}

FreezeAccountResponse Alibabacloud_Baas20180731::Client::freezeAccountWithOptions(shared_ptr<FreezeAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FreezeAccount"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FreezeAccountResponse(callApi(params, req, runtime));
}

FreezeAccountResponse Alibabacloud_Baas20180731::Client::freezeAccount(shared_ptr<FreezeAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return freezeAccountWithOptions(request, runtime);
}

FreezeAntChainAccountResponse Alibabacloud_Baas20180731::Client::freezeAntChainAccountWithOptions(shared_ptr<FreezeAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

FreezeAntChainAccountResponse Alibabacloud_Baas20180731::Client::freezeAntChainAccount(shared_ptr<FreezeAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return freezeAntChainAccountWithOptions(request, runtime);
}

GetAppliesResponse Alibabacloud_Baas20180731::Client::getAppliesWithOptions(shared_ptr<GetAppliesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
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
    {"action", boost::any(string("GetApplies"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppliesResponse(callApi(params, req, runtime));
}

GetAppliesResponse Alibabacloud_Baas20180731::Client::getApplies(shared_ptr<GetAppliesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppliesWithOptions(request, runtime);
}

GetBcSchemaResponse Alibabacloud_Baas20180731::Client::getBcSchemaWithOptions(shared_ptr<GetBcSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBcSchema"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBcSchemaResponse(callApi(params, req, runtime));
}

GetBcSchemaResponse Alibabacloud_Baas20180731::Client::getBcSchema(shared_ptr<GetBcSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBcSchemaWithOptions(request, runtime);
}

GetBlockchainCreateTaskResponse Alibabacloud_Baas20180731::Client::getBlockchainCreateTaskWithOptions(shared_ptr<GetBlockchainCreateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBlockchainCreateTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBlockchainCreateTaskResponse(callApi(params, req, runtime));
}

GetBlockchainCreateTaskResponse Alibabacloud_Baas20180731::Client::getBlockchainCreateTask(shared_ptr<GetBlockchainCreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBlockchainCreateTaskWithOptions(request, runtime);
}

GetBlockchainInfoResponse Alibabacloud_Baas20180731::Client::getBlockchainInfoWithOptions(shared_ptr<GetBlockchainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBlockchainInfo"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBlockchainInfoResponse(callApi(params, req, runtime));
}

GetBlockchainInfoResponse Alibabacloud_Baas20180731::Client::getBlockchainInfo(shared_ptr<GetBlockchainInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBlockchainInfoWithOptions(request, runtime);
}

GetMyBlockchainsResponse Alibabacloud_Baas20180731::Client::getMyBlockchainsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMyBlockchains"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMyBlockchainsResponse(callApi(params, req, runtime));
}

GetMyBlockchainsResponse Alibabacloud_Baas20180731::Client::getMyBlockchains() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMyBlockchainsWithOptions(runtime);
}

GetMySuccessAppliesResponse Alibabacloud_Baas20180731::Client::getMySuccessAppliesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMySuccessApplies"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMySuccessAppliesResponse(callApi(params, req, runtime));
}

GetMySuccessAppliesResponse Alibabacloud_Baas20180731::Client::getMySuccessApplies() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMySuccessAppliesWithOptions(runtime);
}

GetOssPropertiesResponse Alibabacloud_Baas20180731::Client::getOssPropertiesWithOptions(shared_ptr<GetOssPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssProperties"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssPropertiesResponse(callApi(params, req, runtime));
}

GetOssPropertiesResponse Alibabacloud_Baas20180731::Client::getOssProperties(shared_ptr<GetOssPropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssPropertiesWithOptions(request, runtime);
}

GetTemplatesResponse Alibabacloud_Baas20180731::Client::getTemplatesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplates"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplatesResponse(callApi(params, req, runtime));
}

GetTemplatesResponse Alibabacloud_Baas20180731::Client::getTemplates() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplatesWithOptions(runtime);
}

InstallChaincodeResponse Alibabacloud_Baas20180731::Client::installChaincodeWithOptions(shared_ptr<InstallChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("InstallChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallChaincodeResponse(callApi(params, req, runtime));
}

InstallChaincodeResponse Alibabacloud_Baas20180731::Client::installChaincode(shared_ptr<InstallChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installChaincodeWithOptions(request, runtime);
}

InstallFabricChaincodePackageResponse Alibabacloud_Baas20180731::Client::installFabricChaincodePackageWithOptions(shared_ptr<InstallFabricChaincodePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

InstallFabricChaincodePackageResponse Alibabacloud_Baas20180731::Client::installFabricChaincodePackage(shared_ptr<InstallFabricChaincodePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installFabricChaincodePackageWithOptions(request, runtime);
}

InstantiateChaincodeResponse Alibabacloud_Baas20180731::Client::instantiateChaincodeWithOptions(shared_ptr<InstantiateChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("InstantiateChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstantiateChaincodeResponse(callApi(params, req, runtime));
}

InstantiateChaincodeResponse Alibabacloud_Baas20180731::Client::instantiateChaincode(shared_ptr<InstantiateChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return instantiateChaincodeWithOptions(request, runtime);
}

InviteUserResponse Alibabacloud_Baas20180731::Client::inviteUserWithOptions(shared_ptr<InviteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userEmail)) {
    body->insert(pair<string, string>("UserEmail", *request->userEmail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InviteUser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InviteUserResponse(callApi(params, req, runtime));
}

InviteUserResponse Alibabacloud_Baas20180731::Client::inviteUser(shared_ptr<InviteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inviteUserWithOptions(request, runtime);
}

JoinChannelResponse Alibabacloud_Baas20180731::Client::joinChannelWithOptions(shared_ptr<JoinChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("JoinChannel"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return JoinChannelResponse(callApi(params, req, runtime));
}

JoinChannelResponse Alibabacloud_Baas20180731::Client::joinChannel(shared_ptr<JoinChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinChannelWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Baas20180731::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

ListTagResourcesResponse Alibabacloud_Baas20180731::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyTriggerResponse Alibabacloud_Baas20180731::Client::modifyTriggerWithOptions(shared_ptr<ModifyTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->options)) {
    body->insert(pair<string, string>("Options", *request->options));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTrigger"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTriggerResponse(callApi(params, req, runtime));
}

ModifyTriggerResponse Alibabacloud_Baas20180731::Client::modifyTrigger(shared_ptr<ModifyTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTriggerWithOptions(request, runtime);
}

OperateUserResponse Alibabacloud_Baas20180731::Client::operateUserWithOptions(shared_ptr<OperateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operation)) {
    body->insert(pair<string, long>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateUser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateUserResponse(callApi(params, req, runtime));
}

OperateUserResponse Alibabacloud_Baas20180731::Client::operateUser(shared_ptr<OperateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateUserWithOptions(request, runtime);
}

ProcessCloudIDEContractTransactionResponse Alibabacloud_Baas20180731::Client::processCloudIDEContractTransactionWithOptions(shared_ptr<ProcessCloudIDEContractTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transaction)) {
    body->insert(pair<string, string>("Transaction", *request->transaction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProcessCloudIDEContractTransaction"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProcessCloudIDEContractTransactionResponse(callApi(params, req, runtime));
}

ProcessCloudIDEContractTransactionResponse Alibabacloud_Baas20180731::Client::processCloudIDEContractTransaction(shared_ptr<ProcessCloudIDEContractTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return processCloudIDEContractTransactionWithOptions(request, runtime);
}

ProcessPublicCloudIDEContractTransactionResponse Alibabacloud_Baas20180731::Client::processPublicCloudIDEContractTransactionWithOptions(shared_ptr<ProcessPublicCloudIDEContractTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transaction)) {
    body->insert(pair<string, string>("Transaction", *request->transaction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProcessPublicCloudIDEContractTransaction"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProcessPublicCloudIDEContractTransactionResponse(callApi(params, req, runtime));
}

ProcessPublicCloudIDEContractTransactionResponse Alibabacloud_Baas20180731::Client::processPublicCloudIDEContractTransaction(shared_ptr<ProcessPublicCloudIDEContractTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return processPublicCloudIDEContractTransactionWithOptions(request, runtime);
}

QueryBlockResponse Alibabacloud_Baas20180731::Client::queryBlockWithOptions(shared_ptr<QueryBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("Height", *request->height));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBlock"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBlockResponse(callApi(params, req, runtime));
}

QueryBlockResponse Alibabacloud_Baas20180731::Client::queryBlock(shared_ptr<QueryBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBlockWithOptions(request, runtime);
}

QueryConsortiumDeletableResponse Alibabacloud_Baas20180731::Client::queryConsortiumDeletableWithOptions(shared_ptr<QueryConsortiumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryConsortiumDeletable"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConsortiumDeletableResponse(callApi(params, req, runtime));
}

QueryConsortiumDeletableResponse Alibabacloud_Baas20180731::Client::queryConsortiumDeletable(shared_ptr<QueryConsortiumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsortiumDeletableWithOptions(request, runtime);
}

QueryEthereumDeletableResponse Alibabacloud_Baas20180731::Client::queryEthereumDeletableWithOptions(shared_ptr<QueryEthereumDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEthereumDeletable"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEthereumDeletableResponse(callApi(params, req, runtime));
}

QueryEthereumDeletableResponse Alibabacloud_Baas20180731::Client::queryEthereumDeletable(shared_ptr<QueryEthereumDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEthereumDeletableWithOptions(request, runtime);
}

QueryMetricResponse Alibabacloud_Baas20180731::Client::queryMetricWithOptions(shared_ptr<QueryMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    query->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->innerIp)) {
    body->insert(pair<string, string>("InnerIp", *request->innerIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    body->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    body->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->port)) {
    body->insert(pair<string, string>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeArea)) {
    body->insert(pair<string, string>("TimeArea", *request->timeArea));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMetric"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMetricResponse(callApi(params, req, runtime));
}

QueryMetricResponse Alibabacloud_Baas20180731::Client::queryMetric(shared_ptr<QueryMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMetricWithOptions(request, runtime);
}

QueryOrganizationDeletableResponse Alibabacloud_Baas20180731::Client::queryOrganizationDeletableWithOptions(shared_ptr<QueryOrganizationDeletableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryOrganizationDeletable"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrganizationDeletableResponse(callApi(params, req, runtime));
}

QueryOrganizationDeletableResponse Alibabacloud_Baas20180731::Client::queryOrganizationDeletable(shared_ptr<QueryOrganizationDeletableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrganizationDeletableWithOptions(request, runtime);
}

QueryTransactionResponse Alibabacloud_Baas20180731::Client::queryTransactionWithOptions(shared_ptr<QueryTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hash)) {
    body->insert(pair<string, string>("Hash", *request->hash));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransaction"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransactionResponse(callApi(params, req, runtime));
}

QueryTransactionResponse Alibabacloud_Baas20180731::Client::queryTransaction(shared_ptr<QueryTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransactionWithOptions(request, runtime);
}

RejectUserResponse Alibabacloud_Baas20180731::Client::rejectUserWithOptions(shared_ptr<RejectUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RejectUser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RejectUserResponse(callApi(params, req, runtime));
}

RejectUserResponse Alibabacloud_Baas20180731::Client::rejectUser(shared_ptr<RejectUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectUserWithOptions(request, runtime);
}

RenameBlockchainResponse Alibabacloud_Baas20180731::Client::renameBlockchainWithOptions(shared_ptr<RenameBlockchainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newName)) {
    body->insert(pair<string, string>("NewName", *request->newName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameBlockchain"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameBlockchainResponse(callApi(params, req, runtime));
}

RenameBlockchainResponse Alibabacloud_Baas20180731::Client::renameBlockchain(shared_ptr<RenameBlockchainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameBlockchainWithOptions(request, runtime);
}

ResetAntChainCertificateResponse Alibabacloud_Baas20180731::Client::resetAntChainCertificateWithOptions(shared_ptr<ResetAntChainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

ResetAntChainCertificateResponse Alibabacloud_Baas20180731::Client::resetAntChainCertificate(shared_ptr<ResetAntChainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAntChainCertificateWithOptions(request, runtime);
}

ResetAntChainUserCertificateResponse Alibabacloud_Baas20180731::Client::resetAntChainUserCertificateWithOptions(shared_ptr<ResetAntChainUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->antChainId)) {
    body->insert(pair<string, string>("AntChainId", *request->antChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operation)) {
    body->insert(pair<string, long>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("Username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAntChainUserCertificate"))},
    {"version", boost::any(string("2018-07-31"))},
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

ResetAntChainUserCertificateResponse Alibabacloud_Baas20180731::Client::resetAntChainUserCertificate(shared_ptr<ResetAntChainUserCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAntChainUserCertificateWithOptions(request, runtime);
}

ResetCertificateResponse Alibabacloud_Baas20180731::Client::resetCertificateWithOptions(shared_ptr<ResetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetCertificate"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetCertificateResponse(callApi(params, req, runtime));
}

ResetCertificateResponse Alibabacloud_Baas20180731::Client::resetCertificate(shared_ptr<ResetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetCertificateWithOptions(request, runtime);
}

ResetOrganizationUserPasswordResponse Alibabacloud_Baas20180731::Client::resetOrganizationUserPasswordWithOptions(shared_ptr<ResetOrganizationUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ResetOrganizationUserPassword"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetOrganizationUserPasswordResponse(callApi(params, req, runtime));
}

ResetOrganizationUserPasswordResponse Alibabacloud_Baas20180731::Client::resetOrganizationUserPassword(shared_ptr<ResetOrganizationUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetOrganizationUserPasswordWithOptions(request, runtime);
}

ResetPublicAntChainCertificateResponse Alibabacloud_Baas20180731::Client::resetPublicAntChainCertificateWithOptions(shared_ptr<ResetPublicAntChainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetPublicAntChainCertificate"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetPublicAntChainCertificateResponse(callApi(params, req, runtime));
}

ResetPublicAntChainCertificateResponse Alibabacloud_Baas20180731::Client::resetPublicAntChainCertificate(shared_ptr<ResetPublicAntChainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetPublicAntChainCertificateWithOptions(request, runtime);
}

ResetUserResponse Alibabacloud_Baas20180731::Client::resetUserWithOptions(shared_ptr<ResetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operation)) {
    body->insert(pair<string, long>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetUser"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetUserResponse(callApi(params, req, runtime));
}

ResetUserResponse Alibabacloud_Baas20180731::Client::resetUser(shared_ptr<ResetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetUserWithOptions(request, runtime);
}

SchemaDetailResponse Alibabacloud_Baas20180731::Client::schemaDetailWithOptions(shared_ptr<SchemaDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaId)) {
    body->insert(pair<string, long>("SchemaId", *request->schemaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SchemaDetail"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SchemaDetailResponse(callApi(params, req, runtime));
}

SchemaDetailResponse Alibabacloud_Baas20180731::Client::schemaDetail(shared_ptr<SchemaDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return schemaDetailWithOptions(request, runtime);
}

StartSmartContractJobResponse Alibabacloud_Baas20180731::Client::startSmartContractJobWithOptions(shared_ptr<StartSmartContractJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    body->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOpt)) {
    body->insert(pair<string, string>("SourceOpt", *request->sourceOpt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSmartContractJob"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSmartContractJobResponse(callApi(params, req, runtime));
}

StartSmartContractJobResponse Alibabacloud_Baas20180731::Client::startSmartContractJob(shared_ptr<StartSmartContractJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSmartContractJobWithOptions(request, runtime);
}

SubmitFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::submitFabricChaincodeDefinitionWithOptions(shared_ptr<SubmitFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

SubmitFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::submitFabricChaincodeDefinition(shared_ptr<SubmitFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFabricChaincodeDefinitionWithOptions(request, runtime);
}

SyncFabricChaincodeStatusResponse Alibabacloud_Baas20180731::Client::syncFabricChaincodeStatusWithOptions(shared_ptr<SyncFabricChaincodeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("SyncFabricChaincodeStatus"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncFabricChaincodeStatusResponse(callApi(params, req, runtime));
}

SyncFabricChaincodeStatusResponse Alibabacloud_Baas20180731::Client::syncFabricChaincodeStatus(shared_ptr<SyncFabricChaincodeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncFabricChaincodeStatusWithOptions(request, runtime);
}

SynchronizeChaincodeResponse Alibabacloud_Baas20180731::Client::synchronizeChaincodeWithOptions(shared_ptr<SynchronizeChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("SynchronizeChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SynchronizeChaincodeResponse(callApi(params, req, runtime));
}

SynchronizeChaincodeResponse Alibabacloud_Baas20180731::Client::synchronizeChaincode(shared_ptr<SynchronizeChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synchronizeChaincodeWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Baas20180731::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

TagResourcesResponse Alibabacloud_Baas20180731::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnfreezeAccountResponse Alibabacloud_Baas20180731::Client::unfreezeAccountWithOptions(shared_ptr<UnfreezeAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnfreezeAccount"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnfreezeAccountResponse(callApi(params, req, runtime));
}

UnfreezeAccountResponse Alibabacloud_Baas20180731::Client::unfreezeAccount(shared_ptr<UnfreezeAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unfreezeAccountWithOptions(request, runtime);
}

UnfreezeAntChainAccountResponse Alibabacloud_Baas20180731::Client::unfreezeAntChainAccountWithOptions(shared_ptr<UnfreezeAntChainAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UnfreezeAntChainAccountResponse Alibabacloud_Baas20180731::Client::unfreezeAntChainAccount(shared_ptr<UnfreezeAntChainAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unfreezeAntChainAccountWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Baas20180731::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UntagResourcesResponse Alibabacloud_Baas20180731::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAntChainResponse Alibabacloud_Baas20180731::Client::updateAntChainWithOptions(shared_ptr<UpdateAntChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainResponse Alibabacloud_Baas20180731::Client::updateAntChain(shared_ptr<UpdateAntChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainWithOptions(request, runtime);
}

UpdateAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::updateAntChainConsortiumWithOptions(shared_ptr<UpdateAntChainConsortiumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainConsortiumResponse Alibabacloud_Baas20180731::Client::updateAntChainConsortium(shared_ptr<UpdateAntChainConsortiumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainConsortiumWithOptions(request, runtime);
}

UpdateAntChainContractContentResponse Alibabacloud_Baas20180731::Client::updateAntChainContractContentWithOptions(shared_ptr<UpdateAntChainContractContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainContractContentResponse Alibabacloud_Baas20180731::Client::updateAntChainContractContent(shared_ptr<UpdateAntChainContractContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainContractContentWithOptions(request, runtime);
}

UpdateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::updateAntChainContractProjectWithOptions(shared_ptr<UpdateAntChainContractProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainContractProjectResponse Alibabacloud_Baas20180731::Client::updateAntChainContractProject(shared_ptr<UpdateAntChainContractProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainContractProjectWithOptions(request, runtime);
}

UpdateAntChainMemberResponse Alibabacloud_Baas20180731::Client::updateAntChainMemberWithOptions(shared_ptr<UpdateAntChainMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainMemberResponse Alibabacloud_Baas20180731::Client::updateAntChainMember(shared_ptr<UpdateAntChainMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainMemberWithOptions(request, runtime);
}

UpdateAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20180731::Client::updateAntChainQRCodeAuthorizationWithOptions(shared_ptr<UpdateAntChainQRCodeAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2018-07-31"))},
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

UpdateAntChainQRCodeAuthorizationResponse Alibabacloud_Baas20180731::Client::updateAntChainQRCodeAuthorization(shared_ptr<UpdateAntChainQRCodeAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAntChainQRCodeAuthorizationWithOptions(request, runtime);
}

UpdateBlockchainSchemaResponse Alibabacloud_Baas20180731::Client::updateBlockchainSchemaWithOptions(shared_ptr<UpdateBlockchainSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryConfigs)) {
    body->insert(pair<string, string>("CategoryConfigs", *request->categoryConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaId)) {
    body->insert(pair<string, long>("SchemaId", *request->schemaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    body->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBlockchainSchema"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBlockchainSchemaResponse(callApi(params, req, runtime));
}

UpdateBlockchainSchemaResponse Alibabacloud_Baas20180731::Client::updateBlockchainSchema(shared_ptr<UpdateBlockchainSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBlockchainSchemaWithOptions(request, runtime);
}

UpdateChannelConfigResponse Alibabacloud_Baas20180731::Client::updateChannelConfigWithOptions(shared_ptr<UpdateChannelConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->batchTimeout)) {
    body->insert(pair<string, long>("BatchTimeout", *request->batchTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxMessageCount)) {
    body->insert(pair<string, long>("MaxMessageCount", *request->maxMessageCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preferredMaxBytes)) {
    body->insert(pair<string, long>("PreferredMaxBytes", *request->preferredMaxBytes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChannelConfig"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateChannelConfigResponse(callApi(params, req, runtime));
}

UpdateChannelConfigResponse Alibabacloud_Baas20180731::Client::updateChannelConfig(shared_ptr<UpdateChannelConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateChannelConfigWithOptions(request, runtime);
}

UpdateEthereumResponse Alibabacloud_Baas20180731::Client::updateEthereumWithOptions(shared_ptr<UpdateEthereumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ethereumId)) {
    body->insert(pair<string, string>("EthereumId", *request->ethereumId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEthereum"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEthereumResponse(callApi(params, req, runtime));
}

UpdateEthereumResponse Alibabacloud_Baas20180731::Client::updateEthereum(shared_ptr<UpdateEthereumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEthereumWithOptions(request, runtime);
}

UpdateEthereumClientUserPasswordResponse Alibabacloud_Baas20180731::Client::updateEthereumClientUserPasswordWithOptions(shared_ptr<UpdateEthereumClientUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
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
    {"action", boost::any(string("UpdateEthereumClientUserPassword"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEthereumClientUserPasswordResponse(callApi(params, req, runtime));
}

UpdateEthereumClientUserPasswordResponse Alibabacloud_Baas20180731::Client::updateEthereumClientUserPassword(shared_ptr<UpdateEthereumClientUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEthereumClientUserPasswordWithOptions(request, runtime);
}

UpdateEthereumNodeResponse Alibabacloud_Baas20180731::Client::updateEthereumNodeWithOptions(shared_ptr<UpdateEthereumNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeName)) {
    body->insert(pair<string, string>("NodeName", *request->nodeName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEthereumNode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEthereumNodeResponse(callApi(params, req, runtime));
}

UpdateEthereumNodeResponse Alibabacloud_Baas20180731::Client::updateEthereumNode(shared_ptr<UpdateEthereumNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEthereumNodeWithOptions(request, runtime);
}

UpdateEthereumNodeConfigurationResponse Alibabacloud_Baas20180731::Client::updateEthereumNodeConfigurationWithOptions(shared_ptr<UpdateEthereumNodeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->IP)) {
    body->insert(pair<string, string>("IP", *request->IP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePub)) {
    body->insert(pair<string, string>("NodePub", *request->nodePub));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->p2pPort)) {
    body->insert(pair<string, long>("P2pPort", *request->p2pPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->raftPort)) {
    body->insert(pair<string, long>("RaftPort", *request->raftPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rpcPort)) {
    body->insert(pair<string, long>("RpcPort", *request->rpcPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->TMPort)) {
    body->insert(pair<string, long>("TMPort", *request->TMPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->TMPub)) {
    body->insert(pair<string, string>("TMPub", *request->TMPub));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->WSPort)) {
    body->insert(pair<string, long>("WSPort", *request->WSPort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEthereumNodeConfiguration"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEthereumNodeConfigurationResponse(callApi(params, req, runtime));
}

UpdateEthereumNodeConfigurationResponse Alibabacloud_Baas20180731::Client::updateEthereumNodeConfiguration(shared_ptr<UpdateEthereumNodeConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEthereumNodeConfigurationWithOptions(request, runtime);
}

UpdateGovernanceTaskResponse Alibabacloud_Baas20180731::Client::updateGovernanceTaskWithOptions(shared_ptr<UpdateGovernanceTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskAction)) {
    body->insert(pair<string, string>("TaskAction", *request->taskAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGovernanceTask"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGovernanceTaskResponse(callApi(params, req, runtime));
}

UpdateGovernanceTaskResponse Alibabacloud_Baas20180731::Client::updateGovernanceTask(shared_ptr<UpdateGovernanceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGovernanceTaskWithOptions(request, runtime);
}

UpdateMemberRoleResponse Alibabacloud_Baas20180731::Client::updateMemberRoleWithOptions(shared_ptr<UpdateMemberRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    body->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->role)) {
    body->insert(pair<string, long>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    body->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMemberRole"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMemberRoleResponse(callApi(params, req, runtime));
}

UpdateMemberRoleResponse Alibabacloud_Baas20180731::Client::updateMemberRole(shared_ptr<UpdateMemberRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMemberRoleWithOptions(request, runtime);
}

UpdateQRCodeAuthorityResponse Alibabacloud_Baas20180731::Client::updateQRCodeAuthorityWithOptions(shared_ptr<UpdateQRCodeAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->authorized)) {
    body->insert(pair<string, bool>("Authorized", *request->authorized));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQRCodeAuthority"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQRCodeAuthorityResponse(callApi(params, req, runtime));
}

UpdateQRCodeAuthorityResponse Alibabacloud_Baas20180731::Client::updateQRCodeAuthority(shared_ptr<UpdateQRCodeAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQRCodeAuthorityWithOptions(request, runtime);
}

UpdateSchemaResponse Alibabacloud_Baas20180731::Client::updateSchemaWithOptions(shared_ptr<UpdateSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizid)) {
    body->insert(pair<string, string>("Bizid", *request->bizid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryConfigs)) {
    body->insert(pair<string, string>("CategoryConfigs", *request->categoryConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaId)) {
    body->insert(pair<string, long>("SchemaId", *request->schemaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    body->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSchema"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSchemaResponse(callApi(params, req, runtime));
}

UpdateSchemaResponse Alibabacloud_Baas20180731::Client::updateSchema(shared_ptr<UpdateSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSchemaWithOptions(request, runtime);
}

UpgradeChaincodeResponse Alibabacloud_Baas20180731::Client::upgradeChaincodeWithOptions(shared_ptr<UpgradeChaincodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("UpgradeChaincode"))},
    {"version", boost::any(string("2018-07-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeChaincodeResponse(callApi(params, req, runtime));
}

UpgradeChaincodeResponse Alibabacloud_Baas20180731::Client::upgradeChaincode(shared_ptr<UpgradeChaincodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeChaincodeWithOptions(request, runtime);
}

UpgradeFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::upgradeFabricChaincodeDefinitionWithOptions(shared_ptr<UpgradeFabricChaincodeDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    body->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeFabricChaincodeDefinition"))},
    {"version", boost::any(string("2018-07-31"))},
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

UpgradeFabricChaincodeDefinitionResponse Alibabacloud_Baas20180731::Client::upgradeFabricChaincodeDefinition(shared_ptr<UpgradeFabricChaincodeDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeFabricChaincodeDefinitionWithOptions(request, runtime);
}

