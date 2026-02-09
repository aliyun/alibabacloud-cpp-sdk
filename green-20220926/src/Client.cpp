#include <darabonba/Core.hpp>
#include <alibabacloud/Green20220926.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Green20220926::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Green20220926
{

AlibabaCloud::Green20220926::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "green.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu" , "green.aliyuncs.com"},
    {"cn-hongkong" , "green.aliyuncs.com"},
    {"cn-huhehaote" , "green.aliyuncs.com"},
    {"cn-qingdao" , "green.aliyuncs.com"},
    {"cn-zhangjiakou" , "green.aliyuncs.com"},
    {"eu-central-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "green.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "green.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "green.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "green.aliyuncs.com"},
    {"cn-north-2-gov-1" , "green.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("green", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加代答样本
 *
 * @param request AddAnswerSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAnswerSampleResponse
 */
AddAnswerSampleResponse Client::addAnswerSampleWithOptions(const AddAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSampleObject()) {
    query["SampleObject"] = request.getSampleObject();
  }

  if (!!request.hasSamples()) {
    query["Samples"] = request.getSamples();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAnswerSample"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAnswerSampleResponse>();
}

/**
 * @summary 添加代答样本
 *
 * @param request AddAnswerSampleRequest
 * @return AddAnswerSampleResponse
 */
AddAnswerSampleResponse Client::addAnswerSample(const AddAnswerSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAnswerSampleWithOptions(request, runtime);
}

/**
 * @summary Create Image Library
 *
 * @param request AddImageLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageLibResponse
 */
AddImageLibResponse Client::addImageLibWithOptions(const AddImageLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasLibName()) {
    body["LibName"] = request.getLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddImageLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageLibResponse>();
}

/**
 * @summary Create Image Library
 *
 * @param request AddImageLibRequest
 * @return AddImageLibResponse
 */
AddImageLibResponse Client::addImageLib(const AddImageLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImageLibWithOptions(request, runtime);
}

/**
 * @summary Add image to image lib
 *
 * @param request AddImages2LibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImages2LibResponse
 */
AddImages2LibResponse Client::addImages2LibWithOptions(const AddImages2LibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasImgUrl()) {
    body["ImgUrl"] = request.getImgUrl();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddImages2Lib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImages2LibResponse>();
}

/**
 * @summary Add image to image lib
 *
 * @param request AddImages2LibRequest
 * @return AddImages2LibResponse
 */
AddImages2LibResponse Client::addImages2Lib(const AddImages2LibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addImages2LibWithOptions(request, runtime);
}

/**
 * @summary Create keyword library
 *
 * @param request AddKeywordLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddKeywordLibResponse
 */
AddKeywordLibResponse Client::addKeywordLibWithOptions(const AddKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasKeywords()) {
    body["Keywords"] = request.getKeywords();
  }

  if (!!request.hasKeywordsObject()) {
    body["KeywordsObject"] = request.getKeywordsObject();
  }

  if (!!request.hasLibName()) {
    body["LibName"] = request.getLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddKeywordLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddKeywordLibResponse>();
}

/**
 * @summary Create keyword library
 *
 * @param request AddKeywordLibRequest
 * @return AddKeywordLibResponse
 */
AddKeywordLibResponse Client::addKeywordLib(const AddKeywordLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addKeywordLibWithOptions(request, runtime);
}

/**
 * @summary Add keywords
 *
 * @param request AddKeywordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddKeywordsResponse
 */
AddKeywordsResponse Client::addKeywordsWithOptions(const AddKeywordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasKeywords()) {
    body["Keywords"] = request.getKeywords();
  }

  if (!!request.hasKeywordsObject()) {
    body["KeywordsObject"] = request.getKeywordsObject();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddKeywords"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddKeywordsResponse>();
}

/**
 * @summary Add keywords
 *
 * @param request AddKeywordsRequest
 * @return AddKeywordsResponse
 */
AddKeywordsResponse Client::addKeywords(const AddKeywordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addKeywordsWithOptions(request, runtime);
}

/**
 * @summary Add keywords to keyword library.
 *
 * @param request AddKeywordsToLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddKeywordsToLibResponse
 */
AddKeywordsToLibResponse Client::addKeywordsToLibWithOptions(const AddKeywordsToLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasKeywords()) {
    body["Keywords"] = request.getKeywords();
  }

  if (!!request.hasKeywordsObject()) {
    body["KeywordsObject"] = request.getKeywordsObject();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddKeywordsToLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddKeywordsToLibResponse>();
}

/**
 * @summary Add keywords to keyword library.
 *
 * @param request AddKeywordsToLibRequest
 * @return AddKeywordsToLibResponse
 */
AddKeywordsToLibResponse Client::addKeywordsToLib(const AddKeywordsToLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addKeywordsToLibWithOptions(request, runtime);
}

/**
 * @summary Cancel OSS detection task
 *
 * @param request CancelStockOssCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelStockOssCheckTaskResponse
 */
CancelStockOssCheckTaskResponse Client::cancelStockOssCheckTaskWithOptions(const CancelStockOssCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelStockOssCheckTask"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelStockOssCheckTaskResponse>();
}

/**
 * @summary Cancel OSS detection task
 *
 * @param request CancelStockOssCheckTaskRequest
 * @return CancelStockOssCheckTaskResponse
 */
CancelStockOssCheckTaskResponse Client::cancelStockOssCheckTask(const CancelStockOssCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelStockOssCheckTaskWithOptions(request, runtime);
}

/**
 * @summary copy service config
 *
 * @param request CopyServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyServiceConfigResponse
 */
CopyServiceConfigResponse Client::copyServiceConfigWithOptions(const CopyServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasServiceDesc()) {
    body["ServiceDesc"] = request.getServiceDesc();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CopyServiceConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyServiceConfigResponse>();
}

/**
 * @summary copy service config
 *
 * @param request CopyServiceConfigRequest
 * @return CopyServiceConfigResponse
 */
CopyServiceConfigResponse Client::copyServiceConfig(const CopyServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyServiceConfigWithOptions(request, runtime);
}

/**
 * @summary Create stock oss check task
 *
 * @param request CreatStockOssCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatStockOssCheckTaskResponse
 */
CreatStockOssCheckTaskResponse Client::creatStockOssCheckTaskWithOptions(const CreatStockOssCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketPrefixFilterConfig()) {
    query["BucketPrefixFilterConfig"] = request.getBucketPrefixFilterConfig();
  }

  if (!!request.hasBuckets()) {
    query["Buckets"] = request.getBuckets();
  }

  if (!!request.hasCallbackId()) {
    query["CallbackId"] = request.getCallbackId();
  }

  if (!!request.hasDistinctHistoryTasks()) {
    query["DistinctHistoryTasks"] = request.getDistinctHistoryTasks();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecuteDate()) {
    query["ExecuteDate"] = request.getExecuteDate();
  }

  if (!!request.hasExecuteTime()) {
    query["ExecuteTime"] = request.getExecuteTime();
  }

  if (!!request.hasFreeze()) {
    query["Freeze"] = request.getFreeze();
  }

  if (!!request.hasFreezeHighRisk1()) {
    query["FreezeHighRisk1"] = request.getFreezeHighRisk1();
  }

  if (!!request.hasFreezeHighRisk2()) {
    query["FreezeHighRisk2"] = request.getFreezeHighRisk2();
  }

  if (!!request.hasFreezeMediumRisk1()) {
    query["FreezeMediumRisk1"] = request.getFreezeMediumRisk1();
  }

  if (!!request.hasFreezeMediumRisk2()) {
    query["FreezeMediumRisk2"] = request.getFreezeMediumRisk2();
  }

  if (!!request.hasFreezeRestorePath()) {
    query["FreezeRestorePath"] = request.getFreezeRestorePath();
  }

  if (!!request.hasFreezeType()) {
    query["FreezeType"] = request.getFreezeType();
  }

  if (!!request.hasIsInc()) {
    query["IsInc"] = request.getIsInc();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPrefixFilterType()) {
    query["PrefixFilterType"] = request.getPrefixFilterType();
  }

  if (!!request.hasPrefixFilters()) {
    query["PrefixFilters"] = request.getPrefixFilters();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasReferer()) {
    query["Referer"] = request.getReferer();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScanLimit()) {
    query["ScanLimit"] = request.getScanLimit();
  }

  if (!!request.hasScanNoFileType()) {
    query["ScanNoFileType"] = request.getScanNoFileType();
  }

  if (!!request.hasScanResourceType()) {
    query["ScanResourceType"] = request.getScanResourceType();
  }

  if (!!request.hasScanService()) {
    query["ScanService"] = request.getScanService();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskCycle()) {
    query["TaskCycle"] = request.getTaskCycle();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatStockOssCheckTask"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatStockOssCheckTaskResponse>();
}

/**
 * @summary Create stock oss check task
 *
 * @param request CreatStockOssCheckTaskRequest
 * @return CreatStockOssCheckTaskResponse
 */
CreatStockOssCheckTaskResponse Client::creatStockOssCheckTask(const CreatStockOssCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return creatStockOssCheckTaskWithOptions(request, runtime);
}

/**
 * @summary 创建代答库
 *
 * @param request CreateAnswerLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnswerLibResponse
 */
CreateAnswerLibResponse Client::createAnswerLibWithOptions(const CreateAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibName()) {
    body["LibName"] = request.getLibName();
  }

  if (!!request.hasSampleBucket()) {
    body["SampleBucket"] = request.getSampleBucket();
  }

  if (!!request.hasSampleObject()) {
    body["SampleObject"] = request.getSampleObject();
  }

  if (!!request.hasSamples()) {
    body["Samples"] = request.getSamples();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAnswerLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnswerLibResponse>();
}

/**
 * @summary 创建代答库
 *
 * @param request CreateAnswerLibRequest
 * @return CreateAnswerLibResponse
 */
CreateAnswerLibResponse Client::createAnswerLib(const CreateAnswerLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnswerLibWithOptions(request, runtime);
}

/**
 * @summary Create a new message notification
 *
 * @param request CreateCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallbackResponse
 */
CreateCallbackResponse Client::createCallbackWithOptions(const CreateCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCryptType()) {
    body["CryptType"] = request.getCryptType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.getScope();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCallback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCallbackResponse>();
}

/**
 * @summary Create a new message notification
 *
 * @param request CreateCallbackRequest
 * @return CreateCallbackResponse
 */
CreateCallbackResponse Client::createCallback(const CreateCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallbackWithOptions(request, runtime);
}

/**
 * @summary Online Test
 *
 * @param request CreateOnlineTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOnlineTestResponse
 */
CreateOnlineTestResponse Client::createOnlineTestWithOptions(const CreateOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataId()) {
    query["DataId"] = request.getDataId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOnlineTest"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOnlineTestResponse>();
}

/**
 * @summary Online Test
 *
 * @param request CreateOnlineTestRequest
 * @return CreateOnlineTestResponse
 */
CreateOnlineTestResponse Client::createOnlineTest(const CreateOnlineTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOnlineTestWithOptions(request, runtime);
}

/**
 * @summary Check before creating an OSS scan task
 *
 * @param request CreatePreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePreCheckResponse
 */
CreatePreCheckResponse Client::createPreCheckWithOptions(const CreatePreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasBucketPrefixFilterConfig()) {
    body["BucketPrefixFilterConfig"] = request.getBucketPrefixFilterConfig();
  }

  if (!!request.hasBuckets()) {
    body["Buckets"] = request.getBuckets();
  }

  if (!!request.hasDistinctHistoryTasks()) {
    body["DistinctHistoryTasks"] = request.getDistinctHistoryTasks();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsInc()) {
    body["IsInc"] = request.getIsInc();
  }

  if (!!request.hasMediaType()) {
    body["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPrefixFilterType()) {
    body["PrefixFilterType"] = request.getPrefixFilterType();
  }

  if (!!request.hasPrefixFilters()) {
    body["PrefixFilters"] = request.getPrefixFilters();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.getPriority();
  }

  if (!!request.hasScanLimit()) {
    body["ScanLimit"] = request.getScanLimit();
  }

  if (!!request.hasScanNoFileType()) {
    body["ScanNoFileType"] = request.getScanNoFileType();
  }

  if (!!request.hasScanService()) {
    body["ScanService"] = request.getScanService();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePreCheck"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePreCheckResponse>();
}

/**
 * @summary Check before creating an OSS scan task
 *
 * @param request CreatePreCheckRequest
 * @return CreatePreCheckResponse
 */
CreatePreCheckResponse Client::createPreCheck(const CreatePreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPreCheckWithOptions(request, runtime);
}

/**
 * @summary 删除代答库
 *
 * @param request DeleteAnswerLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAnswerLibResponse
 */
DeleteAnswerLibResponse Client::deleteAnswerLibWithOptions(const DeleteAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAnswerLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAnswerLibResponse>();
}

/**
 * @summary 删除代答库
 *
 * @param request DeleteAnswerLibRequest
 * @return DeleteAnswerLibResponse
 */
DeleteAnswerLibResponse Client::deleteAnswerLib(const DeleteAnswerLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAnswerLibWithOptions(request, runtime);
}

/**
 * @summary 删除代答答案
 *
 * @param request DeleteAnswerSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAnswerSampleResponse
 */
DeleteAnswerSampleResponse Client::deleteAnswerSampleWithOptions(const DeleteAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasIds()) {
    body["Ids"] = request.getIds();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAnswerSample"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAnswerSampleResponse>();
}

/**
 * @summary 删除代答答案
 *
 * @param request DeleteAnswerSampleRequest
 * @return DeleteAnswerSampleResponse
 */
DeleteAnswerSampleResponse Client::deleteAnswerSample(const DeleteAnswerSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAnswerSampleWithOptions(request, runtime);
}

/**
 * @summary delete callback
 *
 * @param request DeleteCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCallbackResponse
 */
DeleteCallbackResponse Client::deleteCallbackWithOptions(const DeleteCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCallback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCallbackResponse>();
}

/**
 * @summary delete callback
 *
 * @param request DeleteCallbackRequest
 * @return DeleteCallbackResponse
 */
DeleteCallbackResponse Client::deleteCallback(const DeleteCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCallbackWithOptions(request, runtime);
}

/**
 * @summary Delete feature configuration
 *
 * @param request DeleteFeatureConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFeatureConfigResponse
 */
DeleteFeatureConfigResponse Client::deleteFeatureConfigWithOptions(const DeleteFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasField()) {
    body["Field"] = request.getField();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteFeatureConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFeatureConfigResponse>();
}

/**
 * @summary Delete feature configuration
 *
 * @param request DeleteFeatureConfigRequest
 * @return DeleteFeatureConfigResponse
 */
DeleteFeatureConfigResponse Client::deleteFeatureConfig(const DeleteFeatureConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFeatureConfigWithOptions(request, runtime);
}

/**
 * @summary Delete images from library.
 *
 * @param request DeleteImagesFromLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImagesFromLibResponse
 */
DeleteImagesFromLibResponse Client::deleteImagesFromLibWithOptions(const DeleteImagesFromLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasImageIds()) {
    body["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteImagesFromLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImagesFromLibResponse>();
}

/**
 * @summary Delete images from library.
 *
 * @param request DeleteImagesFromLibRequest
 * @return DeleteImagesFromLibResponse
 */
DeleteImagesFromLibResponse Client::deleteImagesFromLib(const DeleteImagesFromLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImagesFromLibWithOptions(request, runtime);
}

/**
 * @summary Delete keyword
 *
 * @param request DeleteKeywordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeywordResponse
 */
DeleteKeywordResponse Client::deleteKeywordWithOptions(const DeleteKeywordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasKeywordIdList()) {
    body["KeywordIdList"] = request.getKeywordIdList();
  }

  if (!!request.hasKeywordIds()) {
    body["KeywordIds"] = request.getKeywordIds();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteKeyword"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeywordResponse>();
}

/**
 * @summary Delete keyword
 *
 * @param request DeleteKeywordRequest
 * @return DeleteKeywordResponse
 */
DeleteKeywordResponse Client::deleteKeyword(const DeleteKeywordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeywordWithOptions(request, runtime);
}

/**
 * @summary Delete Keyword Library
 *
 * @param request DeleteKeywordLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeywordLibResponse
 */
DeleteKeywordLibResponse Client::deleteKeywordLibWithOptions(const DeleteKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteKeywordLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeywordLibResponse>();
}

/**
 * @summary Delete Keyword Library
 *
 * @param request DeleteKeywordLibRequest
 * @return DeleteKeywordLibResponse
 */
DeleteKeywordLibResponse Client::deleteKeywordLib(const DeleteKeywordLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeywordLibWithOptions(request, runtime);
}

/**
 * @summary Delete online test
 *
 * @param request DeleteOnlineTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOnlineTestResponse
 */
DeleteOnlineTestResponse Client::deleteOnlineTestWithOptions(const DeleteOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOnlineTest"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOnlineTestResponse>();
}

/**
 * @summary Delete online test
 *
 * @param request DeleteOnlineTestRequest
 * @return DeleteOnlineTestResponse
 */
DeleteOnlineTestResponse Client::deleteOnlineTest(const DeleteOnlineTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOnlineTestWithOptions(request, runtime);
}

/**
 * @summary 查询在线测试结果
 *
 * @param request DescribeOnlineTestResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOnlineTestResultResponse
 */
DescribeOnlineTestResultResponse Client::describeOnlineTestResultWithOptions(const DescribeOnlineTestResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOnlineTestResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOnlineTestResultResponse>();
}

/**
 * @summary 查询在线测试结果
 *
 * @param request DescribeOnlineTestResultRequest
 * @return DescribeOnlineTestResultResponse
 */
DescribeOnlineTestResultResponse Client::describeOnlineTestResult(const DescribeOnlineTestResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOnlineTestResultWithOptions(request, runtime);
}

/**
 * @summary 导出代答答案
 *
 * @param request ExportAnswerSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportAnswerSampleResponse
 */
ExportAnswerSampleResponse Client::exportAnswerSampleWithOptions(const ExportAnswerSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportAnswerSample"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportAnswerSampleResponse>();
}

/**
 * @summary 导出代答答案
 *
 * @param request ExportAnswerSampleRequest
 * @return ExportAnswerSampleResponse
 */
ExportAnswerSampleResponse Client::exportAnswerSample(const ExportAnswerSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportAnswerSampleWithOptions(request, runtime);
}

/**
 * @summary Export Call Volume
 *
 * @param request ExportCipStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCipStatsResponse
 */
ExportCipStatsResponse Client::exportCipStatsWithOptions(const ExportCipStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasByMonth()) {
    body["ByMonth"] = request.getByMonth();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExportType()) {
    body["ExportType"] = request.getExportType();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.getLabel();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubUid()) {
    body["SubUid"] = request.getSubUid();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportCipStats"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportCipStatsResponse>();
}

/**
 * @summary Export Call Volume
 *
 * @param request ExportCipStatsRequest
 * @return ExportCipStatsResponse
 */
ExportCipStatsResponse Client::exportCipStats(const ExportCipStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCipStatsWithOptions(request, runtime);
}

/**
 * @summary Export Keywords
 *
 * @param request ExportKeywordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportKeywordResponse
 */
ExportKeywordResponse Client::exportKeywordWithOptions(const ExportKeywordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportKeyword"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportKeywordResponse>();
}

/**
 * @summary Export Keywords
 *
 * @param request ExportKeywordRequest
 * @return ExportKeywordResponse
 */
ExportKeywordResponse Client::exportKeyword(const ExportKeywordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportKeywordWithOptions(request, runtime);
}

/**
 * @summary OSS Usage Statistics Export
 *
 * @param request ExportOssCheckStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportOssCheckStatResponse
 */
ExportOssCheckStatResponse Client::exportOssCheckStatWithOptions(const ExportOssCheckStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasByMonth()) {
    body["ByMonth"] = request.getByMonth();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasParentTaskId()) {
    body["ParentTaskId"] = request.getParentTaskId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportOssCheckStat"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportOssCheckStatResponse>();
}

/**
 * @summary OSS Usage Statistics Export
 *
 * @param request ExportOssCheckStatRequest
 * @return ExportOssCheckStatResponse
 */
ExportOssCheckStatResponse Client::exportOssCheckStat(const ExportOssCheckStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportOssCheckStatWithOptions(request, runtime);
}

/**
 * @summary Export OSS scan results
 *
 * @param tmpReq ExportResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportResultResponse
 */
ExportResultResponse Client::exportResultWithOptions(const ExportResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportResultShrinkRequest request = ExportResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.getSource();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportResultResponse>();
}

/**
 * @summary Export OSS scan results
 *
 * @param request ExportResultRequest
 * @return ExportResultResponse
 */
ExportResultResponse Client::exportResult(const ExportResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportResultWithOptions(request, runtime);
}

/**
 * @summary Export scan results, Excel file
 *
 * @param tmpReq ExportScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportScanResultResponse
 */
ExportScanResultResponse Client::exportScanResultWithOptions(const ExportScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportScanResultShrinkRequest request = ExportScanResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryShrink()) {
    body["Query"] = request.getQueryShrink();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportScanResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportScanResultResponse>();
}

/**
 * @summary Export scan results, Excel file
 *
 * @param request ExportScanResultRequest
 * @return ExportScanResultResponse
 */
ExportScanResultResponse Client::exportScanResult(const ExportScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportScanResultWithOptions(request, runtime);
}

/**
 * @summary Export text scan results, Excel file
 *
 * @param tmpReq ExportTextScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportTextScanResultResponse
 */
ExportTextScanResultResponse Client::exportTextScanResultWithOptions(const ExportTextScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportTextScanResultShrinkRequest request = ExportTextScanResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasQueryShrink()) {
    body["Query"] = request.getQueryShrink();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportTextScanResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportTextScanResultResponse>();
}

/**
 * @summary Export text scan results, Excel file
 *
 * @param request ExportTextScanResultRequest
 * @return ExportTextScanResultResponse
 */
ExportTextScanResultResponse Client::exportTextScanResult(const ExportTextScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportTextScanResultWithOptions(request, runtime);
}

/**
 * @summary 获取代答样本导入进度
 *
 * @param request GetAnswerImportProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAnswerImportProgressResponse
 */
GetAnswerImportProgressResponse Client::getAnswerImportProgressWithOptions(const GetAnswerImportProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAnswerImportProgress"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAnswerImportProgressResponse>();
}

/**
 * @summary 获取代答样本导入进度
 *
 * @param request GetAnswerImportProgressRequest
 * @return GetAnswerImportProgressResponse
 */
GetAnswerImportProgressResponse Client::getAnswerImportProgress(const GetAnswerImportProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAnswerImportProgressWithOptions(request, runtime);
}

/**
 * @summary Evidence Transfer to Get User\\"s Bucket List
 *
 * @param request GetBackupBucketsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBackupBucketsListResponse
 */
GetBackupBucketsListResponse Client::getBackupBucketsListWithOptions(const GetBackupBucketsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBackupBucketsList"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBackupBucketsListResponse>();
}

/**
 * @summary Evidence Transfer to Get User\\"s Bucket List
 *
 * @param request GetBackupBucketsListRequest
 * @return GetBackupBucketsListResponse
 */
GetBackupBucketsListResponse Client::getBackupBucketsList(const GetBackupBucketsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupBucketsListWithOptions(request, runtime);
}

/**
 * @summary Get Evidence Backup Configuration
 *
 * @param request GetBackupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBackupConfigResponse
 */
GetBackupConfigResponse Client::getBackupConfigWithOptions(const GetBackupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBackupConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBackupConfigResponse>();
}

/**
 * @summary Get Evidence Backup Configuration
 *
 * @param request GetBackupConfigRequest
 * @return GetBackupConfigResponse
 */
GetBackupConfigResponse Client::getBackupConfig(const GetBackupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupConfigWithOptions(request, runtime);
}

/**
 * @summary User Backup Authorization Verification
 *
 * @param request GetBackupStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBackupStatusResponse
 */
GetBackupStatusResponse Client::getBackupStatusWithOptions(const GetBackupStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBackupStatus"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBackupStatusResponse>();
}

/**
 * @summary User Backup Authorization Verification
 *
 * @param request GetBackupStatusRequest
 * @return GetBackupStatusResponse
 */
GetBackupStatusResponse Client::getBackupStatus(const GetBackupStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBackupStatusWithOptions(request, runtime);
}

/**
 * @summary Get User OSS Scan Bucket List
 *
 * @param request GetBucketsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBucketsListResponse
 */
GetBucketsListResponse Client::getBucketsListWithOptions(const GetBucketsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBucketsList"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBucketsListResponse>();
}

/**
 * @summary Get User OSS Scan Bucket List
 *
 * @param request GetBucketsListRequest
 * @return GetBucketsListResponse
 */
GetBucketsListResponse Client::getBucketsList(const GetBucketsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBucketsListWithOptions(request, runtime);
}

/**
 * @summary Query Call Volume
 *
 * @param request GetCipStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCipStatsResponse
 */
GetCipStatsResponse Client::getCipStatsWithOptions(const GetCipStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasByMonth()) {
    body["ByMonth"] = request.getByMonth();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLabel()) {
    body["Label"] = request.getLabel();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubUid()) {
    body["SubUid"] = request.getSubUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCipStats"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCipStatsResponse>();
}

/**
 * @summary Query Call Volume
 *
 * @param request GetCipStatsRequest
 * @return GetCipStatsResponse
 */
GetCipStatsResponse Client::getCipStats(const GetCipStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCipStatsWithOptions(request, runtime);
}

/**
 * @summary Get Scheduled  OSS Scan  Task Estimated Execution Time
 *
 * @param request GetExecuteTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecuteTimeResponse
 */
GetExecuteTimeResponse Client::getExecuteTimeWithOptions(const GetExecuteTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExecuteTime"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecuteTimeResponse>();
}

/**
 * @summary Get Scheduled  OSS Scan  Task Estimated Execution Time
 *
 * @param request GetExecuteTimeRequest
 * @return GetExecuteTimeResponse
 */
GetExecuteTimeResponse Client::getExecuteTime(const GetExecuteTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExecuteTimeWithOptions(request, runtime);
}

/**
 * @summary Get Feature Configuration
 *
 * @param request GetFeatureConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureConfigResponse
 */
GetFeatureConfigResponse Client::getFeatureConfigWithOptions(const GetFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFeatureConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureConfigResponse>();
}

/**
 * @summary Get Feature Configuration
 *
 * @param request GetFeatureConfigRequest
 * @return GetFeatureConfigResponse
 */
GetFeatureConfigResponse Client::getFeatureConfig(const GetFeatureConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFeatureConfigWithOptions(request, runtime);
}

/**
 * @summary Get Image Rule Label Information
 *
 * @param request GetImageSceneLabelConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageSceneLabelConfResponse
 */
GetImageSceneLabelConfResponse Client::getImageSceneLabelConfWithOptions(const GetImageSceneLabelConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageSceneLabelConf"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageSceneLabelConfResponse>();
}

/**
 * @summary Get Image Rule Label Information
 *
 * @param request GetImageSceneLabelConfRequest
 * @return GetImageSceneLabelConfResponse
 */
GetImageSceneLabelConfResponse Client::getImageSceneLabelConf(const GetImageSceneLabelConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageSceneLabelConfWithOptions(request, runtime);
}

/**
 * @summary Get Image Rule Label Information
 *
 * @param request GetImageSceneLabelListConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageSceneLabelListConfResponse
 */
GetImageSceneLabelListConfResponse Client::getImageSceneLabelListConfWithOptions(const GetImageSceneLabelListConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageServiceCode()) {
    query["ImageServiceCode"] = request.getImageServiceCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageSceneLabelListConf"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageSceneLabelListConfResponse>();
}

/**
 * @summary Get Image Rule Label Information
 *
 * @param request GetImageSceneLabelListConfRequest
 * @return GetImageSceneLabelListConfResponse
 */
GetImageSceneLabelListConfResponse Client::getImageSceneLabelListConf(const GetImageSceneLabelListConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageSceneLabelListConfWithOptions(request, runtime);
}

/**
 * @summary OSS scheduled scan detection cycle query
 *
 * @param tmpReq GetJobNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobNameListResponse
 */
GetJobNameListResponse Client::getJobNameListWithOptions(const GetJobNameListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetJobNameListShrinkRequest request = GetJobNameListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortShrink()) {
    query["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobNameList"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobNameListResponse>();
}

/**
 * @summary OSS scheduled scan detection cycle query
 *
 * @param request GetJobNameListRequest
 * @return GetJobNameListResponse
 */
GetJobNameListResponse Client::getJobNameList(const GetJobNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobNameListWithOptions(request, runtime);
}

/**
 * @summary Query the result of keyword import
 *
 * @param request GetKeywordImportResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKeywordImportResultResponse
 */
GetKeywordImportResultResponse Client::getKeywordImportResultWithOptions(const GetKeywordImportResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKeywordImportResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKeywordImportResultResponse>();
}

/**
 * @summary Query the result of keyword import
 *
 * @param request GetKeywordImportResultRequest
 * @return GetKeywordImportResultResponse
 */
GetKeywordImportResultResponse Client::getKeywordImportResult(const GetKeywordImportResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKeywordImportResultWithOptions(request, runtime);
}

/**
 * @summary Keyword Library Information
 *
 * @param request GetKeywordLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKeywordLibResponse
 */
GetKeywordLibResponse Client::getKeywordLibWithOptions(const GetKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKeywordLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKeywordLibResponse>();
}

/**
 * @summary Keyword Library Information
 *
 * @param request GetKeywordLibRequest
 * @return GetKeywordLibResponse
 */
GetKeywordLibResponse Client::getKeywordLib(const GetKeywordLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKeywordLibWithOptions(request, runtime);
}

/**
 * @summary Query OSS freeze result
 *
 * @param tmpReq GetOssCheckFreezeResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssCheckFreezeResultResponse
 */
GetOssCheckFreezeResultResponse Client::getOssCheckFreezeResultWithOptions(const GetOssCheckFreezeResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOssCheckFreezeResultShrinkRequest request = GetOssCheckFreezeResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFinishNum()) {
    query["FinishNum"] = request.getFinishNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortShrink()) {
    query["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssCheckFreezeResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssCheckFreezeResultResponse>();
}

/**
 * @summary Query OSS freeze result
 *
 * @param request GetOssCheckFreezeResultRequest
 * @return GetOssCheckFreezeResultResponse
 */
GetOssCheckFreezeResultResponse Client::getOssCheckFreezeResult(const GetOssCheckFreezeResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssCheckFreezeResultWithOptions(request, runtime);
}

/**
 * @summary OSS result details
 *
 * @param request GetOssCheckResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssCheckResultDetailResponse
 */
GetOssCheckResultDetailResponse Client::getOssCheckResultDetailWithOptions(const GetOssCheckResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.getBucket();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasObject()) {
    query["Object"] = request.getObject();
  }

  if (!!request.hasParentTaskId()) {
    query["ParentTaskId"] = request.getParentTaskId();
  }

  if (!!request.hasQueryRequestId()) {
    query["QueryRequestId"] = request.getQueryRequestId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssCheckResultDetail"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssCheckResultDetailResponse>();
}

/**
 * @summary OSS result details
 *
 * @param request GetOssCheckResultDetailRequest
 * @return GetOssCheckResultDetailResponse
 */
GetOssCheckResultDetailResponse Client::getOssCheckResultDetail(const GetOssCheckResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssCheckResultDetailWithOptions(request, runtime);
}

/**
 * @summary OSS Check Usage Statistics
 *
 * @param request GetOssCheckStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssCheckStatResponse
 */
GetOssCheckStatResponse Client::getOssCheckStatWithOptions(const GetOssCheckStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasByMonth()) {
    body["ByMonth"] = request.getByMonth();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasParentTaskId()) {
    body["ParentTaskId"] = request.getParentTaskId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOssCheckStat"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssCheckStatResponse>();
}

/**
 * @summary OSS Check Usage Statistics
 *
 * @param request GetOssCheckStatRequest
 * @return GetOssCheckStatResponse
 */
GetOssCheckStatResponse Client::getOssCheckStat(const GetOssCheckStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssCheckStatWithOptions(request, runtime);
}

/**
 * @summary Get User OSS check user status
 *
 * @param request GetOssCheckStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssCheckStatusResponse
 */
GetOssCheckStatusResponse Client::getOssCheckStatusWithOptions(const GetOssCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssCheckStatus"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssCheckStatusResponse>();
}

/**
 * @summary Get User OSS check user status
 *
 * @param request GetOssCheckStatusRequest
 * @return GetOssCheckStatusResponse
 */
GetOssCheckStatusResponse Client::getOssCheckStatus(const GetOssCheckStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssCheckStatusWithOptions(request, runtime);
}

/**
 * @summary 查询oss扫描任务详情
 *
 * @param request GetOssCheckTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssCheckTaskInfoResponse
 */
GetOssCheckTaskInfoResponse Client::getOssCheckTaskInfoWithOptions(const GetOssCheckTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentTaskId()) {
    query["ParentTaskId"] = request.getParentTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssCheckTaskInfo"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssCheckTaskInfoResponse>();
}

/**
 * @summary 查询oss扫描任务详情
 *
 * @param request GetOssCheckTaskInfoRequest
 * @return GetOssCheckTaskInfoResponse
 */
GetOssCheckTaskInfoResponse Client::getOssCheckTaskInfo(const GetOssCheckTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssCheckTaskInfoWithOptions(request, runtime);
}

/**
 * @summary User OSS Check Task Pending Inspection Information
 *
 * @param request GetScanNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScanNumResponse
 */
GetScanNumResponse Client::getScanNumWithOptions(const GetScanNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuckets()) {
    query["Buckets"] = request.getBuckets();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScanNum"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScanNumResponse>();
}

/**
 * @summary User OSS Check Task Pending Inspection Information
 *
 * @param request GetScanNumRequest
 * @return GetScanNumResponse
 */
GetScanNumResponse Client::getScanNum(const GetScanNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScanNumWithOptions(request, runtime);
}

/**
 * @summary Query the Scan results
 *
 * @param tmpReq GetScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScanResultResponse
 */
GetScanResultResponse Client::getScanResultWithOptions(const GetScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetScanResultShrinkRequest request = GetScanResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryShrink()) {
    body["Query"] = request.getQueryShrink();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetScanResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScanResultResponse>();
}

/**
 * @summary Query the Scan results
 *
 * @param request GetScanResultRequest
 * @return GetScanResultResponse
 */
GetScanResultResponse Client::getScanResult(const GetScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScanResultWithOptions(request, runtime);
}

/**
 * @summary Get a Single Service Configuration
 *
 * @param request GetServiceConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceConfResponse
 */
GetServiceConfResponse Client::getServiceConfWithOptions(const GetServiceConfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasByDefault()) {
    body["ByDefault"] = request.getByDefault();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.getScene();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetServiceConf"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceConfResponse>();
}

/**
 * @summary Get a Single Service Configuration
 *
 * @param request GetServiceConfRequest
 * @return GetServiceConfResponse
 */
GetServiceConfResponse Client::getServiceConf(const GetServiceConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceConfWithOptions(request, runtime);
}

/**
 * @summary Get a Single Service Configuration
 *
 * @param request GetServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceConfigResponse
 */
GetServiceConfigResponse Client::getServiceConfigWithOptions(const GetServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetServiceConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceConfigResponse>();
}

/**
 * @summary Get a Single Service Configuration
 *
 * @param request GetServiceConfigRequest
 * @return GetServiceConfigResponse
 */
GetServiceConfigResponse Client::getServiceConfig(const GetServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceConfigWithOptions(request, runtime);
}

/**
 * @summary Get the label configuration of a single service
 *
 * @param request GetServiceLabelConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceLabelConfigResponse
 */
GetServiceLabelConfigResponse Client::getServiceLabelConfigWithOptions(const GetServiceLabelConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetServiceLabelConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceLabelConfigResponse>();
}

/**
 * @summary Get the label configuration of a single service
 *
 * @param request GetServiceLabelConfigRequest
 * @return GetServiceLabelConfigResponse
 */
GetServiceLabelConfigResponse Client::getServiceLabelConfig(const GetServiceLabelConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceLabelConfigWithOptions(request, runtime);
}

/**
 * @summary Query OSS Scan Task List
 *
 * @param tmpReq GetStockOssCheckTasksListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStockOssCheckTasksListResponse
 */
GetStockOssCheckTasksListResponse Client::getStockOssCheckTasksListWithOptions(const GetStockOssCheckTasksListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetStockOssCheckTasksListShrinkRequest request = GetStockOssCheckTasksListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasIsInc()) {
    query["IsInc"] = request.getIsInc();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMediaType()) {
    body["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetStockOssCheckTasksList"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStockOssCheckTasksListResponse>();
}

/**
 * @summary Query OSS Scan Task List
 *
 * @param request GetStockOssCheckTasksListRequest
 * @return GetStockOssCheckTasksListResponse
 */
GetStockOssCheckTasksListResponse Client::getStockOssCheckTasksList(const GetStockOssCheckTasksListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStockOssCheckTasksListWithOptions(request, runtime);
}

/**
 * @summary Query the invocation result
 *
 * @param tmpReq GetTextScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTextScanResultResponse
 */
GetTextScanResultResponse Client::getTextScanResultWithOptions(const GetTextScanResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTextScanResultShrinkRequest request = GetTextScanResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryShrink()) {
    body["Query"] = request.getQueryShrink();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTextScanResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTextScanResultResponse>();
}

/**
 * @summary Query the invocation result
 *
 * @param request GetTextScanResultRequest
 * @return GetTextScanResultResponse
 */
GetTextScanResultResponse Client::getTextScanResult(const GetTextScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTextScanResultWithOptions(request, runtime);
}

/**
 * @summary Get the corresponding information for file upload
 *
 * @param request GetUploadInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadInfoResponse
 */
GetUploadInfoResponse Client::getUploadInfoWithOptions(const GetUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUploadInfo"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadInfoResponse>();
}

/**
 * @summary Get the corresponding information for file upload
 *
 * @param request GetUploadInfoRequest
 * @return GetUploadInfoResponse
 */
GetUploadInfoResponse Client::getUploadInfo(const GetUploadInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadInfoWithOptions(request, runtime);
}

/**
 * @summary 获取上传链接
 *
 * @param request GetUploadLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadLinkResponse
 */
GetUploadLinkResponse Client::getUploadLinkWithOptions(const GetUploadLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUploadUrl()) {
    query["UploadUrl"] = request.getUploadUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadLink"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadLinkResponse>();
}

/**
 * @summary 获取上传链接
 *
 * @param request GetUploadLinkRequest
 * @return GetUploadLinkResponse
 */
GetUploadLinkResponse Client::getUploadLink(const GetUploadLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadLinkWithOptions(request, runtime);
}

/**
 * @summary Get User Purchase Status
 *
 * @param request GetUserBuyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserBuyStatusResponse
 */
GetUserBuyStatusResponse Client::getUserBuyStatusWithOptions(const GetUserBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCommodityCode()) {
    body["CommodityCode"] = request.getCommodityCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserBuyStatus"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserBuyStatusResponse>();
}

/**
 * @summary Get User Purchase Status
 *
 * @param request GetUserBuyStatusRequest
 * @return GetUserBuyStatusResponse
 */
GetUserBuyStatusResponse Client::getUserBuyStatus(const GetUserBuyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserBuyStatusWithOptions(request, runtime);
}

/**
 * @summary 代答库列表
 *
 * @param request ListAnswerLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnswerLibResponse
 */
ListAnswerLibResponse Client::listAnswerLibWithOptions(const ListAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnswerLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnswerLibResponse>();
}

/**
 * @summary 代答库列表
 *
 * @param request ListAnswerLibRequest
 * @return ListAnswerLibResponse
 */
ListAnswerLibResponse Client::listAnswerLib(const ListAnswerLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnswerLibWithOptions(request, runtime);
}

/**
 * @summary Get Callback List
 *
 * @param request ListCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallbackResponse
 */
ListCallbackResponse Client::listCallbackWithOptions(const ListCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallbackResponse>();
}

/**
 * @summary Get Callback List
 *
 * @param request ListCallbackRequest
 * @return ListCallbackResponse
 */
ListCallbackResponse Client::listCallback(const ListCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallbackWithOptions(request, runtime);
}

/**
 * @summary Image Library List
 *
 * @param request ListImageLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageLibResponse
 */
ListImageLibResponse Client::listImageLibWithOptions(const ListImageLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageLibResponse>();
}

/**
 * @summary Image Library List
 *
 * @param request ListImageLibRequest
 * @return ListImageLibResponse
 */
ListImageLibResponse Client::listImageLib(const ListImageLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageLibWithOptions(request, runtime);
}

/**
 * @summary Paged Image List
 *
 * @param tmpReq ListImagesFromLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesFromLibResponse
 */
ListImagesFromLibResponse Client::listImagesFromLibWithOptions(const ListImagesFromLibRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListImagesFromLibShrinkRequest request = ListImagesFromLibShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.getEndDate();
  }

  if (!!request.hasImgId()) {
    body["ImgId"] = request.getImgId();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListImagesFromLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesFromLibResponse>();
}

/**
 * @summary Paged Image List
 *
 * @param request ListImagesFromLibRequest
 * @return ListImagesFromLibResponse
 */
ListImagesFromLibResponse Client::listImagesFromLib(const ListImagesFromLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesFromLibWithOptions(request, runtime);
}

/**
 * @summary Keyword Library List
 *
 * @param request ListKeywordLibsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKeywordLibsResponse
 */
ListKeywordLibsResponse Client::listKeywordLibsWithOptions(const ListKeywordLibsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKeywordLibs"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKeywordLibsResponse>();
}

/**
 * @summary Keyword Library List
 *
 * @param request ListKeywordLibsRequest
 * @return ListKeywordLibsResponse
 */
ListKeywordLibsResponse Client::listKeywordLibs(const ListKeywordLibsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKeywordLibsWithOptions(request, runtime);
}

/**
 * @summary Query Keyword List
 *
 * @param tmpReq ListKeywordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKeywordsResponse
 */
ListKeywordsResponse Client::listKeywordsWithOptions(const ListKeywordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListKeywordsShrinkRequest request = ListKeywordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortShrink()) {
    body["Sort"] = request.getSortShrink();
  }

  if (!!request.hasWord()) {
    body["Word"] = request.getWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKeywords"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKeywordsResponse>();
}

/**
 * @summary Query Keyword List
 *
 * @param request ListKeywordsRequest
 * @return ListKeywordsResponse
 */
ListKeywordsResponse Client::listKeywords(const ListKeywordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKeywordsWithOptions(request, runtime);
}

/**
 * @summary query OSS scan result list
 *
 * @param tmpReq ListOssCheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOssCheckResultResponse
 */
ListOssCheckResultResponse Client::listOssCheckResultWithOptions(const ListOssCheckResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOssCheckResultShrinkRequest request = ListOssCheckResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFinishNum()) {
    query["FinishNum"] = request.getFinishNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortShrink()) {
    query["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOssCheckResult"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOssCheckResultResponse>();
}

/**
 * @summary query OSS scan result list
 *
 * @param request ListOssCheckResultRequest
 * @return ListOssCheckResultResponse
 */
ListOssCheckResultResponse Client::listOssCheckResult(const ListOssCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOssCheckResultWithOptions(request, runtime);
}

/**
 * @summary Get Service List
 *
 * @param request ListServiceConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceConfigsResponse
 */
ListServiceConfigsResponse Client::listServiceConfigsWithOptions(const ListServiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassify()) {
    query["Classify"] = request.getClassify();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUseStatus()) {
    query["UseStatus"] = request.getUseStatus();
  }

  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListServiceConfigs"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceConfigsResponse>();
}

/**
 * @summary Get Service List
 *
 * @param request ListServiceConfigsRequest
 * @return ListServiceConfigsResponse
 */
ListServiceConfigsResponse Client::listServiceConfigs(const ListServiceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceConfigsWithOptions(request, runtime);
}

/**
 * @summary Use SSE interface to stream large model calls
 *
 * @param request LlmStreamChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmStreamChatResponse
 */
FutureGenerator<LlmStreamChatResponse> Client::llmStreamChatWithSSE(const LlmStreamChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasTemperature()) {
    body["Temperature"] = request.getTemperature();
  }

  if (!!request.hasTopP()) {
    body["TopP"] = request.getTopP();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LlmStreamChat"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<LlmStreamChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Use SSE interface to stream large model calls
 *
 * @param request LlmStreamChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LlmStreamChatResponse
 */
LlmStreamChatResponse Client::llmStreamChatWithOptions(const LlmStreamChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasTemperature()) {
    body["Temperature"] = request.getTemperature();
  }

  if (!!request.hasTopP()) {
    body["TopP"] = request.getTopP();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LlmStreamChat"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LlmStreamChatResponse>();
}

/**
 * @summary Use SSE interface to stream large model calls
 *
 * @param request LlmStreamChatRequest
 * @return LlmStreamChatResponse
 */
LlmStreamChatResponse Client::llmStreamChat(const LlmStreamChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return llmStreamChatWithOptions(request, runtime);
}

/**
 * @summary 更新代答库
 *
 * @param request ModifyAnswerLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAnswerLibResponse
 */
ModifyAnswerLibResponse Client::modifyAnswerLibWithOptions(const ModifyAnswerLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasLibName()) {
    query["LibName"] = request.getLibName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAnswerLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAnswerLibResponse>();
}

/**
 * @summary 更新代答库
 *
 * @param request ModifyAnswerLibRequest
 * @return ModifyAnswerLibResponse
 */
ModifyAnswerLibResponse Client::modifyAnswerLib(const ModifyAnswerLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAnswerLibWithOptions(request, runtime);
}

/**
 * @summary Modify Message Notification
 *
 * @param request ModifyCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCallbackResponse
 */
ModifyCallbackResponse Client::modifyCallbackWithOptions(const ModifyCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCryptType()) {
    body["CryptType"] = request.getCryptType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.getScope();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyCallback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCallbackResponse>();
}

/**
 * @summary Modify Message Notification
 *
 * @param request ModifyCallbackRequest
 * @return ModifyCallbackResponse
 */
ModifyCallbackResponse Client::modifyCallback(const ModifyCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCallbackWithOptions(request, runtime);
}

/**
 * @summary Save Feature Configuration
 *
 * @param request ModifyFeatureConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFeatureConfigResponse
 */
ModifyFeatureConfigResponse Client::modifyFeatureConfigWithOptions(const ModifyFeatureConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasField()) {
    body["Field"] = request.getField();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyFeatureConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFeatureConfigResponse>();
}

/**
 * @summary Save Feature Configuration
 *
 * @param request ModifyFeatureConfigRequest
 * @return ModifyFeatureConfigResponse
 */
ModifyFeatureConfigResponse Client::modifyFeatureConfig(const ModifyFeatureConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFeatureConfigWithOptions(request, runtime);
}

/**
 * @summary Edit Service
 *
 * @param request ModifyServiceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyServiceInfoResponse
 */
ModifyServiceInfoResponse Client::modifyServiceInfoWithOptions(const ModifyServiceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasServiceDesc()) {
    body["ServiceDesc"] = request.getServiceDesc();
  }

  if (!!request.hasServiceName()) {
    body["ServiceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyServiceInfo"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyServiceInfoResponse>();
}

/**
 * @summary Edit Service
 *
 * @param request ModifyServiceInfoRequest
 * @return ModifyServiceInfoResponse
 */
ModifyServiceInfoResponse Client::modifyServiceInfo(const ModifyServiceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyServiceInfoWithOptions(request, runtime);
}

/**
 * @summary OSS scan result query
 *
 * @param tmpReq OssCheckResultListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OssCheckResultListResponse
 */
OssCheckResultListResponse Client::ossCheckResultListWithOptions(const OssCheckResultListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OssCheckResultListShrinkRequest request = OssCheckResultListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFinishNum()) {
    query["FinishNum"] = request.getFinishNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortShrink()) {
    query["Sort"] = request.getSortShrink();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OssCheckResultList"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OssCheckResultListResponse>();
}

/**
 * @summary OSS scan result query
 *
 * @param request OssCheckResultListRequest
 * @return OssCheckResultListResponse
 */
OssCheckResultListResponse Client::ossCheckResultList(const OssCheckResultListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ossCheckResultListWithOptions(request, runtime);
}

/**
 * @summary 分页查询代答样本
 *
 * @param tmpReq QueryAnswerSampleByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAnswerSampleByPageResponse
 */
QueryAnswerSampleByPageResponse Client::queryAnswerSampleByPageWithOptions(const QueryAnswerSampleByPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryAnswerSampleByPageShrinkRequest request = QueryAnswerSampleByPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSort()) {
    request.setSortShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSort(), "Sort", "json"));
  }

  json query = {};
  if (!!request.hasAnswer()) {
    query["Answer"] = request.getAnswer();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.getLibId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSortShrink()) {
    query["Sort"] = request.getSortShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAnswerSampleByPage"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAnswerSampleByPageResponse>();
}

/**
 * @summary 分页查询代答样本
 *
 * @param request QueryAnswerSampleByPageRequest
 * @return QueryAnswerSampleByPageResponse
 */
QueryAnswerSampleByPageResponse Client::queryAnswerSampleByPage(const QueryAnswerSampleByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAnswerSampleByPageWithOptions(request, runtime);
}

/**
 * @summary Query a Single Callback Configuration
 *
 * @param request QueryCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCallbackResponse
 */
QueryCallbackResponse Client::queryCallbackWithOptions(const QueryCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCheckForOss()) {
    body["CheckForOss"] = request.getCheckForOss();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCallback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallbackResponse>();
}

/**
 * @summary Query a Single Callback Configuration
 *
 * @param request QueryCallbackRequest
 * @return QueryCallbackResponse
 */
QueryCallbackResponse Client::queryCallback(const QueryCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallbackWithOptions(request, runtime);
}

/**
 * @summary Paginated Query of Message Notification List
 *
 * @param request QueryCallbackByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCallbackByPageResponse
 */
QueryCallbackByPageResponse Client::queryCallbackByPageWithOptions(const QueryCallbackByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCallbackByPage"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallbackByPageResponse>();
}

/**
 * @summary Paginated Query of Message Notification List
 *
 * @param request QueryCallbackByPageRequest
 * @return QueryCallbackByPageResponse
 */
QueryCallbackByPageResponse Client::queryCallbackByPage(const QueryCallbackByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallbackByPageWithOptions(request, runtime);
}

/**
 * @summary 停止在线测试
 *
 * @param request StopOnlineTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopOnlineTestResponse
 */
StopOnlineTestResponse Client::stopOnlineTestWithOptions(const StopOnlineTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopOnlineTest"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopOnlineTestResponse>();
}

/**
 * @summary 停止在线测试
 *
 * @param request StopOnlineTestRequest
 * @return StopOnlineTestResponse
 */
StopOnlineTestResponse Client::stopOnlineTest(const StopOnlineTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopOnlineTestWithOptions(request, runtime);
}

/**
 * @summary Update Evidence Backup Configuration
 *
 * @param request UpdateBackupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBackupConfigResponse
 */
UpdateBackupConfigResponse Client::updateBackupConfigWithOptions(const UpdateBackupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupConfig()) {
    query["BackupConfig"] = request.getBackupConfig();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBackupConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBackupConfigResponse>();
}

/**
 * @summary Update Evidence Backup Configuration
 *
 * @param request UpdateBackupConfigRequest
 * @return UpdateBackupConfigResponse
 */
UpdateBackupConfigResponse Client::updateBackupConfig(const UpdateBackupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBackupConfigWithOptions(request, runtime);
}

/**
 * @summary Edit Image Library
 *
 * @param request UpdateImageLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageLibResponse
 */
UpdateImageLibResponse Client::updateImageLibWithOptions(const UpdateImageLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasFreeInspection()) {
    body["FreeInspection"] = request.getFreeInspection();
  }

  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  if (!!request.hasLibName()) {
    body["LibName"] = request.getLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateImageLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageLibResponse>();
}

/**
 * @summary Edit Image Library
 *
 * @param request UpdateImageLibRequest
 * @return UpdateImageLibResponse
 */
UpdateImageLibResponse Client::updateImageLib(const UpdateImageLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageLibWithOptions(request, runtime);
}

/**
 * @summary Edit Image Library Free Inspection Configuration
 *
 * @param tmpReq UpdateImageLibFreeInspectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageLibFreeInspectionResponse
 */
UpdateImageLibFreeInspectionResponse Client::updateImageLibFreeInspectionWithOptions(const UpdateImageLibFreeInspectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateImageLibFreeInspectionShrinkRequest request = UpdateImageLibFreeInspectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.getConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateImageLibFreeInspection"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageLibFreeInspectionResponse>();
}

/**
 * @summary Edit Image Library Free Inspection Configuration
 *
 * @param request UpdateImageLibFreeInspectionRequest
 * @return UpdateImageLibFreeInspectionResponse
 */
UpdateImageLibFreeInspectionResponse Client::updateImageLibFreeInspection(const UpdateImageLibFreeInspectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageLibFreeInspectionWithOptions(request, runtime);
}

/**
 * @summary Edit Keyword Library
 *
 * @param request UpdateKeywordLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKeywordLibResponse
 */
UpdateKeywordLibResponse Client::updateKeywordLibWithOptions(const UpdateKeywordLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasLibId()) {
    body["LibId"] = request.getLibId();
  }

  if (!!request.hasLibName()) {
    body["LibName"] = request.getLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKeywordLib"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKeywordLibResponse>();
}

/**
 * @summary Edit Keyword Library
 *
 * @param request UpdateKeywordLibRequest
 * @return UpdateKeywordLibResponse
 */
UpdateKeywordLibResponse Client::updateKeywordLib(const UpdateKeywordLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateKeywordLibWithOptions(request, runtime);
}

/**
 * @summary 批量反馈任务
 *
 * @param request UpdateOssCheckResultsBatchFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOssCheckResultsBatchFeedbackResponse
 */
UpdateOssCheckResultsBatchFeedbackResponse Client::updateOssCheckResultsBatchFeedbackWithOptions(const UpdateOssCheckResultsBatchFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.getFeedback();
  }

  if (!!request.hasItems()) {
    query["Items"] = request.getItems();
  }

  if (!!request.hasParentTaskId()) {
    query["ParentTaskId"] = request.getParentTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOssCheckResultsBatchFeedback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOssCheckResultsBatchFeedbackResponse>();
}

/**
 * @summary 批量反馈任务
 *
 * @param request UpdateOssCheckResultsBatchFeedbackRequest
 * @return UpdateOssCheckResultsBatchFeedbackResponse
 */
UpdateOssCheckResultsBatchFeedbackResponse Client::updateOssCheckResultsBatchFeedback(const UpdateOssCheckResultsBatchFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOssCheckResultsBatchFeedbackWithOptions(request, runtime);
}

/**
 * @summary oss结果反馈
 *
 * @param request UpdateOssCheckResultsFeedBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOssCheckResultsFeedBackResponse
 */
UpdateOssCheckResultsFeedBackResponse Client::updateOssCheckResultsFeedBackWithOptions(const UpdateOssCheckResultsFeedBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.getFeedback();
  }

  if (!!request.hasQueryRequestId()) {
    query["QueryRequestId"] = request.getQueryRequestId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOssCheckResultsFeedBack"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOssCheckResultsFeedBackResponse>();
}

/**
 * @summary oss结果反馈
 *
 * @param request UpdateOssCheckResultsFeedBackRequest
 * @return UpdateOssCheckResultsFeedBackResponse
 */
UpdateOssCheckResultsFeedBackResponse Client::updateOssCheckResultsFeedBack(const UpdateOssCheckResultsFeedBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOssCheckResultsFeedBackWithOptions(request, runtime);
}

/**
 * @summary 批量冻结任务
 *
 * @param request UpdateOssCheckResultsFreezeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOssCheckResultsFreezeResponse
 */
UpdateOssCheckResultsFreezeResponse Client::updateOssCheckResultsFreezeWithOptions(const UpdateOssCheckResultsFreezeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFreezeItems()) {
    query["FreezeItems"] = request.getFreezeItems();
  }

  if (!!request.hasFreezeRestorePath()) {
    query["FreezeRestorePath"] = request.getFreezeRestorePath();
  }

  if (!!request.hasFreezeType()) {
    query["FreezeType"] = request.getFreezeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOssCheckResultsFreeze"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOssCheckResultsFreezeResponse>();
}

/**
 * @summary 批量冻结任务
 *
 * @param request UpdateOssCheckResultsFreezeRequest
 * @return UpdateOssCheckResultsFreezeResponse
 */
UpdateOssCheckResultsFreezeResponse Client::updateOssCheckResultsFreeze(const UpdateOssCheckResultsFreezeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOssCheckResultsFreezeWithOptions(request, runtime);
}

/**
 * @summary 批量解冻任务
 *
 * @param request UpdateOssCheckResultsUnfreezeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOssCheckResultsUnfreezeResponse
 */
UpdateOssCheckResultsUnfreezeResponse Client::updateOssCheckResultsUnfreezeWithOptions(const UpdateOssCheckResultsUnfreezeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasFreezeItems()) {
    query["FreezeItems"] = request.getFreezeItems();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOssCheckResultsUnfreeze"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOssCheckResultsUnfreezeResponse>();
}

/**
 * @summary 批量解冻任务
 *
 * @param request UpdateOssCheckResultsUnfreezeRequest
 * @return UpdateOssCheckResultsUnfreezeResponse
 */
UpdateOssCheckResultsUnfreezeResponse Client::updateOssCheckResultsUnfreeze(const UpdateOssCheckResultsUnfreezeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOssCheckResultsUnfreezeWithOptions(request, runtime);
}

/**
 * @summary Feedback on Scan Results
 *
 * @param request UpdateScanResultFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScanResultFeedbackResponse
 */
UpdateScanResultFeedbackResponse Client::updateScanResultFeedbackWithOptions(const UpdateScanResultFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasFeedback()) {
    body["Feedback"] = request.getFeedback();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasQueryRequestId()) {
    body["QueryRequestId"] = request.getQueryRequestId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasRiskLevel()) {
    body["RiskLevel"] = request.getRiskLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScanResultFeedback"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScanResultFeedbackResponse>();
}

/**
 * @summary Feedback on Scan Results
 *
 * @param request UpdateScanResultFeedbackRequest
 * @return UpdateScanResultFeedbackResponse
 */
UpdateScanResultFeedbackResponse Client::updateScanResultFeedback(const UpdateScanResultFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScanResultFeedbackWithOptions(request, runtime);
}

/**
 * @summary 更新服务
 *
 * @param request UpdateServiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceConfigResponse
 */
UpdateServiceConfigResponse Client::updateServiceConfigWithOptions(const UpdateServiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasFileConfig()) {
    body["FileConfig"] = request.getFileConfig();
  }

  if (!!request.hasKeywordFilterLibs()) {
    body["KeywordFilterLibs"] = request.getKeywordFilterLibs();
  }

  if (!!request.hasKeywordHitLibs()) {
    body["KeywordHitLibs"] = request.getKeywordHitLibs();
  }

  if (!!request.hasManualMachineConfig()) {
    body["ManualMachineConfig"] = request.getManualMachineConfig();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.getScene();
  }

  if (!!request.hasSceneConfig()) {
    body["SceneConfig"] = request.getSceneConfig();
  }

  if (!!request.hasServiceCode()) {
    body["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasServiceConfig()) {
    body["ServiceConfig"] = request.getServiceConfig();
  }

  if (!!request.hasVideoConfig()) {
    body["VideoConfig"] = request.getVideoConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceConfig"},
    {"version" , "2022-09-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceConfigResponse>();
}

/**
 * @summary 更新服务
 *
 * @param request UpdateServiceConfigRequest
 * @return UpdateServiceConfigResponse
 */
UpdateServiceConfigResponse Client::updateServiceConfig(const UpdateServiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceConfigWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Green20220926