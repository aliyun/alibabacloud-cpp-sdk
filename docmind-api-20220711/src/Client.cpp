#include <darabonba/Core.hpp>
#include <alibabacloud/DocmindApi20220711.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/http/Form.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DocmindApi20220711::Models;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{

AlibabaCloud::DocmindApi20220711::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "docmind-api.aliyuncs.com"},
    {"ap-northeast-2-pop" , "docmind-api.aliyuncs.com"},
    {"ap-south-1" , "docmind-api.aliyuncs.com"},
    {"ap-southeast-1" , "docmind-api.aliyuncs.com"},
    {"ap-southeast-2" , "docmind-api.aliyuncs.com"},
    {"ap-southeast-3" , "docmind-api.aliyuncs.com"},
    {"ap-southeast-5" , "docmind-api.aliyuncs.com"},
    {"cn-beijing" , "docmind-api.aliyuncs.com"},
    {"cn-beijing-finance-1" , "docmind-api.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "docmind-api.aliyuncs.com"},
    {"cn-beijing-gov-1" , "docmind-api.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "docmind-api.aliyuncs.com"},
    {"cn-chengdu" , "docmind-api.aliyuncs.com"},
    {"cn-edge-1" , "docmind-api.aliyuncs.com"},
    {"cn-fujian" , "docmind-api.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-finance" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "docmind-api.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "docmind-api.aliyuncs.com"},
    {"cn-hongkong" , "docmind-api.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "docmind-api.aliyuncs.com"},
    {"cn-huhehaote" , "docmind-api.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "docmind-api.aliyuncs.com"},
    {"cn-north-2-gov-1" , "docmind-api.aliyuncs.com"},
    {"cn-qingdao" , "docmind-api.aliyuncs.com"},
    {"cn-qingdao-nebula" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai-inner" , "docmind-api.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "docmind-api.aliyuncs.com"},
    {"cn-shenzhen" , "docmind-api.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "docmind-api.aliyuncs.com"},
    {"cn-shenzhen-inner" , "docmind-api.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "docmind-api.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "docmind-api.aliyuncs.com"},
    {"cn-wuhan" , "docmind-api.aliyuncs.com"},
    {"cn-wulanchabu" , "docmind-api.aliyuncs.com"},
    {"cn-yushanfang" , "docmind-api.aliyuncs.com"},
    {"cn-zhangbei" , "docmind-api.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "docmind-api.aliyuncs.com"},
    {"cn-zhangjiakou" , "docmind-api.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "docmind-api.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "docmind-api.aliyuncs.com"},
    {"eu-central-1" , "docmind-api.aliyuncs.com"},
    {"eu-west-1" , "docmind-api.aliyuncs.com"},
    {"eu-west-1-oxs" , "docmind-api.aliyuncs.com"},
    {"me-east-1" , "docmind-api.aliyuncs.com"},
    {"rus-west-1-pop" , "docmind-api.aliyuncs.com"},
    {"us-east-1" , "docmind-api.aliyuncs.com"},
    {"us-west-1" , "docmind-api.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("docmind-api", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form) {
Darabonba::RuntimeOptions runtime_(json({}));

  Darabonba::Http::Request request_ = Darabonba::Http::Request();
  string boundary = Darabonba::Http::Form::getBoundary();
  request_.setProtocol("HTTPS");
  request_.setMethod("POST");
  request_.setPathname(DARA_STRING_TEMPLATE("/"));
  request_.setHeaders(json({
    {"host" , Darabonba::Convert::stringVal(form["host"])},
    {"date" , Utils::Utils::getDateUTCString()},
    {"user-agent" , Utils::Utils::getUserAgent("")}
  }).get<map<string, string>>());
  request_.addHeader("content-type", DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary));
  request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
  auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
  shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

  json respMap = nullptr;
  string bodyStr = Darabonba::Stream::readAsString(response_->body());
  if ((response_->statusCode() >= 400) && (response_->statusCode() < 600)) {
    respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
    json err = json(respMap["Error"]);
    throw ClientException(json({
      {"code" , Darabonba::Convert::stringVal(err["Code"])},
      {"message" , Darabonba::Convert::stringVal(err["Message"])},
      {"data" , json({
        {"httpCode" , response_->statusCode()},
        {"requestId" , Darabonba::Convert::stringVal(err["RequestId"])},
        {"hostId" , Darabonba::Convert::stringVal(err["HostId"])}
      })}
    }));
  }

  respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
  return Darabonba::Core::merge(respMap
  );
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
 * @summary 整票识别
 *
 * @param tmpReq AyncTradeDocumentPackageExtractSmartAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AyncTradeDocumentPackageExtractSmartAppResponse
 */
AyncTradeDocumentPackageExtractSmartAppResponse Client::ayncTradeDocumentPackageExtractSmartAppWithOptions(const AyncTradeDocumentPackageExtractSmartAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AyncTradeDocumentPackageExtractSmartAppShrinkRequest request = AyncTradeDocumentPackageExtractSmartAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomExtractionRange()) {
    request.setCustomExtractionRangeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customExtractionRange(), "CustomExtractionRange", "json"));
  }

  json query = {};
  if (!!request.hasCustomExtractionRangeShrink()) {
    query["CustomExtractionRange"] = request.customExtractionRangeShrink();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AyncTradeDocumentPackageExtractSmartApp"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AyncTradeDocumentPackageExtractSmartAppResponse>();
}

/**
 * @summary 整票识别
 *
 * @param request AyncTradeDocumentPackageExtractSmartAppRequest
 * @return AyncTradeDocumentPackageExtractSmartAppResponse
 */
AyncTradeDocumentPackageExtractSmartAppResponse Client::ayncTradeDocumentPackageExtractSmartApp(const AyncTradeDocumentPackageExtractSmartAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ayncTradeDocumentPackageExtractSmartAppWithOptions(request, runtime);
}

/**
 * @summary 文档结构化流式接口
 *
 * @param tmpReq GetDocParserResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocParserResultResponse
 */
GetDocParserResultResponse Client::getDocParserResultWithOptions(const GetDocParserResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDocParserResultShrinkRequest request = GetDocParserResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeFields()) {
    request.setExcludeFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.excludeFields(), "ExcludeFields", "simple"));
  }

  json query = {};
  if (!!request.hasExcludeFieldsShrink()) {
    query["ExcludeFields"] = request.excludeFieldsShrink();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLayoutNum()) {
    query["LayoutNum"] = request.layoutNum();
  }

  if (!!request.hasLayoutStepSize()) {
    query["LayoutStepSize"] = request.layoutStepSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocParserResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocParserResultResponse>();
}

/**
 * @summary 文档结构化流式接口
 *
 * @param request GetDocParserResultRequest
 * @return GetDocParserResultResponse
 */
GetDocParserResultResponse Client::getDocParserResult(const GetDocParserResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocParserResultWithOptions(request, runtime);
}

/**
 * @summary 文档智能解析结果查询
 *
 * @param request GetDocStructureResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocStructureResultResponse
 */
GetDocStructureResultResponse Client::getDocStructureResultWithOptions(const GetDocStructureResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasImageStrategy()) {
    query["ImageStrategy"] = request.imageStrategy();
  }

  if (!!request.hasRevealMarkdown()) {
    query["RevealMarkdown"] = request.revealMarkdown();
  }

  if (!!request.hasUseUrlResponseBody()) {
    query["UseUrlResponseBody"] = request.useUrlResponseBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocStructureResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocStructureResultResponse>();
}

/**
 * @summary 文档智能解析结果查询
 *
 * @param request GetDocStructureResultRequest
 * @return GetDocStructureResultResponse
 */
GetDocStructureResultResponse Client::getDocStructureResult(const GetDocStructureResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocStructureResultWithOptions(request, runtime);
}

/**
 * @summary 文档对比结果查询
 *
 * @param request GetDocumentCompareResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentCompareResultResponse
 */
GetDocumentCompareResultResponse Client::getDocumentCompareResultWithOptions(const GetDocumentCompareResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentCompareResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentCompareResultResponse>();
}

/**
 * @summary 文档对比结果查询
 *
 * @param request GetDocumentCompareResultRequest
 * @return GetDocumentCompareResultResponse
 */
GetDocumentCompareResultResponse Client::getDocumentCompareResult(const GetDocumentCompareResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentCompareResultWithOptions(request, runtime);
}

/**
 * @summary 文档转换结果查询
 *
 * @param request GetDocumentConvertResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentConvertResultResponse
 */
GetDocumentConvertResultResponse Client::getDocumentConvertResultWithOptions(const GetDocumentConvertResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentConvertResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentConvertResultResponse>();
}

/**
 * @summary 文档转换结果查询
 *
 * @param request GetDocumentConvertResultRequest
 * @return GetDocumentConvertResultResponse
 */
GetDocumentConvertResultResponse Client::getDocumentConvertResult(const GetDocumentConvertResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentConvertResultWithOptions(request, runtime);
}

/**
 * @summary 文档抽取结果查询
 *
 * @param request GetDocumentExtractResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentExtractResultResponse
 */
GetDocumentExtractResultResponse Client::getDocumentExtractResultWithOptions(const GetDocumentExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDocumentExtractResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentExtractResultResponse>();
}

/**
 * @summary 文档抽取结果查询
 *
 * @param request GetDocumentExtractResultRequest
 * @return GetDocumentExtractResultResponse
 */
GetDocumentExtractResultResponse Client::getDocumentExtractResult(const GetDocumentExtractResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentExtractResultWithOptions(request, runtime);
}

/**
 * @summary openmind
 *
 * @param request GetPageNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPageNumResponse
 */
GetPageNumResponse Client::getPageNumWithOptions(const GetPageNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPageNum"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPageNumResponse>();
}

/**
 * @summary openmind
 *
 * @param request GetPageNumRequest
 * @return GetPageNumResponse
 */
GetPageNumResponse Client::getPageNum(const GetPageNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPageNumWithOptions(request, runtime);
}

/**
 * @summary 表格智能解析结果查询
 *
 * @param request GetTableUnderstandingResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableUnderstandingResultResponse
 */
GetTableUnderstandingResultResponse Client::getTableUnderstandingResultWithOptions(const GetTableUnderstandingResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableUnderstandingResult"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableUnderstandingResultResponse>();
}

/**
 * @summary 表格智能解析结果查询
 *
 * @param request GetTableUnderstandingResultRequest
 * @return GetTableUnderstandingResultResponse
 */
GetTableUnderstandingResultResponse Client::getTableUnderstandingResult(const GetTableUnderstandingResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableUnderstandingResultWithOptions(request, runtime);
}

/**
 * @summary 获取文档智能解析处理状态
 *
 * @param request QueryDocParserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDocParserStatusResponse
 */
QueryDocParserStatusResponse Client::queryDocParserStatusWithOptions(const QueryDocParserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDocParserStatus"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDocParserStatusResponse>();
}

/**
 * @summary 获取文档智能解析处理状态
 *
 * @param request QueryDocParserStatusRequest
 * @return QueryDocParserStatusResponse
 */
QueryDocParserStatusResponse Client::queryDocParserStatus(const QueryDocParserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDocParserStatusWithOptions(request, runtime);
}

/**
 * @summary 图片转excel
 *
 * @param tmpReq SubmitConvertImageToExcelJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertImageToExcelJobResponse
 */
SubmitConvertImageToExcelJobResponse Client::submitConvertImageToExcelJobWithOptions(const SubmitConvertImageToExcelJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitConvertImageToExcelJobShrinkRequest request = SubmitConvertImageToExcelJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageNames()) {
    request.setImageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageNames(), "ImageNames", "simple"));
  }

  if (!!tmpReq.hasImageUrls()) {
    request.setImageUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageUrls(), "ImageUrls", "simple"));
  }

  json query = {};
  if (!!request.hasForceMergeExcel()) {
    query["ForceMergeExcel"] = request.forceMergeExcel();
  }

  if (!!request.hasImageNameExtension()) {
    query["ImageNameExtension"] = request.imageNameExtension();
  }

  if (!!request.hasImageNamesShrink()) {
    query["ImageNames"] = request.imageNamesShrink();
  }

  if (!!request.hasImageUrlsShrink()) {
    query["ImageUrls"] = request.imageUrlsShrink();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertImageToExcelJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertImageToExcelJobResponse>();
}

