#include <darabonba/Core.hpp>
#include <alibabacloud/Companyreg20200306.hpp>
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
using namespace AlibabaCloud::Companyreg20200306::Models;
namespace AlibabaCloud
{
namespace Companyreg20200306
{

AlibabaCloud::Companyreg20200306::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "companyreg.aliyuncs.com"},
    {"ap-northeast-2-pop" , "companyreg.aliyuncs.com"},
    {"ap-south-1" , "companyreg.aliyuncs.com"},
    {"ap-southeast-1" , "companyreg.aliyuncs.com"},
    {"ap-southeast-2" , "companyreg.aliyuncs.com"},
    {"ap-southeast-3" , "companyreg.aliyuncs.com"},
    {"ap-southeast-5" , "companyreg.aliyuncs.com"},
    {"cn-beijing" , "companyreg.aliyuncs.com"},
    {"cn-beijing-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "companyreg.aliyuncs.com"},
    {"cn-beijing-gov-1" , "companyreg.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "companyreg.aliyuncs.com"},
    {"cn-chengdu" , "companyreg.aliyuncs.com"},
    {"cn-edge-1" , "companyreg.aliyuncs.com"},
    {"cn-fujian" , "companyreg.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-finance" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "companyreg.aliyuncs.com"},
    {"cn-hongkong" , "companyreg.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "companyreg.aliyuncs.com"},
    {"cn-huhehaote" , "companyreg.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "companyreg.aliyuncs.com"},
    {"cn-north-2-gov-1" , "companyreg.aliyuncs.com"},
    {"cn-qingdao" , "companyreg.aliyuncs.com"},
    {"cn-qingdao-nebula" , "companyreg.aliyuncs.com"},
    {"cn-shanghai" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-inner" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-inner" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "companyreg.aliyuncs.com"},
    {"cn-wuhan" , "companyreg.aliyuncs.com"},
    {"cn-wulanchabu" , "companyreg.aliyuncs.com"},
    {"cn-yushanfang" , "companyreg.aliyuncs.com"},
    {"cn-zhangbei" , "companyreg.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "companyreg.aliyuncs.com"},
    {"cn-zhangjiakou" , "companyreg.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "companyreg.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "companyreg.aliyuncs.com"},
    {"eu-central-1" , "companyreg.aliyuncs.com"},
    {"eu-west-1" , "companyreg.aliyuncs.com"},
    {"eu-west-1-oxs" , "companyreg.aliyuncs.com"},
    {"me-east-1" , "companyreg.aliyuncs.com"},
    {"rus-west-1-pop" , "companyreg.aliyuncs.com"},
    {"us-east-1" , "companyreg.aliyuncs.com"},
    {"us-west-1" , "companyreg.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("companyreg", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 服务单授权
 *
 * @param request BindProduceAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindProduceAuthorizationResponse
 */
BindProduceAuthorizationResponse Client::bindProduceAuthorizationWithOptions(const BindProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthorizedUserIds()) {
    body["AuthorizedUserIds"] = request.authorizedUserIds();
  }

  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BindProduceAuthorization"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindProduceAuthorizationResponse>();
}

/**
 * @summary 服务单授权
 *
 * @param request BindProduceAuthorizationRequest
 * @return BindProduceAuthorizationResponse
 */
BindProduceAuthorizationResponse Client::bindProduceAuthorization(const BindProduceAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindProduceAuthorizationWithOptions(request, runtime);
}

/**
 * @param request CloseIntentionForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseIntentionForPartnerResponse
 */
CloseIntentionForPartnerResponse Client::closeIntentionForPartnerWithOptions(const CloseIntentionForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseIntentionForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseIntentionForPartnerResponse>();
}

/**
 * @param request CloseIntentionForPartnerRequest
 * @return CloseIntentionForPartnerResponse
 */
CloseIntentionForPartnerResponse Client::closeIntentionForPartner(const CloseIntentionForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeIntentionForPartnerWithOptions(request, runtime);
}

/**
 * @param request CloseUserIntentionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseUserIntentionResponse
 */
CloseUserIntentionResponse Client::closeUserIntentionWithOptions(const CloseUserIntentionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseUserIntention"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseUserIntentionResponse>();
}

/**
 * @param request CloseUserIntentionRequest
 * @return CloseUserIntentionResponse
 */
CloseUserIntentionResponse Client::closeUserIntention(const CloseUserIntentionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeUserIntentionWithOptions(request, runtime);
}

/**
 * @summary CreateBusinessOpportunity
 *
 * @param request CreateBusinessOpportunityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBusinessOpportunityResponse
 */
CreateBusinessOpportunityResponse Client::createBusinessOpportunityWithOptions(const CreateBusinessOpportunityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasVCode()) {
    query["VCode"] = request.VCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBusinessOpportunity"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBusinessOpportunityResponse>();
}

/**
 * @summary CreateBusinessOpportunity
 *
 * @param request CreateBusinessOpportunityRequest
 * @return CreateBusinessOpportunityResponse
 */
CreateBusinessOpportunityResponse Client::createBusinessOpportunity(const CreateBusinessOpportunityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBusinessOpportunityWithOptions(request, runtime);
}

/**
 * @param request CreateProduceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProduceForPartnerResponse
 */
CreateProduceForPartnerResponse Client::createProduceForPartnerWithOptions(const CreateProduceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProduceForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProduceForPartnerResponse>();
}

/**
 * @param request CreateProduceForPartnerRequest
 * @return CreateProduceForPartnerResponse
 */
CreateProduceForPartnerResponse Client::createProduceForPartner(const CreateProduceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProduceForPartnerWithOptions(request, runtime);
}

/**
 * @param request DescribePartnerConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePartnerConfigResponse
 */
DescribePartnerConfigResponse Client::describePartnerConfigWithOptions(const DescribePartnerConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasPartnerCode()) {
    query["PartnerCode"] = request.partnerCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePartnerConfig"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePartnerConfigResponse>();
}

/**
 * @param request DescribePartnerConfigRequest
 * @return DescribePartnerConfigResponse
 */
DescribePartnerConfigResponse Client::describePartnerConfig(const DescribePartnerConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePartnerConfigWithOptions(request, runtime);
}

/**
 * @summary GenerateUploadFilePolicy
 *
 * @param request GenerateUploadFilePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadFilePolicyResponse
 */
GenerateUploadFilePolicyResponse Client::generateUploadFilePolicyWithOptions(const GenerateUploadFilePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUploadFilePolicy"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUploadFilePolicyResponse>();
}

/**
 * @summary GenerateUploadFilePolicy
 *
 * @param request GenerateUploadFilePolicyRequest
 * @return GenerateUploadFilePolicyResponse
 */
GenerateUploadFilePolicyResponse Client::generateUploadFilePolicy(const GenerateUploadFilePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadFilePolicyWithOptions(request, runtime);
}

/**
 * @param request GetAlipayUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlipayUrlResponse
 */
GetAlipayUrlResponse Client::getAlipayUrlWithOptions(const GetAlipayUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlipayUrl"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlipayUrlResponse>();
}

/**
 * @param request GetAlipayUrlRequest
 * @return GetAlipayUrlResponse
 */
GetAlipayUrlResponse Client::getAlipayUrl(const GetAlipayUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlipayUrlWithOptions(request, runtime);
}

/**
 * @param request ListIntentionNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentionNoteResponse
 */
ListIntentionNoteResponse Client::listIntentionNoteWithOptions(const ListIntentionNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntentionNote"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntentionNoteResponse>();
}

/**
 * @param request ListIntentionNoteRequest
 * @return ListIntentionNoteResponse
 */
ListIntentionNoteResponse Client::listIntentionNote(const ListIntentionNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentionNoteWithOptions(request, runtime);
}

/**
 * @param request ListProduceAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProduceAuthorizationResponse
 */
ListProduceAuthorizationResponse Client::listProduceAuthorizationWithOptions(const ListProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProduceAuthorization"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProduceAuthorizationResponse>();
}

/**
 * @param request ListProduceAuthorizationRequest
 * @return ListProduceAuthorizationResponse
 */
ListProduceAuthorizationResponse Client::listProduceAuthorization(const ListProduceAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProduceAuthorizationWithOptions(request, runtime);
}

/**
 * @param request ListUserDetailSolutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDetailSolutionsResponse
 */
ListUserDetailSolutionsResponse Client::listUserDetailSolutionsWithOptions(const ListUserDetailSolutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDetailSolutions"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDetailSolutionsResponse>();
}

/**
 * @param request ListUserDetailSolutionsRequest
 * @return ListUserDetailSolutionsResponse
 */
ListUserDetailSolutionsResponse Client::listUserDetailSolutions(const ListUserDetailSolutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserDetailSolutionsWithOptions(request, runtime);
}

/**
 * @param request ListUserIntentionNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserIntentionNotesResponse
 */
ListUserIntentionNotesResponse Client::listUserIntentionNotesWithOptions(const ListUserIntentionNotesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserIntentionNotes"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserIntentionNotesResponse>();
}

/**
 * @param request ListUserIntentionNotesRequest
 * @return ListUserIntentionNotesResponse
 */
ListUserIntentionNotesResponse Client::listUserIntentionNotes(const ListUserIntentionNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserIntentionNotesWithOptions(request, runtime);
}

/**
 * @summary 用户控制天需求列表查询
 *
 * @param request ListUserIntentionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserIntentionsResponse
 */
ListUserIntentionsResponse Client::listUserIntentionsWithOptions(const ListUserIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasBizTypes()) {
    query["BizTypes"] = request.bizTypes();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortFiled()) {
    query["SortFiled"] = request.sortFiled();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWithExtInfo()) {
    query["WithExtInfo"] = request.withExtInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserIntentions"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserIntentionsResponse>();
}

/**
 * @summary 用户控制天需求列表查询
 *
 * @param request ListUserIntentionsRequest
 * @return ListUserIntentionsResponse
 */
ListUserIntentionsResponse Client::listUserIntentions(const ListUserIntentionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserIntentionsWithOptions(request, runtime);
}

/**
 * @param request ListUserProduceOperateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserProduceOperateLogsResponse
 */
ListUserProduceOperateLogsResponse Client::listUserProduceOperateLogsWithOptions(const ListUserProduceOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserProduceOperateLogs"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserProduceOperateLogsResponse>();
}

/**
 * @param request ListUserProduceOperateLogsRequest
 * @return ListUserProduceOperateLogsResponse
 */
ListUserProduceOperateLogsResponse Client::listUserProduceOperateLogs(const ListUserProduceOperateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserProduceOperateLogsWithOptions(request, runtime);
}

/**
 * @param tmpReq ListUserSolutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserSolutionsResponse
 */
ListUserSolutionsResponse Client::listUserSolutionsWithOptions(const ListUserSolutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserSolutionsShrinkRequest request = ListUserSolutionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExistStatus()) {
    request.setExistStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.existStatus(), "ExistStatus", "json"));
  }

  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasExistStatusShrink()) {
    query["ExistStatus"] = request.existStatusShrink();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserSolutions"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserSolutionsResponse>();
}

/**
 * @param request ListUserSolutionsRequest
 * @return ListUserSolutionsResponse
 */
ListUserSolutionsResponse Client::listUserSolutions(const ListUserSolutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserSolutionsWithOptions(request, runtime);
}

/**
 * @summary 服务商玄坛呼叫中心操作
 *
 * @param request OperateCallCenterForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateCallCenterForPartnerResponse
 */
OperateCallCenterForPartnerResponse Client::operateCallCenterForPartnerWithOptions(const OperateCallCenterForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCallAction()) {
    query["CallAction"] = request.callAction();
  }

  if (!!request.hasEmployeeCode()) {
    query["EmployeeCode"] = request.employeeCode();
  }

  if (!!request.hasRequest()) {
    query["Request"] = request.request();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateCallCenterForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateCallCenterForPartnerResponse>();
}

/**
 * @summary 服务商玄坛呼叫中心操作
 *
 * @param request OperateCallCenterForPartnerRequest
 * @return OperateCallCenterForPartnerResponse
 */
OperateCallCenterForPartnerResponse Client::operateCallCenterForPartner(const OperateCallCenterForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateCallCenterForPartnerWithOptions(request, runtime);
}

/**
 * @param request OperateProduceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateProduceForPartnerResponse
 */
OperateProduceForPartnerResponse Client::operateProduceForPartnerWithOptions(const OperateProduceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateProduceForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateProduceForPartnerResponse>();
}

/**
 * @param request OperateProduceForPartnerRequest
 * @return OperateProduceForPartnerResponse
 */
OperateProduceForPartnerResponse Client::operateProduceForPartner(const OperateProduceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateProduceForPartnerWithOptions(request, runtime);
}

/**
 * @param request PutMeasureDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMeasureDataResponse
 */
PutMeasureDataResponse Client::putMeasureDataWithOptions(const PutMeasureDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.dataType();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PutMeasureData"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutMeasureDataResponse>();
}

/**
 * @param request PutMeasureDataRequest
 * @return PutMeasureDataResponse
 */
PutMeasureDataResponse Client::putMeasureData(const PutMeasureDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putMeasureDataWithOptions(request, runtime);
}

/**
 * @param request PutMeasureReadyFlagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMeasureReadyFlagResponse
 */
PutMeasureReadyFlagResponse Client::putMeasureReadyFlagWithOptions(const PutMeasureReadyFlagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasReadyFlag()) {
    query["ReadyFlag"] = request.readyFlag();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutMeasureReadyFlag"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutMeasureReadyFlagResponse>();
}

/**
 * @param request PutMeasureReadyFlagRequest
 * @return PutMeasureReadyFlagResponse
 */
PutMeasureReadyFlagResponse Client::putMeasureReadyFlag(const PutMeasureReadyFlagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putMeasureReadyFlagWithOptions(request, runtime);
}

/**
 * @summary 获取玄坛合作伙伴双呼时可用外呼号码
 *
 * @param request QueryAvailableNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvailableNumbersResponse
 */
QueryAvailableNumbersResponse Client::queryAvailableNumbersWithOptions(const QueryAvailableNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvailableNumbers"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvailableNumbersResponse>();
}

/**
 * @summary 获取玄坛合作伙伴双呼时可用外呼号码
 *
 * @param request QueryAvailableNumbersRequest
 * @return QueryAvailableNumbersResponse
 */
QueryAvailableNumbersResponse Client::queryAvailableNumbers(const QueryAvailableNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvailableNumbersWithOptions(request, runtime);
}

/**
 * @param request QueryBagRemainingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBagRemainingResponse
 */
QueryBagRemainingResponse Client::queryBagRemainingWithOptions(const QueryBagRemainingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBagRemaining"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBagRemainingResponse>();
}

/**
 * @param request QueryBagRemainingRequest
 * @return QueryBagRemainingResponse
 */
QueryBagRemainingResponse Client::queryBagRemaining(const QueryBagRemainingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBagRemainingWithOptions(request, runtime);
}

/**
 * @summary 查询玄坛外呼语音文件
 *
 * @param request QueryCallRecordListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCallRecordListResponse
 */
QueryCallRecordListResponse Client::queryCallRecordListWithOptions(const QueryCallRecordListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasSkillType()) {
    query["SkillType"] = request.skillType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCallRecordList"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallRecordListResponse>();
}

/**
 * @summary 查询玄坛外呼语音文件
 *
 * @param request QueryCallRecordListRequest
 * @return QueryCallRecordListResponse
 */
QueryCallRecordListResponse Client::queryCallRecordList(const QueryCallRecordListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallRecordListWithOptions(request, runtime);
}

/**
 * @param request QueryInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceResponse
 */
QueryInstanceResponse Client::queryInstanceWithOptions(const QueryInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstance"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceResponse>();
}

/**
 * @param request QueryInstanceRequest
 * @return QueryInstanceResponse
 */
QueryInstanceResponse Client::queryInstance(const QueryInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceWithOptions(request, runtime);
}

/**
 * @summary QueryPartnerIntentionList
 *
 * @param request QueryPartnerIntentionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPartnerIntentionListResponse
 */
QueryPartnerIntentionListResponse Client::queryPartnerIntentionListWithOptions(const QueryPartnerIntentionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPartnerIntentionList"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPartnerIntentionListResponse>();
}

/**
 * @summary QueryPartnerIntentionList
 *
 * @param request QueryPartnerIntentionListRequest
 * @return QueryPartnerIntentionListResponse
 */
QueryPartnerIntentionListResponse Client::queryPartnerIntentionList(const QueryPartnerIntentionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPartnerIntentionListWithOptions(request, runtime);
}

/**
 * @summary QueryPartnerProduceList
 *
 * @param request QueryPartnerProduceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPartnerProduceListResponse
 */
QueryPartnerProduceListResponse Client::queryPartnerProduceListWithOptions(const QueryPartnerProduceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPartnerProduceList"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPartnerProduceListResponse>();
}

/**
 * @summary QueryPartnerProduceList
 *
 * @param request QueryPartnerProduceListRequest
 * @return QueryPartnerProduceListResponse
 */
QueryPartnerProduceListResponse Client::queryPartnerProduceList(const QueryPartnerProduceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPartnerProduceListWithOptions(request, runtime);
}

/**
 * @param request QueryUserNeedAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserNeedAuthResponse
 */
QueryUserNeedAuthResponse Client::queryUserNeedAuthWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryUserNeedAuth"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserNeedAuthResponse>();
}

/**
 * @return QueryUserNeedAuthResponse
 */
QueryUserNeedAuthResponse Client::queryUserNeedAuth() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserNeedAuthWithOptions(runtime);
}

/**
 * @summary 服务商玄坛外呼呼叫中心事件回传
 *
 * @param request RecordCallCenterEventForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordCallCenterEventForPartnerResponse
 */
RecordCallCenterEventForPartnerResponse Client::recordCallCenterEventForPartnerWithOptions(const RecordCallCenterEventForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCallAction()) {
    query["CallAction"] = request.callAction();
  }

  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasConnId()) {
    query["ConnId"] = request.connId();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasEmployeeCode()) {
    query["EmployeeCode"] = request.employeeCode();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRelatedId()) {
    query["RelatedId"] = request.relatedId();
  }

  if (!!request.hasSecretMobile()) {
    query["SecretMobile"] = request.secretMobile();
  }

  if (!!request.hasSkillType()) {
    query["SkillType"] = request.skillType();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecordCallCenterEventForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecordCallCenterEventForPartnerResponse>();
}

