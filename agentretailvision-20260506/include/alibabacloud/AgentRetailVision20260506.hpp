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
       * @summary 商品导入
       *
       * @param tmpReq ImportProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportProductsResponse
       */
      Models::ImportProductsResponse importProductsWithOptions(const Models::ImportProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 商品导入
       *
       * @param request ImportProductsRequest
       * @return ImportProductsResponse
       */
      Models::ImportProductsResponse importProducts(const Models::ImportProductsRequest &request);

      /**
       * @summary 查询任务状态
       *
       * @param request QueryRecognitionResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecognitionResultResponse
       */
      Models::QueryRecognitionResultResponse queryRecognitionResultWithOptions(const Models::QueryRecognitionResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务状态
       *
       * @param request QueryRecognitionResultRequest
       * @return QueryRecognitionResultResponse
       */
      Models::QueryRecognitionResultResponse queryRecognitionResult(const Models::QueryRecognitionResultRequest &request);

      /**
       * @summary 购物识别
       *
       * @param tmpReq RecognizeOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeOrderResponse
       */
      Models::RecognizeOrderResponse recognizeOrderWithOptions(const Models::RecognizeOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 购物识别
       *
       * @param request RecognizeOrderRequest
       * @return RecognizeOrderResponse
       */
      Models::RecognizeOrderResponse recognizeOrder(const Models::RecognizeOrderRequest &request);

      /**
       * @summary Webhook注册
       *
       * @param request RegisterWebhookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterWebhookResponse
       */
      Models::RegisterWebhookResponse registerWebhookWithOptions(const Models::RegisterWebhookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Webhook注册
       *
       * @param request RegisterWebhookRequest
       * @return RegisterWebhookResponse
       */
      Models::RegisterWebhookResponse registerWebhook(const Models::RegisterWebhookRequest &request);

      /**
       * @summary 商品更新
       *
       * @param tmpReq UpdateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 商品更新
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