/**
 * @summary 图片转excel
 *
 * @param request SubmitConvertImageToExcelJobRequest
 * @return SubmitConvertImageToExcelJobResponse
 */
SubmitConvertImageToExcelJobResponse Client::submitConvertImageToExcelJob(const SubmitConvertImageToExcelJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertImageToExcelJobWithOptions(request, runtime);
}

/**
 * @summary 图片转markdown
 *
 * @param tmpReq SubmitConvertImageToMarkdownJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertImageToMarkdownJobResponse
 */
SubmitConvertImageToMarkdownJobResponse Client::submitConvertImageToMarkdownJobWithOptions(const SubmitConvertImageToMarkdownJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitConvertImageToMarkdownJobShrinkRequest request = SubmitConvertImageToMarkdownJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageNames()) {
    request.setImageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageNames(), "ImageNames", "simple"));
  }

  if (!!tmpReq.hasImageUrls()) {
    request.setImageUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageUrls(), "ImageUrls", "simple"));
  }

  json query = {};
  if (!!request.hasImageNameExtension()) {
    query["ImageNameExtension"] = request.imageNameExtension();
  }

  if (!!request.hasImageNamesShrink()) {
    query["ImageNames"] = request.imageNamesShrink();
  }

  if (!!request.hasImageUrlsShrink()) {
    query["ImageUrls"] = request.imageUrlsShrink();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertImageToMarkdownJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertImageToMarkdownJobResponse>();
}

