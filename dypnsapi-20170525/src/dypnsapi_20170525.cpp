// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dypnsapi_20170525.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dypnsapi20170525;

Alibabacloud_Dypnsapi20170525::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dypnsapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dypnsapi20170525::Client::getEndpoint(shared_ptr<string> productId,
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

CreateVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::createVerifySchemeWithOptions(shared_ptr<CreateVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVerifySchemeResponse(doRPCRequest(make_shared<string>("CreateVerifyScheme"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::createVerifyScheme(shared_ptr<CreateVerifySchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySchemeWithOptions(request, runtime);
}

DeleteVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::deleteVerifySchemeWithOptions(shared_ptr<DeleteVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVerifySchemeResponse(doRPCRequest(make_shared<string>("DeleteVerifyScheme"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::deleteVerifyScheme(shared_ptr<DeleteVerifySchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVerifySchemeWithOptions(request, runtime);
}

DescribeVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::describeVerifySchemeWithOptions(shared_ptr<DescribeVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifySchemeResponse(doRPCRequest(make_shared<string>("DescribeVerifyScheme"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifySchemeResponse Alibabacloud_Dypnsapi20170525::Client::describeVerifyScheme(shared_ptr<DescribeVerifySchemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySchemeWithOptions(request, runtime);
}

GetAuthorizationUrlResponse Alibabacloud_Dypnsapi20170525::Client::getAuthorizationUrlWithOptions(shared_ptr<GetAuthorizationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuthorizationUrlResponse(doRPCRequest(make_shared<string>("GetAuthorizationUrl"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuthorizationUrlResponse Alibabacloud_Dypnsapi20170525::Client::getAuthorizationUrl(shared_ptr<GetAuthorizationUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorizationUrlWithOptions(request, runtime);
}

GetAuthTokenResponse Alibabacloud_Dypnsapi20170525::Client::getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuthTokenResponse(doRPCRequest(make_shared<string>("GetAuthToken"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuthTokenResponse Alibabacloud_Dypnsapi20170525::Client::getAuthToken(shared_ptr<GetAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthTokenWithOptions(request, runtime);
}

GetCertifyResultResponse Alibabacloud_Dypnsapi20170525::Client::getCertifyResultWithOptions(shared_ptr<GetCertifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCertifyResultResponse(doRPCRequest(make_shared<string>("GetCertifyResult"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCertifyResultResponse Alibabacloud_Dypnsapi20170525::Client::getCertifyResult(shared_ptr<GetCertifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertifyResultWithOptions(request, runtime);
}

GetMobileResponse Alibabacloud_Dypnsapi20170525::Client::getMobileWithOptions(shared_ptr<GetMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMobileResponse(doRPCRequest(make_shared<string>("GetMobile"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMobileResponse Alibabacloud_Dypnsapi20170525::Client::getMobile(shared_ptr<GetMobileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMobileWithOptions(request, runtime);
}

TwiceTelVerifyResponse Alibabacloud_Dypnsapi20170525::Client::twiceTelVerifyWithOptions(shared_ptr<TwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TwiceTelVerifyResponse(doRPCRequest(make_shared<string>("TwiceTelVerify"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TwiceTelVerifyResponse Alibabacloud_Dypnsapi20170525::Client::twiceTelVerify(shared_ptr<TwiceTelVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return twiceTelVerifyWithOptions(request, runtime);
}

VerifyMobileResponse Alibabacloud_Dypnsapi20170525::Client::verifyMobileWithOptions(shared_ptr<VerifyMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyMobileResponse(doRPCRequest(make_shared<string>("VerifyMobile"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyMobileResponse Alibabacloud_Dypnsapi20170525::Client::verifyMobile(shared_ptr<VerifyMobileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyMobileWithOptions(request, runtime);
}

VerifyPhoneWithTokenResponse Alibabacloud_Dypnsapi20170525::Client::verifyPhoneWithTokenWithOptions(shared_ptr<VerifyPhoneWithTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyPhoneWithTokenResponse(doRPCRequest(make_shared<string>("VerifyPhoneWithToken"), make_shared<string>("2017-05-25"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyPhoneWithTokenResponse Alibabacloud_Dypnsapi20170525::Client::verifyPhoneWithToken(shared_ptr<VerifyPhoneWithTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyPhoneWithTokenWithOptions(request, runtime);
}

