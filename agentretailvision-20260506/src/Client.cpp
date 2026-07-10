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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "agentretailvision.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Generates a composite image for single-item multi-image or multi-item scenarios.
 *
 * @description ## Request description
 * - When `groupType=1`, `platformItemIdList` must contain only one element.
 * - When `groupType=2`, `platformItemIdList` can contain 1 to 10 elements.
 *
 * @param tmpReq GenerateGroupImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateGroupImageResponse
 */
GenerateGroupImageResponse Client::generateGroupImageWithOptions(const GenerateGroupImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateGroupImageShrinkRequest request = GenerateGroupImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPlatformItemIdList()) {
    request.setPlatformItemIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPlatformItemIdList(), "PlatformItemIdList", "json"));
  }

  json query = {};
  if (!!request.hasCallbackSecret()) {
    query["CallbackSecret"] = request.getCallbackSecret();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasPlatformItemIdListShrink()) {
    query["PlatformItemIdList"] = request.getPlatformItemIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateGroupImage"},
    {"version" , "2026-05-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateGroupImageResponse>();
}

/**
 * @summary Generates a composite image for single-item multi-image or multi-item scenarios.
 *
 * @description ## Request description
 * - When `groupType=1`, `platformItemIdList` must contain only one element.
 * - When `groupType=2`, `platformItemIdList` can contain 1 to 10 elements.
 *
 * @param request GenerateGroupImageRequest
 * @return GenerateGroupImageResponse
 */
GenerateGroupImageResponse Client::generateGroupImage(const GenerateGroupImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateGroupImageWithOptions(request, runtime);
}

/**
 * @summary Adds product information. After a successful import, the platform returns a globally unique platform_item_id for subsequent updates and recognition result association.
 *
 * @description ## Operation description
 * - This operation is used to add product information.
 * - After you import products to the product library, they are stored in Alibaba Cloud OSS for direct recall and retrieval by the product recognition API.
 * - You must provide at least one main image URL, and the `item_unique_id` must be unique within the same business party.
 * - You can optionally provide multi-angle views and extra images to improve recognition accuracy.
 * - The `device_id` field can be used to establish an association between a device and product vectors, but it is not required.
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
 * @summary Adds product information. After a successful import, the platform returns a globally unique platform_item_id for subsequent updates and recognition result association.
 *
 * @description ## Operation description
 * - This operation is used to add product information.
 * - After you import products to the product library, they are stored in Alibaba Cloud OSS for direct recall and retrieval by the product recognition API.
 * - You must provide at least one main image URL, and the `item_unique_id` must be unique within the same business party.
 * - You can optionally provide multi-angle views and extra images to improve recognition accuracy.
 * - The `device_id` field can be used to establish an association between a device and product vectors, but it is not required.
 *
 * @param request ImportProductsRequest
 * @return ImportProductsResponse
 */
ImportProductsResponse Client::importProducts(const ImportProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importProductsWithOptions(request, runtime);
}

/**
 * @summary At least one result retrieval method must be integrated: webhook callback or task status query. Both methods can be used simultaneously.
 * 	•	If the user chooses the webhook callback method, the receiving endpoint must be prepared in advance and implemented according to the following request and response parameters.
 * 	•	After the recognition task is completed, the platform will push the results to the business party based on the callback URL bound to the task.
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
 * @summary At least one result retrieval method must be integrated: webhook callback or task status query. Both methods can be used simultaneously.
 * 	•	If the user chooses the webhook callback method, the receiving endpoint must be prepared in advance and implemented according to the following request and response parameters.
 * 	•	After the recognition task is completed, the platform will push the results to the business party based on the callback URL bound to the task.
 *
 * @param request QueryRecognitionResultRequest
 * @return QueryRecognitionResultResponse
 */
QueryRecognitionResultResponse Client::queryRecognitionResult(const QueryRecognitionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecognitionResultWithOptions(request, runtime);
}

/**
 * @summary Used for intelligent recognition scenarios. Requires uploading the OSS address of shopping videos. The platform creates an asynchronous recognition task and immediately returns a task_id. Notifications are sent via webhook, and the results need to be actively retrieved through the query API.
 *
 * @description ## Request Description
 * - The user must provide `caller_uid` and `order_unique_id` as required parameters.
 * - The `video_urls` parameter supports video files in mp4, avi, mov, and mkv formats, with a size limit of 100 MB, a duration of no more than 3 minutes, a resolution between 480p and 1080p, and specific aspect ratio requirements.
 * - At least one of `device_id` or `candidate_items` must be provided to specify the recognition scope. If both are provided, the system first filters by the device product library and then further filters based on the candidate items list.
 * - Optionally, the user can specify a `callback_url` to receive notifications of the recognition results. If not provided, the pre-registered default webhook address is used.
 * - If a request is submitted repeatedly with the same `order_unique_id`, the system directly returns the previously existing task status.
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
 * @summary Used for intelligent recognition scenarios. Requires uploading the OSS address of shopping videos. The platform creates an asynchronous recognition task and immediately returns a task_id. Notifications are sent via webhook, and the results need to be actively retrieved through the query API.
 *
 * @description ## Request Description
 * - The user must provide `caller_uid` and `order_unique_id` as required parameters.
 * - The `video_urls` parameter supports video files in mp4, avi, mov, and mkv formats, with a size limit of 100 MB, a duration of no more than 3 minutes, a resolution between 480p and 1080p, and specific aspect ratio requirements.
 * - At least one of `device_id` or `candidate_items` must be provided to specify the recognition scope. If both are provided, the system first filters by the device product library and then further filters based on the candidate items list.
 * - Optionally, the user can specify a `callback_url` to receive notifications of the recognition results. If not provided, the pre-registered default webhook address is used.
 * - If a request is submitted repeatedly with the same `order_unique_id`, the system directly returns the previously existing task status.
 *
 * @param request RecognizeOrderRequest
 * @return RecognizeOrderResponse
 */
RecognizeOrderResponse Client::recognizeOrder(const RecognizeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recognizeOrderWithOptions(request, runtime);
}

/**
 * @summary Registers or updates the default webhook callback URL.
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
 * @summary Registers or updates the default webhook callback URL.
 *
 * @param request RegisterWebhookRequest
 * @return RegisterWebhookResponse
 */
RegisterWebhookResponse Client::registerWebhook(const RegisterWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerWebhookWithOptions(request, runtime);
}

/**
 * @summary Updates the information of an existing item on the platform.
 *
 * @description ## Operation description
 * - The platform_item_id parameter is used as the primary identifier for the update.
 * - If both platform_item_id and item_unique_id are specified, they must point to the same item.
 * - The item title (image_title) and the list of main image URLs (main_image) are required. The main_image parameter must contain at least one image.
 * - Optional parameters include the multi-angle image list (multi_view_images), the list of additional image URLs (extra_images), and the device ID (device_id).
 * - In multi_view_images, each object must contain the image OSS address (url) and the shooting angle (angle). Valid values of angle: top view (up), bottom view (down), left view (left), right view (right), front view (front), and back view (back).
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
 * @summary Updates the information of an existing item on the platform.
 *
 * @description ## Operation description
 * - The platform_item_id parameter is used as the primary identifier for the update.
 * - If both platform_item_id and item_unique_id are specified, they must point to the same item.
 * - The item title (image_title) and the list of main image URLs (main_image) are required. The main_image parameter must contain at least one image.
 * - Optional parameters include the multi-angle image list (multi_view_images), the list of additional image URLs (extra_images), and the device ID (device_id).
 * - In multi_view_images, each object must contain the image OSS address (url) and the shooting angle (angle). Valid values of angle: top view (up), bottom view (down), left view (left), right view (right), front view (front), and back view (back).
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