/**
 * @summary 图片转markdown
 *
 * @param request SubmitConvertImageToMarkdownJobRequest
 * @return SubmitConvertImageToMarkdownJobResponse
 */
SubmitConvertImageToMarkdownJobResponse Client::submitConvertImageToMarkdownJob(const SubmitConvertImageToMarkdownJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertImageToMarkdownJobWithOptions(request, runtime);
}

/**
 * @summary 图片转pdf
 *
 * @param tmpReq SubmitConvertImageToPdfJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertImageToPdfJobResponse
 */
SubmitConvertImageToPdfJobResponse Client::submitConvertImageToPdfJobWithOptions(const SubmitConvertImageToPdfJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitConvertImageToPdfJobShrinkRequest request = SubmitConvertImageToPdfJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageNames()) {
    request.setImageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageNames(), "ImageNames", "simple"));
  }

  if (!!tmpReq.hasImageUrls()) {
    request.setImageUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageUrls(), "ImageUrls", "simple"));
  }

  json query = {};
  if (!!request.hasImageNameExtension()) {
    query["ImageNameExtension"] = request.imageNameExtension();
  }

  if (!!request.hasImageNamesShrink()) {
    query["ImageNames"] = request.imageNamesShrink();
  }

  if (!!request.hasImageUrlsShrink()) {
    query["ImageUrls"] = request.imageUrlsShrink();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertImageToPdfJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertImageToPdfJobResponse>();
}

