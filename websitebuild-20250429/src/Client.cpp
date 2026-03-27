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
 * @summary 分配Supabase实例
 *
 * @param request AllocateSupabaseForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateSupabaseForAdminResponse
 */
AllocateSupabaseForAdminResponse Client::allocateSupabaseForAdminWithOptions(const AllocateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateSupabaseForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateSupabaseForAdminResponse>();
}

/**
 * @summary 分配Supabase实例
 *
 * @param request AllocateSupabaseForAdminRequest
 * @return AllocateSupabaseForAdminResponse
 */
AllocateSupabaseForAdminResponse Client::allocateSupabaseForAdmin(const AllocateSupabaseForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateSupabaseForAdminWithOptions(request, runtime);
}

/**
 * @summary 批量校验资源计量
 *
 * @param request BatchCheckResourceMeasureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCheckResourceMeasureResponse
 */
BatchCheckResourceMeasureResponse Client::batchCheckResourceMeasureWithOptions(const BatchCheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBelongId()) {
    query["BelongId"] = request.getBelongId();
  }

  if (!!request.hasBelongIdType()) {
    query["BelongIdType"] = request.getBelongIdType();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasEspBizId()) {
    query["EspBizId"] = request.getEspBizId();
  }

  if (!!request.hasOrderComponentParams()) {
    query["OrderComponentParams"] = request.getOrderComponentParams();
  }

  if (!!request.hasResourceCheckItems()) {
    query["ResourceCheckItems"] = request.getResourceCheckItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCheckResourceMeasure"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCheckResourceMeasureResponse>();
}

/**
 * @summary 批量校验资源计量
 *
 * @param request BatchCheckResourceMeasureRequest
 * @return BatchCheckResourceMeasureResponse
 */
