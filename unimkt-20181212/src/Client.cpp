#include <darabonba/Core.hpp>
#include <alibabacloud/UniMkt20181212.hpp>
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
using namespace AlibabaCloud::UniMkt20181212::Models;
namespace AlibabaCloud
{
namespace UniMkt20181212
{

AlibabaCloud::UniMkt20181212::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "cloudcode.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "cloudcode.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("unimkt", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary CreateProxyBrandUser
 *
 * @param request CreateProxyBrandUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProxyBrandUserResponse
 */
CreateProxyBrandUserResponse Client::createProxyBrandUserWithOptions(const CreateProxyBrandUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandUserNick()) {
    query["BrandUserNick"] = request.getBrandUserNick();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCompany()) {
    query["Company"] = request.getCompany();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPhone()) {
    query["ContactPhone"] = request.getContactPhone();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.getIndustry();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProxyBrandUser"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProxyBrandUserResponse>();
}

/**
 * @summary CreateProxyBrandUser
 *
 * @param request CreateProxyBrandUserRequest
 * @return CreateProxyBrandUserResponse
 */
CreateProxyBrandUserResponse Client::createProxyBrandUser(const CreateProxyBrandUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProxyBrandUserWithOptions(request, runtime);
}

/**
 * @summary CreateUnionTask
 *
 * @param tmpReq CreateUnionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUnionTaskResponse
 */
CreateUnionTaskResponse Client::createUnionTaskWithOptions(const CreateUnionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUnionTaskShrinkRequest request = CreateUnionTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMediaIdBlackList()) {
    request.setMediaIdBlackListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMediaIdBlackList(), "MediaIdBlackList", "json"));
  }

  if (!!tmpReq.hasMediaIdWhiteList()) {
    request.setMediaIdWhiteListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMediaIdWhiteList(), "MediaIdWhiteList", "json"));
  }

  json query = {};
  if (!!request.hasAnchorId()) {
    query["AnchorId"] = request.getAnchorId();
  }

  if (!!request.hasBrandUserId()) {
    query["BrandUserId"] = request.getBrandUserId();
  }

  if (!!request.hasBrandUserNick()) {
    query["BrandUserNick"] = request.getBrandUserNick();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasChargePloy()) {
    query["ChargePloy"] = request.getChargePloy();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasContentId()) {
    query["ContentId"] = request.getContentId();
  }

  if (!!request.hasContentUrl()) {
    query["ContentUrl"] = request.getContentUrl();
  }

  if (!!request.hasCustomCreativeType()) {
    query["CustomCreativeType"] = request.getCustomCreativeType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIndustryLabelBagId()) {
    query["IndustryLabelBagId"] = request.getIndustryLabelBagId();
  }

  if (!!request.hasMediaIdBlackListShrink()) {
    query["MediaIdBlackList"] = request.getMediaIdBlackListShrink();
  }

  if (!!request.hasMediaIdWhiteListShrink()) {
    query["MediaIdWhiteList"] = request.getMediaIdWhiteListShrink();
  }

  if (!!request.hasMediaIndustry()) {
    query["MediaIndustry"] = request.getMediaIndustry();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOptimizationSwitch()) {
    query["OptimizationSwitch"] = request.getOptimizationSwitch();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasQuota()) {
    query["Quota"] = request.getQuota();
  }

  if (!!request.hasQuotaDay()) {
    query["QuotaDay"] = request.getQuotaDay();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskBizType()) {
    query["TaskBizType"] = request.getTaskBizType();
  }

  if (!!request.hasTaskRuleType()) {
    query["TaskRuleType"] = request.getTaskRuleType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUnionTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUnionTaskResponse>();
}

/**
 * @summary CreateUnionTask
 *
 * @param request CreateUnionTaskRequest
 * @return CreateUnionTaskResponse
 */
CreateUnionTaskResponse Client::createUnionTask(const CreateUnionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUnionTaskWithOptions(request, runtime);
}

/**
 * @summary 删除聚合拉新品牌
 *
 * @param request DeleteUnionBrandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUnionBrandResponse
 */
DeleteUnionBrandResponse Client::deleteUnionBrandWithOptions(const DeleteUnionBrandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandMainId()) {
    query["BrandMainId"] = request.getBrandMainId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUnionBrand"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUnionBrandResponse>();
}

/**
 * @summary 删除聚合拉新品牌
 *
 * @param request DeleteUnionBrandRequest
 * @return DeleteUnionBrandResponse
 */