/**
 * @summary 图片转pdf
 *
 * @param request SubmitConvertImageToPdfJobRequest
 * @return SubmitConvertImageToPdfJobResponse
 */
SubmitConvertImageToPdfJobResponse Client::submitConvertImageToPdfJob(const SubmitConvertImageToPdfJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertImageToPdfJobWithOptions(request, runtime);
}

/**
 * @summary 图片转word
 *
 * @param tmpReq SubmitConvertImageToWordJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertImageToWordJobResponse
 */
SubmitConvertImageToWordJobResponse Client::submitConvertImageToWordJobWithOptions(const SubmitConvertImageToWordJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitConvertImageToWordJobShrinkRequest request = SubmitConvertImageToWordJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImageNames()) {
    request.setImageNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageNames(), "ImageNames", "simple"));
  }

  if (!!tmpReq.hasImageUrls()) {
    request.setImageUrlsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.imageUrls(), "ImageUrls", "simple"));
  }

  json query = {};
  if (!!request.hasImageNameExtension()) {
    query["ImageNameExtension"] = request.imageNameExtension();
  }

  if (!!request.hasImageNamesShrink()) {
    query["ImageNames"] = request.imageNamesShrink();
  }

  if (!!request.hasImageUrlsShrink()) {
    query["ImageUrls"] = request.imageUrlsShrink();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertImageToWordJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertImageToWordJobResponse>();
}