BatchCheckResourceMeasureResponse Client::batchCheckResourceMeasure(const BatchCheckResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCheckResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Bind Application Domain
 *
 * @param request BindAppDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAppDomainResponse
 */
BindAppDomainResponse Client::bindAppDomainWithOptions(const BindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
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
 * @summary Bind Application Domain
 *
 * @param request BindAppDomainRequest
 * @return BindAppDomainResponse
 */
BindAppDomainResponse Client::bindAppDomain(const BindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAppDomainWithOptions(request, runtime);
}

/**
 * @summary 校验资源计量
 *
 * @param request CheckResourceMeasureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckResourceMeasureResponse
 */
CheckResourceMeasureResponse Client::checkResourceMeasureWithOptions(const CheckResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBelongId()) {
    query["BelongId"] = request.getBelongId();
  }

  if (!!request.hasBelongIdType()) {
    query["BelongIdType"] = request.getBelongIdType();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasEspBizId()) {
    query["EspBizId"] = request.getEspBizId();
  }

  if (!!request.hasOrderComponentParams()) {
    query["OrderComponentParams"] = request.getOrderComponentParams();
  }

  if (!!request.hasResourceCode()) {
    query["ResourceCode"] = request.getResourceCode();
  }

  if (!!request.hasResourceValue()) {
    query["ResourceValue"] = request.getResourceValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckResourceMeasure"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckResourceMeasureResponse>();
}

/**
 * @summary 校验资源计量
 *
 * @param request CheckResourceMeasureRequest
 * @return CheckResourceMeasureResponse
 */
CheckResourceMeasureResponse Client::checkResourceMeasure(const CheckResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Create a website instance
 *
 * @param tmpReq CreateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstanceWithOptions(const CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppInstanceShrinkRequest request = CreateAppInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeployArea()) {
    query["DeployArea"] = request.getDeployArea();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Create a website instance
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary SSO ticket
 *
 * @param request CreateAppInstanceTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceTicketResponse
 */
CreateAppInstanceTicketResponse Client::createAppInstanceTicketWithOptions(const CreateAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
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
 * @summary SSO ticket
 *
 * @param request CreateAppInstanceTicketRequest
 * @return CreateAppInstanceTicketResponse
 */
CreateAppInstanceTicketResponse Client::createAppInstanceTicket(const CreateAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary Activate the Wanxiaozhi Inspiration Value service
 *
 * @param request CreateAppTokenServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppTokenServiceResponse
 */
CreateAppTokenServiceResponse Client::createAppTokenServiceWithOptions(const CreateAppTokenServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateAction()) {
    query["CreateAction"] = request.getCreateAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppTokenService"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppTokenServiceResponse>();
}

/**
 * @summary Activate the Wanxiaozhi Inspiration Value service
 *
 * @param request CreateAppTokenServiceRequest
 * @return CreateAppTokenServiceResponse
 */
CreateAppTokenServiceResponse Client::createAppTokenService(const CreateAppTokenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppTokenServiceWithOptions(request, runtime);
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
    query["LogoVersion"] = request.getLogoVersion();
  }

  if (!!request.hasNegativePrompt()) {
    query["NegativePrompt"] = request.getNegativePrompt();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
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
 * @summary 创建素材中心文件夹
 *
 * @param request CreateMaterialDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMaterialDirectoryResponse
 */
CreateMaterialDirectoryResponse Client::createMaterialDirectoryWithOptions(const CreateMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParentDirectoryId()) {
    query["ParentDirectoryId"] = request.getParentDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMaterialDirectory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMaterialDirectoryResponse>();
}

/**
 * @summary 创建素材中心文件夹
 *
 * @param request CreateMaterialDirectoryRequest
 * @return CreateMaterialDirectoryResponse
 */
CreateMaterialDirectoryResponse Client::createMaterialDirectory(const CreateMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary Delete the SSL certificate of a domain
 *
 * @param request DeleteAppDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppDomainCertificateResponse
 */
DeleteAppDomainCertificateResponse Client::deleteAppDomainCertificateWithOptions(const DeleteAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
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
 * @summary Delete the SSL certificate of a domain
 *
 * @param request DeleteAppDomainCertificateRequest
 * @return DeleteAppDomainCertificateResponse
 */
DeleteAppDomainCertificateResponse Client::deleteAppDomainCertificate(const DeleteAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Delete the domain redirection rules
 *
 * @param request DeleteAppDomainRedirectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppDomainRedirectResponse
 */
DeleteAppDomainRedirectResponse Client::deleteAppDomainRedirectWithOptions(const DeleteAppDomainRedirectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
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
 * @summary Delete the domain redirection rules
 *
 * @param request DeleteAppDomainRedirectRequest
 * @return DeleteAppDomainRedirectResponse
 */
DeleteAppDomainRedirectResponse Client::deleteAppDomainRedirect(const DeleteAppDomainRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainRedirectWithOptions(request, runtime);
}

/**
 * @summary 删除素材中心文件夹
 *
 * @param request DeleteMaterialDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMaterialDirectoryResponse
 */
DeleteMaterialDirectoryResponse Client::deleteMaterialDirectoryWithOptions(const DeleteMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMaterialDirectory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMaterialDirectoryResponse>();
}

/**
 * @summary 删除素材中心文件夹
 *
 * @param request DeleteMaterialDirectoryRequest
 * @return DeleteMaterialDirectoryResponse
 */
DeleteMaterialDirectoryResponse Client::deleteMaterialDirectory(const DeleteMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary 删除素材生产任务
 *
 * @param tmpReq DeleteMaterialTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMaterialTaskResponse
 */
DeleteMaterialTaskResponse Client::deleteMaterialTaskWithOptions(const DeleteMaterialTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteMaterialTaskShrinkRequest request = DeleteMaterialTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "json"));
  }

  json query = {};
  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.getTaskIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMaterialTask"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMaterialTaskResponse>();
}

/**
 * @summary 删除素材生产任务
 *
 * @param request DeleteMaterialTaskRequest
 * @return DeleteMaterialTaskResponse
 */
DeleteMaterialTaskResponse Client::deleteMaterialTask(const DeleteMaterialTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialTaskWithOptions(request, runtime);
}

/**
 * @summary Query the DNS resolution records of a domain
 *
 * @param request DescribeAppDomainDnsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppDomainDnsRecordResponse
 */
DescribeAppDomainDnsRecordResponse Client::describeAppDomainDnsRecordWithOptions(const DescribeAppDomainDnsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasPurpose()) {
    query["Purpose"] = request.getPurpose();
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
 * @summary Query the DNS resolution records of a domain
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
    query["LiveToken"] = request.getLiveToken();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasSiteHost()) {
    query["SiteHost"] = request.getSiteHost();
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
 * @summary 编辑插件配置
 *
 * @param request EditPluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditPluginConfigResponse
 */
EditPluginConfigResponse Client::editPluginConfigWithOptions(const EditPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasPluginConfig()) {
    query["PluginConfig"] = request.getPluginConfig();
  }

  if (!!request.hasPluginDesc()) {
    query["PluginDesc"] = request.getPluginDesc();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasPluginName()) {
    query["PluginName"] = request.getPluginName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditPluginConfig"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditPluginConfigResponse>();
}

/**
 * @summary 编辑插件配置
 *
 * @param request EditPluginConfigRequest
 * @return EditPluginConfigResponse
 */
EditPluginConfigResponse Client::editPluginConfig(const EditPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editPluginConfigWithOptions(request, runtime);
}

/**
 * @summary 导出素材文件
 *
 * @param tmpReq ExportMaterialFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportMaterialFileResponse
 */
ExportMaterialFileResponse Client::exportMaterialFileWithOptions(const ExportMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportMaterialFileShrinkRequest request = ExportMaterialFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportMaterialFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportMaterialFileResponse>();
}

/**
 * @summary 导出素材文件
 *
 * @param request ExportMaterialFileRequest
 * @return ExportMaterialFileResponse
 */
ExportMaterialFileResponse Client::exportMaterialFile(const ExportMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportMaterialFileWithOptions(request, runtime);
}

/**
 * @summary Query Application Instance Details
 *
 * @param request GetAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceResponse
 */
GetAppInstanceResponse Client::getAppInstanceWithOptions(const GetAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
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
 * @summary Query Application Instance Details
 *
 * @param request GetAppInstanceRequest
 * @return GetAppInstanceResponse
 */
GetAppInstanceResponse Client::getAppInstance(const GetAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Query application instance information
 *
 * @param request GetAppInstanceForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceForAdminResponse
 */
GetAppInstanceForAdminResponse Client::getAppInstanceForAdminWithOptions(const GetAppInstanceForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceForAdminResponse>();
}

/**
 * @summary Query application instance information
 *
 * @param request GetAppInstanceForAdminRequest
 * @return GetAppInstanceForAdminResponse
 */
GetAppInstanceForAdminResponse Client::getAppInstanceForAdmin(const GetAppInstanceForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceForAdminWithOptions(request, runtime);
}

/**
 * @summary Query instance details
 *
 * @param request GetAppInstanceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceForPartnerResponse
 */
GetAppInstanceForPartnerResponse Client::getAppInstanceForPartnerWithOptions(const GetAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceForPartnerResponse>();
}

/**
 * @summary Query instance details
 *
 * @param request GetAppInstanceForPartnerRequest
 * @return GetAppInstanceForPartnerResponse
 */
GetAppInstanceForPartnerResponse Client::getAppInstanceForPartner(const GetAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary 生码-获取插件配置信息
 *
 * @param request GetAppPluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppPluginConfigResponse
 */
GetAppPluginConfigResponse Client::getAppPluginConfigWithOptions(const GetAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  if (!!request.hasPluginId()) {
    body["PluginId"] = request.getPluginId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAppPluginConfig"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppPluginConfigResponse>();
}

/**
 * @summary 生码-获取插件配置信息
 *
 * @param request GetAppPluginConfigRequest
 * @return GetAppPluginConfigResponse
 */
GetAppPluginConfigResponse Client::getAppPluginConfig(const GetAppPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppPluginConfigWithOptions(request, runtime);
}

/**
 * @summary 查询万小智推荐商品
 *
 * @param request GetAppRecommendedCommoditiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppRecommendedCommoditiesResponse
 */
GetAppRecommendedCommoditiesResponse Client::getAppRecommendedCommoditiesWithOptions(const GetAppRecommendedCommoditiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasResourceConditions()) {
    query["ResourceConditions"] = request.getResourceConditions();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppRecommendedCommodities"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppRecommendedCommoditiesResponse>();
}

/**
 * @summary 查询万小智推荐商品
 *
 * @param request GetAppRecommendedCommoditiesRequest
 * @return GetAppRecommendedCommoditiesResponse
 */
GetAppRecommendedCommoditiesResponse Client::getAppRecommendedCommodities(const GetAppRecommendedCommoditiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppRecommendedCommoditiesWithOptions(request, runtime);
}

/**
 * @summary 查询万小智灵感值服务
 *
 * @param request GetAppTokenServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppTokenServiceResponse
 */
GetAppTokenServiceResponse Client::getAppTokenServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAppTokenService"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppTokenServiceResponse>();
}

/**
 * @summary 查询万小智灵感值服务
 *
 * @return GetAppTokenServiceResponse
 */
GetAppTokenServiceResponse Client::getAppTokenService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppTokenServiceWithOptions(runtime);
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
    query["TaskId"] = request.getTaskId();
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
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
    query["SiteHost"] = request.getSiteHost();
  }

  if (!!request.hasTicket()) {
    query["Ticket"] = request.getTicket();
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
    query["AuthPurpose"] = request.getAuthPurpose();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary 检查AccessToken
 *
 * @param request IntrospectAppInstanceTicketForPreviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntrospectAppInstanceTicketForPreviewResponse
 */
IntrospectAppInstanceTicketForPreviewResponse Client::introspectAppInstanceTicketForPreviewWithOptions(const IntrospectAppInstanceTicketForPreviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntrospectAppInstanceTicketForPreview"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntrospectAppInstanceTicketForPreviewResponse>();
}

/**
 * @summary 检查AccessToken
 *
 * @param request IntrospectAppInstanceTicketForPreviewRequest
 * @return IntrospectAppInstanceTicketForPreviewResponse
 */
IntrospectAppInstanceTicketForPreviewResponse Client::introspectAppInstanceTicketForPreview(const IntrospectAppInstanceTicketForPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return introspectAppInstanceTicketForPreviewWithOptions(request, runtime);
}

/**
 * @summary 获取商品配置信息
 *
 * @param request ListAppCommoditySpecificationsForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppCommoditySpecificationsForPartnerResponse
 */
ListAppCommoditySpecificationsForPartnerResponse Client::listAppCommoditySpecificationsForPartnerWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListAppCommoditySpecificationsForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppCommoditySpecificationsForPartnerResponse>();
}

/**
 * @summary 获取商品配置信息
 *
 * @return ListAppCommoditySpecificationsForPartnerResponse
 */
ListAppCommoditySpecificationsForPartnerResponse Client::listAppCommoditySpecificationsForPartner() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppCommoditySpecificationsForPartnerWithOptions(runtime);
}

/**
 * @summary 网站信息查询
 *
 * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppCommoditySpecificationsV2ForPartnerResponse
 */
ListAppCommoditySpecificationsV2ForPartnerResponse Client::listAppCommoditySpecificationsV2ForPartnerWithOptions(const ListAppCommoditySpecificationsV2ForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppCommoditySpecificationsV2ForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppCommoditySpecificationsV2ForPartnerResponse>();
}

/**
 * @summary 网站信息查询
 *
 * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
 * @return ListAppCommoditySpecificationsV2ForPartnerResponse
 */
ListAppCommoditySpecificationsV2ForPartnerResponse Client::listAppCommoditySpecificationsV2ForPartner(const ListAppCommoditySpecificationsV2ForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppCommoditySpecificationsV2ForPartnerWithOptions(request, runtime);
}

/**
 * @summary Query the list of domain redirection rules
 *
 * @param request ListAppDomainRedirectRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppDomainRedirectRecordsResponse
 */
ListAppDomainRedirectRecordsResponse Client::listAppDomainRedirectRecordsWithOptions(const ListAppDomainRedirectRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @summary Query the list of domain redirection rules
 *
 * @param request ListAppDomainRedirectRecordsRequest
 * @return ListAppDomainRedirectRecordsResponse
 */
ListAppDomainRedirectRecordsResponse Client::listAppDomainRedirectRecords(const ListAppDomainRedirectRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppDomainRedirectRecordsWithOptions(request, runtime);
}

/**
 * @summary List all domain names under the application instance
 *
 * @param request ListAppInstanceDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstanceDomainsResponse
 */
ListAppInstanceDomainsResponse Client::listAppInstanceDomainsWithOptions(const ListAppInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary List all domain names under the application instance
 *
 * @param request ListAppInstanceDomainsRequest
 * @return ListAppInstanceDomainsResponse
 */
ListAppInstanceDomainsResponse Client::listAppInstanceDomains(const ListAppInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary Website Instance List Query
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
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasEndTimeBegin()) {
    query["EndTimeBegin"] = request.getEndTimeBegin();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.getEndTimeEnd();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.getStatusListShrink();
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
 * @summary Website Instance List Query
 *
 * @param request ListAppInstancesRequest
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstances(const ListAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Modify the configuration of a building instance
 *
 * @param request ModifyAppInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppInstanceSpecResponse
 */
ModifyAppInstanceSpecResponse Client::modifyAppInstanceSpecWithOptions(const ModifyAppInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.getApplicationType();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeployArea()) {
    query["DeployArea"] = request.getDeployArea();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Modify the configuration of a building instance
 *
 * @param request ModifyAppInstanceSpecRequest
 * @return ModifyAppInstanceSpecResponse
 */
ModifyAppInstanceSpecResponse Client::modifyAppInstanceSpec(const ModifyAppInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary 修改素材中心文件夹
 *
 * @param request ModifyMaterialDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaterialDirectoryResponse
 */
ModifyMaterialDirectoryResponse Client::modifyMaterialDirectoryWithOptions(const ModifyMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaterialDirectory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaterialDirectoryResponse>();
}

/**
 * @summary 修改素材中心文件夹
 *
 * @param request ModifyMaterialDirectoryRequest
 * @return ModifyMaterialDirectoryResponse
 */
ModifyMaterialDirectoryResponse Client::modifyMaterialDirectory(const ModifyMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary 修改素材文件
 *
 * @param request ModifyMaterialFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaterialFileResponse
 */
ModifyMaterialFileResponse Client::modifyMaterialFileWithOptions(const ModifyMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaterialFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaterialFileResponse>();
}

/**
 * @summary 修改素材文件
 *
 * @param request ModifyMaterialFileRequest
 * @return ModifyMaterialFileResponse
 */
ModifyMaterialFileResponse Client::modifyMaterialFile(const ModifyMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialFileWithOptions(request, runtime);
}

/**
 * @summary 修改素材文件状态
 *
 * @param tmpReq ModifyMaterialFileStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMaterialFileStatusResponse
 */
ModifyMaterialFileStatusResponse Client::modifyMaterialFileStatusWithOptions(const ModifyMaterialFileStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyMaterialFileStatusShrinkRequest request = ModifyMaterialFileStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMaterialFileStatus"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMaterialFileStatusResponse>();
}

/**
 * @summary 修改素材文件状态
 *
 * @param request ModifyMaterialFileStatusRequest
 * @return ModifyMaterialFileStatusResponse
 */
ModifyMaterialFileStatusResponse Client::modifyMaterialFileStatus(const ModifyMaterialFileStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialFileStatusWithOptions(request, runtime);
}

/**
 * @summary 移动素材中心文件夹
 *
 * @param request MoveMaterialDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveMaterialDirectoryResponse
 */
MoveMaterialDirectoryResponse Client::moveMaterialDirectoryWithOptions(const MoveMaterialDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasParentDirectoryId()) {
    query["ParentDirectoryId"] = request.getParentDirectoryId();
  }

  if (!!request.hasSortNum()) {
    query["SortNum"] = request.getSortNum();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveMaterialDirectory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveMaterialDirectoryResponse>();
}

/**
 * @summary 移动素材中心文件夹
 *
 * @param request MoveMaterialDirectoryRequest
 * @return MoveMaterialDirectoryResponse
 */
MoveMaterialDirectoryResponse Client::moveMaterialDirectory(const MoveMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary 移动素材文件
 *
 * @param tmpReq MoveMaterialFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveMaterialFileResponse
 */
MoveMaterialFileResponse Client::moveMaterialFileWithOptions(const MoveMaterialFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MoveMaterialFileShrinkRequest request = MoveMaterialFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveMaterialFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveMaterialFileResponse>();
}

/**
 * @summary 移动素材文件
 *
 * @param request MoveMaterialFileRequest
 * @return MoveMaterialFileResponse
 */
MoveMaterialFileResponse Client::moveMaterialFile(const MoveMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveMaterialFileWithOptions(request, runtime);
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
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasOperateEvent()) {
    query["OperateEvent"] = request.getOperateEvent();
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
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasOperateEvent()) {
    query["OperateEvent"] = request.getOperateEvent();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
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
 * @summary 通用Supabase操作
 *
 * @param request OperateSupabaseForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateSupabaseForAdminResponse
 */
OperateSupabaseForAdminResponse Client::operateSupabaseForAdminWithOptions(const OperateSupabaseForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasExecuteSql()) {
    query["ExecuteSql"] = request.getExecuteSql();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOrderByClause()) {
    query["OrderByClause"] = request.getOrderByClause();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWhereClause()) {
    query["WhereClause"] = request.getWhereClause();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateSupabaseForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateSupabaseForAdminResponse>();
}

/**
 * @summary 通用Supabase操作
 *
 * @param request OperateSupabaseForAdminRequest
 * @return OperateSupabaseForAdminResponse
 */
OperateSupabaseForAdminResponse Client::operateSupabaseForAdmin(const OperateSupabaseForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateSupabaseForAdminWithOptions(request, runtime);
}

/**
 * @summary 推送资源计量数据
 *
 * @param request PushResourceMeasureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushResourceMeasureResponse
 */
PushResourceMeasureResponse Client::pushResourceMeasureWithOptions(const PushResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasBelongId()) {
    query["BelongId"] = request.getBelongId();
  }

  if (!!request.hasBelongIdType()) {
    query["BelongIdType"] = request.getBelongIdType();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasMeasureData()) {
    query["MeasureData"] = request.getMeasureData();
  }

  if (!!request.hasMetaData()) {
    query["MetaData"] = request.getMetaData();
  }

  if (!!request.hasResourceCode()) {
    query["ResourceCode"] = request.getResourceCode();
  }

  if (!!request.hasUseTime()) {
    query["UseTime"] = request.getUseTime();
  }

  if (!!request.hasUseType()) {
    query["UseType"] = request.getUseType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushResourceMeasure"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushResourceMeasureResponse>();
}

/**
 * @summary 推送资源计量数据
 *
 * @param request PushResourceMeasureRequest
 * @return PushResourceMeasureResponse
 */
PushResourceMeasureResponse Client::pushResourceMeasure(const PushResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary 查询灵感值获取明细
 *
 * @param request QueryInspirationAccountDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInspirationAccountDetailsResponse
 */
QueryInspirationAccountDetailsResponse Client::queryInspirationAccountDetailsWithOptions(const QueryInspirationAccountDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInspirationAccountDetails"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInspirationAccountDetailsResponse>();
}

/**
 * @summary 查询灵感值获取明细
 *
 * @param request QueryInspirationAccountDetailsRequest
 * @return QueryInspirationAccountDetailsResponse
 */
QueryInspirationAccountDetailsResponse Client::queryInspirationAccountDetails(const QueryInspirationAccountDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationAccountDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询灵感值余额总览
 *
 * @param request QueryInspirationBalanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInspirationBalanceResponse
 */
QueryInspirationBalanceResponse Client::queryInspirationBalanceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryInspirationBalance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInspirationBalanceResponse>();
}

/**
 * @summary 查询灵感值余额总览
 *
 * @return QueryInspirationBalanceResponse
 */
QueryInspirationBalanceResponse Client::queryInspirationBalance() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationBalanceWithOptions(runtime);
}

/**
 * @summary 查询灵感值消耗明细
 *
 * @param request QueryInspirationConsumeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInspirationConsumeRecordsResponse
 */
QueryInspirationConsumeRecordsResponse Client::queryInspirationConsumeRecordsWithOptions(const QueryInspirationConsumeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.getSceneName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInspirationConsumeRecords"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInspirationConsumeRecordsResponse>();
}

/**
 * @summary 查询灵感值消耗明细
 *
 * @param request QueryInspirationConsumeRecordsRequest
 * @return QueryInspirationConsumeRecordsResponse
 */
QueryInspirationConsumeRecordsResponse Client::queryInspirationConsumeRecords(const QueryInspirationConsumeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationConsumeRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询素材中心文件夹树结构
 *
 * @param request QueryMaterialDirectoryTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialDirectoryTreeResponse
 */
QueryMaterialDirectoryTreeResponse Client::queryMaterialDirectoryTreeWithOptions(const QueryMaterialDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasHiddenPublic()) {
    query["HiddenPublic"] = request.getHiddenPublic();
  }

  if (!!request.hasRoot()) {
    query["Root"] = request.getRoot();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialDirectoryTree"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialDirectoryTreeResponse>();
}

/**
 * @summary 查询素材中心文件夹树结构
 *
 * @param request QueryMaterialDirectoryTreeRequest
 * @return QueryMaterialDirectoryTreeResponse
 */
QueryMaterialDirectoryTreeResponse Client::queryMaterialDirectoryTree(const QueryMaterialDirectoryTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialDirectoryTreeWithOptions(request, runtime);
}

/**
 * @summary 查询素材文件详情
 *
 * @param request QueryMaterialFileDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialFileDetailResponse
 */
QueryMaterialFileDetailResponse Client::queryMaterialFileDetailWithOptions(const QueryMaterialFileDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialFileDetail"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialFileDetailResponse>();
}

/**
 * @summary 查询素材文件详情
 *
 * @param request QueryMaterialFileDetailRequest
 * @return QueryMaterialFileDetailResponse
 */
QueryMaterialFileDetailResponse Client::queryMaterialFileDetail(const QueryMaterialFileDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileDetailWithOptions(request, runtime);
}

/**
 * @summary Query Material File List
 *
 * @param tmpReq QueryMaterialFileListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialFileListResponse
 */
QueryMaterialFileListResponse Client::queryMaterialFileListWithOptions(const QueryMaterialFileListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMaterialFileListShrinkRequest request = QueryMaterialFileListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  if (!!tmpReq.hasSuffixList()) {
    request.setSuffixListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSuffixList(), "SuffixList", "json"));
  }

  if (!!tmpReq.hasTypeList()) {
    request.setTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypeList(), "TypeList", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasMaxFileSize()) {
    query["MaxFileSize"] = request.getMaxFileSize();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMinFileSize()) {
    query["MinFileSize"] = request.getMinFileSize();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.getStatusListShrink();
  }

  if (!!request.hasSuffixListShrink()) {
    query["SuffixList"] = request.getSuffixListShrink();
  }

  if (!!request.hasTypeListShrink()) {
    query["TypeList"] = request.getTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialFileList"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialFileListResponse>();
}

/**
 * @summary Query Material File List
 *
 * @param request QueryMaterialFileListRequest
 * @return QueryMaterialFileListResponse
 */
QueryMaterialFileListResponse Client::queryMaterialFileList(const QueryMaterialFileListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileListWithOptions(request, runtime);
}

/**
 * @summary 查询素材中心文件概要信息
 *
 * @param tmpReq QueryMaterialFileSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialFileSummaryInfoResponse
 */
QueryMaterialFileSummaryInfoResponse Client::queryMaterialFileSummaryInfoWithOptions(const QueryMaterialFileSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMaterialFileSummaryInfoShrinkRequest request = QueryMaterialFileSummaryInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  if (!!tmpReq.hasTypeList()) {
    request.setTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypeList(), "TypeList", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.getStatusListShrink();
  }

  if (!!request.hasTypeListShrink()) {
    query["TypeList"] = request.getTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialFileSummaryInfo"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialFileSummaryInfoResponse>();
}

/**
 * @summary 查询素材中心文件概要信息
 *
 * @param request QueryMaterialFileSummaryInfoRequest
 * @return QueryMaterialFileSummaryInfoResponse
 */
QueryMaterialFileSummaryInfoResponse Client::queryMaterialFileSummaryInfo(const QueryMaterialFileSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary 查询素材生产任务详情
 *
 * @param request QueryMaterialTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialTaskDetailResponse
 */
QueryMaterialTaskDetailResponse Client::queryMaterialTaskDetailWithOptions(const QueryMaterialTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialTaskDetail"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialTaskDetailResponse>();
}

/**
 * @summary 查询素材生产任务详情
 *
 * @param request QueryMaterialTaskDetailRequest
 * @return QueryMaterialTaskDetailResponse
 */
QueryMaterialTaskDetailResponse Client::queryMaterialTaskDetail(const QueryMaterialTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialTaskDetailWithOptions(request, runtime);
}

/**
 * @summary 查询素材生产任务列表
 *
 * @param tmpReq QueryMaterialTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMaterialTaskListResponse
 */
QueryMaterialTaskListResponse Client::queryMaterialTaskListWithOptions(const QueryMaterialTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMaterialTaskListShrinkRequest request = QueryMaterialTaskListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  if (!!tmpReq.hasTaskTypeList()) {
    request.setTaskTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskTypeList(), "TaskTypeList", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.getStatusListShrink();
  }

  if (!!request.hasTaskTypeListShrink()) {
    query["TaskTypeList"] = request.getTaskTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMaterialTaskList"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMaterialTaskListResponse>();
}

/**
 * @summary 查询素材生产任务列表
 *
 * @param request QueryMaterialTaskListRequest
 * @return QueryMaterialTaskListResponse
 */
QueryMaterialTaskListResponse Client::queryMaterialTaskList(const QueryMaterialTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialTaskListWithOptions(request, runtime);
}

/**
 * @summary 查询Supabase Auth配置信息
 *
 * @param request QuerySupabaseAuthConfigsForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySupabaseAuthConfigsForAdminResponse
 */
QuerySupabaseAuthConfigsForAdminResponse Client::querySupabaseAuthConfigsForAdminWithOptions(const QuerySupabaseAuthConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySupabaseAuthConfigsForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySupabaseAuthConfigsForAdminResponse>();
}

/**
 * @summary 查询Supabase Auth配置信息
 *
 * @param request QuerySupabaseAuthConfigsForAdminRequest
 * @return QuerySupabaseAuthConfigsForAdminResponse
 */
QuerySupabaseAuthConfigsForAdminResponse Client::querySupabaseAuthConfigsForAdmin(const QuerySupabaseAuthConfigsForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseAuthConfigsForAdminWithOptions(request, runtime);
}

/**
 * @summary 查询Supabase配置信息
 *
 * @param request QuerySupabaseConfigsForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySupabaseConfigsForAdminResponse
 */
QuerySupabaseConfigsForAdminResponse Client::querySupabaseConfigsForAdminWithOptions(const QuerySupabaseConfigsForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySupabaseConfigsForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySupabaseConfigsForAdminResponse>();
}

/**
 * @summary 查询Supabase配置信息
 *
 * @param request QuerySupabaseConfigsForAdminRequest
 * @return QuerySupabaseConfigsForAdminResponse
 */
QuerySupabaseConfigsForAdminResponse Client::querySupabaseConfigsForAdmin(const QuerySupabaseConfigsForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseConfigsForAdminWithOptions(request, runtime);
}

/**
 * @summary 查询Supabase实例信息
 *
 * @param request QuerySupabaseInstanceInfoForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySupabaseInstanceInfoForAdminResponse
 */
QuerySupabaseInstanceInfoForAdminResponse Client::querySupabaseInstanceInfoForAdminWithOptions(const QuerySupabaseInstanceInfoForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.getOrderColumn();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySupabaseInstanceInfoForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySupabaseInstanceInfoForAdminResponse>();
}

/**
 * @summary 查询Supabase实例信息
 *
 * @param request QuerySupabaseInstanceInfoForAdminRequest
 * @return QuerySupabaseInstanceInfoForAdminResponse
 */
QuerySupabaseInstanceInfoForAdminResponse Client::querySupabaseInstanceInfoForAdmin(const QuerySupabaseInstanceInfoForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseInstanceInfoForAdminWithOptions(request, runtime);
}

/**
 * @summary Refresh ticket
 *
 * @param request RefreshAppInstanceTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshAppInstanceTicketResponse
 */
RefreshAppInstanceTicketResponse Client::refreshAppInstanceTicketWithOptions(const RefreshAppInstanceTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
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
 * @summary Refresh ticket
 *
 * @param request RefreshAppInstanceTicketRequest
 * @return RefreshAppInstanceTicketResponse
 */
RefreshAppInstanceTicketResponse Client::refreshAppInstanceTicket(const RefreshAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary 渠道业务退款接口
 *
 * @param request RefundAppInstanceForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundAppInstanceForPartnerResponse
 */
RefundAppInstanceForPartnerResponse Client::refundAppInstanceForPartnerWithOptions(const RefundAppInstanceForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRefundReason()) {
    query["RefundReason"] = request.getRefundReason();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefundAppInstanceForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundAppInstanceForPartnerResponse>();
}

/**
 * @summary 渠道业务退款接口
 *
 * @param request RefundAppInstanceForPartnerRequest
 * @return RefundAppInstanceForPartnerResponse
 */
RefundAppInstanceForPartnerResponse Client::refundAppInstanceForPartner(const RefundAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refundAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Renewal of website building instance
 *
 * @param request RenewAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppInstanceResponse
 */
RenewAppInstanceResponse Client::renewAppInstanceWithOptions(const RenewAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
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
 * @summary Renewal of website building instance
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "simple"));
  }

  json query = {};
  if (!!request.hasColorHex()) {
    query["ColorHex"] = request.getColorHex();
  }

  if (!!request.hasHasPerson()) {
    query["HasPerson"] = request.getHasPerson();
  }

  if (!!request.hasImageCategory()) {
    query["ImageCategory"] = request.getImageCategory();
  }

  if (!!request.hasImageRatio()) {
    query["ImageRatio"] = request.getImageRatio();
  }

  if (!!request.hasMaxHeight()) {
    query["MaxHeight"] = request.getMaxHeight();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMaxWidth()) {
    query["MaxWidth"] = request.getMaxWidth();
  }

  if (!!request.hasMinHeight()) {
    query["MinHeight"] = request.getMinHeight();
  }

  if (!!request.hasMinWidth()) {
    query["MinWidth"] = request.getMinWidth();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
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
 * @summary Set the SSL certificate for a domain
 *
 * @param request SetAppDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppDomainCertificateResponse
 */
SetAppDomainCertificateResponse Client::setAppDomainCertificateWithOptions(const SetAppDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasCertificateName()) {
    query["CertificateName"] = request.getCertificateName();
  }

  if (!!request.hasCertificateType()) {
    query["CertificateType"] = request.getCertificateType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
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
 * @summary Set the SSL certificate for a domain
 *
 * @param request SetAppDomainCertificateRequest
 * @return SetAppDomainCertificateResponse
 */
SetAppDomainCertificateResponse Client::setAppDomainCertificate(const SetAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary 提交素材生产任务
 *
 * @param request SubmitMaterialTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMaterialTaskResponse
 */
SubmitMaterialTaskResponse Client::submitMaterialTaskWithOptions(const SubmitMaterialTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskParam()) {
    query["TaskParam"] = request.getTaskParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMaterialTask"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMaterialTaskResponse>();
}

/**
 * @summary 提交素材生产任务
 *
 * @param request SubmitMaterialTaskRequest
 * @return SubmitMaterialTaskResponse
 */
SubmitMaterialTaskResponse Client::submitMaterialTask(const SubmitMaterialTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMaterialTaskWithOptions(request, runtime);
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
    request.setAppInstanceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAppInstance(), "AppInstance", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceShrink()) {
    query["AppInstance"] = request.getAppInstanceShrink();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request.getOperator();
  }

  if (!!request.hasSourceBizId()) {
    query["SourceBizId"] = request.getSourceBizId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
 * @summary Unbind Application Domain
 *
 * @param request UnbindAppDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAppDomainResponse
 */
UnbindAppDomainResponse Client::unbindAppDomainWithOptions(const UnbindAppDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
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
 * @summary Unbind Application Domain
 *
 * @param request UnbindAppDomainRequest
 * @return UnbindAppDomainResponse
 */
UnbindAppDomainResponse Client::unbindAppDomain(const UnbindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAppDomainWithOptions(request, runtime);
}

/**
 * @summary 上传素材文件
 *
 * @param request UploadMaterialFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMaterialFileResponse
 */
UploadMaterialFileResponse Client::uploadMaterialFileWithOptions(const UploadMaterialFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadMaterialFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadMaterialFileResponse>();
}

/**
 * @summary 上传素材文件
 *
 * @param request UploadMaterialFileRequest
 * @return UploadMaterialFileResponse
 */
UploadMaterialFileResponse Client::uploadMaterialFile(const UploadMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMaterialFileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429