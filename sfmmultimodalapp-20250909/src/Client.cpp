#include <darabonba/Core.hpp>
#include <alibabacloud/SfmMultiModalApp20250909.hpp>
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
using namespace AlibabaCloud::SfmMultiModalApp20250909::Models;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{

AlibabaCloud::SfmMultiModalApp20250909::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("sfmmultimodalapp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 指令创建
 *
 * @param tmpReq CreateCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCommandResponse
 */
CreateCommandResponse Client::createCommandWithOptions(const CreateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCommandShrinkRequest request = CreateCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasToolExamples()) {
    request.setToolExamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toolExamples(), "ToolExamples", "json"));
  }

  if (!!tmpReq.hasToolParams()) {
    request.setToolParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toolParams(), "ToolParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasToolDescription()) {
    query["ToolDescription"] = request.toolDescription();
  }

  if (!!request.hasToolExamplesShrink()) {
    query["ToolExamples"] = request.toolExamplesShrink();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.toolName();
  }

  if (!!request.hasToolParamsShrink()) {
    query["ToolParams"] = request.toolParamsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCommand"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCommandResponse>();
}

/**
 * @summary 指令创建
 *
 * @param request CreateCommandRequest
 * @return CreateCommandResponse
 */
CreateCommandResponse Client::createCommand(const CreateCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCommandWithOptions(request, runtime);
}

/**
 * @summary 创建多模态应用
 *
 * @param tmpReq CreateMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMmAppResponse
 */
CreateMmAppResponse Client::createMmAppWithOptions(const CreateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMmAppShrinkRequest request = CreateMmAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBindingConfig()) {
    request.setBindingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bindingConfig(), "BindingConfig", "json"));
  }

  if (!!tmpReq.hasConversationConfig()) {
    request.setConversationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.conversationConfig(), "ConversationConfig", "json"));
  }

  if (!!tmpReq.hasModelConfig()) {
    request.setModelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelConfig(), "ModelConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasBindingConfigShrink()) {
    query["BindingConfig"] = request.bindingConfigShrink();
  }

  if (!!request.hasConversationConfigShrink()) {
    query["ConversationConfig"] = request.conversationConfigShrink();
  }

  if (!!request.hasModelConfigShrink()) {
    query["ModelConfig"] = request.modelConfigShrink();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMmAppResponse>();
}

/**
 * @summary 创建多模态应用
 *
 * @param request CreateMmAppRequest
 * @return CreateMmAppResponse
 */
CreateMmAppResponse Client::createMmApp(const CreateMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMmAppWithOptions(request, runtime);
}

/**
 * @summary 删除指令
 *
 * @param request DeleteCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCommandResponse
 */
DeleteCommandResponse Client::deleteCommandWithOptions(const DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.toolId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCommand"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCommandResponse>();
}

/**
 * @summary 删除指令
 *
 * @param request DeleteCommandRequest
 * @return DeleteCommandResponse
 */
DeleteCommandResponse Client::deleteCommand(const DeleteCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCommandWithOptions(request, runtime);
}

/**
 * @summary 删除多模态应用
 *
 * @param request DeleteMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMmAppResponse
 */
DeleteMmAppResponse Client::deleteMmAppWithOptions(const DeleteMmAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMmAppResponse>();
}

/**
 * @summary 删除多模态应用
 *
 * @param request DeleteMmAppRequest
 * @return DeleteMmAppResponse
 */
DeleteMmAppResponse Client::deleteMmApp(const DeleteMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMmAppWithOptions(request, runtime);
}

/**
 * @summary 指令详情
 *
 * @param request DescribeCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommandResponse
 */
DescribeCommandResponse Client::describeCommandWithOptions(const DescribeCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.toolId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommand"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommandResponse>();
}

/**
 * @summary 指令详情
 *
 * @param request DescribeCommandRequest
 * @return DescribeCommandResponse
 */
DescribeCommandResponse Client::describeCommand(const DescribeCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommandWithOptions(request, runtime);
}

/**
 * @summary 多模态应用详情
 *
 * @param request DescribeMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMmAppResponse
 */
DescribeMmAppResponse Client::describeMmAppWithOptions(const DescribeMmAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMmAppResponse>();
}

/**
 * @summary 多模态应用详情
 *
 * @param request DescribeMmAppRequest
 * @return DescribeMmAppResponse
 */
