// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ocr_api_20210707.hpp>
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

using namespace Alibabacloud_Ocr-api20210707;

Alibabacloud_Ocr-api20210707::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ocr-api"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ocr-api20210707::Client::getEndpoint(shared_ptr<string> productId,
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

RecognizeDrivingLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeDrivingLicenseResponse(doRPCRequest(make_shared<string>("RecognizeDrivingLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeDrivingLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeDrivingLicenseWithOptions(request, runtime);
}

RecognizeKoreanResponse Alibabacloud_Ocr-api20210707::Client::recognizeKoreanWithOptions(shared_ptr<RecognizeKoreanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeKoreanResponse(doRPCRequest(make_shared<string>("RecognizeKorean"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeKoreanResponse Alibabacloud_Ocr-api20210707::Client::recognizeKorean(shared_ptr<RecognizeKoreanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeKoreanWithOptions(request, runtime);
}

RecognizeCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarInvoiceWithOptions(shared_ptr<RecognizeCarInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeCarInvoiceResponse(doRPCRequest(make_shared<string>("RecognizeCarInvoice"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarInvoice(shared_ptr<RecognizeCarInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarInvoiceWithOptions(request, runtime);
}

RecognizeMixedInvoicesResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedInvoicesWithOptions(shared_ptr<RecognizeMixedInvoicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeMixedInvoicesResponse(doRPCRequest(make_shared<string>("RecognizeMixedInvoices"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeMixedInvoicesResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedInvoices(shared_ptr<RecognizeMixedInvoicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMixedInvoicesWithOptions(request, runtime);
}

RecognizeEstateCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEstateCertificationWithOptions(shared_ptr<RecognizeEstateCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEstateCertificationResponse(doRPCRequest(make_shared<string>("RecognizeEstateCertification"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEstateCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEstateCertification(shared_ptr<RecognizeEstateCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEstateCertificationWithOptions(request, runtime);
}

RecognizeCarNumberResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarNumberWithOptions(shared_ptr<RecognizeCarNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeCarNumberResponse(doRPCRequest(make_shared<string>("RecognizeCarNumber"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeCarNumberResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarNumber(shared_ptr<RecognizeCarNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarNumberWithOptions(request, runtime);
}

RecognizeEduPaperOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperOcrWithOptions(shared_ptr<RecognizeEduPaperOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduPaperOcrResponse(doRPCRequest(make_shared<string>("RecognizeEduPaperOcr"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduPaperOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperOcr(shared_ptr<RecognizeEduPaperOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperOcrWithOptions(request, runtime);
}

RecognizeTradeMarkCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeTradeMarkCertificationWithOptions(shared_ptr<RecognizeTradeMarkCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeTradeMarkCertificationResponse(doRPCRequest(make_shared<string>("RecognizeTradeMarkCertification"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeTradeMarkCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeTradeMarkCertification(shared_ptr<RecognizeTradeMarkCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTradeMarkCertificationWithOptions(request, runtime);
}

RecognizeBirthCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeBirthCertificationWithOptions(shared_ptr<RecognizeBirthCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeBirthCertificationResponse(doRPCRequest(make_shared<string>("RecognizeBirthCertification"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeBirthCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeBirthCertification(shared_ptr<RecognizeBirthCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBirthCertificationWithOptions(request, runtime);
}

RecognizeDoctypeResponse Alibabacloud_Ocr-api20210707::Client::recognizeDoctypeWithOptions(shared_ptr<RecognizeDoctypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeDoctypeResponse(doRPCRequest(make_shared<string>("RecognizeDoctype"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeDoctypeResponse Alibabacloud_Ocr-api20210707::Client::recognizeDoctype(shared_ptr<RecognizeDoctypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeDoctypeWithOptions(request, runtime);
}

RecognizeBankAccountLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAccountLicenseWithOptions(shared_ptr<RecognizeBankAccountLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeBankAccountLicenseResponse(doRPCRequest(make_shared<string>("RecognizeBankAccountLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeBankAccountLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAccountLicense(shared_ptr<RecognizeBankAccountLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBankAccountLicenseWithOptions(request, runtime);
}

RecognizeFoodManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodManageLicenseWithOptions(shared_ptr<RecognizeFoodManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeFoodManageLicenseResponse(doRPCRequest(make_shared<string>("RecognizeFoodManageLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeFoodManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodManageLicense(shared_ptr<RecognizeFoodManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeFoodManageLicenseWithOptions(request, runtime);
}

RecognizeRollTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeRollTicketWithOptions(shared_ptr<RecognizeRollTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeRollTicketResponse(doRPCRequest(make_shared<string>("RecognizeRollTicket"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeRollTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeRollTicket(shared_ptr<RecognizeRollTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeRollTicketWithOptions(request, runtime);
}

RecognizeEduFormulaResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduFormulaWithOptions(shared_ptr<RecognizeEduFormulaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduFormulaResponse(doRPCRequest(make_shared<string>("RecognizeEduFormula"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduFormulaResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduFormula(shared_ptr<RecognizeEduFormulaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduFormulaWithOptions(request, runtime);
}

RecognizePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizePassportWithOptions(shared_ptr<RecognizePassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizePassportResponse(doRPCRequest(make_shared<string>("RecognizePassport"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizePassport(shared_ptr<RecognizePassportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizePassportWithOptions(request, runtime);
}

RecognizeTaxiInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeTaxiInvoiceResponse(doRPCRequest(make_shared<string>("RecognizeTaxiInvoice"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeTaxiInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTaxiInvoiceWithOptions(request, runtime);
}

RecognizeFoodProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodProduceLicenseWithOptions(shared_ptr<RecognizeFoodProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeFoodProduceLicenseResponse(doRPCRequest(make_shared<string>("RecognizeFoodProduceLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeFoodProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodProduceLicense(shared_ptr<RecognizeFoodProduceLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeFoodProduceLicenseWithOptions(request, runtime);
}

RecognizeMedicalDeviceProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceProduceLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeMedicalDeviceProduceLicenseResponse(doRPCRequest(make_shared<string>("RecognizeMedicalDeviceProduceLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeMedicalDeviceProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceProduceLicense(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMedicalDeviceProduceLicenseWithOptions(request, runtime);
}

RecognizeHandwritingResponse Alibabacloud_Ocr-api20210707::Client::recognizeHandwritingWithOptions(shared_ptr<RecognizeHandwritingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeHandwritingResponse(doRPCRequest(make_shared<string>("RecognizeHandwriting"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeHandwritingResponse Alibabacloud_Ocr-api20210707::Client::recognizeHandwriting(shared_ptr<RecognizeHandwritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHandwritingWithOptions(request, runtime);
}

RecognizeAirItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeAirItineraryWithOptions(shared_ptr<RecognizeAirItineraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeAirItineraryResponse(doRPCRequest(make_shared<string>("RecognizeAirItinerary"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeAirItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeAirItinerary(shared_ptr<RecognizeAirItineraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAirItineraryWithOptions(request, runtime);
}

RecognizeJanpaneseResponse Alibabacloud_Ocr-api20210707::Client::recognizeJanpaneseWithOptions(shared_ptr<RecognizeJanpaneseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeJanpaneseResponse(doRPCRequest(make_shared<string>("RecognizeJanpanese"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeJanpaneseResponse Alibabacloud_Ocr-api20210707::Client::recognizeJanpanese(shared_ptr<RecognizeJanpaneseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeJanpaneseWithOptions(request, runtime);
}

RecognizeCtwoMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCtwoMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeCtwoMedicalDeviceManageLicenseResponse(doRPCRequest(make_shared<string>("RecognizeCtwoMedicalDeviceManageLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeCtwoMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCtwoMedicalDeviceManageLicense(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCtwoMedicalDeviceManageLicenseWithOptions(request, runtime);
}

RecognizeThaiResponse Alibabacloud_Ocr-api20210707::Client::recognizeThaiWithOptions(shared_ptr<RecognizeThaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeThaiResponse(doRPCRequest(make_shared<string>("RecognizeThai"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeThaiResponse Alibabacloud_Ocr-api20210707::Client::recognizeThai(shared_ptr<RecognizeThaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeThaiWithOptions(request, runtime);
}

RecognizeMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeMedicalDeviceManageLicenseResponse(doRPCRequest(make_shared<string>("RecognizeMedicalDeviceManageLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceManageLicense(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMedicalDeviceManageLicenseWithOptions(request, runtime);
}

RecognizeLatinResponse Alibabacloud_Ocr-api20210707::Client::recognizeLatinWithOptions(shared_ptr<RecognizeLatinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeLatinResponse(doRPCRequest(make_shared<string>("RecognizeLatin"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeLatinResponse Alibabacloud_Ocr-api20210707::Client::recognizeLatin(shared_ptr<RecognizeLatinRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeLatinWithOptions(request, runtime);
}

RecognizeInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeInvoiceWithOptions(shared_ptr<RecognizeInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeInvoiceResponse(doRPCRequest(make_shared<string>("RecognizeInvoice"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeInvoice(shared_ptr<RecognizeInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeInvoiceWithOptions(request, runtime);
}

RecognizeMixedCardsResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedCardsWithOptions(shared_ptr<RecognizeMixedCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeMixedCardsResponse(doRPCRequest(make_shared<string>("RecognizeMixedCards"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeMixedCardsResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedCards(shared_ptr<RecognizeMixedCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMixedCardsWithOptions(request, runtime);
}

RecognizeWaybillResponse Alibabacloud_Ocr-api20210707::Client::recognizeWaybillWithOptions(shared_ptr<RecognizeWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeWaybillResponse(doRPCRequest(make_shared<string>("RecognizeWaybill"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeWaybillResponse Alibabacloud_Ocr-api20210707::Client::recognizeWaybill(shared_ptr<RecognizeWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeWaybillWithOptions(request, runtime);
}

RecognizeCarVinCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarVinCodeWithOptions(shared_ptr<RecognizeCarVinCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeCarVinCodeResponse(doRPCRequest(make_shared<string>("RecognizeCarVinCode"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeCarVinCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarVinCode(shared_ptr<RecognizeCarVinCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarVinCodeWithOptions(request, runtime);
}

RecognizeAdvancedResponse Alibabacloud_Ocr-api20210707::Client::recognizeAdvancedWithOptions(shared_ptr<RecognizeAdvancedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeAdvancedResponse(doRPCRequest(make_shared<string>("RecognizeAdvanced"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeAdvancedResponse Alibabacloud_Ocr-api20210707::Client::recognizeAdvanced(shared_ptr<RecognizeAdvancedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAdvancedWithOptions(request, runtime);
}

RecognizeVehicleLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleLicenseWithOptions(shared_ptr<RecognizeVehicleLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeVehicleLicenseResponse(doRPCRequest(make_shared<string>("RecognizeVehicleLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeVehicleLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleLicense(shared_ptr<RecognizeVehicleLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeVehicleLicenseWithOptions(request, runtime);
}

RecognizeRussianResponse Alibabacloud_Ocr-api20210707::Client::recognizeRussianWithOptions(shared_ptr<RecognizeRussianRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeRussianResponse(doRPCRequest(make_shared<string>("RecognizeRussian"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeRussianResponse Alibabacloud_Ocr-api20210707::Client::recognizeRussian(shared_ptr<RecognizeRussianRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeRussianWithOptions(request, runtime);
}

RecognizeHouseCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeHouseCertificationWithOptions(shared_ptr<RecognizeHouseCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeHouseCertificationResponse(doRPCRequest(make_shared<string>("RecognizeHouseCertification"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeHouseCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeHouseCertification(shared_ptr<RecognizeHouseCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHouseCertificationWithOptions(request, runtime);
}

RecognizeBasicResponse Alibabacloud_Ocr-api20210707::Client::recognizeBasicWithOptions(shared_ptr<RecognizeBasicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeBasicResponse(doRPCRequest(make_shared<string>("RecognizeBasic"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeBasicResponse Alibabacloud_Ocr-api20210707::Client::recognizeBasic(shared_ptr<RecognizeBasicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBasicWithOptions(request, runtime);
}

RecognizeBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeBusinessLicenseResponse(doRPCRequest(make_shared<string>("RecognizeBusinessLicense"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBusinessLicenseWithOptions(request, runtime);
}

RecognizeBankCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeBankCardResponse(doRPCRequest(make_shared<string>("RecognizeBankCard"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeBankCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBankCardWithOptions(request, runtime);
}

RecognizeEduPaperCutResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperCutWithOptions(shared_ptr<RecognizeEduPaperCutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduPaperCutResponse(doRPCRequest(make_shared<string>("RecognizeEduPaperCut"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduPaperCutResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperCut(shared_ptr<RecognizeEduPaperCutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperCutWithOptions(request, runtime);
}

RecognizeHouseholdResponse Alibabacloud_Ocr-api20210707::Client::recognizeHouseholdWithOptions(shared_ptr<RecognizeHouseholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeHouseholdResponse(doRPCRequest(make_shared<string>("RecognizeHousehold"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeHouseholdResponse Alibabacloud_Ocr-api20210707::Client::recognizeHousehold(shared_ptr<RecognizeHouseholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHouseholdWithOptions(request, runtime);
}

RecognizeEduQuestionOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduQuestionOcrWithOptions(shared_ptr<RecognizeEduQuestionOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduQuestionOcrResponse(doRPCRequest(make_shared<string>("RecognizeEduQuestionOcr"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduQuestionOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduQuestionOcr(shared_ptr<RecognizeEduQuestionOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduQuestionOcrWithOptions(request, runtime);
}

RecognizeTrainInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTrainInvoiceWithOptions(shared_ptr<RecognizeTrainInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeTrainInvoiceResponse(doRPCRequest(make_shared<string>("RecognizeTrainInvoice"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeTrainInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTrainInvoice(shared_ptr<RecognizeTrainInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTrainInvoiceWithOptions(request, runtime);
}

RecognizeTableOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeTableOcrWithOptions(shared_ptr<RecognizeTableOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeTableOcrResponse(doRPCRequest(make_shared<string>("RecognizeTableOcr"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeTableOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeTableOcr(shared_ptr<RecognizeTableOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTableOcrWithOptions(request, runtime);
}

RecognizeEnglishResponse Alibabacloud_Ocr-api20210707::Client::recognizeEnglishWithOptions(shared_ptr<RecognizeEnglishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEnglishResponse(doRPCRequest(make_shared<string>("RecognizeEnglish"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEnglishResponse Alibabacloud_Ocr-api20210707::Client::recognizeEnglish(shared_ptr<RecognizeEnglishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEnglishWithOptions(request, runtime);
}

RecognizeMultiLanguageResponse Alibabacloud_Ocr-api20210707::Client::recognizeMultiLanguageWithOptions(shared_ptr<RecognizeMultiLanguageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecognizeMultiLanguageShrinkRequest> request = make_shared<RecognizeMultiLanguageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->languages)) {
    request->languagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->languages, make_shared<string>("Languages"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeMultiLanguageResponse(doRPCRequest(make_shared<string>("RecognizeMultiLanguage"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeMultiLanguageResponse Alibabacloud_Ocr-api20210707::Client::recognizeMultiLanguage(shared_ptr<RecognizeMultiLanguageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMultiLanguageWithOptions(request, runtime);
}

RecognizeEduOralCalculationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduOralCalculationWithOptions(shared_ptr<RecognizeEduOralCalculationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduOralCalculationResponse(doRPCRequest(make_shared<string>("RecognizeEduOralCalculation"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduOralCalculationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduOralCalculation(shared_ptr<RecognizeEduOralCalculationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduOralCalculationWithOptions(request, runtime);
}

RecognizeQuotaInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeQuotaInvoiceWithOptions(shared_ptr<RecognizeQuotaInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeQuotaInvoiceResponse(doRPCRequest(make_shared<string>("RecognizeQuotaInvoice"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeQuotaInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeQuotaInvoice(shared_ptr<RecognizeQuotaInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeQuotaInvoiceWithOptions(request, runtime);
}

RecognizeGeneralResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneralWithOptions(shared_ptr<RecognizeGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeGeneralResponse(doRPCRequest(make_shared<string>("RecognizeGeneral"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeGeneralResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneral(shared_ptr<RecognizeGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeGeneralWithOptions(request, runtime);
}

RecognizeEduPaperStructedResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperStructedWithOptions(shared_ptr<RecognizeEduPaperStructedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeEduPaperStructedResponse(doRPCRequest(make_shared<string>("RecognizeEduPaperStructed"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeEduPaperStructedResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperStructed(shared_ptr<RecognizeEduPaperStructedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperStructedWithOptions(request, runtime);
}

RecognizeIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeIdcardWithOptions(shared_ptr<RecognizeIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return RecognizeIdcardResponse(doRPCRequest(make_shared<string>("RecognizeIdcard"), make_shared<string>("2021-07-07"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeIdcard(shared_ptr<RecognizeIdcardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeIdcardWithOptions(request, runtime);
}

