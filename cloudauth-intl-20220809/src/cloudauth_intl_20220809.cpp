// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudauth_intl_20220809.hpp>
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

using namespace Alibabacloud_Cloudauth-intl20220809;

Alibabacloud_Cloudauth-intl20220809::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudauth-intl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloudauth-intl20220809::Client::getEndpoint(shared_ptr<string> productId,
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

CardOcrResponse Alibabacloud_Cloudauth-intl20220809::Client::cardOcrWithOptions(shared_ptr<CardOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idFaceQuality)) {
    query->insert(pair<string, string>("IdFaceQuality", *request->idFaceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureUrl)) {
    query->insert(pair<string, string>("IdOcrPictureUrl", *request->idOcrPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocr)) {
    query->insert(pair<string, string>("Ocr", *request->ocr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spoof)) {
    query->insert(pair<string, string>("Spoof", *request->spoof));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureBase64)) {
    body->insert(pair<string, string>("IdOcrPictureBase64", *request->idOcrPictureBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CardOcr"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CardOcrResponse(callApi(params, req, runtime));
}

CardOcrResponse Alibabacloud_Cloudauth-intl20220809::Client::cardOcr(shared_ptr<CardOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cardOcrWithOptions(request, runtime);
}

CheckResultResponse Alibabacloud_Cloudauth-intl20220809::Client::checkResultWithOptions(shared_ptr<CheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extraImageControlList)) {
    query->insert(pair<string, string>("ExtraImageControlList", *request->extraImageControlList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isReturnImage)) {
    query->insert(pair<string, string>("IsReturnImage", *request->isReturnImage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnFiveCategorySpoofResult)) {
    query->insert(pair<string, string>("ReturnFiveCategorySpoofResult", *request->returnFiveCategorySpoofResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    query->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckResult"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckResultResponse(callApi(params, req, runtime));
}

CheckResultResponse Alibabacloud_Cloudauth-intl20220809::Client::checkResult(shared_ptr<CheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkResultWithOptions(request, runtime);
}

DeletePictureResponse Alibabacloud_Cloudauth-intl20220809::Client::deletePictureWithOptions(shared_ptr<DeletePictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deletePicAfterQuery)) {
    query->insert(pair<string, string>("DeletePicAfterQuery", *request->deletePicAfterQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    query->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePicture"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePictureResponse(callApi(params, req, runtime));
}

DeletePictureResponse Alibabacloud_Cloudauth-intl20220809::Client::deletePicture(shared_ptr<DeletePictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePictureWithOptions(request, runtime);
}

DeleteVerifyResultResponse Alibabacloud_Cloudauth-intl20220809::Client::deleteVerifyResultWithOptions(shared_ptr<DeleteVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteAfterQuery)) {
    query->insert(pair<string, string>("DeleteAfterQuery", *request->deleteAfterQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteType)) {
    query->insert(pair<string, string>("DeleteType", *request->deleteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    query->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVerifyResult"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVerifyResultResponse(callApi(params, req, runtime));
}

DeleteVerifyResultResponse Alibabacloud_Cloudauth-intl20220809::Client::deleteVerifyResult(shared_ptr<DeleteVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVerifyResultWithOptions(request, runtime);
}

DescribeAddressLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeAddressLabelsWithOptions(shared_ptr<DescribeAddressLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coin)) {
    query->insert(pair<string, string>("Coin", *request->coin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddressLabels"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddressLabelsResponse(callApi(params, req, runtime));
}

DescribeAddressLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeAddressLabels(shared_ptr<DescribeAddressLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddressLabelsWithOptions(request, runtime);
}

DescribeAddressOverviewResponse Alibabacloud_Cloudauth-intl20220809::Client::describeAddressOverviewWithOptions(shared_ptr<DescribeAddressOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coin)) {
    query->insert(pair<string, string>("Coin", *request->coin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddressOverview"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddressOverviewResponse(callApi(params, req, runtime));
}

DescribeAddressOverviewResponse Alibabacloud_Cloudauth-intl20220809::Client::describeAddressOverview(shared_ptr<DescribeAddressOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddressOverviewWithOptions(request, runtime);
}

DescribeMaliciousAddressResponse Alibabacloud_Cloudauth-intl20220809::Client::describeMaliciousAddressWithOptions(shared_ptr<DescribeMaliciousAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coin)) {
    query->insert(pair<string, string>("Coin", *request->coin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->end)) {
    query->insert(pair<string, string>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->start)) {
    query->insert(pair<string, string>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMaliciousAddress"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMaliciousAddressResponse(callApi(params, req, runtime));
}

DescribeMaliciousAddressResponse Alibabacloud_Cloudauth-intl20220809::Client::describeMaliciousAddress(shared_ptr<DescribeMaliciousAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMaliciousAddressWithOptions(request, runtime);
}

DescribeRiskScoreResponse Alibabacloud_Cloudauth-intl20220809::Client::describeRiskScoreWithOptions(shared_ptr<DescribeRiskScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coin)) {
    query->insert(pair<string, string>("Coin", *request->coin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskScore"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskScoreResponse(callApi(params, req, runtime));
}

DescribeRiskScoreResponse Alibabacloud_Cloudauth-intl20220809::Client::describeRiskScore(shared_ptr<DescribeRiskScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskScoreWithOptions(request, runtime);
}

DescribeTransactionsListResponse Alibabacloud_Cloudauth-intl20220809::Client::describeTransactionsListWithOptions(shared_ptr<DescribeTransactionsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coin)) {
    query->insert(pair<string, string>("Coin", *request->coin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransactionsList"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransactionsListResponse(callApi(params, req, runtime));
}

DescribeTransactionsListResponse Alibabacloud_Cloudauth-intl20220809::Client::describeTransactionsList(shared_ptr<DescribeTransactionsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransactionsListWithOptions(request, runtime);
}

DescribeWeb3AddressLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3AddressLabelsWithOptions(shared_ptr<DescribeWeb3AddressLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chainShortName)) {
    query->insert(pair<string, string>("ChainShortName", *request->chainShortName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWeb3AddressLabels"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWeb3AddressLabelsResponse(callApi(params, req, runtime));
}

DescribeWeb3AddressLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3AddressLabels(shared_ptr<DescribeWeb3AddressLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWeb3AddressLabelsWithOptions(request, runtime);
}

DescribeWeb3RiskScoreResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3RiskScoreWithOptions(shared_ptr<DescribeWeb3RiskScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainShortName)) {
    query->insert(pair<string, string>("ChainShortName", *request->chainShortName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->depth)) {
    query->insert(pair<string, long>("Depth", *request->depth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWeb3RiskScore"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWeb3RiskScoreResponse(callApi(params, req, runtime));
}

DescribeWeb3RiskScoreResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3RiskScore(shared_ptr<DescribeWeb3RiskScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWeb3RiskScoreWithOptions(request, runtime);
}

DescribeWeb3TransactionLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3TransactionLabelsWithOptions(shared_ptr<DescribeWeb3TransactionLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainShortName)) {
    query->insert(pair<string, string>("ChainShortName", *request->chainShortName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transaction)) {
    query->insert(pair<string, string>("Transaction", *request->transaction));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWeb3TransactionLabels"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWeb3TransactionLabelsResponse(callApi(params, req, runtime));
}

DescribeWeb3TransactionLabelsResponse Alibabacloud_Cloudauth-intl20220809::Client::describeWeb3TransactionLabels(shared_ptr<DescribeWeb3TransactionLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWeb3TransactionLabelsWithOptions(request, runtime);
}

DocOcrResponse Alibabacloud_Cloudauth-intl20220809::Client::docOcrWithOptions(shared_ptr<DocOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idFaceQuality)) {
    query->insert(pair<string, string>("IdFaceQuality", *request->idFaceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureUrl)) {
    query->insert(pair<string, string>("IdOcrPictureUrl", *request->idOcrPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocr)) {
    query->insert(pair<string, string>("Ocr", *request->ocr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spoof)) {
    query->insert(pair<string, string>("Spoof", *request->spoof));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureBase64)) {
    body->insert(pair<string, string>("IdOcrPictureBase64", *request->idOcrPictureBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DocOcr"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DocOcrResponse(callApi(params, req, runtime));
}

DocOcrResponse Alibabacloud_Cloudauth-intl20220809::Client::docOcr(shared_ptr<DocOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return docOcrWithOptions(request, runtime);
}

EkycVerifyResponse Alibabacloud_Cloudauth-intl20220809::Client::ekycVerifyWithOptions(shared_ptr<EkycVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorize)) {
    query->insert(pair<string, string>("Authorize", *request->authorize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    query->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docName)) {
    query->insert(pair<string, string>("DocName", *request->docName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docNo)) {
    query->insert(pair<string, string>("DocNo", *request->docNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureUrl)) {
    query->insert(pair<string, string>("FacePictureUrl", *request->facePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureUrl)) {
    query->insert(pair<string, string>("IdOcrPictureUrl", *request->idOcrPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureBase64)) {
    body->insert(pair<string, string>("FacePictureBase64", *request->facePictureBase64));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureBase64)) {
    body->insert(pair<string, string>("IdOcrPictureBase64", *request->idOcrPictureBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EkycVerify"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EkycVerifyResponse(callApi(params, req, runtime));
}

EkycVerifyResponse Alibabacloud_Cloudauth-intl20220809::Client::ekycVerify(shared_ptr<EkycVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ekycVerifyWithOptions(request, runtime);
}

FaceCompareResponse Alibabacloud_Cloudauth-intl20220809::Client::faceCompareWithOptions(shared_ptr<FaceCompareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFacePictureUrl)) {
    query->insert(pair<string, string>("SourceFacePictureUrl", *request->sourceFacePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFacePictureUrl)) {
    query->insert(pair<string, string>("TargetFacePictureUrl", *request->targetFacePictureUrl));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFacePicture)) {
    body->insert(pair<string, string>("SourceFacePicture", *request->sourceFacePicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFacePicture)) {
    body->insert(pair<string, string>("TargetFacePicture", *request->targetFacePicture));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FaceCompare"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FaceCompareResponse(callApi(params, req, runtime));
}

FaceCompareResponse Alibabacloud_Cloudauth-intl20220809::Client::faceCompare(shared_ptr<FaceCompareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return faceCompareWithOptions(request, runtime);
}

FaceLivenessResponse Alibabacloud_Cloudauth-intl20220809::Client::faceLivenessWithOptions(shared_ptr<FaceLivenessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    query->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureUrl)) {
    query->insert(pair<string, string>("FacePictureUrl", *request->facePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceQuality)) {
    query->insert(pair<string, string>("FaceQuality", *request->faceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->occlusion)) {
    query->insert(pair<string, string>("Occlusion", *request->occlusion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureBase64)) {
    body->insert(pair<string, string>("FacePictureBase64", *request->facePictureBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FaceLiveness"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FaceLivenessResponse(callApi(params, req, runtime));
}

FaceLivenessResponse Alibabacloud_Cloudauth-intl20220809::Client::faceLiveness(shared_ptr<FaceLivenessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return faceLivenessWithOptions(request, runtime);
}

FraudResultCallBackResponse Alibabacloud_Cloudauth-intl20220809::Client::fraudResultCallBackWithOptions(shared_ptr<FraudResultCallBackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultCode)) {
    query->insert(pair<string, string>("ResultCode", *request->resultCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyDeployEnv)) {
    query->insert(pair<string, string>("VerifyDeployEnv", *request->verifyDeployEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FraudResultCallBack"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FraudResultCallBackResponse(callApi(params, req, runtime));
}

FraudResultCallBackResponse Alibabacloud_Cloudauth-intl20220809::Client::fraudResultCallBack(shared_ptr<FraudResultCallBackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fraudResultCallBackWithOptions(request, runtime);
}

Id2MetaVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::id2MetaVerifyIntlWithOptions(shared_ptr<Id2MetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Id2MetaVerifyIntl"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Id2MetaVerifyIntlResponse(callApi(params, req, runtime));
}

Id2MetaVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::id2MetaVerifyIntl(shared_ptr<Id2MetaVerifyIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return id2MetaVerifyIntlWithOptions(request, runtime);
}

InitializeResponse Alibabacloud_Cloudauth-intl20220809::Client::initializeWithOptions(shared_ptr<InitializeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorize)) {
    query->insert(pair<string, string>("Authorize", *request->authorize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackToken)) {
    query->insert(pair<string, string>("CallbackToken", *request->callbackToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    query->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docScanMode)) {
    query->insert(pair<string, string>("DocScanMode", *request->docScanMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureUrl)) {
    query->insert(pair<string, string>("FacePictureUrl", *request->facePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowType)) {
    query->insert(pair<string, string>("FlowType", *request->flowType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idFaceQuality)) {
    query->insert(pair<string, string>("IdFaceQuality", *request->idFaceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idSpoof)) {
    query->insert(pair<string, string>("IdSpoof", *request->idSpoof));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageConfig)) {
    query->insert(pair<string, string>("LanguageConfig", *request->languageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaInfo)) {
    query->insert(pair<string, string>("MetaInfo", *request->metaInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocr)) {
    query->insert(pair<string, string>("Ocr", *request->ocr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationMode)) {
    query->insert(pair<string, string>("OperationMode", *request->operationMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pages)) {
    query->insert(pair<string, string>("Pages", *request->pages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productConfig)) {
    query->insert(pair<string, string>("ProductConfig", *request->productConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productFlow)) {
    query->insert(pair<string, string>("ProductFlow", *request->productFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnUrl)) {
    query->insert(pair<string, string>("ReturnUrl", *request->returnUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityLevel)) {
    query->insert(pair<string, string>("SecurityLevel", *request->securityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceLevel)) {
    query->insert(pair<string, string>("ServiceLevel", *request->serviceLevel));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureBase64)) {
    body->insert(pair<string, string>("FacePictureBase64", *request->facePictureBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Initialize"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeResponse(callApi(params, req, runtime));
}

InitializeResponse Alibabacloud_Cloudauth-intl20220809::Client::initialize(shared_ptr<InitializeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeWithOptions(request, runtime);
}

Mobile3MetaVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::mobile3MetaVerifyIntlWithOptions(shared_ptr<Mobile3MetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Mobile3MetaVerifyIntl"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Mobile3MetaVerifyIntlResponse(callApi(params, req, runtime));
}

Mobile3MetaVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::mobile3MetaVerifyIntl(shared_ptr<Mobile3MetaVerifyIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobile3MetaVerifyIntlWithOptions(request, runtime);
}