DescribeMmAppResponse Client::describeMmApp(const DescribeMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMmAppWithOptions(request, runtime);
}

/**
 * @summary 指令列表
 *
 * @param request ListCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommandResponse
 */
ListCommandResponse Client::listCommandWithOptions(const ListCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.toolName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommand"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommandResponse>();
}

/**
 * @summary 指令列表
 *
 * @param request ListCommandRequest
 * @return ListCommandResponse
 */
ListCommandResponse Client::listCommand(const ListCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCommandWithOptions(request, runtime);
}

/**
 * @summary 获取多模态应用列表
 *
 * @param request ListMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMmAppResponse
 */
ListMmAppResponse Client::listMmAppWithOptions(const ListMmAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMmAppResponse>();
}

/**
 * @summary 获取多模态应用列表
 *
 * @param request ListMmAppRequest
 * @return ListMmAppResponse
 */
ListMmAppResponse Client::listMmApp(const ListMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMmAppWithOptions(request, runtime);
}

/**
 * @summary 应用发布列表
 *
 * @param request ListPublishedMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedMmAppResponse
 */
ListPublishedMmAppResponse Client::listPublishedMmAppWithOptions(const ListPublishedMmAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublishedMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublishedMmAppResponse>();
}

/**
 * @summary 应用发布列表
 *
 * @param request ListPublishedMmAppRequest
 * @return ListPublishedMmAppResponse
 */
ListPublishedMmAppResponse Client::listPublishedMmApp(const ListPublishedMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishedMmAppWithOptions(request, runtime);
}

/**
 * @summary 多模态应用发布
 *
 * @param request PublishMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishMmAppResponse
 */
PublishMmAppResponse Client::publishMmAppWithOptions(const PublishMmAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishMmAppResponse>();
}

/**
 * @summary 多模态应用发布
 *
 * @param request PublishMmAppRequest
 * @return PublishMmAppResponse
 */
PublishMmAppResponse Client::publishMmApp(const PublishMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishMmAppWithOptions(request, runtime);
}

/**
 * @summary 指令更新
 *
 * @param tmpReq UpdateCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCommandResponse
 */
UpdateCommandResponse Client::updateCommandWithOptions(const UpdateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCommandShrinkRequest request = UpdateCommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasToolExamples()) {
    request.setToolExamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toolExamples(), "ToolExamples", "json"));
  }

  if (!!tmpReq.hasToolParams()) {
    request.setToolParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toolParams(), "ToolParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasToolDescription()) {
    query["ToolDescription"] = request.toolDescription();
  }

  if (!!request.hasToolExamplesShrink()) {
    query["ToolExamples"] = request.toolExamplesShrink();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.toolId();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.toolName();
  }

  if (!!request.hasToolParamsShrink()) {
    query["ToolParams"] = request.toolParamsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCommand"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCommandResponse>();
}

/**
 * @summary 指令更新
 *
 * @param request UpdateCommandRequest
 * @return UpdateCommandResponse
 */
UpdateCommandResponse Client::updateCommand(const UpdateCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCommandWithOptions(request, runtime);
}

/**
 * @summary 多模态应用更新
 *
 * @param tmpReq UpdateMmAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMmAppResponse
 */
UpdateMmAppResponse Client::updateMmAppWithOptions(const UpdateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMmAppShrinkRequest request = UpdateMmAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBindingConfig()) {
    request.setBindingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bindingConfig(), "BindingConfig", "json"));
  }

  if (!!tmpReq.hasConversationConfig()) {
    request.setConversationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.conversationConfig(), "ConversationConfig", "json"));
  }

  if (!!tmpReq.hasModelConfig()) {
    request.setModelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelConfig(), "ModelConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasBindingConfigShrink()) {
    query["BindingConfig"] = request.bindingConfigShrink();
  }

  if (!!request.hasConversationConfigShrink()) {
    query["ConversationConfig"] = request.conversationConfigShrink();
  }

  if (!!request.hasModelConfigShrink()) {
    query["ModelConfig"] = request.modelConfigShrink();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMmApp"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMmAppResponse>();
}

/**
 * @summary 多模态应用更新
 *
 * @param request UpdateMmAppRequest
 * @return UpdateMmAppResponse
 */
UpdateMmAppResponse Client::updateMmApp(const UpdateMmAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMmAppWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909