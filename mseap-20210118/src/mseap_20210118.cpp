// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mseap_20210118.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Mseap20210118;

Alibabacloud_Mseap20210118::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mseap"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mseap20210118::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ActivateLicenseResponse Alibabacloud_Mseap20210118::Client::activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ActivateLicenseResponse(doRPCRequest(make_shared<string>("ActivateLicense"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ActivateLicenseResponse Alibabacloud_Mseap20210118::Client::activateLicense(shared_ptr<ActivateLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateLicenseWithOptions(request, runtime);
}

BusinessLicenseOcrResponse Alibabacloud_Mseap20210118::Client::businessLicenseOcrWithOptions(shared_ptr<BusinessLicenseOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BusinessLicenseOcrResponse(doRPCRequest(make_shared<string>("BusinessLicenseOcr"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BusinessLicenseOcrResponse Alibabacloud_Mseap20210118::Client::businessLicenseOcr(shared_ptr<BusinessLicenseOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return businessLicenseOcrWithOptions(request, runtime);
}

CertificateQualityResponse Alibabacloud_Mseap20210118::Client::certificateQualityWithOptions(shared_ptr<CertificateQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CertificateQualityResponse(doRPCRequest(make_shared<string>("CertificateQuality"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CertificateQualityResponse Alibabacloud_Mseap20210118::Client::certificateQuality(shared_ptr<CertificateQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificateQualityWithOptions(request, runtime);
}

DescribeAgreementStatusResponse Alibabacloud_Mseap20210118::Client::describeAgreementStatusWithOptions(shared_ptr<DescribeAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAgreementStatusResponse(doRPCRequest(make_shared<string>("DescribeAgreementStatus"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAgreementStatusResponse Alibabacloud_Mseap20210118::Client::describeAgreementStatus(shared_ptr<DescribeAgreementStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAgreementStatusWithOptions(request, runtime);
}

IdentityCardOcrResponse Alibabacloud_Mseap20210118::Client::identityCardOcrWithOptions(shared_ptr<IdentityCardOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IdentityCardOcrResponse(doRPCRequest(make_shared<string>("IdentityCardOcr"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IdentityCardOcrResponse Alibabacloud_Mseap20210118::Client::identityCardOcr(shared_ptr<IdentityCardOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return identityCardOcrWithOptions(request, runtime);
}

UpdateAgreementStatusResponse Alibabacloud_Mseap20210118::Client::updateAgreementStatusWithOptions(shared_ptr<UpdateAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAgreementStatusResponse(doRPCRequest(make_shared<string>("UpdateAgreementStatus"), make_shared<string>("2021-01-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAgreementStatusResponse Alibabacloud_Mseap20210118::Client::updateAgreementStatus(shared_ptr<UpdateAgreementStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAgreementStatusWithOptions(request, runtime);
}

