#include <darabonba/Core.hpp>
#include <alibabacloud/WebsiteBuild20250429.hpp>
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
using namespace AlibabaCloud::WebsiteBuild20250429::Models;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{

AlibabaCloud::WebsiteBuild20250429::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("websitebuild", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 绑定应用域名
 *
 * @param request BindAppDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAppDomainResponse
 */
BindAppDomainResponse Client::bindAppDomainWithOptions(const BindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAppDomain"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAppDomainResponse>();
}

/**
 * @summary 绑定应用域名
 *
 * @param request BindAppDomainRequest
 * @return BindAppDomainResponse
 */
BindAppDomainResponse Client::bindAppDomain(const BindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAppDomainWithOptions(request, runtime);
}

/**
 * @summary 创建建站实例
 *
 * @param request CreateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstanceWithOptions(const CreateAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeployArea()) {
    query["DeployArea"] = request.deployArea();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.quantity();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceResponse>();
}

/**
 * @summary 创建建站实例
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 免登ticket
 *
 * @param request CreateAppInstanceTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceTicketResponse
 */
CreateAppInstanceTicketResponse Client::createAppInstanceTicketWithOptions(const CreateAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppInstanceTicket"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceTicketResponse>();
}

/**
 * @summary 免登ticket
 *
 * @param request CreateAppInstanceTicketRequest
 * @return CreateAppInstanceTicketResponse
 */
CreateAppInstanceTicketResponse Client::createAppInstanceTicket(const CreateAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary 提交创建Logo任务
 *
 * @param request CreateLogoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogoTaskResponse
 */
CreateLogoTaskResponse Client::createLogoTaskWithOptions(const CreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogoVersion()) {
    query["LogoVersion"] = request.logoVersion();
  }

  if (!!request.hasNegativePrompt()) {
    query["NegativePrompt"] = request.negativePrompt();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogoTask"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogoTaskResponse>();
}

/**
 * @summary 提交创建Logo任务
 *
 * @param request CreateLogoTaskRequest
 * @return CreateLogoTaskResponse
 */
CreateLogoTaskResponse Client::createLogoTask(const CreateLogoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogoTaskWithOptions(request, runtime);
}

/**
 * @summary 删除域名的SSL证书
 *
 * @param request DeleteAppDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppDomainCertificateResponse
 */
DeleteAppDomainCertificateResponse Client::deleteAppDomainCertificateWithOptions(const DeleteAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppDomainCertificate"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppDomainCertificateResponse>();
}

/**
 * @summary 删除域名的SSL证书
 *
 * @param request DeleteAppDomainCertificateRequest
 * @return DeleteAppDomainCertificateResponse
 */
DeleteAppDomainCertificateResponse Client::deleteAppDomainCertificate(const DeleteAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary 删除域名的跳转规则
 *
 * @param request DeleteAppDomainRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppDomainRedirectResponse
 */
DeleteAppDomainRedirectResponse Client::deleteAppDomainRedirectWithOptions(const DeleteAppDomainRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppDomainRedirect"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppDomainRedirectResponse>();
}

/**
 * @summary 删除域名的跳转规则
 *
 * @param request DeleteAppDomainRedirectRequest
 * @return DeleteAppDomainRedirectResponse
 */
DeleteAppDomainRedirectResponse Client::deleteAppDomainRedirect(const DeleteAppDomainRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainRedirectWithOptions(request, runtime);
}

/**
 * @summary 查询域名的DNS解析记录
 *
 * @param request DescribeAppDomainDnsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppDomainDnsRecordResponse
 */
DescribeAppDomainDnsRecordResponse Client::describeAppDomainDnsRecordWithOptions(const DescribeAppDomainDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasPurpose()) {
    query["Purpose"] = request.purpose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppDomainDnsRecord"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppDomainDnsRecordResponse>();
}

/**
 * @summary 查询域名的DNS解析记录
 *
 * @param request DescribeAppDomainDnsRecordRequest
 * @return DescribeAppDomainDnsRecordResponse
 */
DescribeAppDomainDnsRecordResponse Client::describeAppDomainDnsRecord(const DescribeAppDomainDnsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppDomainDnsRecordWithOptions(request, runtime);
}

/**
 * @summary DispatchConsoleAPIForPartner
 *
 * @param request DispatchConsoleAPIForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DispatchConsoleAPIForPartnerResponse
 */
DispatchConsoleAPIForPartnerResponse Client::dispatchConsoleAPIForPartnerWithOptions(const DispatchConsoleAPIForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLiveToken()) {
    query["LiveToken"] = request.liveToken();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.operation();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasSiteHost()) {
    query["SiteHost"] = request.siteHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DispatchConsoleAPIForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DispatchConsoleAPIForPartnerResponse>();
}

/**
 * @summary DispatchConsoleAPIForPartner
 *
 * @param request DispatchConsoleAPIForPartnerRequest
 * @return DispatchConsoleAPIForPartnerResponse
 */
DispatchConsoleAPIForPartnerResponse Client::dispatchConsoleAPIForPartner(const DispatchConsoleAPIForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dispatchConsoleAPIForPartnerWithOptions(request, runtime);
}

/**
 * @summary 查询应用实例详情
 *
 * @param request GetAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceResponse
 */
GetAppInstanceResponse Client::getAppInstanceWithOptions(const GetAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceResponse>();
}

/**
 * @summary 查询应用实例详情
 *
 * @param request GetAppInstanceRequest
 * @return GetAppInstanceResponse
 */
GetAppInstanceResponse Client::getAppInstance(const GetAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询Logo创建任务
 *
 * @param request GetCreateLogoTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreateLogoTaskResponse
 */
GetCreateLogoTaskResponse Client::getCreateLogoTaskWithOptions(const GetCreateLogoTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCreateLogoTask"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreateLogoTaskResponse>();
}

/**
 * @summary 查询Logo创建任务
 *
 * @param request GetCreateLogoTaskRequest
 * @return GetCreateLogoTaskResponse
 */
GetCreateLogoTaskResponse Client::getCreateLogoTask(const GetCreateLogoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateLogoTaskWithOptions(request, runtime);
}

/**
 * @summary 提供给服务商的域名查询接口
 *
 * @param request GetDomainInfoForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainInfoForPartnerResponse
 */
GetDomainInfoForPartnerResponse Client::getDomainInfoForPartnerWithOptions(const GetDomainInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDomainInfoForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDomainInfoForPartnerResponse>();
}

/**
 * @summary 提供给服务商的域名查询接口
 *
 * @param request GetDomainInfoForPartnerRequest
 * @return GetDomainInfoForPartnerResponse
 */
GetDomainInfoForPartnerResponse Client::getDomainInfoForPartner(const GetDomainInfoForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainInfoForPartnerWithOptions(request, runtime);
}

/**
 * @summary 查询域名备案信息
 *
 * @param request GetIcpFilingInfoForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIcpFilingInfoForPartnerResponse
 */
GetIcpFilingInfoForPartnerResponse Client::getIcpFilingInfoForPartnerWithOptions(const GetIcpFilingInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIcpFilingInfoForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIcpFilingInfoForPartnerResponse>();
}

/**
 * @summary 查询域名备案信息
 *
 * @param request GetIcpFilingInfoForPartnerRequest
 * @return GetIcpFilingInfoForPartnerResponse
 */
GetIcpFilingInfoForPartnerResponse Client::getIcpFilingInfoForPartner(const GetIcpFilingInfoForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIcpFilingInfoForPartnerWithOptions(request, runtime);
}

/**
 * @summary 通过授权码得到accessToken
 *
 * @param request GetUserAccessTokenForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserAccessTokenForPartnerResponse
 */
GetUserAccessTokenForPartnerResponse Client::getUserAccessTokenForPartnerWithOptions(const GetUserAccessTokenForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteHost()) {
    query["SiteHost"] = request.siteHost();
  }

  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserAccessTokenForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserAccessTokenForPartnerResponse>();
}

/**
 * @summary 通过授权码得到accessToken
 *
 * @param request GetUserAccessTokenForPartnerRequest
 * @return GetUserAccessTokenForPartnerResponse
 */
GetUserAccessTokenForPartnerResponse Client::getUserAccessTokenForPartner(const GetUserAccessTokenForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAccessTokenForPartnerWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴获取用户SLR角色授权临时凭证
 *
 * @param request GetUserTmpIdentityForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserTmpIdentityForPartnerResponse
 */
GetUserTmpIdentityForPartnerResponse Client::getUserTmpIdentityForPartnerWithOptions(const GetUserTmpIdentityForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthPurpose()) {
    query["AuthPurpose"] = request.authPurpose();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.serviceLinkedRole();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserTmpIdentityForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserTmpIdentityForPartnerResponse>();
}

/**
 * @summary 合作伙伴获取用户SLR角色授权临时凭证
 *
 * @param request GetUserTmpIdentityForPartnerRequest
 * @return GetUserTmpIdentityForPartnerResponse
 */
GetUserTmpIdentityForPartnerResponse Client::getUserTmpIdentityForPartner(const GetUserTmpIdentityForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserTmpIdentityForPartnerWithOptions(request, runtime);
}

/**
 * @summary 查询域名的跳转规则列表
 *
 * @param request ListAppDomainRedirectRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppDomainRedirectRecordsResponse
 */
ListAppDomainRedirectRecordsResponse Client::listAppDomainRedirectRecordsWithOptions(const ListAppDomainRedirectRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppDomainRedirectRecords"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppDomainRedirectRecordsResponse>();
}

/**
 * @summary 查询域名的跳转规则列表
 *
 * @param request ListAppDomainRedirectRecordsRequest
 * @return ListAppDomainRedirectRecordsResponse
 */
ListAppDomainRedirectRecordsResponse Client::listAppDomainRedirectRecords(const ListAppDomainRedirectRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppDomainRedirectRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询应用实例下的所有域名列表
 *
 * @param request ListAppInstanceDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstanceDomainsResponse
 */
ListAppInstanceDomainsResponse Client::listAppInstanceDomainsWithOptions(const ListAppInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.orderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
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
    {"action" , "ListAppInstanceDomains"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstanceDomainsResponse>();
}

/**
 * @summary 查询应用实例下的所有域名列表
 *
 * @param request ListAppInstanceDomainsRequest
 * @return ListAppInstanceDomainsResponse
 */
ListAppInstanceDomainsResponse Client::listAppInstanceDomains(const ListAppInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary 建站实例列表查询
 *
 * @param tmpReq ListAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstancesWithOptions(const ListAppInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppInstancesShrinkRequest request = ListAppInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.statusList(), "StatusList", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasEndTimeBegin()) {
    query["EndTimeBegin"] = request.endTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.endTimeEnd();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.orderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.statusListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppInstances"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstancesResponse>();
}

/**
 * @summary 建站实例列表查询
 *
 * @param request ListAppInstancesRequest
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstances(const ListAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstancesWithOptions(request, runtime);
}

/**
 * @summary 建站实例变配
 *
 * @param request ModifyAppInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppInstanceSpecResponse
 */
ModifyAppInstanceSpecResponse Client::modifyAppInstanceSpecWithOptions(const ModifyAppInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeployArea()) {
    query["DeployArea"] = request.deployArea();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppInstanceSpec"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppInstanceSpecResponse>();
}

/**
 * @summary 建站实例变配
 *
 * @param request ModifyAppInstanceSpecRequest
 * @return ModifyAppInstanceSpecResponse
 */
ModifyAppInstanceSpecResponse Client::modifyAppInstanceSpec(const ModifyAppInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴操作应用
 *
 * @param request OperateAppInstanceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAppInstanceForPartnerResponse
 */
OperateAppInstanceForPartnerResponse Client::operateAppInstanceForPartnerWithOptions(const OperateAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasOperateEvent()) {
    query["OperateEvent"] = request.operateEvent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateAppInstanceForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAppInstanceForPartnerResponse>();
}

/**
 * @summary 合作伙伴操作应用
 *
 * @param request OperateAppInstanceForPartnerRequest
 * @return OperateAppInstanceForPartnerResponse
 */
OperateAppInstanceForPartnerResponse Client::operateAppInstanceForPartner(const OperateAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴操作应用服务
 *
 * @param request OperateAppServiceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAppServiceForPartnerResponse
 */
OperateAppServiceForPartnerResponse Client::operateAppServiceForPartnerWithOptions(const OperateAppServiceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasOperateEvent()) {
    query["OperateEvent"] = request.operateEvent();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.serviceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateAppServiceForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAppServiceForPartnerResponse>();
}

/**
 * @summary 合作伙伴操作应用服务
 *
 * @param request OperateAppServiceForPartnerRequest
 * @return OperateAppServiceForPartnerResponse
 */
OperateAppServiceForPartnerResponse Client::operateAppServiceForPartner(const OperateAppServiceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppServiceForPartnerWithOptions(request, runtime);
}

/**
 * @summary 刷新ticket
 *
 * @param request RefreshAppInstanceTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshAppInstanceTicketResponse
 */
RefreshAppInstanceTicketResponse Client::refreshAppInstanceTicketWithOptions(const RefreshAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshAppInstanceTicket"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshAppInstanceTicketResponse>();
}

/**
 * @summary 刷新ticket
 *
 * @param request RefreshAppInstanceTicketRequest
 * @return RefreshAppInstanceTicketResponse
 */
RefreshAppInstanceTicketResponse Client::refreshAppInstanceTicket(const RefreshAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary 建站实例续费
 *
 * @param request RenewAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppInstanceResponse
 */
RenewAppInstanceResponse Client::renewAppInstanceWithOptions(const RenewAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAppInstanceResponse>();
}

/**
 * @summary 建站实例续费
 *
 * @param request RenewAppInstanceRequest
 * @return RenewAppInstanceResponse
 */
RenewAppInstanceResponse Client::renewAppInstance(const RenewAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 图片检索
 *
 * @param tmpReq SearchImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchImageResponse
 */
SearchImageResponse Client::searchImageWithOptions(const SearchImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchImageShrinkRequest request = SearchImageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "simple"));
  }

  json query = {};
  if (!!request.hasColorHex()) {
    query["ColorHex"] = request.colorHex();
  }

  if (!!request.hasHasPerson()) {
    query["HasPerson"] = request.hasPerson();
  }

  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.imageCategory();
  }

  if (!!request.hasImageRatio()) {
    query["ImageRatio"] = request.imageRatio();
  }

  if (!!request.hasMaxHeight()) {
    query["MaxHeight"] = request.maxHeight();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMaxWidth()) {
    query["MaxWidth"] = request.maxWidth();
  }

  if (!!request.hasMinHeight()) {
    query["MinHeight"] = request.minHeight();
  }

  if (!!request.hasMinWidth()) {
    query["MinWidth"] = request.minWidth();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.ossKey();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchImage"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchImageResponse>();
}

/**
 * @summary 图片检索
 *
 * @param request SearchImageRequest
 * @return SearchImageResponse
 */
SearchImageResponse Client::searchImage(const SearchImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageWithOptions(request, runtime);
}

/**
 * @summary 设置域名的SSL证书
 *
 * @param request SetAppDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppDomainCertificateResponse
 */
SetAppDomainCertificateResponse Client::setAppDomainCertificateWithOptions(const SetAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCertificateName()) {
    query["CertificateName"] = request.certificateName();
  }

  if (!!request.hasCertificateType()) {
    query["CertificateType"] = request.certificateType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.privateKey();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.publicKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAppDomainCertificate"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAppDomainCertificateResponse>();
}

/**
 * @summary 设置域名的SSL证书
 *
 * @param request SetAppDomainCertificateRequest
 * @return SetAppDomainCertificateResponse
 */
SetAppDomainCertificateResponse Client::setAppDomainCertificate(const SetAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴同步应用实例
 *
 * @param tmpReq SyncAppInstanceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncAppInstanceForPartnerResponse
 */
SyncAppInstanceForPartnerResponse Client::syncAppInstanceForPartnerWithOptions(const SyncAppInstanceForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncAppInstanceForPartnerShrinkRequest request = SyncAppInstanceForPartnerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAppInstance()) {
    request.setAppInstanceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.appInstance(), "AppInstance", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceShrink()) {
    query["AppInstance"] = request.appInstanceShrink();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request._operator();
  }

  if (!!request.hasSourceBizId()) {
    query["SourceBizId"] = request.sourceBizId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncAppInstanceForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncAppInstanceForPartnerResponse>();
}

/**
 * @summary 合作伙伴同步应用实例
 *
 * @param request SyncAppInstanceForPartnerRequest
 * @return SyncAppInstanceForPartnerResponse
 */
SyncAppInstanceForPartnerResponse Client::syncAppInstanceForPartner(const SyncAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary 解绑应用域名
 *
 * @param request UnbindAppDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAppDomainResponse
 */
UnbindAppDomainResponse Client::unbindAppDomainWithOptions(const UnbindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindAppDomain"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindAppDomainResponse>();
}

/**
 * @summary 解绑应用域名
 *
 * @param request UnbindAppDomainRequest
 * @return UnbindAppDomainResponse
 */
UnbindAppDomainResponse Client::unbindAppDomain(const UnbindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAppDomainWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429