DeleteUnionBrandResponse Client::deleteUnionBrand(const DeleteUnionBrandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUnionBrandWithOptions(request, runtime);
}

/**
 * @summary EndUnionTask
 *
 * @param request EndUnionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndUnionTaskResponse
 */
EndUnionTaskResponse Client::endUnionTaskWithOptions(const EndUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndUnionTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndUnionTaskResponse>();
}

/**
 * @summary EndUnionTask
 *
 * @param request EndUnionTaskRequest
 * @return EndUnionTaskResponse
 */
EndUnionTaskResponse Client::endUnionTask(const EndUnionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endUnionTaskWithOptions(request, runtime);
}

/**
 * @summary 聚合拉新开放接口查询媒体行业
 *
 * @param request ListUnionMediaIndustryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUnionMediaIndustryResponse
 */
ListUnionMediaIndustryResponse Client::listUnionMediaIndustryWithOptions(const ListUnionMediaIndustryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUnionMediaIndustry"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUnionMediaIndustryResponse>();
}

/**
 * @summary 聚合拉新开放接口查询媒体行业
 *
 * @param request ListUnionMediaIndustryRequest
 * @return ListUnionMediaIndustryResponse
 */
ListUnionMediaIndustryResponse Client::listUnionMediaIndustry(const ListUnionMediaIndustryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUnionMediaIndustryWithOptions(request, runtime);
}

/**
 * @param request QueryAvailableBalanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvailableBalanceResponse
 */
QueryAvailableBalanceResponse Client::queryAvailableBalanceWithOptions(const QueryAvailableBalanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvailableBalance"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvailableBalanceResponse>();
}

/**
 * @param request QueryAvailableBalanceRequest
 * @return QueryAvailableBalanceResponse
 */
QueryAvailableBalanceResponse Client::queryAvailableBalance(const QueryAvailableBalanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvailableBalanceWithOptions(request, runtime);
}

/**
 * @summary QueryContentList
 *
 * @param request QueryContentListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryContentListResponse
 */
QueryContentListResponse Client::queryContentListWithOptions(const QueryContentListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandUserId()) {
    query["BrandUserId"] = request.getBrandUserId();
  }

  if (!!request.hasBrandUserNick()) {
    query["BrandUserNick"] = request.getBrandUserNick();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasTaskBizType()) {
    query["TaskBizType"] = request.getTaskBizType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryContentList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryContentListResponse>();
}

/**
 * @summary QueryContentList
 *
 * @param request QueryContentListRequest
 * @return QueryContentListResponse
 */
QueryContentListResponse Client::queryContentList(const QueryContentListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContentListWithOptions(request, runtime);
}

/**
 * @summary 获取行业标签包
 *
 * @param request QueryIndustryLabelBagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIndustryLabelBagResponse
 */
QueryIndustryLabelBagResponse Client::queryIndustryLabelBagWithOptions(const QueryIndustryLabelBagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryIndustryLabelBag"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryIndustryLabelBagResponse>();
}

/**
 * @summary 获取行业标签包
 *
 * @param request QueryIndustryLabelBagRequest
 * @return QueryIndustryLabelBagResponse
 */
QueryIndustryLabelBagResponse Client::queryIndustryLabelBag(const QueryIndustryLabelBagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIndustryLabelBagWithOptions(request, runtime);
}

/**
 * @param request QueryTaskBizTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskBizTypeResponse
 */
QueryTaskBizTypeResponse Client::queryTaskBizTypeWithOptions(const QueryTaskBizTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskBizType"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskBizTypeResponse>();
}

/**
 * @param request QueryTaskBizTypeRequest
 * @return QueryTaskBizTypeResponse
 */
QueryTaskBizTypeResponse Client::queryTaskBizType(const QueryTaskBizTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskBizTypeWithOptions(request, runtime);
}

/**
 * @summary QueryTaskRuleLimit
 *
 * @param request QueryTaskRuleLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskRuleLimitResponse
 */
QueryTaskRuleLimitResponse Client::queryTaskRuleLimitWithOptions(const QueryTaskRuleLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskRuleLimit"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskRuleLimitResponse>();
}

/**
 * @summary QueryTaskRuleLimit
 *
 * @param request QueryTaskRuleLimitRequest
 * @return QueryTaskRuleLimitResponse
 */
QueryTaskRuleLimitResponse Client::queryTaskRuleLimit(const QueryTaskRuleLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskRuleLimitWithOptions(request, runtime);
}

