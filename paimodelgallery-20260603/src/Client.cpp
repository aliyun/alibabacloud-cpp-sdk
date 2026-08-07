#include <darabonba/Core.hpp>
#include <alibabacloud/PAIModelGallery20260603.hpp>
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
using namespace AlibabaCloud::PAIModelGallery20260603::Models;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{

AlibabaCloud::PAIModelGallery20260603::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "paimodelgallery.us-west-1.aliyuncs.com"},
    {"us-east-1" , "paimodelgallery.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "paimodelgallery.eu-central-1.aliyuncs.com"},
    {"cn-wulanchabu" , "paimodelgallery.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "paimodelgallery.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "paimodelgallery.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "paimodelgallery.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "paimodelgallery.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "paimodelgallery.cn-guangzhou.aliyuncs.com"},
    {"cn-beijing" , "paimodelgallery.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "paimodelgallery.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "paimodelgallery.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "paimodelgallery.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "paimodelgallery.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "paimodelgallery.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("paimodelgallery", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取ModelGallery模型列表
 *
 * @param tmpReq ListModelGalleryModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelGalleryModelsResponse
 */
ListModelGalleryModelsResponse Client::listModelGalleryModelsWithOptions(const ListModelGalleryModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelGalleryModelsShrinkRequest request = ListModelGalleryModelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConditions()) {
    request.setConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConditions(), "Conditions", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasCollections()) {
    query["Collections"] = request.getCollections();
  }

  if (!!request.hasCompressible()) {
    query["Compressible"] = request.getCompressible();
  }

  if (!!request.hasConditionsShrink()) {
    query["Conditions"] = request.getConditionsShrink();
  }

  if (!!request.hasDeepThink()) {
    query["DeepThink"] = request.getDeepThink();
  }

  if (!!request.hasDemonstrable()) {
    query["Demonstrable"] = request.getDemonstrable();
  }

  if (!!request.hasDeployable()) {
    query["Deployable"] = request.getDeployable();
  }

  if (!!request.hasDistillable()) {
    query["Distillable"] = request.getDistillable();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEvaluable()) {
    query["Evaluable"] = request.getEvaluable();
  }

  if (!!request.hasFunctionCall()) {
    query["FunctionCall"] = request.getFunctionCall();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelSeries()) {
    query["ModelSeries"] = request.getModelSeries();
  }

  if (!!request.hasModelType()) {
    query["ModelType"] = request.getModelType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSupportedCompressionResource()) {
    query["SupportedCompressionResource"] = request.getSupportedCompressionResource();
  }

  if (!!request.hasSupportedDistillationResource()) {
    query["SupportedDistillationResource"] = request.getSupportedDistillationResource();
  }

  if (!!request.hasSupportedEvaluationResource()) {
    query["SupportedEvaluationResource"] = request.getSupportedEvaluationResource();
  }

  if (!!request.hasSupportedInferenceResource()) {
    query["SupportedInferenceResource"] = request.getSupportedInferenceResource();
  }

  if (!!request.hasSupportedTrainingResource()) {
    query["SupportedTrainingResource"] = request.getSupportedTrainingResource();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasTask()) {
    query["Task"] = request.getTask();
  }

  if (!!request.hasTrainable()) {
    query["Trainable"] = request.getTrainable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelGalleryModels"},
    {"version" , "2026-06-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/modelgallery/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelGalleryModelsResponse>();
}

/**
 * @summary 获取ModelGallery模型列表
 *
 * @param request ListModelGalleryModelsRequest
 * @return ListModelGalleryModelsResponse
 */
ListModelGalleryModelsResponse Client::listModelGalleryModels(const ListModelGalleryModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelGalleryModelsWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603