/**
 * @summary 图片转word
 *
 * @param request SubmitConvertImageToWordJobRequest
 * @return SubmitConvertImageToWordJobResponse
 */
SubmitConvertImageToWordJobResponse Client::submitConvertImageToWordJob(const SubmitConvertImageToWordJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertImageToWordJobWithOptions(request, runtime);
}

/**
 * @summary pdf转excel
 *
 * @param request SubmitConvertPdfToExcelJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertPdfToExcelJobResponse
 */
SubmitConvertPdfToExcelJobResponse Client::submitConvertPdfToExcelJobWithOptions(const SubmitConvertPdfToExcelJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasForceExportInnerImage()) {
    query["ForceExportInnerImage"] = request.forceExportInnerImage();
  }

  if (!!request.hasForceMergeExcel()) {
    query["ForceMergeExcel"] = request.forceMergeExcel();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertPdfToExcelJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertPdfToExcelJobResponse>();
}

/**
 * @summary pdf转excel
 *
 * @param request SubmitConvertPdfToExcelJobRequest
 * @return SubmitConvertPdfToExcelJobResponse
 */
SubmitConvertPdfToExcelJobResponse Client::submitConvertPdfToExcelJob(const SubmitConvertPdfToExcelJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertPdfToExcelJobWithOptions(request, runtime);
}