/**
 * @param request QueryUnionChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUnionChannelResponse
 */
QueryUnionChannelResponse Client::queryUnionChannelWithOptions(const QueryUnionChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUnionChannel"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUnionChannelResponse>();
}

/**
 * @param request QueryUnionChannelRequest
 * @return QueryUnionChannelResponse
 */
QueryUnionChannelResponse Client::queryUnionChannel(const QueryUnionChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUnionChannelWithOptions(request, runtime);
}

/**
 * @summary QueryUnionContentInfo
 *
 * @param request QueryUnionContentInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUnionContentInfoResponse
 */
QueryUnionContentInfoResponse Client::queryUnionContentInfoWithOptions(const QueryUnionContentInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasContentId()) {
    query["ContentId"] = request.getContentId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUnionContentInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUnionContentInfoResponse>();
}

/**
 * @summary QueryUnionContentInfo
 *
 * @param request QueryUnionContentInfoRequest
 * @return QueryUnionContentInfoResponse
 */
QueryUnionContentInfoResponse Client::queryUnionContentInfo(const QueryUnionContentInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUnionContentInfoWithOptions(request, runtime);
}

/**
 * @param request QueryUnionTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUnionTaskInfoResponse
 */
QueryUnionTaskInfoResponse Client::queryUnionTaskInfoWithOptions(const QueryUnionTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUnionTaskInfo"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUnionTaskInfoResponse>();
}

/**
 * @param request QueryUnionTaskInfoRequest
 * @return QueryUnionTaskInfoResponse
 */
QueryUnionTaskInfoResponse Client::queryUnionTaskInfo(const QueryUnionTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUnionTaskInfoWithOptions(request, runtime);
}

/**
 * @param request QueryUnionTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUnionTaskListResponse
 */
QueryUnionTaskListResponse Client::queryUnionTaskListWithOptions(const QueryUnionTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrandUserId()) {
    query["BrandUserId"] = request.getBrandUserId();
  }

  if (!!request.hasBrandUserNick()) {
    query["BrandUserNick"] = request.getBrandUserNick();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUnionTaskList"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUnionTaskListResponse>();
}

/**
 * @param request QueryUnionTaskListRequest
 * @return QueryUnionTaskListResponse
 */
QueryUnionTaskListResponse Client::queryUnionTaskList(const QueryUnionTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUnionTaskListWithOptions(request, runtime);
}

/**
 * @summary 开启聚合拉新计划
 *
 * @param request StartUnionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartUnionTaskResponse
 */
StartUnionTaskResponse Client::startUnionTaskWithOptions(const StartUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartUnionTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartUnionTaskResponse>();
}

/**
 * @summary 开启聚合拉新计划
 *
 * @param request StartUnionTaskRequest
 * @return StartUnionTaskResponse
 */
StartUnionTaskResponse Client::startUnionTask(const StartUnionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startUnionTaskWithOptions(request, runtime);
}

/**
 * @summary 暂停聚合拉新计划
 *
 * @param request StopUnionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopUnionTaskResponse
 */
StopUnionTaskResponse Client::stopUnionTaskWithOptions(const StopUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopUnionTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopUnionTaskResponse>();
}

/**
 * @summary 暂停聚合拉新计划
 *
 * @param request StopUnionTaskRequest
 * @return StopUnionTaskResponse
 */
StopUnionTaskResponse Client::stopUnionTask(const StopUnionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopUnionTaskWithOptions(request, runtime);
}

/**
 * @summary 聚合拉新对外接口更新计划
 *
 * @param request UpdateUnionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUnionTaskResponse
 */
UpdateUnionTaskResponse Client::updateUnionTaskWithOptions(const UpdateUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasChargePloy()) {
    query["ChargePloy"] = request.getChargePloy();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOptimizationSwitch()) {
    query["OptimizationSwitch"] = request.getOptimizationSwitch();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.getProxyUserId();
  }

  if (!!request.hasQuota()) {
    query["Quota"] = request.getQuota();
  }

  if (!!request.hasQuotaDay()) {
    query["QuotaDay"] = request.getQuotaDay();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUnionTask"},
    {"version" , "2018-12-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUnionTaskResponse>();
}

/**
 * @summary 聚合拉新对外接口更新计划
 *
 * @param request UpdateUnionTaskRequest
 * @return UpdateUnionTaskResponse
 */
UpdateUnionTaskResponse Client::updateUnionTask(const UpdateUnionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUnionTaskWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace UniMkt20181212