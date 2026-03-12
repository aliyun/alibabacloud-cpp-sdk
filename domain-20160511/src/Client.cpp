#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20160511.hpp>
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
using namespace AlibabaCloud::Domain20160511::Models;
namespace AlibabaCloud
{
namespace Domain20160511
{

AlibabaCloud::Domain20160511::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("domain", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 域名检查
 *
 * @param request CheckDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomainWithOptions(const CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDomain"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDomainResponse>();
}

/**
 * @summary 域名检查
 *
 * @param request CheckDomainRequest
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomain(const CheckDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainWithOptions(request, runtime);
}

/**
 * @summary 删除联系人模板
 *
 * @param request DeleteContactTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactTemplateResponse
 */
DeleteContactTemplateResponse Client::deleteContactTemplateWithOptions(const DeleteContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactTemplate"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactTemplateResponse>();
}

/**
 * @summary 删除联系人模板
 *
 * @param request DeleteContactTemplateRequest
 * @return DeleteContactTemplateResponse
 */
DeleteContactTemplateResponse Client::deleteContactTemplate(const DeleteContactTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询任务详情列表
 *
 * @param request QueryBatchTaskDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBatchTaskDetailListResponse
 */
QueryBatchTaskDetailListResponse Client::queryBatchTaskDetailListWithOptions(const QueryBatchTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.getTaskNo();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBatchTaskDetailList"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBatchTaskDetailListResponse>();
}

/**
 * @summary 查询任务详情列表
 *
 * @param request QueryBatchTaskDetailListRequest
 * @return QueryBatchTaskDetailListResponse
 */
QueryBatchTaskDetailListResponse Client::queryBatchTaskDetailList(const QueryBatchTaskDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBatchTaskDetailListWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request QueryBatchTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBatchTaskListResponse
 */
QueryBatchTaskListResponse Client::queryBatchTaskListWithOptions(const QueryBatchTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginCreateTime()) {
    query["BeginCreateTime"] = request.getBeginCreateTime();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.getEndCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBatchTaskList"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBatchTaskListResponse>();
}

/**
 * @summary 查询任务列表
 *
 * @param request QueryBatchTaskListRequest
 * @return QueryBatchTaskListResponse
 */
QueryBatchTaskListResponse Client::queryBatchTaskList(const QueryBatchTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBatchTaskListWithOptions(request, runtime);
}

/**
 * @summary 查询联系人
 *
 * @param request QueryContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryContactResponse
 */
QueryContactResponse Client::queryContactWithOptions(const QueryContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryContact"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryContactResponse>();
}

/**
 * @summary 查询联系人
 *
 * @param request QueryContactRequest
 * @return QueryContactResponse
 */
QueryContactResponse Client::queryContact(const QueryContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContactWithOptions(request, runtime);
}

/**
 * @summary 查询联系人模板
 *
 * @param request QueryContactTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryContactTemplateResponse
 */
QueryContactTemplateResponse Client::queryContactTemplateWithOptions(const QueryContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasCCompany()) {
    query["CCompany"] = request.getCCompany();
  }

  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDefaultTemplate()) {
    query["DefaultTemplate"] = request.getDefaultTemplate();
  }

  if (!!request.hasECompany()) {
    query["ECompany"] = request.getECompany();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegType()) {
    query["RegType"] = request.getRegType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryContactTemplate"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryContactTemplateResponse>();
}

/**
 * @summary 查询联系人模板
 *
 * @param request QueryContactTemplateRequest
 * @return QueryContactTemplateResponse
 */
QueryContactTemplateResponse Client::queryContactTemplate(const QueryContactTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContactTemplateWithOptions(request, runtime);
}

/**
 * @summary 根据saleId查询域名信息
 *
 * @param request QueryDomainBySaleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainBySaleIdResponse
 */
QueryDomainBySaleIdResponse Client::queryDomainBySaleIdWithOptions(const QueryDomainBySaleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainBySaleId"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainBySaleIdResponse>();
}

/**
 * @summary 根据saleId查询域名信息
 *
 * @param request QueryDomainBySaleIdRequest
 * @return QueryDomainBySaleIdResponse
 */
QueryDomainBySaleIdResponse Client::queryDomainBySaleId(const QueryDomainBySaleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainBySaleIdWithOptions(request, runtime);
}

/**
 * @summary 查询域名列表
 *
 * @param request QueryDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainListWithOptions(const QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeadEndDate()) {
    query["DeadEndDate"] = request.getDeadEndDate();
  }

  if (!!request.hasDeadStartDate()) {
    query["DeadStartDate"] = request.getDeadStartDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.getOrderByType();
  }

  if (!!request.hasOrderKeyType()) {
    query["OrderKeyType"] = request.getOrderKeyType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.getProductDomainType();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasRegEndDate()) {
    query["RegEndDate"] = request.getRegEndDate();
  }

  if (!!request.hasRegStartDate()) {
    query["RegStartDate"] = request.getRegStartDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainList"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainListResponse>();
}

/**
 * @summary 查询域名列表
 *
 * @param request QueryDomainListRequest
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainList(const QueryDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainListWithOptions(request, runtime);
}

/**
 * @summary 查询失败原因列表
 *
 * @param request QueryFailReasonListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFailReasonListResponse
 */
QueryFailReasonListResponse Client::queryFailReasonListWithOptions(const QueryFailReasonListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFailReasonList"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFailReasonListResponse>();
}

/**
 * @summary 查询失败原因列表
 *
 * @param request QueryFailReasonListRequest
 * @return QueryFailReasonListResponse
 */
QueryFailReasonListResponse Client::queryFailReasonList(const QueryFailReasonListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonListWithOptions(request, runtime);
}

/**
 * @summary 保存联系人模板
 *
 * @param request SaveContactTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactTemplateResponse
 */
SaveContactTemplateResponse Client::saveContactTemplateWithOptions(const SaveContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCCity()) {
    query["CCity"] = request.getCCity();
  }

  if (!!request.hasCCompany()) {
    query["CCompany"] = request.getCCompany();
  }

  if (!!request.hasCCountry()) {
    query["CCountry"] = request.getCCountry();
  }

  if (!!request.hasCName()) {
    query["CName"] = request.getCName();
  }

  if (!!request.hasCProvince()) {
    query["CProvince"] = request.getCProvince();
  }

  if (!!request.hasCVenu()) {
    query["CVenu"] = request.getCVenu();
  }

  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDefaultTemplate()) {
    query["DefaultTemplate"] = request.getDefaultTemplate();
  }

  if (!!request.hasECity()) {
    query["ECity"] = request.getECity();
  }

  if (!!request.hasECompany()) {
    query["ECompany"] = request.getECompany();
  }

  if (!!request.hasEName()) {
    query["EName"] = request.getEName();
  }

  if (!!request.hasEProvince()) {
    query["EProvince"] = request.getEProvince();
  }

  if (!!request.hasEVenu()) {
    query["EVenu"] = request.getEVenu();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasRegType()) {
    query["RegType"] = request.getRegType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelMain()) {
    query["TelMain"] = request.getTelMain();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveContactTemplate"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContactTemplateResponse>();
}

/**
 * @summary 保存联系人模板
 *
 * @param request SaveContactTemplateRequest
 * @return SaveContactTemplateResponse
 */
SaveContactTemplateResponse Client::saveContactTemplate(const SaveContactTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactTemplateWithOptions(request, runtime);
}

/**
 * @summary 保存联系人模板实名资料
 *
 * @param request SaveContactTemplateCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactTemplateCredentialResponse
 */
SaveContactTemplateCredentialResponse Client::saveContactTemplateCredentialWithOptions(const SaveContactTemplateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasCredential()) {
    query["Credential"] = request.getCredential();
  }

  if (!!request.hasCredentialNo()) {
    query["CredentialNo"] = request.getCredentialNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveContactTemplateCredential"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContactTemplateCredentialResponse>();
}

/**
 * @summary 保存联系人模板实名资料
 *
 * @param request SaveContactTemplateCredentialRequest
 * @return SaveContactTemplateCredentialResponse
 */
SaveContactTemplateCredentialResponse Client::saveContactTemplateCredential(const SaveContactTemplateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactTemplateCredentialWithOptions(request, runtime);
}

/**
 * @summary 修改域名dns任务,对外开放接口，用于domain中
 *
 * @param request SaveTaskForModifyingDomainDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForModifyingDomainDnsResponse
 */
SaveTaskForModifyingDomainDnsResponse Client::saveTaskForModifyingDomainDnsWithOptions(const SaveTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunDns()) {
    query["AliyunDns"] = request.getAliyunDns();
  }

  if (!!request.hasDnsList()) {
    query["DnsList"] = request.getDnsList();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForModifyingDomainDns"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForModifyingDomainDnsResponse>();
}

/**
 * @summary 修改域名dns任务,对外开放接口，用于domain中
 *
 * @param request SaveTaskForModifyingDomainDnsRequest
 * @return SaveTaskForModifyingDomainDnsResponse
 */
SaveTaskForModifyingDomainDnsResponse Client::saveTaskForModifyingDomainDns(const SaveTaskForModifyingDomainDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForModifyingDomainDnsWithOptions(request, runtime);
}

/**
 * @summary 保存域名实名资料任务
 *
 * @param request SaveTaskForSubmittingDomainNameCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainNameCredentialResponse
 */
SaveTaskForSubmittingDomainNameCredentialResponse Client::saveTaskForSubmittingDomainNameCredentialWithOptions(const SaveTaskForSubmittingDomainNameCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredential()) {
    query["Credential"] = request.getCredential();
  }

  if (!!request.hasCredentialNo()) {
    query["CredentialNo"] = request.getCredentialNo();
  }

  if (!!request.hasCredentialType()) {
    query["CredentialType"] = request.getCredentialType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForSubmittingDomainNameCredential"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForSubmittingDomainNameCredentialResponse>();
}

/**
 * @summary 保存域名实名资料任务
 *
 * @param request SaveTaskForSubmittingDomainNameCredentialRequest
 * @return SaveTaskForSubmittingDomainNameCredentialResponse
 */
SaveTaskForSubmittingDomainNameCredentialResponse Client::saveTaskForSubmittingDomainNameCredential(const SaveTaskForSubmittingDomainNameCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainNameCredentialWithOptions(request, runtime);
}

/**
 * @summary 根据模板保存域名的实名认证信息
 *
 * @param request SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse
 */
SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse Client::saveTaskForSubmittingDomainNameCredentialByTemplateIdWithOptions(const SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForSubmittingDomainNameCredentialByTemplateId"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse>();
}

/**
 * @summary 根据模板保存域名的实名认证信息
 *
 * @param request SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest
 * @return SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse
 */
SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse Client::saveTaskForSubmittingDomainNameCredentialByTemplateId(const SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainNameCredentialByTemplateIdWithOptions(request, runtime);
}

/**
 * @summary 保存修改联系人的任务
 *
 * @param request SaveTaskForUpdatingContactByTempateIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingContactByTempateIdResponse
 */
SaveTaskForUpdatingContactByTempateIdResponse Client::saveTaskForUpdatingContactByTempateIdWithOptions(const SaveTaskForUpdatingContactByTempateIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTransferLock()) {
    query["AddTransferLock"] = request.getAddTransferLock();
  }

  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForUpdatingContactByTempateId"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForUpdatingContactByTempateIdResponse>();
}

/**
 * @summary 保存修改联系人的任务
 *
 * @param request SaveTaskForUpdatingContactByTempateIdRequest
 * @return SaveTaskForUpdatingContactByTempateIdResponse
 */
SaveTaskForUpdatingContactByTempateIdResponse Client::saveTaskForUpdatingContactByTempateId(const SaveTaskForUpdatingContactByTempateIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingContactByTempateIdWithOptions(request, runtime);
}

/**
 * @summary 保存修改联系人的任务
 *
 * @param request SaveTaskForUpdatingContactByTemplateIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingContactByTemplateIdResponse
 */
SaveTaskForUpdatingContactByTemplateIdResponse Client::saveTaskForUpdatingContactByTemplateIdWithOptions(const SaveTaskForUpdatingContactByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTransferLock()) {
    query["AddTransferLock"] = request.getAddTransferLock();
  }

  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSaleId()) {
    query["SaleId"] = request.getSaleId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForUpdatingContactByTemplateId"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForUpdatingContactByTemplateIdResponse>();
}

/**
 * @summary 保存修改联系人的任务
 *
 * @param request SaveTaskForUpdatingContactByTemplateIdRequest
 * @return SaveTaskForUpdatingContactByTemplateIdResponse
 */
SaveTaskForUpdatingContactByTemplateIdResponse Client::saveTaskForUpdatingContactByTemplateId(const SaveTaskForUpdatingContactByTemplateIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingContactByTemplateIdWithOptions(request, runtime);
}

/**
 * @summary 开启或者关闭whois保护
 *
 * @param request WhoisProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WhoisProtectionResponse
 */
WhoisProtectionResponse Client::whoisProtectionWithOptions(const WhoisProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataContent()) {
    query["DataContent"] = request.getDataContent();
  }

  if (!!request.hasDataSource()) {
    query["DataSource"] = request.getDataSource();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasWhoisProtect()) {
    query["WhoisProtect"] = request.getWhoisProtect();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WhoisProtection"},
    {"version" , "2016-05-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WhoisProtectionResponse>();
}

/**
 * @summary 开启或者关闭whois保护
 *
 * @param request WhoisProtectionRequest
 * @return WhoisProtectionResponse
 */
WhoisProtectionResponse Client::whoisProtection(const WhoisProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return whoisProtectionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Domain20160511