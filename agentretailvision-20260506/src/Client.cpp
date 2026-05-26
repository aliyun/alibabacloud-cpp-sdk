#include <darabonba/Core.hpp>
#include <alibabacloud/AgentRetailVision20260506.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgentRetailVision20260506::Models;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{

AlibabaCloud::AgentRetailVision20260506::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentretailvision", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 商品导入
 *
 * @param tmpReq ImportProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportProductsResponse
 */
ImportProductsResponse Client::importProductsWithOptions(const ImportProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportProductsShrinkRequest request = ImportProductsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtraImages()) {
    request.setExtraImagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtraImages(), "ExtraImages", "json"));
  }

  if (!!tmpReq.hasMainImage()) {
    request.setMainImageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMainImage(), "MainImage", "json"));
  }

  if (!!tmpReq.hasMultiViewImages()) {
    request.setMultiViewImagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMultiViewImages(), "MultiViewImages", "json"));
  }

  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasExtraImagesShrink()) {
    query["ExtraImages"] = request.getExtraImagesShrink();
  }

  if (!!request.hasImageTitle()) {
    query["ImageTitle"] = request.getImageTitle();
  }

  if (!!request.hasItemUniqueId()) {
    query["ItemUniqueId"] = request.getItemUniqueId();
  }

  if (!!request.hasMainImageShrink()) {
    query["MainImage"] = request.getMainImageShrink();
  }

  if (!!request.hasMultiViewImagesShrink()) {
    query["MultiViewImages"] = request.getMultiViewImagesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportProducts"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportProductsResponse>();
}

/**
 * @summary 商品导入
 *
 * @param request ImportProductsRequest
 * @return ImportProductsResponse
 */
ImportProductsResponse Client::importProducts(const ImportProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importProductsWithOptions(request, runtime);
}

/**
 * @summary 查询任务状态
 *
 * @param request QueryRecognitionResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecognitionResultResponse
 */
QueryRecognitionResultResponse Client::queryRecognitionResultWithOptions(const QueryRecognitionResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderUniqueId()) {
    query["OrderUniqueId"] = request.getOrderUniqueId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecognitionResult"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecognitionResultResponse>();
}

/**
 * @summary 查询任务状态
 *
 * @param request QueryRecognitionResultRequest
 * @return QueryRecognitionResultResponse
 */
QueryRecognitionResultResponse Client::queryRecognitionResult(const QueryRecognitionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecognitionResultWithOptions(request, runtime);
}

/**
 * @summary 购物识别
 *
 * @param tmpReq RecognizeOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecognizeOrderResponse
 */
RecognizeOrderResponse Client::recognizeOrderWithOptions(const RecognizeOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RecognizeOrderShrinkRequest request = RecognizeOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCandidateItems()) {
    request.setCandidateItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCandidateItems(), "CandidateItems", "json"));
  }

  if (!!tmpReq.hasVideoUrls()) {
    request.setVideoUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoUrls(), "VideoUrls", "json"));
  }

  json query = {};
  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasCandidateItemsShrink()) {
    query["CandidateItems"] = request.getCandidateItemsShrink();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasOrderUniqueId()) {
    query["OrderUniqueId"] = request.getOrderUniqueId();
  }

  if (!!request.hasVideoUrlsShrink()) {
    query["VideoUrls"] = request.getVideoUrlsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecognizeOrder"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecognizeOrderResponse>();
}

/**
 * @summary 购物识别
 *
 * @param request RecognizeOrderRequest
 * @return RecognizeOrderResponse
 */
RecognizeOrderResponse Client::recognizeOrder(const RecognizeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeOrderWithOptions(request, runtime);
}

/**
 * @summary Webhook注册
 *
 * @param request RegisterWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterWebhookResponse
 */
RegisterWebhookResponse Client::registerWebhookWithOptions(const RegisterWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallbackSecret()) {
    query["CallbackSecret"] = request.getCallbackSecret();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterWebhook"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterWebhookResponse>();
}

/**
 * @summary Webhook注册
 *
 * @param request RegisterWebhookRequest
 * @return RegisterWebhookResponse
 */
RegisterWebhookResponse Client::registerWebhook(const RegisterWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerWebhookWithOptions(request, runtime);
}

/**
 * @summary 商品更新
 *
 * @param tmpReq UpdateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProductWithOptions(const UpdateProductRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProductShrinkRequest request = UpdateProductShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtraImages()) {
    request.setExtraImagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtraImages(), "ExtraImages", "json"));
  }

  if (!!tmpReq.hasMainImage()) {
    request.setMainImageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMainImage(), "MainImage", "json"));
  }

  if (!!tmpReq.hasMultiViewImages()) {
    request.setMultiViewImagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMultiViewImages(), "MultiViewImages", "json"));
  }

  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasExtraImagesShrink()) {
    query["ExtraImages"] = request.getExtraImagesShrink();
  }

  if (!!request.hasImageTitle()) {
    query["ImageTitle"] = request.getImageTitle();
  }

  if (!!request.hasItemUniqueId()) {
    query["ItemUniqueId"] = request.getItemUniqueId();
  }

  if (!!request.hasMainImageShrink()) {
    query["MainImage"] = request.getMainImageShrink();
  }

  if (!!request.hasMultiViewImagesShrink()) {
    query["MultiViewImages"] = request.getMultiViewImagesShrink();
  }

  if (!!request.hasPlatformItemId()) {
    query["PlatformItemId"] = request.getPlatformItemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProduct"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProductResponse>();
}

/**
 * @summary 商品更新
 *
 * @param request UpdateProductRequest
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProduct(const UpdateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProductWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506