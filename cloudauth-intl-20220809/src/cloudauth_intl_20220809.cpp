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

CheckVerifyLogResponse Alibabacloud_Cloudauth-intl20220809::Client::checkVerifyLogWithOptions(shared_ptr<CheckVerifyLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    body->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckVerifyLog"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckVerifyLogResponse(callApi(params, req, runtime));
}

CheckVerifyLogResponse Alibabacloud_Cloudauth-intl20220809::Client::checkVerifyLog(shared_ptr<CheckVerifyLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkVerifyLogWithOptions(request, runtime);
}

DeepfakeDetectIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::deepfakeDetectIntlWithOptions(shared_ptr<DeepfakeDetectIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceInputType)) {
    query->insert(pair<string, string>("FaceInputType", *request->faceInputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceUrl)) {
    query->insert(pair<string, string>("FaceUrl", *request->faceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceBase64)) {
    body->insert(pair<string, string>("FaceBase64", *request->faceBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeepfakeDetectIntl"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeepfakeDetectIntlResponse(callApi(params, req, runtime));
}

DeepfakeDetectIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::deepfakeDetectIntl(shared_ptr<DeepfakeDetectIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deepfakeDetectIntlWithOptions(request, runtime);
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

DocOcrResponse Alibabacloud_Cloudauth-intl20220809::Client::docOcrWithOptions(shared_ptr<DocOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cardSide)) {
    query->insert(pair<string, string>("CardSide", *request->cardSide));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idFaceQuality)) {
    query->insert(pair<string, string>("IdFaceQuality", *request->idFaceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idOcrPictureUrl)) {
    query->insert(pair<string, string>("IdOcrPictureUrl", *request->idOcrPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idThreshold)) {
    query->insert(pair<string, string>("IdThreshold", *request->idThreshold));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->idThreshold)) {
    query->insert(pair<string, string>("IdThreshold", *request->idThreshold));
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

FaceGuardRiskResponse Alibabacloud_Cloudauth-intl20220809::Client::faceGuardRiskWithOptions(shared_ptr<FaceGuardRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceToken)) {
    query->insert(pair<string, string>("DeviceToken", *request->deviceToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FaceGuardRisk"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FaceGuardRiskResponse(callApi(params, req, runtime));
}

FaceGuardRiskResponse Alibabacloud_Cloudauth-intl20220809::Client::faceGuardRisk(shared_ptr<FaceGuardRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return faceGuardRiskWithOptions(request, runtime);
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

Id2MetaPeriodVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::id2MetaPeriodVerifyIntlWithOptions(shared_ptr<Id2MetaPeriodVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docName)) {
    body->insert(pair<string, string>("DocName", *request->docName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docNo)) {
    body->insert(pair<string, string>("DocNo", *request->docNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    body->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    body->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    body->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validityEndDate)) {
    body->insert(pair<string, string>("ValidityEndDate", *request->validityEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validityStartDate)) {
    body->insert(pair<string, string>("ValidityStartDate", *request->validityStartDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Id2MetaPeriodVerifyIntl"))},
    {"version", boost::any(string("2022-08-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Id2MetaPeriodVerifyIntlResponse(callApi(params, req, runtime));
}

Id2MetaPeriodVerifyIntlResponse Alibabacloud_Cloudauth-intl20220809::Client::id2MetaPeriodVerifyIntl(shared_ptr<Id2MetaPeriodVerifyIntlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return id2MetaPeriodVerifyIntlWithOptions(request, runtime);
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

InitializeResponse Alibabacloud_Cloudauth-intl20220809::Client::initializeWithOptions(shared_ptr<InitializeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InitializeShrinkRequest> request = make_shared<InitializeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->docPageConfig)) {
    request->docPageConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->docPageConfig, make_shared<string>("DocPageConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appQualityCheck)) {
    query->insert(pair<string, string>("AppQualityCheck", *request->appQualityCheck));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->dateOfBirth)) {
    query->insert(pair<string, string>("DateOfBirth", *request->dateOfBirth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dateOfExpiry)) {
    query->insert(pair<string, string>("DateOfExpiry", *request->dateOfExpiry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docPageConfigShrink)) {
    query->insert(pair<string, string>("DocPageConfig", *request->docPageConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docScanMode)) {
    query->insert(pair<string, string>("DocScanMode", *request->docScanMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    query->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docVideo)) {
    query->insert(pair<string, string>("DocVideo", *request->docVideo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->documentNumber)) {
    query->insert(pair<string, string>("DocumentNumber", *request->documentNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceCode)) {
    query->insert(pair<string, string>("ExperienceCode", *request->experienceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePictureUrl)) {
    query->insert(pair<string, string>("FacePictureUrl", *request->facePictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idFaceQuality)) {
    query->insert(pair<string, string>("IdFaceQuality", *request->idFaceQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idSpoof)) {
    query->insert(pair<string, string>("IdSpoof", *request->idSpoof));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idThreshold)) {
    query->insert(pair<string, string>("IdThreshold", *request->idThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageConfig)) {
    query->insert(pair<string, string>("LanguageConfig", *request->languageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->MRTDInput)) {
    query->insert(pair<string, string>("MRTDInput", *request->MRTDInput));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocr)) {
    query->insert(pair<string, string>("Ocr", *request->ocr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->procedurePriority)) {
    query->insert(pair<string, string>("ProcedurePriority", *request->procedurePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->showAlbumIcon)) {
    query->insert(pair<string, string>("ShowAlbumIcon", *request->showAlbumIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showGuidePage)) {
    query->insert(pair<string, string>("ShowGuidePage", *request->showGuidePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showOcrResult)) {
    query->insert(pair<string, string>("ShowOcrResult", *request->showOcrResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->styleConfig)) {
    query->insert(pair<string, string>("StyleConfig", *request->styleConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useNFC)) {
    query->insert(pair<string, string>("UseNFC", *request->useNFC));
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