SubmitConvertPdfToExcelJobResponse Client::submitConvertPdfToExcelJobAdvance(const SubmitConvertPdfToExcelJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitConvertPdfToExcelJobRequest submitConvertPdfToExcelJobReq = SubmitConvertPdfToExcelJobRequest();
  Utils::Utils::convert(request, submitConvertPdfToExcelJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitConvertPdfToExcelJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJobResp = submitConvertPdfToExcelJobWithOptions(submitConvertPdfToExcelJobReq, runtime);
  return submitConvertPdfToExcelJobResp;
}

/**
 * @summary pdf转图片
 *
 * @param request SubmitConvertPdfToImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertPdfToImageJobResponse
 */
SubmitConvertPdfToImageJobResponse Client::submitConvertPdfToImageJobWithOptions(const SubmitConvertPdfToImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertPdfToImageJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertPdfToImageJobResponse>();
}

/**
 * @summary pdf转图片
 *
 * @param request SubmitConvertPdfToImageJobRequest
 * @return SubmitConvertPdfToImageJobResponse
 */
SubmitConvertPdfToImageJobResponse Client::submitConvertPdfToImageJob(const SubmitConvertPdfToImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertPdfToImageJobWithOptions(request, runtime);
}

SubmitConvertPdfToImageJobResponse Client::submitConvertPdfToImageJobAdvance(const SubmitConvertPdfToImageJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitConvertPdfToImageJobRequest submitConvertPdfToImageJobReq = SubmitConvertPdfToImageJobRequest();
  Utils::Utils::convert(request, submitConvertPdfToImageJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitConvertPdfToImageJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJobResp = submitConvertPdfToImageJobWithOptions(submitConvertPdfToImageJobReq, runtime);
  return submitConvertPdfToImageJobResp;
}

/**
 * @summary pdf转markdown
 *
 * @param request SubmitConvertPdfToMarkdownJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertPdfToMarkdownJobResponse
 */
SubmitConvertPdfToMarkdownJobResponse Client::submitConvertPdfToMarkdownJobWithOptions(const SubmitConvertPdfToMarkdownJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertPdfToMarkdownJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertPdfToMarkdownJobResponse>();
}

/**
 * @summary pdf转markdown
 *
 * @param request SubmitConvertPdfToMarkdownJobRequest
 * @return SubmitConvertPdfToMarkdownJobResponse
 */
SubmitConvertPdfToMarkdownJobResponse Client::submitConvertPdfToMarkdownJob(const SubmitConvertPdfToMarkdownJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertPdfToMarkdownJobWithOptions(request, runtime);
}

SubmitConvertPdfToMarkdownJobResponse Client::submitConvertPdfToMarkdownJobAdvance(const SubmitConvertPdfToMarkdownJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitConvertPdfToMarkdownJobRequest submitConvertPdfToMarkdownJobReq = SubmitConvertPdfToMarkdownJobRequest();
  Utils::Utils::convert(request, submitConvertPdfToMarkdownJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitConvertPdfToMarkdownJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJobResp = submitConvertPdfToMarkdownJobWithOptions(submitConvertPdfToMarkdownJobReq, runtime);
  return submitConvertPdfToMarkdownJobResp;
}

/**
 * @summary pdf转word
 *
 * @param request SubmitConvertPdfToWordJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitConvertPdfToWordJobResponse
 */
SubmitConvertPdfToWordJobResponse Client::submitConvertPdfToWordJobWithOptions(const SubmitConvertPdfToWordJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasForceExportInnerImage()) {
    query["ForceExportInnerImage"] = request.forceExportInnerImage();
  }

  if (!!request.hasFormulaEnhancement()) {
    query["FormulaEnhancement"] = request.formulaEnhancement();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitConvertPdfToWordJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitConvertPdfToWordJobResponse>();
}

/**
 * @summary pdf转word
 *
 * @param request SubmitConvertPdfToWordJobRequest
 * @return SubmitConvertPdfToWordJobResponse
 */
SubmitConvertPdfToWordJobResponse Client::submitConvertPdfToWordJob(const SubmitConvertPdfToWordJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitConvertPdfToWordJobWithOptions(request, runtime);
}

SubmitConvertPdfToWordJobResponse Client::submitConvertPdfToWordJobAdvance(const SubmitConvertPdfToWordJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitConvertPdfToWordJobRequest submitConvertPdfToWordJobReq = SubmitConvertPdfToWordJobRequest();
  Utils::Utils::convert(request, submitConvertPdfToWordJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitConvertPdfToWordJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJobResp = submitConvertPdfToWordJobWithOptions(submitConvertPdfToWordJobReq, runtime);
  return submitConvertPdfToWordJobResp;
}

/**
 * @summary 电子解析
 *
 * @param request SubmitDigitalDocStructureJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDigitalDocStructureJobResponse
 */
SubmitDigitalDocStructureJobResponse Client::submitDigitalDocStructureJobWithOptions(const SubmitDigitalDocStructureJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileNameExtension()) {
    query["FileNameExtension"] = request.fileNameExtension();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasImageStrategy()) {
    query["ImageStrategy"] = request.imageStrategy();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasRevealMarkdown()) {
    query["RevealMarkdown"] = request.revealMarkdown();
  }

  if (!!request.hasUseUrlResponseBody()) {
    query["UseUrlResponseBody"] = request.useUrlResponseBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDigitalDocStructureJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDigitalDocStructureJobResponse>();
}

/**
 * @summary 电子解析
 *
 * @param request SubmitDigitalDocStructureJobRequest
 * @return SubmitDigitalDocStructureJobResponse
 */
SubmitDigitalDocStructureJobResponse Client::submitDigitalDocStructureJob(const SubmitDigitalDocStructureJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDigitalDocStructureJobWithOptions(request, runtime);
}

SubmitDigitalDocStructureJobResponse Client::submitDigitalDocStructureJobAdvance(const SubmitDigitalDocStructureJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitDigitalDocStructureJobRequest submitDigitalDocStructureJobReq = SubmitDigitalDocStructureJobRequest();
  Utils::Utils::convert(request, submitDigitalDocStructureJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitDigitalDocStructureJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJobResp = submitDigitalDocStructureJobWithOptions(submitDigitalDocStructureJobReq, runtime);
  return submitDigitalDocStructureJobResp;
}

/**
 * @summary 文档智能解析流式输出
 *
 * @param tmpReq SubmitDocParserJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocParserJobResponse
 */
SubmitDocParserJobResponse Client::submitDocParserJobWithOptions(const SubmitDocParserJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDocParserJobShrinkRequest request = SubmitDocParserJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomOssConfig()) {
    request.setCustomOssConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customOssConfig(), "CustomOssConfig", "json"));
  }

  if (!!tmpReq.hasLLMParam()) {
    request.setLLMParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.LLMParam(), "LLMParam", "json"));
  }

  if (!!tmpReq.hasMultimediaParameters()) {
    request.setMultimediaParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.multimediaParameters(), "MultimediaParameters", "json"));
  }

  json query = {};
  if (!!request.hasCustomOssConfigShrink()) {
    query["CustomOssConfig"] = request.customOssConfigShrink();
  }

  if (!!request.hasEnhancementMode()) {
    query["EnhancementMode"] = request.enhancementMode();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileNameExtension()) {
    query["FileNameExtension"] = request.fileNameExtension();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasFormulaEnhancement()) {
    query["FormulaEnhancement"] = request.formulaEnhancement();
  }

  if (!!request.hasLLMParamShrink()) {
    query["LLMParam"] = request.LLMParamShrink();
  }

  if (!!request.hasLlmEnhancement()) {
    query["LlmEnhancement"] = request.llmEnhancement();
  }

  if (!!request.hasMultimediaParametersShrink()) {
    query["MultimediaParameters"] = request.multimediaParametersShrink();
  }

  if (!!request.hasNeedHeaderFooter()) {
    query["NeedHeaderFooter"] = request.needHeaderFooter();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasOutputHtmlTable()) {
    query["OutputHtmlTable"] = request.outputHtmlTable();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocParserJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocParserJobResponse>();
}

