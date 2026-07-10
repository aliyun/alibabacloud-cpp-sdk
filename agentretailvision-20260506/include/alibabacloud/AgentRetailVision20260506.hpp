// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTRETAILVISION20260506_HPP_
#define ALIBABACLOUD_AGENTRETAILVISION20260506_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentRetailVision20260506Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentRetailVision20260506.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::GenerateGroupImageResponse generateGroupImageWithOptions(const Models::GenerateGroupImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::GenerateGroupImageResponse generateGroupImage(const Models::GenerateGroupImageRequest &request);

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
      Models::ImportProductsResponse importProductsWithOptions(const Models::ImportProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ImportProductsResponse importProducts(const Models::ImportProductsRequest &request);

      /**
       * @summary At least one result retrieval method must be integrated: webhook callback or task status query. Both methods can be used simultaneously.
       * 	•	If the user chooses the webhook callback method, the receiving endpoint must be prepared in advance and implemented according to the following request and response parameters.
       * 	•	After the recognition task is completed, the platform will push the results to the business party based on the callback URL bound to the task.
       *
       * @param request QueryRecognitionResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecognitionResultResponse
       */
      Models::QueryRecognitionResultResponse queryRecognitionResultWithOptions(const Models::QueryRecognitionResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary At least one result retrieval method must be integrated: webhook callback or task status query. Both methods can be used simultaneously.
       * 	•	If the user chooses the webhook callback method, the receiving endpoint must be prepared in advance and implemented according to the following request and response parameters.
       * 	•	After the recognition task is completed, the platform will push the results to the business party based on the callback URL bound to the task.
       *
       * @param request QueryRecognitionResultRequest
       * @return QueryRecognitionResultResponse
       */
      Models::QueryRecognitionResultResponse queryRecognitionResult(const Models::QueryRecognitionResultRequest &request);

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
      Models::RecognizeOrderResponse recognizeOrderWithOptions(const Models::RecognizeOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::RecognizeOrderResponse recognizeOrder(const Models::RecognizeOrderRequest &request);

      /**
       * @summary Registers or updates the default webhook callback URL.
       *
       * @param request RegisterWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterWebhookResponse
       */
      Models::RegisterWebhookResponse registerWebhookWithOptions(const Models::RegisterWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers or updates the default webhook callback URL.
       *
       * @param request RegisterWebhookRequest
       * @return RegisterWebhookResponse
       */
      Models::RegisterWebhookResponse registerWebhook(const Models::RegisterWebhookRequest &request);

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
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
