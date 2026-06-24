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
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::WebsiteBuild20250429::Models;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{

AlibabaCloud::WebsiteBuild20250429::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"public" , "websitebuild.aliyuncs.com"},
    {"cn-zhangjiakou" , "websitebuild.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Allocates a Supabase instance for resource allocation.
 *
 * @description Queries the Supabase instance information associated with a resource.
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
 * @summary Allocates a Supabase instance for resource allocation.
 *
 * @description Queries the Supabase instance information associated with a resource.
 *
 * @param request AllocateSupabaseForAdminRequest
 * @return AllocateSupabaseForAdminResponse
 */
AllocateSupabaseForAdminResponse Client::allocateSupabaseForAdmin(const AllocateSupabaseForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateSupabaseForAdminWithOptions(request, runtime);
}

/**
 * @summary Checks resource usage in batches.
 *
 * @description The Supabase instance information corresponding to the operated resources.
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
 * @summary Checks resource usage in batches.
 *
 * @description The Supabase instance information corresponding to the operated resources.
 *
 * @param request BatchCheckResourceMeasureRequest
 * @return BatchCheckResourceMeasureResponse
 */
BatchCheckResourceMeasureResponse Client::batchCheckResourceMeasure(const BatchCheckResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCheckResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Binds a custom domain name to an application and automatically completes DNS resolution verification.
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
 * @summary Binds a custom domain name to an application and automatically completes DNS resolution verification.
 *
 * @param request BindAppDomainRequest
 * @return BindAppDomainResponse
 */
BindAppDomainResponse Client::bindAppDomain(const BindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAppDomainWithOptions(request, runtime);
}

/**
 * @summary Verifies a verification code.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CheckAppVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAppVerifyCodeResponse
 */
CheckAppVerifyCodeResponse Client::checkAppVerifyCodeWithOptions(const CheckAppVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAppVerifyCode"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAppVerifyCodeResponse>();
}

/**
 * @summary Verifies a verification code.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CheckAppVerifyCodeRequest
 * @return CheckAppVerifyCodeResponse
 */
CheckAppVerifyCodeResponse Client::checkAppVerifyCode(const CheckAppVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAppVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Checks resource usage.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
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
 * @summary Checks resource usage.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
 *
 * @param request CheckResourceMeasureRequest
 * @return CheckResourceMeasureResponse
 */
CheckResourceMeasureResponse Client::checkResourceMeasure(const CheckResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Checks user resource metering.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
 *
 * @param request CheckUserResourceMeasureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUserResourceMeasureResponse
 */
CheckUserResourceMeasureResponse Client::checkUserResourceMeasureWithOptions(const CheckUserResourceMeasureRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CheckUserResourceMeasure"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUserResourceMeasureResponse>();
}

/**
 * @summary Checks user resource metering.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
 *
 * @param request CheckUserResourceMeasureRequest
 * @return CheckUserResourceMeasureResponse
 */
CheckUserResourceMeasureResponse Client::checkUserResourceMeasure(const CheckUserResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUserResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Converts a trial instance to a paid instance.
 *
 * @description Queries application instance information.
 *
 * @param request ConfirmAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmAppInstanceResponse
 */
ConfirmAppInstanceResponse Client::confirmAppInstanceWithOptions(const ConfirmAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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

  if (!!request.hasTrialBizId()) {
    query["TrialBizId"] = request.getTrialBizId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmAppInstanceResponse>();
}

/**
 * @summary Converts a trial instance to a paid instance.
 *
 * @description Queries application instance information.
 *
 * @param request ConfirmAppInstanceRequest
 * @return ConfirmAppInstanceResponse
 */
ConfirmAppInstanceResponse Client::confirmAppInstance(const ConfirmAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 复制插件配置
 *
 * @description 获取生码插件配置信息
 *
 * @param request CopyAppPluginConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyAppPluginConfigResponse
 */
CopyAppPluginConfigResponse Client::copyAppPluginConfigWithOptions(const CopyAppPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceBizId()) {
    query["SourceBizId"] = request.getSourceBizId();
  }

  if (!!request.hasTargetBizId()) {
    query["TargetBizId"] = request.getTargetBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyAppPluginConfig"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyAppPluginConfigResponse>();
}

/**
 * @summary 复制插件配置
 *
 * @description 获取生码插件配置信息
 *
 * @param request CopyAppPluginConfigRequest
 * @return CopyAppPluginConfigResponse
 */
CopyAppPluginConfigResponse Client::copyAppPluginConfig(const CopyAppPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyAppPluginConfigWithOptions(request, runtime);
}

/**
 * @summary Asynchronously initiates a conversation with an AI employee.
 *
 * @description Initiates a WanXiaoZhi 2.0 AI conversation.
 *
 * @param request CreateAIStaffChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAIStaffChatResponse
 */
CreateAIStaffChatResponse Client::createAIStaffChatWithOptions(const CreateAIStaffChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  json bodyFlat = {};
  if (!!request.hasMetaData()) {
    bodyFlat["MetaData"] = request.getMetaData();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAIStaffChat"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAIStaffChatResponse>();
}

/**
 * @summary Asynchronously initiates a conversation with an AI employee.
 *
 * @description Initiates a WanXiaoZhi 2.0 AI conversation.
 *
 * @param request CreateAIStaffChatRequest
 * @return CreateAIStaffChatResponse
 */
CreateAIStaffChatResponse Client::createAIStaffChat(const CreateAIStaffChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAIStaffChatWithOptions(request, runtime);
}

/**
 * @summary Creates an AI employee session.
 *
 * @description Creates an AI session for WanXiaoZhi 2.0.
 *
 * @param request CreateAIStaffConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAIStaffConversationResponse
 */
CreateAIStaffConversationResponse Client::createAIStaffConversationWithOptions(const CreateAIStaffConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasText()) {
    body["Text"] = request.getText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAIStaffConversation"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAIStaffConversationResponse>();
}

/**
 * @summary Creates an AI employee session.
 *
 * @description Creates an AI session for WanXiaoZhi 2.0.
 *
 * @param request CreateAIStaffConversationRequest
 * @return CreateAIStaffConversationResponse
 */
CreateAIStaffConversationResponse Client::createAIStaffConversation(const CreateAIStaffConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAIStaffConversationWithOptions(request, runtime);
}

/**
 * @summary Creates an application assistant agent.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request CreateAppAssistantAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppAssistantAgentResponse
 */
CreateAppAssistantAgentResponse Client::createAppAssistantAgentWithOptions(const CreateAppAssistantAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasPlatformType()) {
    query["PlatformType"] = request.getPlatformType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppAssistantAgent"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppAssistantAgentResponse>();
}

/**
 * @summary Creates an application assistant agent.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request CreateAppAssistantAgentRequest
 * @return CreateAppAssistantAgentResponse
 */
CreateAppAssistantAgentResponse Client::createAppAssistantAgent(const CreateAppAssistantAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppAssistantAgentWithOptions(request, runtime);
}

/**
 * @summary Generates an SSO logon-free URL for an application assistant agent.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CreateAppAssistantAgentSsoLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppAssistantAgentSsoLoginResponse
 */
CreateAppAssistantAgentSsoLoginResponse Client::createAppAssistantAgentSsoLoginWithOptions(const CreateAppAssistantAgentSsoLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasPlatformType()) {
    query["PlatformType"] = request.getPlatformType();
  }

  if (!!request.hasTargetUrl()) {
    query["TargetUrl"] = request.getTargetUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppAssistantAgentSsoLogin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppAssistantAgentSsoLoginResponse>();
}

/**
 * @summary Generates an SSO logon-free URL for an application assistant agent.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CreateAppAssistantAgentSsoLoginRequest
 * @return CreateAppAssistantAgentSsoLoginResponse
 */
CreateAppAssistantAgentSsoLoginResponse Client::createAppAssistantAgentSsoLogin(const CreateAppAssistantAgentSsoLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppAssistantAgentSsoLoginWithOptions(request, runtime);
}

/**
 * @summary Wan Xiaozhi initiates an AI conversation
 *
 * @param request CreateAppChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppChatResponse
 */
FutureGenerator<CreateAppChatResponse> Client::createAppChatWithSSE(const CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["BotId"] = request.getBotId();
  }

  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAppChat"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<CreateAppChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Wan Xiaozhi initiates an AI conversation
 *
 * @param request CreateAppChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppChatResponse
 */
CreateAppChatResponse Client::createAppChatWithOptions(const CreateAppChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBotId()) {
    body["BotId"] = request.getBotId();
  }

  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMessages()) {
    body["Messages"] = request.getMessages();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAppChat"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppChatResponse>();
}

/**
 * @summary Wan Xiaozhi initiates an AI conversation
 *
 * @param request CreateAppChatRequest
 * @return CreateAppChatResponse
 */
CreateAppChatResponse Client::createAppChat(const CreateAppChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppChatWithOptions(request, runtime);
}

/**
 * @summary Creates a website builder application instance.
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

  if (!!request.hasCreateAction()) {
    query["CreateAction"] = request.getCreateAction();
  }

  if (!!request.hasDeployArea()) {
    query["DeployArea"] = request.getDeployArea();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasVersion()) {
    query["Version"] = request.getVersion();
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
 * @summary Creates a website builder application instance.
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a login-free ticket for a website builder instance.
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
 * @summary Creates a login-free ticket for a website builder instance.
 *
 * @param request CreateAppInstanceTicketRequest
 * @return CreateAppInstanceTicketResponse
 */
CreateAppInstanceTicketResponse Client::createAppInstanceTicket(const CreateAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary Create an LLM gateway API key for an application instance
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request CreateAppLlmApiKeyForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppLlmApiKeyForPartnerResponse
 */
CreateAppLlmApiKeyForPartnerResponse Client::createAppLlmApiKeyForPartnerWithOptions(const CreateAppLlmApiKeyForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasIpWhiteList()) {
    body["IpWhiteList"] = request.getIpWhiteList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAppLlmApiKeyForPartner"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppLlmApiKeyForPartnerResponse>();
}

/**
 * @summary Create an LLM gateway API key for an application instance
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request CreateAppLlmApiKeyForPartnerRequest
 * @return CreateAppLlmApiKeyForPartnerResponse
 */
CreateAppLlmApiKeyForPartnerResponse Client::createAppLlmApiKeyForPartner(const CreateAppLlmApiKeyForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppLlmApiKeyForPartnerWithOptions(request, runtime);
}

/**
 * @summary Creates a message notification scenario.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CreateAppNotificationSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppNotificationSceneResponse
 */
CreateAppNotificationSceneResponse Client::createAppNotificationSceneWithOptions(const CreateAppNotificationSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasChannelsJson()) {
    query["ChannelsJson"] = request.getChannelsJson();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEmailFieldsJson()) {
    query["EmailFieldsJson"] = request.getEmailFieldsJson();
  }

  if (!!request.hasEmailLimitJson()) {
    query["EmailLimitJson"] = request.getEmailLimitJson();
  }

  if (!!request.hasEmailRecipientIdsJson()) {
    query["EmailRecipientIdsJson"] = request.getEmailRecipientIdsJson();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPhoneRecipientIdsJson()) {
    query["PhoneRecipientIdsJson"] = request.getPhoneRecipientIdsJson();
  }

  if (!!request.hasSmsFieldsJson()) {
    query["SmsFieldsJson"] = request.getSmsFieldsJson();
  }

  if (!!request.hasSmsLimitJson()) {
    query["SmsLimitJson"] = request.getSmsLimitJson();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTriggerEventsJson()) {
    query["TriggerEventsJson"] = request.getTriggerEventsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppNotificationScene"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppNotificationSceneResponse>();
}

/**
 * @summary Creates a message notification scenario.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request CreateAppNotificationSceneRequest
 * @return CreateAppNotificationSceneResponse
 */
CreateAppNotificationSceneResponse Client::createAppNotificationScene(const CreateAppNotificationSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppNotificationSceneWithOptions(request, runtime);
}

/**
 * @summary Activates the Wanxiaozhi inspiration value service.
 *
 * @description Retrieves the configuration information of the code generation plugin.
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
 * @summary Activates the Wanxiaozhi inspiration value service.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request CreateAppTokenServiceRequest
 * @return CreateAppTokenServiceResponse
 */
CreateAppTokenServiceResponse Client::createAppTokenService(const CreateAppTokenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppTokenServiceWithOptions(request, runtime);
}

/**
 * @summary Submits a task to create a logo.
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
 * @summary Submits a task to create a logo.
 *
 * @param request CreateLogoTaskRequest
 * @return CreateLogoTaskResponse
 */
CreateLogoTaskResponse Client::createLogoTask(const CreateLogoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogoTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a subfolder under a parent folder.
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
 * @summary Creates a subfolder under a parent folder.
 *
 * @param request CreateMaterialDirectoryRequest
 * @return CreateMaterialDirectoryResponse
 */
CreateMaterialDirectoryResponse Client::createMaterialDirectory(const CreateMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary Deletes and unbinds the SSL certificate that is bound to a website.
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
 * @summary Deletes and unbinds the SSL certificate that is bound to a website.
 *
 * @param request DeleteAppDomainCertificateRequest
 * @return DeleteAppDomainCertificateResponse
 */
DeleteAppDomainCertificateResponse Client::deleteAppDomainCertificate(const DeleteAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes 301 redirect records bound to a website.
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
 * @summary Deletes 301 redirect records bound to a website.
 *
 * @param request DeleteAppDomainRedirectRequest
 * @return DeleteAppDomainRedirectResponse
 */
DeleteAppDomainRedirectResponse Client::deleteAppDomainRedirect(const DeleteAppDomainRedirectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppDomainRedirectWithOptions(request, runtime);
}

/**
 * @summary 删除文件
 *
 * @description 查询应用实例信息
 *
 * @param request DeleteAppFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppFileResponse
 */
DeleteAppFileResponse Client::deleteAppFileWithOptions(const DeleteAppFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAppFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppFileResponse>();
}

/**
 * @summary 删除文件
 *
 * @description 查询应用实例信息
 *
 * @param request DeleteAppFileRequest
 * @return DeleteAppFileResponse
 */
DeleteAppFileResponse Client::deleteAppFile(const DeleteAppFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppFileWithOptions(request, runtime);
}

/**
 * @summary Delete file
 *
 * @description Query application instance information
 *
 * @param request DeleteAppInstanceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceFileResponse
 */
DeleteAppInstanceFileResponse Client::deleteAppInstanceFileWithOptions(const DeleteAppInstanceFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstanceFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstanceFileResponse>();
}

/**
 * @summary Delete file
 *
 * @description Query application instance information
 *
 * @param request DeleteAppInstanceFileRequest
 * @return DeleteAppInstanceFileResponse
 */
DeleteAppInstanceFileResponse Client::deleteAppInstanceFile(const DeleteAppInstanceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceFileWithOptions(request, runtime);
}

/**
 * @summary 删除消息通知场景
 *
 * @description 查询应用实例信息
 *
 * @param request DeleteAppNotificationSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppNotificationSceneResponse
 */
DeleteAppNotificationSceneResponse Client::deleteAppNotificationSceneWithOptions(const DeleteAppNotificationSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppNotificationScene"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppNotificationSceneResponse>();
}

/**
 * @summary 删除消息通知场景
 *
 * @description 查询应用实例信息
 *
 * @param request DeleteAppNotificationSceneRequest
 * @return DeleteAppNotificationSceneResponse
 */
DeleteAppNotificationSceneResponse Client::deleteAppNotificationScene(const DeleteAppNotificationSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppNotificationSceneWithOptions(request, runtime);
}

/**
 * @summary Delete Supabase key
 *
 * @description Operation resource corresponds to the supabase instance information
 *
 * @param request DeleteAppSupabaseSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppSupabaseSecretsResponse
 */
DeleteAppSupabaseSecretsResponse Client::deleteAppSupabaseSecretsWithOptions(const DeleteAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasKeysJson()) {
    query["KeysJson"] = request.getKeysJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppSupabaseSecrets"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppSupabaseSecretsResponse>();
}

/**
 * @summary Delete Supabase key
 *
 * @description Operation resource corresponds to the supabase instance information
 *
 * @param request DeleteAppSupabaseSecretsRequest
 * @return DeleteAppSupabaseSecretsResponse
 */
DeleteAppSupabaseSecretsResponse Client::deleteAppSupabaseSecrets(const DeleteAppSupabaseSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppSupabaseSecretsWithOptions(request, runtime);
}

/**
 * @summary Deletes a material folder.
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
 * @summary Deletes a material folder.
 *
 * @param request DeleteMaterialDirectoryRequest
 * @return DeleteMaterialDirectoryResponse
 */
DeleteMaterialDirectoryResponse Client::deleteMaterialDirectory(const DeleteMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a material generation task.
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
 * @summary Deletes a material generation task.
 *
 * @param request DeleteMaterialTaskRequest
 * @return DeleteMaterialTaskResponse
 */
DeleteMaterialTaskResponse Client::deleteMaterialTask(const DeleteMaterialTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMaterialTaskWithOptions(request, runtime);
}

/**
 * @summary Query website DNS resolution records. Supports CNAME resolution and verification resolution queries.
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
 * @summary Query website DNS resolution records. Supports CNAME resolution and verification resolution queries.
 *
 * @param request DescribeAppDomainDnsRecordRequest
 * @return DescribeAppDomainDnsRecordResponse
 */
DescribeAppDomainDnsRecordResponse Client::describeAppDomainDnsRecord(const DescribeAppDomainDnsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppDomainDnsRecordWithOptions(request, runtime);
}

/**
 * @summary Calls a general-purpose API operation.
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
 * @summary Calls a general-purpose API operation.
 *
 * @param request DispatchConsoleAPIForPartnerRequest
 * @return DispatchConsoleAPIForPartnerResponse
 */
DispatchConsoleAPIForPartnerResponse Client::dispatchConsoleAPIForPartner(const DispatchConsoleAPIForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dispatchConsoleAPIForPartnerWithOptions(request, runtime);
}

/**
 * @summary Edits a plug-in configuration.
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
 * @summary Edits a plug-in configuration.
 *
 * @param request EditPluginConfigRequest
 * @return EditPluginConfigResponse
 */
EditPluginConfigResponse Client::editPluginConfig(const EditPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editPluginConfigWithOptions(request, runtime);
}

/**
 * @summary Exports a material file.
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
 * @summary Exports a material file.
 *
 * @param request ExportMaterialFileRequest
 * @return ExportMaterialFileResponse
 */
ExportMaterialFileResponse Client::exportMaterialFile(const ExportMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportMaterialFileWithOptions(request, runtime);
}

/**
 * @summary WanXiaoZhi 2.0 - Obtain Site Preview URL
 *
 * @description WanXiaoZhi 2.0 - Obtain Site Preview URL
 *
 * @param request GetAIStaffPreviewUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIStaffPreviewUrlResponse
 */
GetAIStaffPreviewUrlResponse Client::getAIStaffPreviewUrlWithOptions(const GetAIStaffPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasRestart()) {
    body["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAIStaffPreviewUrl"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIStaffPreviewUrlResponse>();
}

/**
 * @summary WanXiaoZhi 2.0 - Obtain Site Preview URL
 *
 * @description WanXiaoZhi 2.0 - Obtain Site Preview URL
 *
 * @param request GetAIStaffPreviewUrlRequest
 * @return GetAIStaffPreviewUrlResponse
 */
GetAIStaffPreviewUrlResponse Client::getAIStaffPreviewUrl(const GetAIStaffPreviewUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIStaffPreviewUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieve code workspace details
 *
 * @description Query application instance information
 *
 * @param request GetAppCodeWorkspaceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppCodeWorkspaceDetailResponse
 */
GetAppCodeWorkspaceDetailResponse Client::getAppCodeWorkspaceDetailWithOptions(const GetAppCodeWorkspaceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppCodeWorkspaceDetail"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppCodeWorkspaceDetailResponse>();
}

/**
 * @summary Retrieve code workspace details
 *
 * @description Query application instance information
 *
 * @param request GetAppCodeWorkspaceDetailRequest
 * @return GetAppCodeWorkspaceDetailResponse
 */
GetAppCodeWorkspaceDetailResponse Client::getAppCodeWorkspaceDetail(const GetAppCodeWorkspaceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppCodeWorkspaceDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieve conversation details
 *
 * @description Wan Xiaozhi 2.0 API for creating an AI session
 *
 * @param request GetAppConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppConversationResponse
 */
GetAppConversationResponse Client::getAppConversationWithOptions(const GetAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBotId()) {
    query["BotId"] = request.getBotId();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppConversation"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppConversationResponse>();
}

/**
 * @summary Retrieve conversation details
 *
 * @description Wan Xiaozhi 2.0 API for creating an AI session
 *
 * @param request GetAppConversationRequest
 * @return GetAppConversationResponse
 */
GetAppConversationResponse Client::getAppConversation(const GetAppConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppConversationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the session lock status.
 *
 * @description Creates an AI session through the WanXiaoZhi 2.0 interface.
 *
 * @param request GetAppConversationLockStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppConversationLockStatusResponse
 */
GetAppConversationLockStatusResponse Client::getAppConversationLockStatusWithOptions(const GetAppConversationLockStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAppConversationLockStatus"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppConversationLockStatusResponse>();
}

/**
 * @summary Retrieves the session lock status.
 *
 * @description Creates an AI session through the WanXiaoZhi 2.0 interface.
 *
 * @param request GetAppConversationLockStatusRequest
 * @return GetAppConversationLockStatusResponse
 */
GetAppConversationLockStatusResponse Client::getAppConversationLockStatus(const GetAppConversationLockStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppConversationLockStatusWithOptions(request, runtime);
}

/**
 * @summary 查询数据库表结构
 *
 * @description 查询应用实例信息
 *
 * @param request GetAppDatabaseTableSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppDatabaseTableSchemasResponse
 */
GetAppDatabaseTableSchemasResponse Client::getAppDatabaseTableSchemasWithOptions(const GetAppDatabaseTableSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppDatabaseTableSchemas"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppDatabaseTableSchemasResponse>();
}

/**
 * @summary 查询数据库表结构
 *
 * @description 查询应用实例信息
 *
 * @param request GetAppDatabaseTableSchemasRequest
 * @return GetAppDatabaseTableSchemasResponse
 */
GetAppDatabaseTableSchemasResponse Client::getAppDatabaseTableSchemas(const GetAppDatabaseTableSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppDatabaseTableSchemasWithOptions(request, runtime);
}

/**
 * @summary 读取文件及修改时间
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetAppFileContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppFileContentResponse
 */
GetAppFileContentResponse Client::getAppFileContentWithOptions(const GetAppFileContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppFileContent"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppFileContentResponse>();
}

/**
 * @summary 读取文件及修改时间
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetAppFileContentRequest
 * @return GetAppFileContentResponse
 */
GetAppFileContentResponse Client::getAppFileContent(const GetAppFileContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppFileContentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a website builder application instance.
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
 * @summary Queries the details of a website builder application instance.
 *
 * @param request GetAppInstanceRequest
 * @return GetAppInstanceResponse
 */
GetAppInstanceResponse Client::getAppInstance(const GetAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceWithOptions(request, runtime);
}

/**
 * @summary GetAppInstanceEntitlement
 *
 * @description Query application instance information
 *
 * @param request GetAppInstanceEntitlementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceEntitlementResponse
 */
GetAppInstanceEntitlementResponse Client::getAppInstanceEntitlementWithOptions(const GetAppInstanceEntitlementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceEntitlement"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceEntitlementResponse>();
}

/**
 * @summary GetAppInstanceEntitlement
 *
 * @description Query application instance information
 *
 * @param request GetAppInstanceEntitlementRequest
 * @return GetAppInstanceEntitlementResponse
 */
GetAppInstanceEntitlementResponse Client::getAppInstanceEntitlement(const GetAppInstanceEntitlementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceEntitlementWithOptions(request, runtime);
}

/**
 * @summary Queries application instance information.
 *
 * @description Queries application instance information.
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
 * @summary Queries application instance information.
 *
 * @description Queries application instance information.
 *
 * @param request GetAppInstanceForAdminRequest
 * @return GetAppInstanceForAdminResponse
 */
GetAppInstanceForAdminResponse Client::getAppInstanceForAdmin(const GetAppInstanceForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceForAdminWithOptions(request, runtime);
}

/**
 * @summary Queries instance details.
 *
 * @description Retrieves the configuration information of a code generation plugin.
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
 * @summary Queries instance details.
 *
 * @description Retrieves the configuration information of a code generation plugin.
 *
 * @param request GetAppInstanceForPartnerRequest
 * @return GetAppInstanceForPartnerResponse
 */
GetAppInstanceForPartnerResponse Client::getAppInstanceForPartner(const GetAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Obtain a temporary short URL for the application
 *
 * @description Obtain configuration information of the code generation plugin
 *
 * @param request GetAppInstanceTempShortUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceTempShortUrlResponse
 */
GetAppInstanceTempShortUrlResponse Client::getAppInstanceTempShortUrlWithOptions(const GetAppInstanceTempShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceTempShortUrl"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceTempShortUrlResponse>();
}

/**
 * @summary Obtain a temporary short URL for the application
 *
 * @description Obtain configuration information of the code generation plugin
 *
 * @param request GetAppInstanceTempShortUrlRequest
 * @return GetAppInstanceTempShortUrlResponse
 */
GetAppInstanceTempShortUrlResponse Client::getAppInstanceTempShortUrl(const GetAppInstanceTempShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceTempShortUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration information of a plugin.
 *
 * @description Retrieves the configuration information of a code generation plugin.
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
 * @summary Retrieves the configuration information of a plugin.
 *
 * @description Retrieves the configuration information of a code generation plugin.
 *
 * @param request GetAppPluginConfigRequest
 * @return GetAppPluginConfigResponse
 */
GetAppPluginConfigResponse Client::getAppPluginConfig(const GetAppPluginConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppPluginConfigWithOptions(request, runtime);
}

/**
 * @summary Query publishing status
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppPublishStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppPublishStatusResponse
 */
GetAppPublishStatusResponse Client::getAppPublishStatusWithOptions(const GetAppPublishStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeployOrderId()) {
    query["DeployOrderId"] = request.getDeployOrderId();
  }

  if (!!request.hasWebsiteDomain()) {
    query["WebsiteDomain"] = request.getWebsiteDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppPublishStatus"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppPublishStatusResponse>();
}

/**
 * @summary Query publishing status
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppPublishStatusRequest
 * @return GetAppPublishStatusResponse
 */
GetAppPublishStatusResponse Client::getAppPublishStatus(const GetAppPublishStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppPublishStatusWithOptions(request, runtime);
}

/**
 * @summary Queries recommended commodities.
 *
 * @description Retrieves the configuration information of the code generation plugin.
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
 * @summary Queries recommended commodities.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request GetAppRecommendedCommoditiesRequest
 * @return GetAppRecommendedCommoditiesResponse
 */
GetAppRecommendedCommoditiesResponse Client::getAppRecommendedCommodities(const GetAppRecommendedCommoditiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppRecommendedCommoditiesWithOptions(request, runtime);
}

/**
 * @summary Queries requirements.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request GetAppRequirementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppRequirementResponse
 */
GetAppRequirementResponse Client::getAppRequirementWithOptions(const GetAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppRequirement"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppRequirementResponse>();
}

/**
 * @summary Queries requirements.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request GetAppRequirementRequest
 * @return GetAppRequirementResponse
 */
GetAppRequirementResponse Client::getAppRequirement(const GetAppRequirementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppRequirementWithOptions(request, runtime);
}

/**
 * @summary Obtain sandbox preview URL
 *
 * @description Wan Xiaozhi 2.0 - Obtain site preview URL
 *
 * @param request GetAppSandboxPreviewUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSandboxPreviewUrlResponse
 */
GetAppSandboxPreviewUrlResponse Client::getAppSandboxPreviewUrlWithOptions(const GetAppSandboxPreviewUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasRestart()) {
    body["Restart"] = request.getRestart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAppSandboxPreviewUrl"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSandboxPreviewUrlResponse>();
}

/**
 * @summary Obtain sandbox preview URL
 *
 * @description Wan Xiaozhi 2.0 - Obtain site preview URL
 *
 * @param request GetAppSandboxPreviewUrlRequest
 * @return GetAppSandboxPreviewUrlResponse
 */
GetAppSandboxPreviewUrlResponse Client::getAppSandboxPreviewUrl(const GetAppSandboxPreviewUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSandboxPreviewUrlWithOptions(request, runtime);
}

/**
 * @summary Query SEO index status
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppSeoStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSeoStatusResponse
 */
GetAppSeoStatusResponse Client::getAppSeoStatusWithOptions(const GetAppSeoStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasSeType()) {
    query["SeType"] = request.getSeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSeoStatus"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSeoStatusResponse>();
}

/**
 * @summary Query SEO index status
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppSeoStatusRequest
 * @return GetAppSeoStatusResponse
 */
GetAppSeoStatusResponse Client::getAppSeoStatus(const GetAppSeoStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSeoStatusWithOptions(request, runtime);
}

/**
 * @summary SEO Index Chart
 *
 * @description Obtain plugin configuration information
 *
 * @param request GetAppSeoTrendsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSeoTrendsResponse
 */
GetAppSeoTrendsResponse Client::getAppSeoTrendsWithOptions(const GetAppSeoTrendsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasSeType()) {
    query["SeType"] = request.getSeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSeoTrends"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSeoTrendsResponse>();
}

/**
 * @summary SEO Index Chart
 *
 * @description Obtain plugin configuration information
 *
 * @param request GetAppSeoTrendsRequest
 * @return GetAppSeoTrendsResponse
 */
GetAppSeoTrendsResponse Client::getAppSeoTrends(const GetAppSeoTrendsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSeoTrendsWithOptions(request, runtime);
}

/**
 * @summary Retrieve site map
 *
 * @description Retrieve QR code plugin configuration information
 *
 * @param request GetAppSitemapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSitemapResponse
 */
GetAppSitemapResponse Client::getAppSitemapWithOptions(const GetAppSitemapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasSeType()) {
    query["SeType"] = request.getSeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSitemap"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSitemapResponse>();
}

/**
 * @summary Retrieve site map
 *
 * @description Retrieve QR code plugin configuration information
 *
 * @param request GetAppSitemapRequest
 * @return GetAppSitemapResponse
 */
GetAppSitemapResponse Client::getAppSitemap(const GetAppSitemapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSitemapWithOptions(request, runtime);
}

/**
 * @summary Query Supabase authentication settings
 *
 * @description Query the auth configuration information of the Supabase instance corresponding to the resource.
 *
 * @param request GetAppSupabaseAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSupabaseAuthConfigResponse
 */
GetAppSupabaseAuthConfigResponse Client::getAppSupabaseAuthConfigWithOptions(const GetAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSupabaseAuthConfig"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSupabaseAuthConfigResponse>();
}

/**
 * @summary Query Supabase authentication settings
 *
 * @description Query the auth configuration information of the Supabase instance corresponding to the resource.
 *
 * @param request GetAppSupabaseAuthConfigRequest
 * @return GetAppSupabaseAuthConfigResponse
 */
GetAppSupabaseAuthConfigResponse Client::getAppSupabaseAuthConfig(const GetAppSupabaseAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSupabaseAuthConfigWithOptions(request, runtime);
}

/**
 * @summary Obtain Supabase instance information
 *
 * @description Query application instance information
 *
 * @param request GetAppSupabaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSupabaseInstanceResponse
 */
GetAppSupabaseInstanceResponse Client::getAppSupabaseInstanceWithOptions(const GetAppSupabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSupabaseInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSupabaseInstanceResponse>();
}

/**
 * @summary Obtain Supabase instance information
 *
 * @description Query application instance information
 *
 * @param request GetAppSupabaseInstanceRequest
 * @return GetAppSupabaseInstanceResponse
 */
GetAppSupabaseInstanceResponse Client::getAppSupabaseInstance(const GetAppSupabaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSupabaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Query Supabase keys
 *
 * @description The supabase instance information corresponding to the operated resource
 *
 * @param request GetAppSupabaseSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSupabaseSecretsResponse
 */
GetAppSupabaseSecretsResponse Client::getAppSupabaseSecretsWithOptions(const GetAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSupabaseSecrets"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSupabaseSecretsResponse>();
}

/**
 * @summary Query Supabase keys
 *
 * @description The supabase instance information corresponding to the operated resource
 *
 * @param request GetAppSupabaseSecretsRequest
 * @return GetAppSupabaseSecretsResponse
 */
GetAppSupabaseSecretsResponse Client::getAppSupabaseSecrets(const GetAppSupabaseSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSupabaseSecretsWithOptions(request, runtime);
}

/**
 * @summary Query template details
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppTemplateResponse
 */
GetAppTemplateResponse Client::getAppTemplateWithOptions(const GetAppTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppTemplate"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppTemplateResponse>();
}

/**
 * @summary Query template details
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request GetAppTemplateRequest
 * @return GetAppTemplateResponse
 */
GetAppTemplateResponse Client::getAppTemplate(const GetAppTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the Wanxiaozhi inspiration value service.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
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
 * @summary Queries the Wanxiaozhi inspiration value service.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @return GetAppTokenServiceResponse
 */
GetAppTokenServiceResponse Client::getAppTokenService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppTokenServiceWithOptions(runtime);
}

/**
 * @summary Retrieves the directory structure of a workspace.
 *
 * @description Queries application instance information.
 *
 * @param request GetAppWorkspaceDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppWorkspaceDirectoryResponse
 */
GetAppWorkspaceDirectoryResponse Client::getAppWorkspaceDirectoryWithOptions(const GetAppWorkspaceDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasDeep()) {
    body["Deep"] = request.getDeep();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAppWorkspaceDirectory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppWorkspaceDirectoryResponse>();
}

/**
 * @summary Retrieves the directory structure of a workspace.
 *
 * @description Queries application instance information.
 *
 * @param request GetAppWorkspaceDirectoryRequest
 * @return GetAppWorkspaceDirectoryResponse
 */
GetAppWorkspaceDirectoryResponse Client::getAppWorkspaceDirectory(const GetAppWorkspaceDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppWorkspaceDirectoryWithOptions(request, runtime);
}

/**
 * @summary Queries a logo creation task.
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
 * @summary Queries a logo creation task.
 *
 * @param request GetCreateLogoTaskRequest
 * @return GetCreateLogoTaskResponse
 */
GetCreateLogoTaskResponse Client::getCreateLogoTask(const GetCreateLogoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateLogoTaskWithOptions(request, runtime);
}

/**
 * @summary Provides a domain name query API for service providers.
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
 * @summary Provides a domain name query API for service providers.
 *
 * @param request GetDomainInfoForPartnerRequest
 * @return GetDomainInfoForPartnerResponse
 */
GetDomainInfoForPartnerResponse Client::getDomainInfoForPartner(const GetDomainInfoForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDomainInfoForPartnerWithOptions(request, runtime);
}

/**
 * @summary Queries the China Internet Content Provider (ICP) filing information of a domain name.
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
 * @summary Queries the China Internet Content Provider (ICP) filing information of a domain name.
 *
 * @param request GetIcpFilingInfoForPartnerRequest
 * @return GetIcpFilingInfoForPartnerResponse
 */
GetIcpFilingInfoForPartnerResponse Client::getIcpFilingInfoForPartner(const GetIcpFilingInfoForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIcpFilingInfoForPartnerWithOptions(request, runtime);
}

/**
 * @summary Queries the LLM Proxy configuration.
 *
 * @description Queries the Supabase instance configuration information for a specified resource.
 *
 * @param request GetLlmProxyConfigForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLlmProxyConfigForAdminResponse
 */
GetLlmProxyConfigForAdminResponse Client::getLlmProxyConfigForAdminWithOptions(const GetLlmProxyConfigForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasCapability()) {
    query["Capability"] = request.getCapability();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLlmProxyConfigForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLlmProxyConfigForAdminResponse>();
}

/**
 * @summary Queries the LLM Proxy configuration.
 *
 * @description Queries the Supabase instance configuration information for a specified resource.
 *
 * @param request GetLlmProxyConfigForAdminRequest
 * @return GetLlmProxyConfigForAdminResponse
 */
GetLlmProxyConfigForAdminResponse Client::getLlmProxyConfigForAdmin(const GetLlmProxyConfigForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLlmProxyConfigForAdminWithOptions(request, runtime);
}

/**
 * @summary Obtain miniapp authorization link
 *
 * @param request GetMiniAppAuthUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMiniAppAuthUrlResponse
 */
GetMiniAppAuthUrlResponse Client::getMiniAppAuthUrlWithOptions(const GetMiniAppAuthUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasRedirectUri()) {
    query["RedirectUri"] = request.getRedirectUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMiniAppAuthUrl"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMiniAppAuthUrlResponse>();
}

/**
 * @summary Obtain miniapp authorization link
 *
 * @param request GetMiniAppAuthUrlRequest
 * @return GetMiniAppAuthUrlResponse
 */
GetMiniAppAuthUrlResponse Client::getMiniAppAuthUrl(const GetMiniAppAuthUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMiniAppAuthUrlWithOptions(request, runtime);
}

/**
 * @summary Query the miniapp attached to a site
 *
 * @description Obtain the QR code plugin configuration information
 *
 * @param tmpReq GetMiniAppBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMiniAppBindingResponse
 */
GetMiniAppBindingResponse Client::getMiniAppBindingWithOptions(const GetMiniAppBindingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMiniAppBindingShrinkRequest request = GetMiniAppBindingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSettingKeys()) {
    request.setSettingKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSettingKeys(), "SettingKeys", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasSettingKeysShrink()) {
    query["SettingKeys"] = request.getSettingKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMiniAppBinding"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMiniAppBindingResponse>();
}

/**
 * @summary Query the miniapp attached to a site
 *
 * @description Obtain the QR code plugin configuration information
 *
 * @param request GetMiniAppBindingRequest
 * @return GetMiniAppBindingResponse
 */
GetMiniAppBindingResponse Client::getMiniAppBinding(const GetMiniAppBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMiniAppBindingWithOptions(request, runtime);
}

/**
 * @summary Query the miniapp attached to an application instance based on conditions
 *
 * @param request GetMiniAppBindingForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMiniAppBindingForAdminResponse
 */
GetMiniAppBindingForAdminResponse Client::getMiniAppBindingForAdminWithOptions(const GetMiniAppBindingForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasPlatformAppid()) {
    query["PlatformAppid"] = request.getPlatformAppid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMiniAppBindingForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMiniAppBindingForAdminResponse>();
}

/**
 * @summary Query the miniapp attached to an application instance based on conditions
 *
 * @param request GetMiniAppBindingForAdminRequest
 * @return GetMiniAppBindingForAdminResponse
 */
GetMiniAppBindingForAdminResponse Client::getMiniAppBindingForAdmin(const GetMiniAppBindingForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMiniAppBindingForAdminWithOptions(request, runtime);
}

/**
 * @summary 生成文件上传策略
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetOssUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssUploadPolicyResponse
 */
GetOssUploadPolicyResponse Client::getOssUploadPolicyWithOptions(const GetOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasScenario()) {
    body["Scenario"] = request.getScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOssUploadPolicy"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssUploadPolicyResponse>();
}

/**
 * @summary 生成文件上传策略
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetOssUploadPolicyRequest
 * @return GetOssUploadPolicyResponse
 */
GetOssUploadPolicyResponse Client::getOssUploadPolicy(const GetOssUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary 获取临时下载地址
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetTempDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTempDownloadUrlResponse
 */
GetTempDownloadUrlResponse Client::getTempDownloadUrlWithOptions(const GetTempDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOssKey()) {
    body["OssKey"] = request.getOssKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTempDownloadUrl"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTempDownloadUrlResponse>();
}

/**
 * @summary 获取临时下载地址
 *
 * @description 获取生码插件配置信息
 *
 * @param request GetTempDownloadUrlRequest
 * @return GetTempDownloadUrlResponse
 */
GetTempDownloadUrlResponse Client::getTempDownloadUrl(const GetTempDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTempDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Exchanges a temporary AccessKey pair for an access token.
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
 * @summary Exchanges a temporary AccessKey pair for an access token.
 *
 * @param request GetUserAccessTokenForPartnerRequest
 * @return GetUserAccessTokenForPartnerResponse
 */
GetUserAccessTokenForPartnerResponse Client::getUserAccessTokenForPartner(const GetUserAccessTokenForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAccessTokenForPartnerWithOptions(request, runtime);
}

/**
 * @summary Obtains temporary credentials for a partner to assume a user\\"s service-linked role.
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
 * @summary Obtains temporary credentials for a partner to assume a user\\"s service-linked role.
 *
 * @param request GetUserTmpIdentityForPartnerRequest
 * @return GetUserTmpIdentityForPartnerResponse
 */
GetUserTmpIdentityForPartnerResponse Client::getUserTmpIdentityForPartner(const GetUserTmpIdentityForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserTmpIdentityForPartnerWithOptions(request, runtime);
}

/**
 * @summary Performs introspection analysis on a China Chinese China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China.
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
 * @summary Performs introspection analysis on a China Chinese China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China.
 *
 * @param request IntrospectAppInstanceTicketForPreviewRequest
 * @return IntrospectAppInstanceTicketForPreviewResponse
 */
IntrospectAppInstanceTicketForPreviewResponse Client::introspectAppInstanceTicketForPreview(const IntrospectAppInstanceTicketForPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return introspectAppInstanceTicketForPreviewWithOptions(request, runtime);
}

/**
 * @summary Retrieves incremental SSE events for an AI agent conversation.
 *
 * @description Retrieves the streaming output results of an AI conversation.
 *
 * @param request ListAIStaffChatEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIStaffChatEventsResponse
 */
ListAIStaffChatEventsResponse Client::listAIStaffChatEventsWithOptions(const ListAIStaffChatEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  json body = {};
  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasLastEventId()) {
    body["LastEventId"] = request.getLastEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAIStaffChatEvents"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIStaffChatEventsResponse>();
}

/**
 * @summary Retrieves incremental SSE events for an AI agent conversation.
 *
 * @description Retrieves the streaming output results of an AI conversation.
 *
 * @param request ListAIStaffChatEventsRequest
 * @return ListAIStaffChatEventsResponse
 */
ListAIStaffChatEventsResponse Client::listAIStaffChatEvents(const ListAIStaffChatEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIStaffChatEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the conversation message list of an AI employee by paging.
 *
 * @description Queries the AI session history for WanXiaoZhi 2.0.
 *
 * @param request ListAIStaffChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIStaffChatMessagesResponse
 */
ListAIStaffChatMessagesResponse Client::listAIStaffChatMessagesWithOptions(const ListAIStaffChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  json body = {};
  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartCreateTime()) {
    body["StartCreateTime"] = request.getStartCreateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAIStaffChatMessages"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIStaffChatMessagesResponse>();
}

/**
 * @summary Queries the conversation message list of an AI employee by paging.
 *
 * @description Queries the AI session history for WanXiaoZhi 2.0.
 *
 * @param request ListAIStaffChatMessagesRequest
 * @return ListAIStaffChatMessagesResponse
 */
ListAIStaffChatMessagesResponse Client::listAIStaffChatMessages(const ListAIStaffChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIStaffChatMessagesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of application assistant agents.
 *
 * @description Queries application instance information.
 *
 * @param request ListAppAssistantAgentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppAssistantAgentsResponse
 */
ListAppAssistantAgentsResponse Client::listAppAssistantAgentsWithOptions(const ListAppAssistantAgentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasPlatformType()) {
    query["PlatformType"] = request.getPlatformType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppAssistantAgents"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppAssistantAgentsResponse>();
}

/**
 * @summary Queries the list of application assistant agents.
 *
 * @description Queries application instance information.
 *
 * @param request ListAppAssistantAgentsRequest
 * @return ListAppAssistantAgentsResponse
 */
ListAppAssistantAgentsResponse Client::listAppAssistantAgents(const ListAppAssistantAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppAssistantAgentsWithOptions(request, runtime);
}

/**
 * @summary Query the message list of a specified chat
 *
 * @description Wan Xiaozhi 2.0 - AI session history information query API
 *
 * @param request ListAppChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppChatMessagesResponse
 */
ListAppChatMessagesResponse Client::listAppChatMessagesWithOptions(const ListAppChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatId()) {
    query["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSectionId()) {
    query["SectionId"] = request.getSectionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppChatMessages"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppChatMessagesResponse>();
}

/**
 * @summary Query the message list of a specified chat
 *
 * @description Wan Xiaozhi 2.0 - AI session history information query API
 *
 * @param request ListAppChatMessagesRequest
 * @return ListAppChatMessagesResponse
 */
ListAppChatMessagesResponse Client::listAppChatMessages(const ListAppChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppChatMessagesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
 *
 * @summary The product information data.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
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
 * @deprecated OpenAPI ListAppCommoditySpecificationsForPartner is deprecated, please use WebsiteBuild::2025-04-29::ListAppCommoditySpecificationsV2ForPartner instead.
 *
 * @summary The product information data.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @return ListAppCommoditySpecificationsForPartnerResponse
 */
ListAppCommoditySpecificationsForPartnerResponse Client::listAppCommoditySpecificationsForPartner() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppCommoditySpecificationsForPartnerWithOptions(runtime);
}

/**
 * @summary Query Website Build Product Details
 *
 * @description Get QR code plugin configuration information
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
 * @summary Query Website Build Product Details
 *
 * @description Get QR code plugin configuration information
 *
 * @param request ListAppCommoditySpecificationsV2ForPartnerRequest
 * @return ListAppCommoditySpecificationsV2ForPartnerResponse
 */
ListAppCommoditySpecificationsV2ForPartnerResponse Client::listAppCommoditySpecificationsV2ForPartner(const ListAppCommoditySpecificationsV2ForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppCommoditySpecificationsV2ForPartnerWithOptions(request, runtime);
}

/**
 * @summary Paged query of conversation message list
 *
 * @description Wan Xiaozhi 2.0 - AI session history information query API
 *
 * @param request ListAppConversationMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppConversationMessagesResponse
 */
ListAppConversationMessagesResponse Client::listAppConversationMessagesWithOptions(const ListAppConversationMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartCreateTime()) {
    query["StartCreateTime"] = request.getStartCreateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppConversationMessages"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppConversationMessagesResponse>();
}

/**
 * @summary Paged query of conversation message list
 *
 * @description Wan Xiaozhi 2.0 - AI session history information query API
 *
 * @param request ListAppConversationMessagesRequest
 * @return ListAppConversationMessagesResponse
 */
ListAppConversationMessagesResponse Client::listAppConversationMessages(const ListAppConversationMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppConversationMessagesWithOptions(request, runtime);
}

/**
 * @summary Search session list
 *
 * @description Wan Xiaozhi 2.0 Create AI Session API
 *
 * @param request ListAppConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppConversationsResponse
 */
ListAppConversationsResponse Client::listAppConversationsWithOptions(const ListAppConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBotId()) {
    query["BotId"] = request.getBotId();
  }

  if (!!request.hasEndModifyTime()) {
    query["EndModifyTime"] = request.getEndModifyTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartModifyTime()) {
    query["StartModifyTime"] = request.getStartModifyTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppConversations"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppConversationsResponse>();
}

/**
 * @summary Search session list
 *
 * @description Wan Xiaozhi 2.0 Create AI Session API
 *
 * @param request ListAppConversationsRequest
 * @return ListAppConversationsResponse
 */
ListAppConversationsResponse Client::listAppConversations(const ListAppConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppConversationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of HTTP 301 status code redirects for a website.
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
 * @summary Queries the list of HTTP 301 status code redirects for a website.
 *
 * @param request ListAppDomainRedirectRecordsRequest
 * @return ListAppDomainRedirectRecordsResponse
 */
ListAppDomainRedirectRecordsResponse Client::listAppDomainRedirectRecords(const ListAppDomainRedirectRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppDomainRedirectRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of domain names bound to a website.
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

  if (!!request.hasDomainKeyword()) {
    query["DomainKeyword"] = request.getDomainKeyword();
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
 * @summary Queries the list of domain names bound to a website.
 *
 * @param request ListAppInstanceDomainsRequest
 * @return ListAppInstanceDomainsResponse
 */
ListAppInstanceDomainsResponse Client::listAppInstanceDomains(const ListAppInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of application instances.
 *
 * @param tmpReq ListAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstancesWithOptions(const ListAppInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppInstancesShrinkRequest request = ListAppInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizIds()) {
    request.setBizIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizIds(), "BizIds", "json"));
  }

  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizIdsShrink()) {
    query["BizIds"] = request.getBizIdsShrink();
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
 * @summary Queries the list of application instances.
 *
 * @param request ListAppInstancesRequest
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstances(const ListAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of Code Farmer plugin configurations
 *
 * @description Retrieve the configuration information of the code generation plugin
 *
 * @param request ListAppPluginConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppPluginConfigsResponse
 */
ListAppPluginConfigsResponse Client::listAppPluginConfigsWithOptions(const ListAppPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListAppPluginConfigs"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppPluginConfigsResponse>();
}

/**
 * @summary Retrieve the list of Code Farmer plugin configurations
 *
 * @description Retrieve the configuration information of the code generation plugin
 *
 * @param request ListAppPluginConfigsRequest
 * @return ListAppPluginConfigsResponse
 */
ListAppPluginConfigsResponse Client::listAppPluginConfigs(const ListAppPluginConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppPluginConfigsWithOptions(request, runtime);
}

/**
 * @summary List of code generation plugins
 *
 * @description Obtain configuration information of code generation plugins
 *
 * @param request ListAppPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppPluginsResponse
 */
ListAppPluginsResponse Client::listAppPluginsWithOptions(const ListAppPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppPlugins"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppPluginsResponse>();
}

/**
 * @summary List of code generation plugins
 *
 * @description Obtain configuration information of code generation plugins
 *
 * @param request ListAppPluginsRequest
 * @return ListAppPluginsResponse
 */
ListAppPluginsResponse Client::listAppPlugins(const ListAppPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppPluginsWithOptions(request, runtime);
}

/**
 * @summary Query publish history
 *
 * @description Query application instance information
 *
 * @param request ListAppPublishHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppPublishHistoryResponse
 */
ListAppPublishHistoryResponse Client::listAppPublishHistoryWithOptions(const ListAppPublishHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeployChannel()) {
    query["DeployChannel"] = request.getDeployChannel();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPublishEnv()) {
    query["PublishEnv"] = request.getPublishEnv();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSubchannel()) {
    query["Subchannel"] = request.getSubchannel();
  }

  if (!!request.hasWebsiteDomain()) {
    query["WebsiteDomain"] = request.getWebsiteDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppPublishHistory"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppPublishHistoryResponse>();
}

/**
 * @summary Query publish history
 *
 * @description Query application instance information
 *
 * @param request ListAppPublishHistoryRequest
 * @return ListAppPublishHistoryResponse
 */
ListAppPublishHistoryResponse Client::listAppPublishHistory(const ListAppPublishHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppPublishHistoryWithOptions(request, runtime);
}

/**
 * @summary Query dictionary list
 *
 * @description Query application instance information
 *
 * @param request ListAppTemplateDictsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppTemplateDictsResponse
 */
ListAppTemplateDictsResponse Client::listAppTemplateDictsWithOptions(const ListAppTemplateDictsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDictType()) {
    query["DictType"] = request.getDictType();
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
    {"action" , "ListAppTemplateDicts"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppTemplateDictsResponse>();
}

/**
 * @summary Query dictionary list
 *
 * @description Query application instance information
 *
 * @param request ListAppTemplateDictsRequest
 * @return ListAppTemplateDictsResponse
 */
ListAppTemplateDictsResponse Client::listAppTemplateDicts(const ListAppTemplateDictsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppTemplateDictsWithOptions(request, runtime);
}

/**
 * @summary Query template list
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request ListAppTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppTemplatesResponse
 */
ListAppTemplatesResponse Client::listAppTemplatesWithOptions(const ListAppTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasColorScheme()) {
    query["ColorScheme"] = request.getColorScheme();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.getIndustry();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductVersion()) {
    query["ProductVersion"] = request.getProductVersion();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppTemplates"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppTemplatesResponse>();
}

/**
 * @summary Query template list
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request ListAppTemplatesRequest
 * @return ListAppTemplatesResponse
 */
ListAppTemplatesResponse Client::listAppTemplates(const ListAppTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppTemplatesWithOptions(request, runtime);
}

/**
 * @summary Query Alipay ISV plugin configuration
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request ListIsvPaymentPluginConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIsvPaymentPluginConfigsResponse
 */
ListIsvPaymentPluginConfigsResponse Client::listIsvPaymentPluginConfigsWithOptions(const ListIsvPaymentPluginConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListIsvPaymentPluginConfigs"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIsvPaymentPluginConfigsResponse>();
}

/**
 * @summary Query Alipay ISV plugin configuration
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request ListIsvPaymentPluginConfigsRequest
 * @return ListIsvPaymentPluginConfigsResponse
 */
ListIsvPaymentPluginConfigsResponse Client::listIsvPaymentPluginConfigs(const ListIsvPaymentPluginConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIsvPaymentPluginConfigsWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications of a website building application instance.
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
 * @summary Modifies the specifications of a website building application instance.
 *
 * @param request ModifyAppInstanceSpecRequest
 * @return ModifyAppInstanceSpecResponse
 */
ModifyAppInstanceSpecResponse Client::modifyAppInstanceSpec(const ModifyAppInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modifies a material folder.
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
 * @summary Modifies a material folder.
 *
 * @param request ModifyMaterialDirectoryRequest
 * @return ModifyMaterialDirectoryResponse
 */
ModifyMaterialDirectoryResponse Client::modifyMaterialDirectory(const ModifyMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary Modifies a material file.
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
 * @summary Modifies a material file.
 *
 * @param request ModifyMaterialFileRequest
 * @return ModifyMaterialFileResponse
 */
ModifyMaterialFileResponse Client::modifyMaterialFile(const ModifyMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialFileWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of a material file.
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
 * @summary Modifies the status of a material file.
 *
 * @param request ModifyMaterialFileStatusRequest
 * @return ModifyMaterialFileStatusResponse
 */
ModifyMaterialFileStatusResponse Client::modifyMaterialFileStatus(const ModifyMaterialFileStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMaterialFileStatusWithOptions(request, runtime);
}

/**
 * @summary Moves a material file folder.
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
 * @summary Moves a material file folder.
 *
 * @param request MoveMaterialDirectoryRequest
 * @return MoveMaterialDirectoryResponse
 */
MoveMaterialDirectoryResponse Client::moveMaterialDirectory(const MoveMaterialDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveMaterialDirectoryWithOptions(request, runtime);
}

/**
 * @summary Moves media asset files.
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
 * @summary Moves media asset files.
 *
 * @param request MoveMaterialFileRequest
 * @return MoveMaterialFileResponse
 */
MoveMaterialFileResponse Client::moveMaterialFile(const MoveMaterialFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveMaterialFileWithOptions(request, runtime);
}

/**
 * @summary Triggers a data change notification (for admin).
 *
 * @description Queries application instance information.
 *
 * @param request NotifyAppNotificationForAdminRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NotifyAppNotificationForAdminResponse
 */
NotifyAppNotificationForAdminResponse Client::notifyAppNotificationForAdminWithOptions(const NotifyAppNotificationForAdminRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasPayload()) {
    query["Payload"] = request.getPayload();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "NotifyAppNotificationForAdmin"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NotifyAppNotificationForAdminResponse>();
}

/**
 * @summary Triggers a data change notification (for admin).
 *
 * @description Queries application instance information.
 *
 * @param request NotifyAppNotificationForAdminRequest
 * @return NotifyAppNotificationForAdminResponse
 */
NotifyAppNotificationForAdminResponse Client::notifyAppNotificationForAdmin(const NotifyAppNotificationForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return notifyAppNotificationForAdminWithOptions(request, runtime);
}

/**
 * @summary Delists a website: switches the CDN back-to-origin configuration for all domain names under the site to an offline page.
 *
 * @param request OfflineAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineAppInstanceResponse
 */
OfflineAppInstanceResponse Client::offlineAppInstanceWithOptions(const OfflineAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineAppInstanceResponse>();
}

/**
 * @summary Delists a website: switches the CDN back-to-origin configuration for all domain names under the site to an offline page.
 *
 * @param request OfflineAppInstanceRequest
 * @return OfflineAppInstanceResponse
 */
OfflineAppInstanceResponse Client::offlineAppInstance(const OfflineAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Resumes a website by restoring the CDN back-to-origin rewrite rules to the normal path for all domain names under the site.
 *
 * @param request OnlineAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineAppInstanceResponse
 */
OnlineAppInstanceResponse Client::onlineAppInstanceWithOptions(const OnlineAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnlineAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineAppInstanceResponse>();
}

/**
 * @summary Resumes a website by restoring the CDN back-to-origin rewrite rules to the normal path for all domain names under the site.
 *
 * @param request OnlineAppInstanceRequest
 * @return OnlineAppInstanceResponse
 */
OnlineAppInstanceResponse Client::onlineAppInstance(const OnlineAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Operates an application by a partner.
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
 * @summary Operates an application by a partner.
 *
 * @param request OperateAppInstanceForPartnerRequest
 * @return OperateAppInstanceForPartnerResponse
 */
OperateAppInstanceForPartnerResponse Client::operateAppInstanceForPartner(const OperateAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Operates application services on behalf of a partner.
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
 * @summary Operates application services on behalf of a partner.
 *
 * @param request OperateAppServiceForPartnerRequest
 * @return OperateAppServiceForPartnerResponse
 */
OperateAppServiceForPartnerResponse Client::operateAppServiceForPartner(const OperateAppServiceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppServiceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Switch template like statistics
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request OperateAppTemplateLikeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAppTemplateLikeResponse
 */
OperateAppTemplateLikeResponse Client::operateAppTemplateLikeWithOptions(const OperateAppTemplateLikeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLiked()) {
    query["Liked"] = request.getLiked();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateAppTemplateLike"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAppTemplateLikeResponse>();
}

/**
 * @summary Switch template like statistics
 *
 * @description Obtain barcode generation plugin configuration information
 *
 * @param request OperateAppTemplateLikeRequest
 * @return OperateAppTemplateLikeResponse
 */
OperateAppTemplateLikeResponse Client::operateAppTemplateLike(const OperateAppTemplateLikeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAppTemplateLikeWithOptions(request, runtime);
}

/**
 * @summary Operates on the Supabase instance information corresponding to a resource.
 *
 * @description The Supabase instance information corresponding to the operated resource.
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

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
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
 * @summary Operates on the Supabase instance information corresponding to a resource.
 *
 * @description The Supabase instance information corresponding to the operated resource.
 *
 * @param request OperateSupabaseForAdminRequest
 * @return OperateSupabaseForAdminResponse
 */
OperateSupabaseForAdminResponse Client::operateSupabaseForAdmin(const OperateSupabaseForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateSupabaseForAdminWithOptions(request, runtime);
}

/**
 * @summary Publish application instance
 *
 * @description Query application instance information
 *
 * @param request PublishAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishAppInstanceResponse
 */
PublishAppInstanceResponse Client::publishAppInstanceWithOptions(const PublishAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeployChannel()) {
    query["DeployChannel"] = request.getDeployChannel();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLogicalNumber()) {
    query["LogicalNumber"] = request.getLogicalNumber();
  }

  if (!!request.hasPublishNumber()) {
    query["PublishNumber"] = request.getPublishNumber();
  }

  if (!!request.hasWeappAction()) {
    query["WeappAction"] = request.getWeappAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishAppInstanceResponse>();
}

/**
 * @summary Publish application instance
 *
 * @description Query application instance information
 *
 * @param request PublishAppInstanceRequest
 * @return PublishAppInstanceResponse
 */
PublishAppInstanceResponse Client::publishAppInstance(const PublishAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Pushes resource metering data.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
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
 * @summary Pushes resource metering data.
 *
 * @description Queries the Supabase instance information corresponding to a resource.
 *
 * @param request PushResourceMeasureRequest
 * @return PushResourceMeasureResponse
 */
PushResourceMeasureResponse Client::pushResourceMeasure(const PushResourceMeasureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushResourceMeasureWithOptions(request, runtime);
}

/**
 * @summary Queries the details of inspiration point acquisition (quota account list, including expiration flags).
 *
 * @description Queries the Supabase instance information associated with a resource.
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
 * @summary Queries the details of inspiration point acquisition (quota account list, including expiration flags).
 *
 * @description Queries the Supabase instance information associated with a resource.
 *
 * @param request QueryInspirationAccountDetailsRequest
 * @return QueryInspirationAccountDetailsResponse
 */
QueryInspirationAccountDetailsResponse Client::queryInspirationAccountDetails(const QueryInspirationAccountDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationAccountDetailsWithOptions(request, runtime);
}

/**
 * @summary Query Inspiration Balance Overview
 *
 * @description Query the Supabase instance information corresponding to the resource.
 *
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
 * @summary Query Inspiration Balance Overview
 *
 * @description Query the Supabase instance information corresponding to the resource.
 *
 * @return QueryInspirationBalanceResponse
 */
QueryInspirationBalanceResponse Client::queryInspirationBalance() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationBalanceWithOptions(runtime);
}

/**
 * @summary Queries the details of inspiration point consumption.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
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
 * @summary Queries the details of inspiration point consumption.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request QueryInspirationConsumeRecordsRequest
 * @return QueryInspirationConsumeRecordsResponse
 */
QueryInspirationConsumeRecordsResponse Client::queryInspirationConsumeRecords(const QueryInspirationConsumeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInspirationConsumeRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the material folder tree.
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
 * @summary Queries the material folder tree.
 *
 * @param request QueryMaterialDirectoryTreeRequest
 * @return QueryMaterialDirectoryTreeResponse
 */
QueryMaterialDirectoryTreeResponse Client::queryMaterialDirectoryTree(const QueryMaterialDirectoryTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialDirectoryTreeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a material file.
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
 * @summary Queries the details of a material file.
 *
 * @param request QueryMaterialFileDetailRequest
 * @return QueryMaterialFileDetailResponse
 */
QueryMaterialFileDetailResponse Client::queryMaterialFileDetail(const QueryMaterialFileDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of material files.
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
 * @summary Queries the list of material files.
 *
 * @param request QueryMaterialFileListRequest
 * @return QueryMaterialFileListResponse
 */
QueryMaterialFileListResponse Client::queryMaterialFileList(const QueryMaterialFileListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileListWithOptions(request, runtime);
}

/**
 * @summary Queries the file overview.
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
 * @summary Queries the file overview.
 *
 * @param request QueryMaterialFileSummaryInfoRequest
 * @return QueryMaterialFileSummaryInfoResponse
 */
QueryMaterialFileSummaryInfoResponse Client::queryMaterialFileSummaryInfo(const QueryMaterialFileSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialFileSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a material generation task.
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
 * @summary Queries the details of a material generation task.
 *
 * @param request QueryMaterialTaskDetailRequest
 * @return QueryMaterialTaskDetailResponse
 */
QueryMaterialTaskDetailResponse Client::queryMaterialTaskDetail(const QueryMaterialTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Query Material Generation Task List
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
 * @summary Query Material Generation Task List
 *
 * @param request QueryMaterialTaskListRequest
 * @return QueryMaterialTaskListResponse
 */
QueryMaterialTaskListResponse Client::queryMaterialTaskList(const QueryMaterialTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMaterialTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the auth configuration of a Supabase instance associated with a resource.
 *
 * @description Queries the auth configuration of a Supabase instance associated with a resource.
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
 * @summary Queries the auth configuration of a Supabase instance associated with a resource.
 *
 * @description Queries the auth configuration of a Supabase instance associated with a resource.
 *
 * @param request QuerySupabaseAuthConfigsForAdminRequest
 * @return QuerySupabaseAuthConfigsForAdminResponse
 */
QuerySupabaseAuthConfigsForAdminResponse Client::querySupabaseAuthConfigsForAdmin(const QuerySupabaseAuthConfigsForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseAuthConfigsForAdminWithOptions(request, runtime);
}

/**
 * @summary Queries the Supabase instance configuration information for a specified resource.
 *
 * @description Queries the Supabase instance configuration information for a specified resource.
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
 * @summary Queries the Supabase instance configuration information for a specified resource.
 *
 * @description Queries the Supabase instance configuration information for a specified resource.
 *
 * @param request QuerySupabaseConfigsForAdminRequest
 * @return QuerySupabaseConfigsForAdminResponse
 */
QuerySupabaseConfigsForAdminResponse Client::querySupabaseConfigsForAdmin(const QuerySupabaseConfigsForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseConfigsForAdminWithOptions(request, runtime);
}

/**
 * @summary Queries the Supabase instance information for a specified resource.
 *
 * @description Queries the Supabase instance information for a specified resource.
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
 * @summary Queries the Supabase instance information for a specified resource.
 *
 * @description Queries the Supabase instance information for a specified resource.
 *
 * @param request QuerySupabaseInstanceInfoForAdminRequest
 * @return QuerySupabaseInstanceInfoForAdminResponse
 */
QuerySupabaseInstanceInfoForAdminResponse Client::querySupabaseInstanceInfoForAdmin(const QuerySupabaseInstanceInfoForAdminRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupabaseInstanceInfoForAdminWithOptions(request, runtime);
}

/**
 * @summary Reconnects an AI conversation.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request ReconnectAppChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReconnectAppChatResponse
 */
FutureGenerator<ReconnectAppChatResponse> Client::reconnectAppChatWithSSE(const ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasLastEventId()) {
    body["LastEventId"] = request.getLastEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReconnectAppChat"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ReconnectAppChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Reconnects an AI conversation.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request ReconnectAppChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReconnectAppChatResponse
 */
ReconnectAppChatResponse Client::reconnectAppChatWithOptions(const ReconnectAppChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChatId()) {
    body["ChatId"] = request.getChatId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasLastEventId()) {
    body["LastEventId"] = request.getLastEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReconnectAppChat"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReconnectAppChatResponse>();
}

/**
 * @summary Reconnects an AI conversation.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request ReconnectAppChatRequest
 * @return ReconnectAppChatResponse
 */
ReconnectAppChatResponse Client::reconnectAppChat(const ReconnectAppChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reconnectAppChatWithOptions(request, runtime);
}

/**
 * @summary Refreshes the password-free login ticket for a website building instance.
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
 * @summary Refreshes the password-free login ticket for a website building instance.
 *
 * @param request RefreshAppInstanceTicketRequest
 * @return RefreshAppInstanceTicketResponse
 */
RefreshAppInstanceTicketResponse Client::refreshAppInstanceTicket(const RefreshAppInstanceTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshAppInstanceTicketWithOptions(request, runtime);
}

/**
 * @summary Processes a refund for a channel partner website building service.
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
 * @summary Processes a refund for a channel partner website building service.
 *
 * @param request RefundAppInstanceForPartnerRequest
 * @return RefundAppInstanceForPartnerResponse
 */
RefundAppInstanceForPartnerResponse Client::refundAppInstanceForPartner(const RefundAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refundAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Renews a website builder application instance.
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
 * @summary Renews a website builder application instance.
 *
 * @param request RenewAppInstanceRequest
 * @return RenewAppInstanceResponse
 */
RenewAppInstanceResponse Client::renewAppInstance(const RenewAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews or refreshes a sandbox environment.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request RenewAppSandboxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppSandboxResponse
 */
RenewAppSandboxResponse Client::renewAppSandboxWithOptions(const RenewAppSandboxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAppSandbox"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAppSandboxResponse>();
}

/**
 * @summary Renews or refreshes a sandbox environment.
 *
 * @description Retrieves the configuration information of the code generation plug-in.
 *
 * @param request RenewAppSandboxRequest
 * @return RenewAppSandboxResponse
 */
RenewAppSandboxResponse Client::renewAppSandbox(const RenewAppSandboxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAppSandboxWithOptions(request, runtime);
}

/**
 * @summary Code snapshot rollback
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request RollbackAppCodeSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackAppCodeSnapshotResponse
 */
RollbackAppCodeSnapshotResponse Client::rollbackAppCodeSnapshotWithOptions(const RollbackAppCodeSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTargetLogicalNumber()) {
    query["TargetLogicalNumber"] = request.getTargetLogicalNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackAppCodeSnapshot"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackAppCodeSnapshotResponse>();
}

/**
 * @summary Code snapshot rollback
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request RollbackAppCodeSnapshotRequest
 * @return RollbackAppCodeSnapshotResponse
 */
RollbackAppCodeSnapshotResponse Client::rollbackAppCodeSnapshot(const RollbackAppCodeSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackAppCodeSnapshotWithOptions(request, runtime);
}

/**
 * @summary Roll back application instance deployment
 *
 * @description Query application instance information
 *
 * @param request RollbackAppInstancePublishRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackAppInstancePublishResponse
 */
RollbackAppInstancePublishResponse Client::rollbackAppInstancePublishWithOptions(const RollbackAppInstancePublishRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDeployChannel()) {
    query["DeployChannel"] = request.getDeployChannel();
  }

  if (!!request.hasPublishNumber()) {
    query["PublishNumber"] = request.getPublishNumber();
  }

  if (!!request.hasQuickRollback()) {
    query["QuickRollback"] = request.getQuickRollback();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackAppInstancePublish"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackAppInstancePublishResponse>();
}

/**
 * @summary Roll back application instance deployment
 *
 * @description Query application instance information
 *
 * @param request RollbackAppInstancePublishRequest
 * @return RollbackAppInstancePublishResponse
 */
RollbackAppInstancePublishResponse Client::rollbackAppInstancePublish(const RollbackAppInstancePublishRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackAppInstancePublishWithOptions(request, runtime);
}

/**
 * @summary Save Requirement
 *
 * @description Get code generation plugin configuration information
 *
 * @param request SaveAppRequirementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAppRequirementResponse
 */
SaveAppRequirementResponse Client::saveAppRequirementWithOptions(const SaveAppRequirementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  json body = {};
  if (!!request.hasPrd()) {
    body["Prd"] = request.getPrd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveAppRequirement"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAppRequirementResponse>();
}

/**
 * @summary Save Requirement
 *
 * @description Get code generation plugin configuration information
 *
 * @param request SaveAppRequirementRequest
 * @return SaveAppRequirementResponse
 */
SaveAppRequirementResponse Client::saveAppRequirement(const SaveAppRequirementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAppRequirementWithOptions(request, runtime);
}

/**
 * @summary Save Supabase key
 *
 * @description The supabase instance information corresponding to the operation resource
 *
 * @param request SaveAppSupabaseSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAppSupabaseSecretsResponse
 */
SaveAppSupabaseSecretsResponse Client::saveAppSupabaseSecretsWithOptions(const SaveAppSupabaseSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasSecretsJson()) {
    query["SecretsJson"] = request.getSecretsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAppSupabaseSecrets"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAppSupabaseSecretsResponse>();
}

/**
 * @summary Save Supabase key
 *
 * @description The supabase instance information corresponding to the operation resource
 *
 * @param request SaveAppSupabaseSecretsRequest
 * @return SaveAppSupabaseSecretsResponse
 */
SaveAppSupabaseSecretsResponse Client::saveAppSupabaseSecrets(const SaveAppSupabaseSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAppSupabaseSecretsWithOptions(request, runtime);
}

/**
 * @summary Searches for images.
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
 * @summary Searches for images.
 *
 * @param request SearchImageRequest
 * @return SearchImageResponse
 */
SearchImageResponse Client::searchImage(const SearchImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchImageWithOptions(request, runtime);
}

/**
 * @summary Sets the SSL certificate for a website.
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
 * @summary Sets the SSL certificate for a website.
 *
 * @param request SetAppDomainCertificateRequest
 * @return SetAppDomainCertificateResponse
 */
SetAppDomainCertificateResponse Client::setAppDomainCertificate(const SetAppDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary 提交SEO索引
 *
 * @description 获取生码插件配置信息
 *
 * @param request SubmitAppSeoIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAppSeoIndexResponse
 */
SubmitAppSeoIndexResponse Client::submitAppSeoIndexWithOptions(const SubmitAppSeoIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasSeType()) {
    query["SeType"] = request.getSeType();
  }

  if (!!request.hasSubmitLater()) {
    query["SubmitLater"] = request.getSubmitLater();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAppSeoIndex"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAppSeoIndexResponse>();
}

/**
 * @summary 提交SEO索引
 *
 * @description 获取生码插件配置信息
 *
 * @param request SubmitAppSeoIndexRequest
 * @return SubmitAppSeoIndexResponse
 */
SubmitAppSeoIndexResponse Client::submitAppSeoIndex(const SubmitAppSeoIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAppSeoIndexWithOptions(request, runtime);
}

/**
 * @summary Submits a material generation task.
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
 * @summary Submits a material generation task.
 *
 * @param request SubmitMaterialTaskRequest
 * @return SubmitMaterialTaskResponse
 */
SubmitMaterialTaskResponse Client::submitMaterialTask(const SubmitMaterialTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMaterialTaskWithOptions(request, runtime);
}

/**
 * @summary 切换到指定对话
 *
 * @description 万小智2.0创建AI会话接口
 *
 * @param request SwitchAppConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchAppConversationResponse
 */
SwitchAppConversationResponse Client::switchAppConversationWithOptions(const SwitchAppConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBotId()) {
    query["BotId"] = request.getBotId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchAppConversation"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchAppConversationResponse>();
}

/**
 * @summary 切换到指定对话
 *
 * @description 万小智2.0创建AI会话接口
 *
 * @param request SwitchAppConversationRequest
 * @return SwitchAppConversationResponse
 */
SwitchAppConversationResponse Client::switchAppConversation(const SwitchAppConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchAppConversationWithOptions(request, runtime);
}

/**
 * @summary Synchronizes an application instance from a partner.
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
 * @summary Synchronizes an application instance from a partner.
 *
 * @param request SyncAppInstanceForPartnerRequest
 * @return SyncAppInstanceForPartnerResponse
 */
SyncAppInstanceForPartnerResponse Client::syncAppInstanceForPartner(const SyncAppInstanceForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncAppInstanceForPartnerWithOptions(request, runtime);
}

/**
 * @summary Unbinds a domain name from a website and deletes the related DNS records.
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
 * @summary Unbinds a domain name from a website and deletes the related DNS records.
 *
 * @param request UnbindAppDomainRequest
 * @return UnbindAppDomainResponse
 */
UnbindAppDomainResponse Client::unbindAppDomain(const UnbindAppDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAppDomainWithOptions(request, runtime);
}

/**
 * @summary Update message content
 *
 * @description Wan Xiaozhi 2.0 - AI session history query API
 *
 * @param request UpdateAppChatMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppChatMessageResponse
 */
UpdateAppChatMessageResponse Client::updateAppChatMessageWithOptions(const UpdateAppChatMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddedMetaData()) {
    query["AddedMetaData"] = request.getAddedMetaData();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppChatMessage"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppChatMessageResponse>();
}

/**
 * @summary Update message content
 *
 * @description Wan Xiaozhi 2.0 - AI session history query API
 *
 * @param request UpdateAppChatMessageRequest
 * @return UpdateAppChatMessageResponse
 */
UpdateAppChatMessageResponse Client::updateAppChatMessage(const UpdateAppChatMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppChatMessageWithOptions(request, runtime);
}

/**
 * @summary Edit JSX Code
 *
 * @description Retrieve the configuration information of the code generation plugin
 *
 * @param request UpdateAppCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppCodeResponse
 */
UpdateAppCodeResponse Client::updateAppCodeWithOptions(const UpdateAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppCode"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppCodeResponse>();
}

/**
 * @summary Edit JSX Code
 *
 * @description Retrieve the configuration information of the code generation plugin
 *
 * @param request UpdateAppCodeRequest
 * @return UpdateAppCodeResponse
 */
UpdateAppCodeResponse Client::updateAppCode(const UpdateAppCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppCodeWithOptions(request, runtime);
}

/**
 * @summary Updates a file.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request UpdateAppFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppFileResponse
 */
UpdateAppFileResponse Client::updateAppFileWithOptions(const UpdateAppFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppFileResponse>();
}

/**
 * @summary Updates a file.
 *
 * @description Retrieves the configuration information of the code generation plugin.
 *
 * @param request UpdateAppFileRequest
 * @return UpdateAppFileResponse
 */
UpdateAppFileResponse Client::updateAppFile(const UpdateAppFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppFileWithOptions(request, runtime);
}

/**
 * @summary Upgrade/Downgrade website instance.
 *
 * @description Query application instance information
 *
 * @param tmpReq UpdateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppInstanceResponse
 */
UpdateAppInstanceResponse Client::updateAppInstanceWithOptions(const UpdateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAppInstanceShrinkRequest request = UpdateAppInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

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

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasIconUrl()) {
    query["IconUrl"] = request.getIconUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasThumbnailUrl()) {
    query["ThumbnailUrl"] = request.getThumbnailUrl();
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
    {"action" , "UpdateAppInstance"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppInstanceResponse>();
}

/**
 * @summary Upgrade/Downgrade website instance.
 *
 * @description Query application instance information
 *
 * @param request UpdateAppInstanceRequest
 * @return UpdateAppInstanceResponse
 */
UpdateAppInstanceResponse Client::updateAppInstance(const UpdateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Update SEO Index Status
 *
 * @description WanXiaoZhi 2.0 AI Conversation
 *
 * @param request UpdateAppSeoStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppSeoStatusResponse
 */
UpdateAppSeoStatusResponse Client::updateAppSeoStatusWithOptions(const UpdateAppSeoStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasSeAuthInfo()) {
    query["SeAuthInfo"] = request.getSeAuthInfo();
  }

  if (!!request.hasSeType()) {
    query["SeType"] = request.getSeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppSeoStatus"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppSeoStatusResponse>();
}

/**
 * @summary Update SEO Index Status
 *
 * @description WanXiaoZhi 2.0 AI Conversation
 *
 * @param request UpdateAppSeoStatusRequest
 * @return UpdateAppSeoStatusResponse
 */
UpdateAppSeoStatusResponse Client::updateAppSeoStatus(const UpdateAppSeoStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppSeoStatusWithOptions(request, runtime);
}

/**
 * @summary Update Supabase authentication configuration
 *
 * @description Query the auth configuration information of the Supabase instance corresponding to the resource
 *
 * @param request UpdateAppSupabaseAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppSupabaseAuthConfigResponse
 */
UpdateAppSupabaseAuthConfigResponse Client::updateAppSupabaseAuthConfigWithOptions(const UpdateAppSupabaseAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasConfigsJson()) {
    query["ConfigsJson"] = request.getConfigsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppSupabaseAuthConfig"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppSupabaseAuthConfigResponse>();
}

/**
 * @summary Update Supabase authentication configuration
 *
 * @description Query the auth configuration information of the Supabase instance corresponding to the resource
 *
 * @param request UpdateAppSupabaseAuthConfigRequest
 * @return UpdateAppSupabaseAuthConfigResponse
 */
UpdateAppSupabaseAuthConfigResponse Client::updateAppSupabaseAuthConfig(const UpdateAppSupabaseAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppSupabaseAuthConfigWithOptions(request, runtime);
}

/**
 * @summary Update Supabase key
 *
 * @description Operation resource corresponds to the supabase instance information
 *
 * @param request UpdateAppSupabaseSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppSupabaseSecretResponse
 */
UpdateAppSupabaseSecretResponse Client::updateAppSupabaseSecretWithOptions(const UpdateAppSupabaseSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasSecretKey()) {
    query["SecretKey"] = request.getSecretKey();
  }

  if (!!request.hasSecretName()) {
    query["SecretName"] = request.getSecretName();
  }

  if (!!request.hasSecretType()) {
    query["SecretType"] = request.getSecretType();
  }

  if (!!request.hasSecretValue()) {
    query["SecretValue"] = request.getSecretValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppSupabaseSecret"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppSupabaseSecretResponse>();
}

/**
 * @summary Update Supabase key
 *
 * @description Operation resource corresponds to the supabase instance information
 *
 * @param request UpdateAppSupabaseSecretRequest
 * @return UpdateAppSupabaseSecretResponse
 */
UpdateAppSupabaseSecretResponse Client::updateAppSupabaseSecret(const UpdateAppSupabaseSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppSupabaseSecretWithOptions(request, runtime);
}

/**
 * @summary Update miniapp binding information
 *
 * @param request UpdateMiniAppBindingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMiniAppBindingResponse
 */
UpdateMiniAppBindingResponse Client::updateMiniAppBindingWithOptions(const UpdateMiniAppBindingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasSettingKey()) {
    query["SettingKey"] = request.getSettingKey();
  }

  if (!!request.hasSettingValue()) {
    query["SettingValue"] = request.getSettingValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMiniAppBinding"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMiniAppBindingResponse>();
}

/**
 * @summary Update miniapp binding information
 *
 * @param request UpdateMiniAppBindingRequest
 * @return UpdateMiniAppBindingResponse
 */
UpdateMiniAppBindingResponse Client::updateMiniAppBinding(const UpdateMiniAppBindingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMiniAppBindingWithOptions(request, runtime);
}

/**
 * @summary Upload to the site root directory
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request UploadAppSiteValidationFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAppSiteValidationFileResponse
 */
UploadAppSiteValidationFileResponse Client::uploadAppSiteValidationFileWithOptions(const UploadAppSiteValidationFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasFile()) {
    query["File"] = request.getFile();
  }

  if (!!request.hasFileContent()) {
    query["FileContent"] = request.getFileContent();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasSiteHost()) {
    query["SiteHost"] = request.getSiteHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadAppSiteValidationFile"},
    {"version" , "2025-04-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadAppSiteValidationFileResponse>();
}

/**
 * @summary Upload to the site root directory
 *
 * @description Obtain the configuration information of the code generation plugin
 *
 * @param request UploadAppSiteValidationFileRequest
 * @return UploadAppSiteValidationFileResponse
 */
UploadAppSiteValidationFileResponse Client::uploadAppSiteValidationFile(const UploadAppSiteValidationFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadAppSiteValidationFileWithOptions(request, runtime);
}

/**
 * @summary Uploads a material file.
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
 * @summary Uploads a material file.
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