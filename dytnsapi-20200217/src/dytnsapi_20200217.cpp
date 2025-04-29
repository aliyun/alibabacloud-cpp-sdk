// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dytnsapi_20200217.hpp>
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

using namespace Alibabacloud_Dytnsapi20200217;

Alibabacloud_Dytnsapi20200217::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dytnsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dytnsapi20200217::Client::getEndpoint(shared_ptr<string> productId,
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

CertNoThreeElementVerificationResponse Alibabacloud_Dytnsapi20200217::Client::certNoThreeElementVerificationWithOptions(shared_ptr<CertNoThreeElementVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    query->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certPicture)) {
    query->insert(pair<string, string>("CertPicture", *request->certPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertNoThreeElementVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertNoThreeElementVerificationResponse(callApi(params, req, runtime));
}

CertNoThreeElementVerificationResponse Alibabacloud_Dytnsapi20200217::Client::certNoThreeElementVerification(shared_ptr<CertNoThreeElementVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certNoThreeElementVerificationWithOptions(request, runtime);
}

CertNoTwoElementVerificationResponse Alibabacloud_Dytnsapi20200217::Client::certNoTwoElementVerificationWithOptions(shared_ptr<CertNoTwoElementVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    query->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertNoTwoElementVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertNoTwoElementVerificationResponse(callApi(params, req, runtime));
}

CertNoTwoElementVerificationResponse Alibabacloud_Dytnsapi20200217::Client::certNoTwoElementVerification(shared_ptr<CertNoTwoElementVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certNoTwoElementVerificationWithOptions(request, runtime);
}

CompanyFourElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyFourElementsVerificationWithOptions(shared_ptr<CompanyFourElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertName)) {
    query->insert(pair<string, string>("EpCertName", *request->epCertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertNo)) {
    query->insert(pair<string, string>("EpCertNo", *request->epCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonCertName)) {
    query->insert(pair<string, string>("LegalPersonCertName", *request->legalPersonCertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonCertNo)) {
    query->insert(pair<string, string>("LegalPersonCertNo", *request->legalPersonCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompanyFourElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompanyFourElementsVerificationResponse(callApi(params, req, runtime));
}

CompanyFourElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyFourElementsVerification(shared_ptr<CompanyFourElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return companyFourElementsVerificationWithOptions(request, runtime);
}

CompanyThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyThreeElementsVerificationWithOptions(shared_ptr<CompanyThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertName)) {
    query->insert(pair<string, string>("EpCertName", *request->epCertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertNo)) {
    query->insert(pair<string, string>("EpCertNo", *request->epCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonCertName)) {
    query->insert(pair<string, string>("LegalPersonCertName", *request->legalPersonCertName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompanyThreeElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompanyThreeElementsVerificationResponse(callApi(params, req, runtime));
}

CompanyThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyThreeElementsVerification(shared_ptr<CompanyThreeElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return companyThreeElementsVerificationWithOptions(request, runtime);
}

CompanyTwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyTwoElementsVerificationWithOptions(shared_ptr<CompanyTwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertName)) {
    query->insert(pair<string, string>("EpCertName", *request->epCertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->epCertNo)) {
    query->insert(pair<string, string>("EpCertNo", *request->epCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompanyTwoElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompanyTwoElementsVerificationResponse(callApi(params, req, runtime));
}

CompanyTwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::companyTwoElementsVerification(shared_ptr<CompanyTwoElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return companyTwoElementsVerificationWithOptions(request, runtime);
}

DescribeEmptyNumberResponse Alibabacloud_Dytnsapi20200217::Client::describeEmptyNumberWithOptions(shared_ptr<DescribeEmptyNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEmptyNumber"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEmptyNumberResponse(callApi(params, req, runtime));
}

DescribeEmptyNumberResponse Alibabacloud_Dytnsapi20200217::Client::describeEmptyNumber(shared_ptr<DescribeEmptyNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEmptyNumberWithOptions(request, runtime);
}

DescribeMobileOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describeMobileOperatorAttributeWithOptions(shared_ptr<DescribeMobileOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMobileOperatorAttribute"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMobileOperatorAttributeResponse(callApi(params, req, runtime));
}

DescribeMobileOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describeMobileOperatorAttribute(shared_ptr<DescribeMobileOperatorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMobileOperatorAttributeWithOptions(request, runtime);
}

DescribePhoneNumberAnalysisResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisWithOptions(shared_ptr<DescribePhoneNumberAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberType)) {
    query->insert(pair<string, long>("NumberType", *request->numberType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rate)) {
    query->insert(pair<string, long>("Rate", *request->rate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAnalysis"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAnalysisResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAnalysisResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysis(shared_ptr<DescribePhoneNumberAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAnalysisWithOptions(request, runtime);
}

DescribePhoneNumberAnalysisAIResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisAIWithOptions(shared_ptr<DescribePhoneNumberAnalysisAIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelConfig)) {
    query->insert(pair<string, string>("ModelConfig", *request->modelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rate)) {
    query->insert(pair<string, long>("Rate", *request->rate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAnalysisAI"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAnalysisAIResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAnalysisAIResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisAI(shared_ptr<DescribePhoneNumberAnalysisAIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAnalysisAIWithOptions(request, runtime);
}

DescribePhoneNumberAnalysisPaiResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisPaiWithOptions(shared_ptr<DescribePhoneNumberAnalysisPaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelConfig)) {
    query->insert(pair<string, string>("ModelConfig", *request->modelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rate)) {
    query->insert(pair<string, long>("Rate", *request->rate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAnalysisPai"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAnalysisPaiResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAnalysisPaiResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisPai(shared_ptr<DescribePhoneNumberAnalysisPaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAnalysisPaiWithOptions(request, runtime);
}

DescribePhoneNumberAnalysisTransparentResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisTransparentWithOptions(shared_ptr<DescribePhoneNumberAnalysisTransparentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numberType)) {
    query->insert(pair<string, string>("NumberType", *request->numberType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAnalysisTransparent"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAnalysisTransparentResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAnalysisTransparentResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAnalysisTransparent(shared_ptr<DescribePhoneNumberAnalysisTransparentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAnalysisTransparentWithOptions(request, runtime);
}

DescribePhoneNumberAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAttributeWithOptions(shared_ptr<DescribePhoneNumberAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberAttribute"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberAttributeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberAttribute(shared_ptr<DescribePhoneNumberAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberAttributeWithOptions(request, runtime);
}

DescribePhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOnlineTimeWithOptions(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOnlineTime"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOnlineTimeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOnlineTime(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOnlineTimeWithOptions(request, runtime);
}

DescribePhoneNumberOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    query->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultCount)) {
    query->insert(pair<string, string>("ResultCount", *request->resultCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOperatorAttribute"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOperatorAttributeResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOperatorAttributeResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttribute(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOperatorAttributeWithOptions(request, runtime);
}

DescribePhoneNumberOperatorAttributeAnnualResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeAnnualWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOperatorAttributeAnnual"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOperatorAttributeAnnualResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOperatorAttributeAnnualResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeAnnual(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOperatorAttributeAnnualWithOptions(request, runtime);
}

DescribePhoneNumberOperatorAttributeAnnualUseResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeAnnualUseWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberOperatorAttributeAnnualUse"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberOperatorAttributeAnnualUseResponse(callApi(params, req, runtime));
}

DescribePhoneNumberOperatorAttributeAnnualUseResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberOperatorAttributeAnnualUse(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberOperatorAttributeAnnualUseWithOptions(request, runtime);
}

DescribePhoneNumberRiskResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberRiskWithOptions(shared_ptr<DescribePhoneNumberRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneNumberRisk"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneNumberRiskResponse(callApi(params, req, runtime));
}

DescribePhoneNumberRiskResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneNumberRisk(shared_ptr<DescribePhoneNumberRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneNumberRiskWithOptions(request, runtime);
}

DescribePhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneTwiceTelVerifyWithOptions(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneTwiceTelVerify"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneTwiceTelVerifyResponse(callApi(params, req, runtime));
}

DescribePhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::describePhoneTwiceTelVerify(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneTwiceTelVerifyWithOptions(request, runtime);
}

GetUAIDApplyTokenSignResponse Alibabacloud_Dytnsapi20200217::Client::getUAIDApplyTokenSignWithOptions(shared_ptr<GetUAIDApplyTokenSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    query->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramKey)) {
    query->insert(pair<string, string>("ParamKey", *request->paramKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramStr)) {
    query->insert(pair<string, string>("ParamStr", *request->paramStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    query->insert(pair<string, string>("Time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUAIDApplyTokenSign"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUAIDApplyTokenSignResponse(callApi(params, req, runtime));
}

GetUAIDApplyTokenSignResponse Alibabacloud_Dytnsapi20200217::Client::getUAIDApplyTokenSign(shared_ptr<GetUAIDApplyTokenSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUAIDApplyTokenSignWithOptions(request, runtime);
}

GetUAIDConversionSignResponse Alibabacloud_Dytnsapi20200217::Client::getUAIDConversionSignWithOptions(shared_ptr<GetUAIDConversionSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->format)) {
    query->insert(pair<string, string>("Format", *request->format));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramKey)) {
    query->insert(pair<string, string>("ParamKey", *request->paramKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramStr)) {
    query->insert(pair<string, string>("ParamStr", *request->paramStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->time)) {
    query->insert(pair<string, string>("Time", *request->time));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUAIDConversionSign"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUAIDConversionSignResponse(callApi(params, req, runtime));
}

GetUAIDConversionSignResponse Alibabacloud_Dytnsapi20200217::Client::getUAIDConversionSign(shared_ptr<GetUAIDConversionSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUAIDConversionSignWithOptions(request, runtime);
}

InvalidPhoneNumberFilterResponse Alibabacloud_Dytnsapi20200217::Client::invalidPhoneNumberFilterWithOptions(shared_ptr<InvalidPhoneNumberFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvalidPhoneNumberFilter"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvalidPhoneNumberFilterResponse(callApi(params, req, runtime));
}

InvalidPhoneNumberFilterResponse Alibabacloud_Dytnsapi20200217::Client::invalidPhoneNumberFilter(shared_ptr<InvalidPhoneNumberFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invalidPhoneNumberFilterWithOptions(request, runtime);
}

PhoneNumberConvertServiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberConvertServiceWithOptions(shared_ptr<PhoneNumberConvertServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberConvertService"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberConvertServiceResponse(callApi(params, req, runtime));
}

PhoneNumberConvertServiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberConvertService(shared_ptr<PhoneNumberConvertServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberConvertServiceWithOptions(request, runtime);
}

PhoneNumberEncryptResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberEncryptWithOptions(shared_ptr<PhoneNumberEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberEncrypt"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberEncryptResponse(callApi(params, req, runtime));
}

PhoneNumberEncryptResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberEncrypt(shared_ptr<PhoneNumberEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberEncryptWithOptions(request, runtime);
}

PhoneNumberStatusForAccountResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForAccountWithOptions(shared_ptr<PhoneNumberStatusForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForAccount"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForAccountResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForAccountResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForAccount(shared_ptr<PhoneNumberStatusForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForAccountWithOptions(request, runtime);
}

PhoneNumberStatusForPublicResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForPublicWithOptions(shared_ptr<PhoneNumberStatusForPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForPublic"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForPublicResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForPublicResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForPublic(shared_ptr<PhoneNumberStatusForPublicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForPublicWithOptions(request, runtime);
}

PhoneNumberStatusForRealResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForRealWithOptions(shared_ptr<PhoneNumberStatusForRealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForReal"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForRealResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForRealResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForReal(shared_ptr<PhoneNumberStatusForRealRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForRealWithOptions(request, runtime);
}

PhoneNumberStatusForSmsResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForSmsWithOptions(shared_ptr<PhoneNumberStatusForSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForSms"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForSmsResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForSmsResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForSms(shared_ptr<PhoneNumberStatusForSmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForSmsWithOptions(request, runtime);
}

PhoneNumberStatusForVoiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVoiceWithOptions(shared_ptr<PhoneNumberStatusForVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PhoneNumberStatusForVoice"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PhoneNumberStatusForVoiceResponse(callApi(params, req, runtime));
}

PhoneNumberStatusForVoiceResponse Alibabacloud_Dytnsapi20200217::Client::phoneNumberStatusForVoice(shared_ptr<PhoneNumberStatusForVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return phoneNumberStatusForVoiceWithOptions(request, runtime);
}

QueryAvailableAuthCodeResponse Alibabacloud_Dytnsapi20200217::Client::queryAvailableAuthCodeWithOptions(shared_ptr<QueryAvailableAuthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAvailableAuthCode"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvailableAuthCodeResponse(callApi(params, req, runtime));
}

QueryAvailableAuthCodeResponse Alibabacloud_Dytnsapi20200217::Client::queryAvailableAuthCode(shared_ptr<QueryAvailableAuthCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAvailableAuthCodeWithOptions(request, runtime);
}

QueryPhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::queryPhoneNumberOnlineTimeWithOptions(shared_ptr<QueryPhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPhoneNumberOnlineTime"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPhoneNumberOnlineTimeResponse(callApi(params, req, runtime));
}

QueryPhoneNumberOnlineTimeResponse Alibabacloud_Dytnsapi20200217::Client::queryPhoneNumberOnlineTime(shared_ptr<QueryPhoneNumberOnlineTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPhoneNumberOnlineTimeWithOptions(request, runtime);
}

QueryPhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::queryPhoneTwiceTelVerifyWithOptions(shared_ptr<QueryPhoneTwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPhoneTwiceTelVerify"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPhoneTwiceTelVerifyResponse(callApi(params, req, runtime));
}

QueryPhoneTwiceTelVerifyResponse Alibabacloud_Dytnsapi20200217::Client::queryPhoneTwiceTelVerify(shared_ptr<QueryPhoneTwiceTelVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPhoneTwiceTelVerifyWithOptions(request, runtime);
}

QueryTagApplyRuleResponse Alibabacloud_Dytnsapi20200217::Client::queryTagApplyRuleWithOptions(shared_ptr<QueryTagApplyRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTagApplyRule"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTagApplyRuleResponse(callApi(params, req, runtime));
}

QueryTagApplyRuleResponse Alibabacloud_Dytnsapi20200217::Client::queryTagApplyRule(shared_ptr<QueryTagApplyRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagApplyRuleWithOptions(request, runtime);
}

QueryTagInfoBySelectionResponse Alibabacloud_Dytnsapi20200217::Client::queryTagInfoBySelectionWithOptions(shared_ptr<QueryTagInfoBySelectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->industryId)) {
    query->insert(pair<string, long>("IndustryId", *request->industryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTagInfoBySelection"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTagInfoBySelectionResponse(callApi(params, req, runtime));
}

QueryTagInfoBySelectionResponse Alibabacloud_Dytnsapi20200217::Client::queryTagInfoBySelection(shared_ptr<QueryTagInfoBySelectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagInfoBySelectionWithOptions(request, runtime);
}

QueryTagListPageResponse Alibabacloud_Dytnsapi20200217::Client::queryTagListPageWithOptions(shared_ptr<QueryTagListPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTagListPage"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTagListPageResponse(callApi(params, req, runtime));
}

QueryTagListPageResponse Alibabacloud_Dytnsapi20200217::Client::queryTagListPage(shared_ptr<QueryTagListPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagListPageWithOptions(request, runtime);
}

QueryUsageStatisticsByTagIdResponse Alibabacloud_Dytnsapi20200217::Client::queryUsageStatisticsByTagIdWithOptions(shared_ptr<QueryUsageStatisticsByTagIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTime)) {
    query->insert(pair<string, string>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUsageStatisticsByTagId"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUsageStatisticsByTagIdResponse(callApi(params, req, runtime));
}

QueryUsageStatisticsByTagIdResponse Alibabacloud_Dytnsapi20200217::Client::queryUsageStatisticsByTagId(shared_ptr<QueryUsageStatisticsByTagIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUsageStatisticsByTagIdWithOptions(request, runtime);
}

ThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::threeElementsVerificationWithOptions(shared_ptr<ThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certCode)) {
    query->insert(pair<string, string>("CertCode", *request->certCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ThreeElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ThreeElementsVerificationResponse(callApi(params, req, runtime));
}

ThreeElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::threeElementsVerification(shared_ptr<ThreeElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return threeElementsVerificationWithOptions(request, runtime);
}

TwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::twoElementsVerificationWithOptions(shared_ptr<TwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputNumber)) {
    query->insert(pair<string, string>("InputNumber", *request->inputNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mask)) {
    query->insert(pair<string, string>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TwoElementsVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TwoElementsVerificationResponse(callApi(params, req, runtime));
}

TwoElementsVerificationResponse Alibabacloud_Dytnsapi20200217::Client::twoElementsVerification(shared_ptr<TwoElementsVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return twoElementsVerificationWithOptions(request, runtime);
}

UAIDCollectionResponse Alibabacloud_Dytnsapi20200217::Client::uAIDCollectionWithOptions(shared_ptr<UAIDCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGrantId)) {
    query->insert(pair<string, string>("UserGrantId", *request->userGrantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UAIDCollection"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UAIDCollectionResponse(callApi(params, req, runtime));
}

UAIDCollectionResponse Alibabacloud_Dytnsapi20200217::Client::uAIDCollection(shared_ptr<UAIDCollectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uAIDCollectionWithOptions(request, runtime);
}

UAIDConversionResponse Alibabacloud_Dytnsapi20200217::Client::uAIDConversionWithOptions(shared_ptr<UAIDConversionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uaidList)) {
    query->insert(pair<string, string>("UaidList", *request->uaidList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UAIDConversion"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UAIDConversionResponse(callApi(params, req, runtime));
}

UAIDConversionResponse Alibabacloud_Dytnsapi20200217::Client::uAIDConversion(shared_ptr<UAIDConversionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uAIDConversionWithOptions(request, runtime);
}

UAIDVerificationResponse Alibabacloud_Dytnsapi20200217::Client::uAIDVerificationWithOptions(shared_ptr<UAIDVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrier)) {
    query->insert(pair<string, string>("Carrier", *request->carrier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outId)) {
    query->insert(pair<string, string>("OutId", *request->outId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGrantId)) {
    query->insert(pair<string, string>("UserGrantId", *request->userGrantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UAIDVerification"))},
    {"version", boost::any(string("2020-02-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UAIDVerificationResponse(callApi(params, req, runtime));
}

UAIDVerificationResponse Alibabacloud_Dytnsapi20200217::Client::uAIDVerification(shared_ptr<UAIDVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uAIDVerificationWithOptions(request, runtime);
}

