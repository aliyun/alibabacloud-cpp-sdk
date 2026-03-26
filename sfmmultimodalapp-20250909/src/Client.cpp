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
    request.setToolExamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToolExamples(), "ToolExamples", "json"));
  }

  if (!!tmpReq.hasToolParams()) {
    request.setToolParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToolParams(), "ToolParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.getDomainCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasToolDescription()) {
    query["ToolDescription"] = request.getToolDescription();
  }

  if (!!request.hasToolExamplesShrink()) {
    query["ToolExamples"] = request.getToolExamplesShrink();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.getToolName();
  }

  if (!!request.hasToolParamsShrink()) {
    query["ToolParams"] = request.getToolParamsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 新增用户记忆
 *
 * @param tmpReq CreateMemoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryResponse
 */
CreateMemoryResponse Client::createMemoryWithOptions(const CreateMemoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMemoryShrinkRequest request = CreateMemoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetaData()) {
    request.setMetaDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetaData(), "MetaData", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoUpdate()) {
    query["AutoUpdate"] = request.getAutoUpdate();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasMessagesJson()) {
    query["MessagesJson"] = request.getMessagesJson();
  }

  if (!!request.hasMetaDataShrink()) {
    query["MetaData"] = request.getMetaDataShrink();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMemory"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryResponse>();
}

/**
 * @summary 新增用户记忆
 *
 * @param request CreateMemoryRequest
 * @return CreateMemoryResponse
 */
CreateMemoryResponse Client::createMemory(const CreateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMemoryWithOptions(request, runtime);
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
    request.setBindingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBindingConfig(), "BindingConfig", "json"));
  }

  if (!!tmpReq.hasConversationConfig()) {
    request.setConversationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConversationConfig(), "ConversationConfig", "json"));
  }

  if (!!tmpReq.hasModelConfig()) {
    request.setModelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModelConfig(), "ModelConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBindingConfigShrink()) {
    query["BindingConfig"] = request.getBindingConfigShrink();
  }

  if (!!request.hasConversationConfigShrink()) {
    query["ConversationConfig"] = request.getConversationConfigShrink();
  }

  if (!!request.hasModelConfigShrink()) {
    query["ModelConfig"] = request.getModelConfigShrink();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 创建用户画像配置
 *
 * @param tmpReq CreateProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProfileResponse
 */
CreateProfileResponse Client::createProfileWithOptions(const CreateProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProfileShrinkRequest request = CreateProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributes(), "Attributes", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAttributesShrink()) {
    query["Attributes"] = request.getAttributesShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProfile"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProfileResponse>();
}

/**
 * @summary 创建用户画像配置
 *
 * @param request CreateProfileRequest
 * @return CreateProfileResponse
 */
CreateProfileResponse Client::createProfile(const CreateProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProfileWithOptions(request, runtime);
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.getDomainCode();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.getToolId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 删除用户记忆
 *
 * @param request DeleteMemoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemoryWithOptions(const DeleteMemoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasMemoryNodeId()) {
    query["MemoryNodeId"] = request.getMemoryNodeId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemory"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryResponse>();
}

/**
 * @summary 删除用户记忆
 *
 * @param request DeleteMemoryRequest
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemory(const DeleteMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMemoryWithOptions(request, runtime);
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 删除用户画像配置
 *
 * @param request DeleteProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProfileResponse
 */
DeleteProfileResponse Client::deleteProfileWithOptions(const DeleteProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProfile"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProfileResponse>();
}

/**
 * @summary 删除用户画像配置
 *
 * @param request DeleteProfileRequest
 * @return DeleteProfileResponse
 */
DeleteProfileResponse Client::deleteProfile(const DeleteProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProfileWithOptions(request, runtime);
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.getDomainCode();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.getToolId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.getDomainCode();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.getToolName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 变更用户记忆配置
 *
 * @param request PatchMemoryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchMemoryConfigResponse
 */
PatchMemoryConfigResponse Client::patchMemoryConfigWithOptions(const PatchMemoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoUpdate()) {
    query["AutoUpdate"] = request.getAutoUpdate();
  }

  if (!!request.hasExpirationTime()) {
    query["ExpirationTime"] = request.getExpirationTime();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.getTopK();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PatchMemoryConfig"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PatchMemoryConfigResponse>();
}

/**
 * @summary 变更用户记忆配置
 *
 * @param request PatchMemoryConfigRequest
 * @return PatchMemoryConfigResponse
 */
PatchMemoryConfigResponse Client::patchMemoryConfig(const PatchMemoryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return patchMemoryConfigWithOptions(request, runtime);
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 查询用户记忆配置
 *
 * @param request QueryMemoryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMemoryConfigResponse
 */
QueryMemoryConfigResponse Client::queryMemoryConfigWithOptions(const QueryMemoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMemoryConfig"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMemoryConfigResponse>();
}

/**
 * @summary 查询用户记忆配置
 *
 * @param request QueryMemoryConfigRequest
 * @return QueryMemoryConfigResponse
 */
QueryMemoryConfigResponse Client::queryMemoryConfig(const QueryMemoryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMemoryConfigWithOptions(request, runtime);
}

/**
 * @summary 查询用户记忆列表
 *
 * @param request QueryMemoryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMemoryListResponse
 */
QueryMemoryListResponse Client::queryMemoryListWithOptions(const QueryMemoryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMemoryList"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMemoryListResponse>();
}

/**
 * @summary 查询用户记忆列表
 *
 * @param request QueryMemoryListRequest
 * @return QueryMemoryListResponse
 */
QueryMemoryListResponse Client::queryMemoryList(const QueryMemoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMemoryListWithOptions(request, runtime);
}

/**
 * @summary 查询用户画像配置
 *
 * @param request QueryProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProfileResponse
 */
QueryProfileResponse Client::queryProfileWithOptions(const QueryProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProfile"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProfileResponse>();
}

/**
 * @summary 查询用户画像配置
 *
 * @param request QueryProfileRequest
 * @return QueryProfileResponse
 */
QueryProfileResponse Client::queryProfile(const QueryProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProfileWithOptions(request, runtime);
}

/**
 * @summary 查询用户画像
 *
 * @param request QueryUserProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserProfileResponse
 */
QueryUserProfileResponse Client::queryUserProfileWithOptions(const QueryUserProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserProfile"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserProfileResponse>();
}

/**
 * @summary 查询用户画像
 *
 * @param request QueryUserProfileRequest
 * @return QueryUserProfileResponse
 */
QueryUserProfileResponse Client::queryUserProfile(const QueryUserProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserProfileWithOptions(request, runtime);
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
    request.setToolExamplesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToolExamples(), "ToolExamples", "json"));
  }

  if (!!tmpReq.hasToolParams()) {
    request.setToolParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getToolParams(), "ToolParams", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.getDomainCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasToolDescription()) {
    query["ToolDescription"] = request.getToolDescription();
  }

  if (!!request.hasToolExamplesShrink()) {
    query["ToolExamples"] = request.getToolExamplesShrink();
  }

  if (!!request.hasToolId()) {
    query["ToolId"] = request.getToolId();
  }

  if (!!request.hasToolName()) {
    query["ToolName"] = request.getToolName();
  }

  if (!!request.hasToolParamsShrink()) {
    query["ToolParams"] = request.getToolParamsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary 更新用户记忆
 *
 * @param tmpReq UpdateMemoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemoryWithOptions(const UpdateMemoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMemoryShrinkRequest request = UpdateMemoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetaData()) {
    request.setMetaDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetaData(), "MetaData", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasMemoryNodeId()) {
    query["MemoryNodeId"] = request.getMemoryNodeId();
  }

  if (!!request.hasMetaDataShrink()) {
    query["MetaData"] = request.getMetaDataShrink();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMemory"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryResponse>();
}

/**
 * @summary 更新用户记忆
 *
 * @param request UpdateMemoryRequest
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemory(const UpdateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMemoryWithOptions(request, runtime);
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
    request.setBindingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBindingConfig(), "BindingConfig", "json"));
  }

  if (!!tmpReq.hasConversationConfig()) {
    request.setConversationConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConversationConfig(), "ConversationConfig", "json"));
  }

  if (!!tmpReq.hasModelConfig()) {
    request.setModelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModelConfig(), "ModelConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBindingConfigShrink()) {
    query["BindingConfig"] = request.getBindingConfigShrink();
  }

  if (!!request.hasConversationConfigShrink()) {
    query["ConversationConfig"] = request.getConversationConfigShrink();
  }

  if (!!request.hasModelConfigShrink()) {
    query["ModelConfig"] = request.getModelConfigShrink();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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

/**
 * @summary 变更用户画像配置
 *
 * @param tmpReq UpdateProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProfileResponse
 */
UpdateProfileResponse Client::updateProfileWithOptions(const UpdateProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProfileShrinkRequest request = UpdateProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributesOperations()) {
    request.setAttributesOperationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributesOperations(), "AttributesOperations", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAttributesOperationsShrink()) {
    query["AttributesOperations"] = request.getAttributesOperationsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasUserDefinedId()) {
    query["UserDefinedId"] = request.getUserDefinedId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProfile"},
    {"version" , "2025-09-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProfileResponse>();
}

/**
 * @summary 变更用户画像配置
 *
 * @param request UpdateProfileRequest
 * @return UpdateProfileResponse
 */
UpdateProfileResponse Client::updateProfile(const UpdateProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProfileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909