/**
 * @summary 服务商玄坛外呼呼叫中心事件回传
 *
 * @param request RecordCallCenterEventForPartnerRequest
 * @return RecordCallCenterEventForPartnerResponse
 */
RecordCallCenterEventForPartnerResponse Client::recordCallCenterEventForPartner(const RecordCallCenterEventForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordCallCenterEventForPartnerWithOptions(request, runtime);
}

/**
 * @summary RecordPostBack
 *
 * @param request RecordPostBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordPostBackResponse
 */
RecordPostBackResponse Client::recordPostBackWithOptions(const RecordPostBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["bizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.bizType();
  }

  if (!!request.hasContactor()) {
    query["contactor"] = request.contactor();
  }

  if (!!request.hasContent()) {
    query["content"] = request.content();
  }

  if (!!request.hasEntityKey()) {
    query["entityKey"] = request.entityKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecordPostBack"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecordPostBackResponse>();
}

/**
 * @summary RecordPostBack
 *
 * @param request RecordPostBackRequest
 * @return RecordPostBackResponse
 */
RecordPostBackResponse Client::recordPostBack(const RecordPostBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordPostBackWithOptions(request, runtime);
}

/**
 * @param request RejectSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectSolutionResponse
 */
RejectSolutionResponse Client::rejectSolutionWithOptions(const RejectSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasSolutionBizId()) {
    query["SolutionBizId"] = request.solutionBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectSolution"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectSolutionResponse>();
}

/**
 * @param request RejectSolutionRequest
 * @return RejectSolutionResponse
 */
RejectSolutionResponse Client::rejectSolution(const RejectSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectSolutionWithOptions(request, runtime);
}

/**
 * @param request RejectUserSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectUserSolutionResponse
 */
RejectUserSolutionResponse Client::rejectUserSolutionWithOptions(const RejectUserSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  if (!!request.hasSolutionBizId()) {
    query["SolutionBizId"] = request.solutionBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectUserSolution"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectUserSolutionResponse>();
}

/**
 * @param request RejectUserSolutionRequest
 * @return RejectUserSolutionResponse
 */
RejectUserSolutionResponse Client::rejectUserSolution(const RejectUserSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectUserSolutionWithOptions(request, runtime);
}

/**
 * @param request ReleaseProduceAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseProduceAuthorizationResponse
 */
ReleaseProduceAuthorizationResponse Client::releaseProduceAuthorizationWithOptions(const ReleaseProduceAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthorizedUserId()) {
    body["AuthorizedUserId"] = request.authorizedUserId();
  }

  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReleaseProduceAuthorization"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseProduceAuthorizationResponse>();
}

/**
 * @param request ReleaseProduceAuthorizationRequest
 * @return ReleaseProduceAuthorizationResponse
 */
ReleaseProduceAuthorizationResponse Client::releaseProduceAuthorization(const ReleaseProduceAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseProduceAuthorizationWithOptions(request, runtime);
}

/**
 * @summary 玄坛双呼外呼发起
 *
 * @param request StartBackToBackCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBackToBackCallResponse
 */
StartBackToBackCallResponse Client::startBackToBackCallWithOptions(const StartBackToBackCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCallCenterNumber()) {
    query["CallCenterNumber"] = request.callCenterNumber();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasMobileKey()) {
    query["MobileKey"] = request.mobileKey();
  }

  if (!!request.hasSkillType()) {
    query["SkillType"] = request.skillType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartBackToBackCall"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartBackToBackCallResponse>();
}

/**
 * @summary 玄坛双呼外呼发起
 *
 * @param request StartBackToBackCallRequest
 * @return StartBackToBackCallResponse
 */
StartBackToBackCallResponse Client::startBackToBackCall(const StartBackToBackCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBackToBackCallWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴提交需求单
 *
 * @param request SubmitIntentionForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitIntentionForPartnerResponse
 */
SubmitIntentionForPartnerResponse Client::submitIntentionForPartnerWithOptions(const SubmitIntentionForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.channel();
  }

  if (!!request.hasCommodityType()) {
    query["CommodityType"] = request.commodityType();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExtInfo()) {
    query["ExtInfo"] = request.extInfo();
  }

  if (!!request.hasGrade()) {
    query["Grade"] = request.grade();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIntentionForPartner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIntentionForPartnerResponse>();
}

/**
 * @summary 合作伙伴提交需求单
 *
 * @param request SubmitIntentionForPartnerRequest
 * @return SubmitIntentionForPartnerResponse
 */
SubmitIntentionForPartnerResponse Client::submitIntentionForPartner(const SubmitIntentionForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIntentionForPartnerWithOptions(request, runtime);
}

/**
 * @param request SubmitIntentionNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitIntentionNoteResponse
 */
SubmitIntentionNoteResponse Client::submitIntentionNoteWithOptions(const SubmitIntentionNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.note();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIntentionNote"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIntentionNoteResponse>();
}

/**
 * @param request SubmitIntentionNoteRequest
 * @return SubmitIntentionNoteResponse
 */
SubmitIntentionNoteResponse Client::submitIntentionNote(const SubmitIntentionNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIntentionNoteWithOptions(request, runtime);
}

/**
 * @param request SubmitSolutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSolutionResponse
 */
SubmitSolutionResponse Client::submitSolutionWithOptions(const SubmitSolutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasIntentionBizId()) {
    query["IntentionBizId"] = request.intentionBizId();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasSolution()) {
    query["Solution"] = request.solution();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSolution"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSolutionResponse>();
}

/**
 * @param request SubmitSolutionRequest
 * @return SubmitSolutionResponse
 */
SubmitSolutionResponse Client::submitSolution(const SubmitSolutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSolutionWithOptions(request, runtime);
}

/**
 * @summary 玄坛需求单转派小二
 *
 * @param request TransferIntentionOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferIntentionOwnerResponse
 */
TransferIntentionOwnerResponse Client::transferIntentionOwnerWithOptions(const TransferIntentionOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasEmployeeCode()) {
    query["EmployeeCode"] = request.employeeCode();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferIntentionOwner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferIntentionOwnerResponse>();
}

/**
 * @summary 玄坛需求单转派小二
 *
 * @param request TransferIntentionOwnerRequest
 * @return TransferIntentionOwnerResponse
 */
TransferIntentionOwnerResponse Client::transferIntentionOwner(const TransferIntentionOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferIntentionOwnerWithOptions(request, runtime);
}

/**
 * @summary 玄坛服务单转派小二
 *
 * @param request TransferProduceOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferProduceOwnerResponse
 */
TransferProduceOwnerResponse Client::transferProduceOwnerWithOptions(const TransferProduceOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasEmployeeCode()) {
    query["EmployeeCode"] = request.employeeCode();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferProduceOwner"},
    {"version" , "2020-03-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferProduceOwnerResponse>();
}

/**
 * @summary 玄坛服务单转派小二
 *
 * @param request TransferProduceOwnerRequest
 * @return TransferProduceOwnerResponse
 */
TransferProduceOwnerResponse Client::transferProduceOwner(const TransferProduceOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferProduceOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Companyreg20200306