/**
 * @summary 文档智能解析流式输出
 *
 * @param request SubmitDocParserJobRequest
 * @return SubmitDocParserJobResponse
 */
SubmitDocParserJobResponse Client::submitDocParserJob(const SubmitDocParserJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDocParserJobWithOptions(request, runtime);
}

SubmitDocParserJobResponse Client::submitDocParserJobAdvance(const SubmitDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitDocParserJobRequest submitDocParserJobReq = SubmitDocParserJobRequest();
  Utils::Utils::convert(request, submitDocParserJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitDocParserJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocParserJobResponse submitDocParserJobResp = submitDocParserJobWithOptions(submitDocParserJobReq, runtime);
  return submitDocParserJobResp;
}

/**
 * @summary 文档智能解析
 *
 * @param request SubmitDocStructureJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocStructureJobResponse
 */
SubmitDocStructureJobResponse Client::submitDocStructureJobWithOptions(const SubmitDocStructureJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowPptFormat()) {
    query["AllowPptFormat"] = request.allowPptFormat();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileNameExtension()) {
    query["FileNameExtension"] = request.fileNameExtension();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasFormulaEnhancement()) {
    query["FormulaEnhancement"] = request.formulaEnhancement();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasStructureType()) {
    query["StructureType"] = request.structureType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocStructureJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocStructureJobResponse>();
}

/**
 * @summary 文档智能解析
 *
 * @param request SubmitDocStructureJobRequest
 * @return SubmitDocStructureJobResponse
 */
SubmitDocStructureJobResponse Client::submitDocStructureJob(const SubmitDocStructureJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDocStructureJobWithOptions(request, runtime);
}

SubmitDocStructureJobResponse Client::submitDocStructureJobAdvance(const SubmitDocStructureJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitDocStructureJobRequest submitDocStructureJobReq = SubmitDocStructureJobRequest();
  Utils::Utils::convert(request, submitDocStructureJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitDocStructureJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocStructureJobResponse submitDocStructureJobResp = submitDocStructureJobWithOptions(submitDocStructureJobReq, runtime);
  return submitDocStructureJobResp;
}

/**
 * @summary 文档抽取
 *
 * @param request SubmitDocumentExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDocumentExtractJobResponse
 */
SubmitDocumentExtractJobResponse Client::submitDocumentExtractJobWithOptions(const SubmitDocumentExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileNameExtension()) {
    query["FileNameExtension"] = request.fileNameExtension();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDocumentExtractJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDocumentExtractJobResponse>();
}

/**
 * @summary 文档抽取
 *
 * @param request SubmitDocumentExtractJobRequest
 * @return SubmitDocumentExtractJobResponse
 */
SubmitDocumentExtractJobResponse Client::submitDocumentExtractJob(const SubmitDocumentExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDocumentExtractJobWithOptions(request, runtime);
}

SubmitDocumentExtractJobResponse Client::submitDocumentExtractJobAdvance(const SubmitDocumentExtractJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitDocumentExtractJobRequest submitDocumentExtractJobReq = SubmitDocumentExtractJobRequest();
  Utils::Utils::convert(request, submitDocumentExtractJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitDocumentExtractJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitDocumentExtractJobResponse submitDocumentExtractJobResp = submitDocumentExtractJobWithOptions(submitDocumentExtractJobReq, runtime);
  return submitDocumentExtractJobResp;
}

/**
 * @summary 表格智能解析
 *
 * @param request SubmitTableUnderstandingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTableUnderstandingJobResponse
 */
SubmitTableUnderstandingJobResponse Client::submitTableUnderstandingJobWithOptions(const SubmitTableUnderstandingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileNameExtension()) {
    query["FileNameExtension"] = request.fileNameExtension();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTableUnderstandingJob"},
    {"version" , "2022-07-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTableUnderstandingJobResponse>();
}

/**
 * @summary 表格智能解析
 *
 * @param request SubmitTableUnderstandingJobRequest
 * @return SubmitTableUnderstandingJobResponse
 */
SubmitTableUnderstandingJobResponse Client::submitTableUnderstandingJob(const SubmitTableUnderstandingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTableUnderstandingJobWithOptions(request, runtime);
}

SubmitTableUnderstandingJobResponse Client::submitTableUnderstandingJobAdvance(const SubmitTableUnderstandingJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "docmind-api"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SubmitTableUnderstandingJobRequest submitTableUnderstandingJobReq = SubmitTableUnderstandingJobRequest();
  Utils::Utils::convert(request, submitTableUnderstandingJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    submitTableUnderstandingJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  SubmitTableUnderstandingJobResponse submitTableUnderstandingJobResp = submitTableUnderstandingJobWithOptions(submitTableUnderstandingJobReq, runtime);
  return submitTableUnderstandingJobResp;
}
} // namespace AlibabaCloud
} // namespace DocmindApi20220711