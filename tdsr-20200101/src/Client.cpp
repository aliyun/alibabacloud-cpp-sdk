#include <darabonba/Core.hpp>
#include <alibabacloud/Tdsr20200101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Tdsr20200101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Tdsr20200101
{

AlibabaCloud::Tdsr20200101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "lyj.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("tdsr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 保存模型文件
 *
 * @param request AddHotspotFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHotspotFileResponse
 */
AddHotspotFileResponse Client::addHotspotFileWithOptions(const AddHotspotFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddHotspotFile"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHotspotFileResponse>();
}

/**
 * @summary 保存模型文件
 *
 * @param request AddHotspotFileRequest
 * @return AddHotspotFileResponse
 */
AddHotspotFileResponse Client::addHotspotFile(const AddHotspotFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHotspotFileWithOptions(request, runtime);
}

/**
 * @summary 打马赛克
 *
 * @param request AddMosaicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMosaicsResponse
 */
AddMosaicsResponse Client::addMosaicsWithOptions(const AddMosaicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarkPosition()) {
    query["MarkPosition"] = request.markPosition();
  }

  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMosaics"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMosaicsResponse>();
}

/**
 * @summary 打马赛克
 *
 * @param request AddMosaicsRequest
 * @return AddMosaicsResponse
 */
AddMosaicsResponse Client::addMosaics(const AddMosaicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMosaicsWithOptions(request, runtime);
}

/**
 * @summary 添加项目
 *
 * @param request AddProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddProjectResponse
 */
AddProjectResponse Client::addProjectWithOptions(const AddProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.businessId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddProject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddProjectResponse>();
}

/**
 * @summary 添加项目
 *
 * @param request AddProjectRequest
 * @return AddProjectResponse
 */
AddProjectResponse Client::addProject(const AddProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addProjectWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddRelativePosition is deprecated
 *
 * @summary 添加相对位置
 *
 * @param request AddRelativePositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRelativePositionResponse
 */
AddRelativePositionResponse Client::addRelativePositionWithOptions(const AddRelativePositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelativePosition()) {
    query["RelativePosition"] = request.relativePosition();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRelativePosition"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRelativePositionResponse>();
}

/**
 * @deprecated OpenAPI AddRelativePosition is deprecated
 *
 * @summary 添加相对位置
 *
 * @param request AddRelativePositionRequest
 * @return AddRelativePositionResponse
 */
AddRelativePositionResponse Client::addRelativePosition(const AddRelativePositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRelativePositionWithOptions(request, runtime);
}

/**
 * @summary 移动端添加rooms.json
 *
 * @param request AddRoomPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRoomPlanResponse
 */
AddRoomPlanResponse Client::addRoomPlanWithOptions(const AddRoomPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRoomPlan"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRoomPlanResponse>();
}

/**
 * @summary 移动端添加rooms.json
 *
 * @param request AddRoomPlanRequest
 * @return AddRoomPlanResponse
 */
AddRoomPlanResponse Client::addRoomPlan(const AddRoomPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRoomPlanWithOptions(request, runtime);
}

/**
 * @summary 添加主场景
 *
 * @param request AddSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSceneResponse
 */
AddSceneResponse Client::addSceneWithOptions(const AddSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerUid()) {
    query["CustomerUid"] = request.customerUid();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSceneResponse>();
}

/**
 * @summary 添加主场景
 *
 * @param request AddSceneRequest
 * @return AddSceneResponse
 */
AddSceneResponse Client::addScene(const AddSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSceneWithOptions(request, runtime);
}

/**
 * @summary 创建子场景
 *
 * @param request AddSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSubSceneResponse
 */
AddSubSceneResponse Client::addSubSceneWithOptions(const AddSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasUploadType()) {
    query["UploadType"] = request.uploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSubSceneResponse>();
}

/**
 * @summary 创建子场景
 *
 * @param request AddSubSceneRequest
 * @return AddSubSceneResponse
 */
AddSubSceneResponse Client::addSubScene(const AddSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSubSceneWithOptions(request, runtime);
}

/**
 * @summary 检查指定uid用户属性
 *
 * @param request CheckUserPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUserPropertyResponse
 */
CheckUserPropertyResponse Client::checkUserPropertyWithOptions(const CheckUserPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUserProperty"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUserPropertyResponse>();
}

/**
 * @summary 检查指定uid用户属性
 *
 * @param request CheckUserPropertyRequest
 * @return CheckUserPropertyResponse
 */
CheckUserPropertyResponse Client::checkUserProperty(const CheckUserPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUserPropertyWithOptions(request, runtime);
}

/**
 * @summary 复制主场景
 *
 * @param request CopySceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopySceneResponse
 */
CopySceneResponse Client::copySceneWithOptions(const CopySceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.sceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopySceneResponse>();
}

/**
 * @summary 复制主场景
 *
 * @param request CopySceneRequest
 * @return CopySceneResponse
 */
CopySceneResponse Client::copyScene(const CopySceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copySceneWithOptions(request, runtime);
}

/**
 * @summary 获取OSS授权
 *
 * @param request CreateUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadPolicyResponse
 */
CreateUploadPolicyResponse Client::createUploadPolicyWithOptions(const CreateUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadPolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadPolicyResponse>();
}

/**
 * @summary 获取OSS授权
 *
 * @param request CreateUploadPolicyRequest
 * @return CreateUploadPolicyResponse
 */
CreateUploadPolicyResponse Client::createUploadPolicy(const CreateUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询项目详情
 *
 * @param request DetailProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailProjectResponse
 */
DetailProjectResponse Client::detailProjectWithOptions(const DetailProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetailProject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailProjectResponse>();
}

/**
 * @summary 查询项目详情
 *
 * @param request DetailProjectRequest
 * @return DetailProjectResponse
 */
DetailProjectResponse Client::detailProject(const DetailProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detailProjectWithOptions(request, runtime);
}

/**
 * @summary 主场景详细
 *
 * @param request DetailSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailSceneResponse
 */
DetailSceneResponse Client::detailSceneWithOptions(const DetailSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetailScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailSceneResponse>();
}

/**
 * @summary 主场景详细
 *
 * @param request DetailSceneRequest
 * @return DetailSceneResponse
 */
DetailSceneResponse Client::detailScene(const DetailSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detailSceneWithOptions(request, runtime);
}

/**
 * @summary 查询子场景详情
 *
 * @param request DetailSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailSubSceneResponse
 */
DetailSubSceneResponse Client::detailSubSceneWithOptions(const DetailSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetailSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailSubSceneResponse>();
}

/**
 * @summary 查询子场景详情
 *
 * @param request DetailSubSceneRequest
 * @return DetailSubSceneResponse
 */
DetailSubSceneResponse Client::detailSubScene(const DetailSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detailSubSceneWithOptions(request, runtime);
}

/**
 * @summary 删除项目
 *
 * @param request DropProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropProjectResponse
 */
DropProjectResponse Client::dropProjectWithOptions(const DropProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropProject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropProjectResponse>();
}

/**
 * @summary 删除项目
 *
 * @param request DropProjectRequest
 * @return DropProjectResponse
 */
DropProjectResponse Client::dropProject(const DropProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dropProjectWithOptions(request, runtime);
}

/**
 * @summary 删除主场景
 *
 * @param request DropSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropSceneResponse
 */
DropSceneResponse Client::dropSceneWithOptions(const DropSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropSceneResponse>();
}

/**
 * @summary 删除主场景
 *
 * @param request DropSceneRequest
 * @return DropSceneResponse
 */
DropSceneResponse Client::dropScene(const DropSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dropSceneWithOptions(request, runtime);
}

/**
 * @summary 删除子场景
 *
 * @param request DropSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropSubSceneResponse
 */
DropSubSceneResponse Client::dropSubSceneWithOptions(const DropSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropSubSceneResponse>();
}

/**
 * @summary 删除子场景
 *
 * @param request DropSubSceneRequest
 * @return DropSubSceneResponse
 */
DropSubSceneResponse Client::dropSubScene(const DropSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dropSubSceneWithOptions(request, runtime);
}

/**
 * @summary 查询关联数据
 *
 * @param request GetConnDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnDataResponse
 */
GetConnDataResponse Client::getConnDataWithOptions(const GetConnDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnDataResponse>();
}

/**
 * @summary 查询关联数据
 *
 * @param request GetConnDataRequest
 * @return GetConnDataResponse
 */
GetConnDataResponse Client::getConnData(const GetConnDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnDataWithOptions(request, runtime);
}

/**
 * @summary 复制场景任务状态查询
 *
 * @param request GetCopySceneTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCopySceneTaskStatusResponse
 */
GetCopySceneTaskStatusResponse Client::getCopySceneTaskStatusWithOptions(const GetCopySceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCopySceneTaskStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCopySceneTaskStatusResponse>();
}

/**
 * @summary 复制场景任务状态查询
 *
 * @param request GetCopySceneTaskStatusRequest
 * @return GetCopySceneTaskStatusResponse
 */
GetCopySceneTaskStatusResponse Client::getCopySceneTaskStatus(const GetCopySceneTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCopySceneTaskStatusWithOptions(request, runtime);
}

/**
 * @param request GetHotspotConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotConfigResponse
 */
GetHotspotConfigResponse Client::getHotspotConfigWithOptions(const GetHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotspotConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotConfigResponse>();
}

/**
 * @param request GetHotspotConfigRequest
 * @return GetHotspotConfigResponse
 */
GetHotspotConfigResponse Client::getHotspotConfig(const GetHotspotConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotspotConfigWithOptions(request, runtime);
}

/**
 * @summary 查询后处理场景信息
 *
 * @param request GetHotspotSceneDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotSceneDataResponse
 */
GetHotspotSceneDataResponse Client::getHotspotSceneDataWithOptions(const GetHotspotSceneDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotspotSceneData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotSceneDataResponse>();
}

/**
 * @summary 查询后处理场景信息
 *
 * @param request GetHotspotSceneDataRequest
 * @return GetHotspotSceneDataResponse
 */
GetHotspotSceneDataResponse Client::getHotspotSceneData(const GetHotspotSceneDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotspotSceneDataWithOptions(request, runtime);
}

/**
 * @param request GetHotspotTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotspotTagResponse
 */
GetHotspotTagResponse Client::getHotspotTagWithOptions(const GetHotspotTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  if (!!request.hasSubSceneUuid()) {
    query["SubSceneUuid"] = request.subSceneUuid();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotspotTag"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotspotTagResponse>();
}

/**
 * @param request GetHotspotTagRequest
 * @return GetHotspotTagResponse
 */
GetHotspotTagResponse Client::getHotspotTag(const GetHotspotTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotspotTagWithOptions(request, runtime);
}

/**
 * @summary 获取标注数据
 *
 * @param request GetLayoutDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLayoutDataResponse
 */
GetLayoutDataResponse Client::getLayoutDataWithOptions(const GetLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLayoutData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLayoutDataResponse>();
}

/**
 * @summary 获取标注数据
 *
 * @param request GetLayoutDataRequest
 * @return GetLayoutDataResponse
 */
GetLayoutDataResponse Client::getLayoutData(const GetLayoutDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLayoutDataWithOptions(request, runtime);
}

/**
 * @summary 获取算法自动标注数据
 *
 * @param request GetOriginLayoutDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginLayoutDataResponse
 */
GetOriginLayoutDataResponse Client::getOriginLayoutDataWithOptions(const GetOriginLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginLayoutData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginLayoutDataResponse>();
}

/**
 * @summary 获取算法自动标注数据
 *
 * @param request GetOriginLayoutDataRequest
 * @return GetOriginLayoutDataResponse
 */
GetOriginLayoutDataResponse Client::getOriginLayoutData(const GetOriginLayoutDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginLayoutDataWithOptions(request, runtime);
}

/**
 * @summary 获取OSS授权
 *
 * @param request GetOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssPolicyResponse
 */
GetOssPolicyResponse Client::getOssPolicyWithOptions(const GetOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssPolicy"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssPolicyResponse>();
}

/**
 * @summary 获取OSS授权
 *
 * @param request GetOssPolicyRequest
 * @return GetOssPolicyResponse
 */
GetOssPolicyResponse Client::getOssPolicy(const GetOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssPolicyWithOptions(request, runtime);
}

/**
 * @summary 打包场景任务状态查询
 *
 * @param request GetPackSceneTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPackSceneTaskStatusResponse
 */
GetPackSceneTaskStatusResponse Client::getPackSceneTaskStatusWithOptions(const GetPackSceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPackSceneTaskStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPackSceneTaskStatusResponse>();
}

/**
 * @summary 打包场景任务状态查询
 *
 * @param request GetPackSceneTaskStatusRequest
 * @return GetPackSceneTaskStatusResponse
 */
GetPackSceneTaskStatusResponse Client::getPackSceneTaskStatus(const GetPackSceneTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPackSceneTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 查询矫正后图片
 *
 * @param request GetRectifyImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRectifyImageResponse
 */
GetRectifyImageResponse Client::getRectifyImageWithOptions(const GetRectifyImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRectifyImage"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRectifyImageResponse>();
}

/**
 * @summary 查询矫正后图片
 *
 * @param request GetRectifyImageRequest
 * @return GetRectifyImageResponse
 */
GetRectifyImageResponse Client::getRectifyImage(const GetRectifyImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRectifyImageWithOptions(request, runtime);
}

/**
 * @summary 查看场景下重建任务
 *
 * @param request GetSceneBuildTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSceneBuildTaskStatusResponse
 */
GetSceneBuildTaskStatusResponse Client::getSceneBuildTaskStatusWithOptions(const GetSceneBuildTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSceneBuildTaskStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSceneBuildTaskStatusResponse>();
}

/**
 * @summary 查看场景下重建任务
 *
 * @param request GetSceneBuildTaskStatusRequest
 * @return GetSceneBuildTaskStatusResponse
 */
GetSceneBuildTaskStatusResponse Client::getSceneBuildTaskStatus(const GetSceneBuildTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSceneBuildTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 获取场景的打包地址
 *
 * @param request GetScenePackUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScenePackUrlResponse
 */
GetScenePackUrlResponse Client::getScenePackUrlWithOptions(const GetScenePackUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScenePackUrl"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScenePackUrlResponse>();
}

/**
 * @summary 获取场景的打包地址
 *
 * @param request GetScenePackUrlRequest
 * @return GetScenePackUrlResponse
 */
GetScenePackUrlResponse Client::getScenePackUrl(const GetScenePackUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScenePackUrlWithOptions(request, runtime);
}

/**
 * @summary 查询模型数据
 *
 * @param request GetScenePreviewDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScenePreviewDataResponse
 */
GetScenePreviewDataResponse Client::getScenePreviewDataWithOptions(const GetScenePreviewDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  if (!!request.hasShowTag()) {
    query["ShowTag"] = request.showTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScenePreviewData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScenePreviewDataResponse>();
}

/**
 * @summary 查询模型数据
 *
 * @param request GetScenePreviewDataRequest
 * @return GetScenePreviewDataResponse
 */
GetScenePreviewDataResponse Client::getScenePreviewData(const GetScenePreviewDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScenePreviewDataWithOptions(request, runtime);
}

/**
 * @summary 查询模型预览信息
 *
 * @param request GetScenePreviewInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScenePreviewInfoResponse
 */
GetScenePreviewInfoResponse Client::getScenePreviewInfoWithOptions(const GetScenePreviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasModelToken()) {
    query["ModelToken"] = request.modelToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScenePreviewInfo"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScenePreviewInfoResponse>();
}

/**
 * @summary 查询模型预览信息
 *
 * @param request GetScenePreviewInfoRequest
 * @return GetScenePreviewInfoResponse
 */
GetScenePreviewInfoResponse Client::getScenePreviewInfo(const GetScenePreviewInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScenePreviewInfoWithOptions(request, runtime);
}

/**
 * @summary 获取模型预览数据
 *
 * @param request GetScenePreviewResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScenePreviewResourceResponse
 */
GetScenePreviewResourceResponse Client::getScenePreviewResourceWithOptions(const GetScenePreviewResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraft()) {
    query["Draft"] = request.draft();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScenePreviewResource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScenePreviewResourceResponse>();
}

/**
 * @summary 获取模型预览数据
 *
 * @param request GetScenePreviewResourceRequest
 * @return GetScenePreviewResourceResponse
 */
GetScenePreviewResourceResponse Client::getScenePreviewResource(const GetScenePreviewResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScenePreviewResourceWithOptions(request, runtime);
}

/**
 * @summary 查询单场景关联数据
 *
 * @param request GetSingleConnDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSingleConnDataResponse
 */
GetSingleConnDataResponse Client::getSingleConnDataWithOptions(const GetSingleConnDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSingleConnData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSingleConnDataResponse>();
}

/**
 * @summary 查询单场景关联数据
 *
 * @param request GetSingleConnDataRequest
 * @return GetSingleConnDataResponse
 */
GetSingleConnDataResponse Client::getSingleConnData(const GetSingleConnDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSingleConnDataWithOptions(request, runtime);
}

/**
 * @summary 打包58数据状态检查
 *
 * @param request GetSourcePackStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourcePackStatusResponse
 */
GetSourcePackStatusResponse Client::getSourcePackStatusWithOptions(const GetSourcePackStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSourcePackStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourcePackStatusResponse>();
}

/**
 * @summary 打包58数据状态检查
 *
 * @param request GetSourcePackStatusRequest
 * @return GetSourcePackStatusResponse
 */
GetSourcePackStatusResponse Client::getSourcePackStatus(const GetSourcePackStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSourcePackStatusWithOptions(request, runtime);
}

/**
 * @summary 查看子场景下预处理及切图任务
 *
 * @param request GetSubSceneTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubSceneTaskStatusResponse
 */
GetSubSceneTaskStatusResponse Client::getSubSceneTaskStatusWithOptions(const GetSubSceneTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubSceneTaskStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubSceneTaskStatusResponse>();
}

/**
 * @summary 查看子场景下预处理及切图任务
 *
 * @param request GetSubSceneTaskStatusRequest
 * @return GetSubSceneTaskStatusResponse
 */
GetSubSceneTaskStatusResponse Client::getSubSceneTaskStatus(const GetSubSceneTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubSceneTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 查看任务状态
 *
 * @param request GetTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatusWithOptions(const GetTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusResponse>();
}

/**
 * @summary 查看任务状态
 *
 * @param request GetTaskStatusRequest
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatus(const GetTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskStatusWithOptions(request, runtime);
}

/**
 * @param request GetWindowConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWindowConfigResponse
 */
GetWindowConfigResponse Client::getWindowConfigWithOptions(const GetWindowConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWindowConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWindowConfigResponse>();
}

/**
 * @param request GetWindowConfigRequest
 * @return GetWindowConfigResponse
 */
GetWindowConfigResponse Client::getWindowConfig(const GetWindowConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWindowConfigWithOptions(request, runtime);
}

/**
 * @summary 重建
 *
 * @param request LabelBuildRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LabelBuildResponse
 */
LabelBuildResponse Client::labelBuildWithOptions(const LabelBuildRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasModelStyle()) {
    query["ModelStyle"] = request.modelStyle();
  }

  if (!!request.hasOptimizeWallWidth()) {
    query["OptimizeWallWidth"] = request.optimizeWallWidth();
  }

  if (!!request.hasPlanStyle()) {
    query["PlanStyle"] = request.planStyle();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasWallHeight()) {
    query["WallHeight"] = request.wallHeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LabelBuild"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LabelBuildResponse>();
}

/**
 * @summary 重建
 *
 * @param request LabelBuildRequest
 * @return LabelBuildResponse
 */
LabelBuildResponse Client::labelBuild(const LabelBuildRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return labelBuildWithOptions(request, runtime);
}

/**
 * @summary 关联图片
 *
 * @param request LinkImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LinkImageResponse
 */
LinkImageResponse Client::linkImageWithOptions(const LinkImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCameraHeight()) {
    query["CameraHeight"] = request.cameraHeight();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LinkImage"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LinkImageResponse>();
}

/**
 * @summary 关联图片
 *
 * @param request LinkImageRequest
 * @return LinkImageResponse
 */
LinkImageResponse Client::linkImage(const LinkImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return linkImageWithOptions(request, runtime);
}

/**
 * @summary 分页查询项目列表
 *
 * @param request ListProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProjectWithOptions(const ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
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
    {"action" , "ListProject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectResponse>();
}

/**
 * @summary 分页查询项目列表
 *
 * @param request ListProjectRequest
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProject(const ListProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectWithOptions(request, runtime);
}

/**
 * @summary 分页查询主场景列表
 *
 * @param request ListSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSceneResponse
 */
ListSceneResponse Client::listSceneWithOptions(const ListSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSceneResponse>();
}

/**
 * @summary 分页查询主场景列表
 *
 * @param request ListSceneRequest
 * @return ListSceneResponse
 */
ListSceneResponse Client::listScene(const ListSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSceneWithOptions(request, runtime);
}

/**
 * @summary 查询子场景列表
 *
 * @param request ListSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubSceneResponse
 */
ListSubSceneResponse Client::listSubSceneWithOptions(const ListSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasShowLayoutData()) {
    query["ShowLayoutData"] = request.showLayoutData();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubSceneResponse>();
}

/**
 * @summary 查询子场景列表
 *
 * @param request ListSubSceneRequest
 * @return ListSubSceneResponse
 */
ListSubSceneResponse Client::listSubScene(const ListSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubSceneWithOptions(request, runtime);
}

/**
 * @summary 直角优化
 *
 * @param request OptimizeRightAngleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OptimizeRightAngleResponse
 */
OptimizeRightAngleResponse Client::optimizeRightAngleWithOptions(const OptimizeRightAngleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OptimizeRightAngle"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OptimizeRightAngleResponse>();
}

/**
 * @summary 直角优化
 *
 * @param request OptimizeRightAngleRequest
 * @return OptimizeRightAngleResponse
 */
OptimizeRightAngleResponse Client::optimizeRightAngle(const OptimizeRightAngleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return optimizeRightAngleWithOptions(request, runtime);
}

/**
 * @summary 打包场景
 *
 * @param request PackSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PackSceneResponse
 */
PackSceneResponse Client::packSceneWithOptions(const PackSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PackScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PackSceneResponse>();
}

/**
 * @summary 打包场景
 *
 * @param request PackSceneRequest
 * @return PackSceneResponse
 */
PackSceneResponse Client::packScene(const PackSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return packSceneWithOptions(request, runtime);
}

/**
 * @summary 打包场景
 *
 * @param request PackSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PackSourceResponse
 */
PackSourceResponse Client::packSourceWithOptions(const PackSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PackSource"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PackSourceResponse>();
}

/**
 * @summary 打包场景
 *
 * @param request PackSourceRequest
 * @return PackSourceResponse
 */
PackSourceResponse Client::packSource(const PackSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return packSourceWithOptions(request, runtime);
}

/**
 * @summary 预处理
 *
 * @param request PredImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PredImageResponse
 */
PredImageResponse Client::predImageWithOptions(const PredImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCorrectVertical()) {
    query["CorrectVertical"] = request.correctVertical();
  }

  if (!!request.hasCountDetectDoor()) {
    query["CountDetectDoor"] = request.countDetectDoor();
  }

  if (!!request.hasDetectDoor()) {
    query["DetectDoor"] = request.detectDoor();
  }

  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PredImage"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PredImageResponse>();
}

/**
 * @summary 预处理
 *
 * @param request PredImageRequest
 * @return PredImageResponse
 */
PredImageResponse Client::predImage(const PredImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return predImageWithOptions(request, runtime);
}

/**
 * @summary 墙线预测
 *
 * @param request PredictionWallLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PredictionWallLineResponse
 */
PredictionWallLineResponse Client::predictionWallLineWithOptions(const PredictionWallLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCameraHeight()) {
    query["CameraHeight"] = request.cameraHeight();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PredictionWallLine"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PredictionWallLineResponse>();
}

/**
 * @summary 墙线预测
 *
 * @param request PredictionWallLineRequest
 * @return PredictionWallLineResponse
 */
PredictionWallLineResponse Client::predictionWallLine(const PredictionWallLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return predictionWallLineWithOptions(request, runtime);
}

/**
 * @param request PublishHotspotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishHotspotResponse
 */
PublishHotspotResponse Client::publishHotspotWithOptions(const PublishHotspotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamTag()) {
    query["ParamTag"] = request.paramTag();
  }

  if (!!request.hasSubSceneUuid()) {
    query["SubSceneUuid"] = request.subSceneUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishHotspot"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishHotspotResponse>();
}

/**
 * @param request PublishHotspotRequest
 * @return PublishHotspotResponse
 */
PublishHotspotResponse Client::publishHotspot(const PublishHotspotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishHotspotWithOptions(request, runtime);
}

/**
 * @summary 保存扩展配置
 *
 * @param request PublishHotspotConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishHotspotConfigResponse
 */
PublishHotspotConfigResponse Client::publishHotspotConfigWithOptions(const PublishHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishHotspotConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishHotspotConfigResponse>();
}

/**
 * @summary 保存扩展配置
 *
 * @param request PublishHotspotConfigRequest
 * @return PublishHotspotConfigResponse
 */
PublishHotspotConfigResponse Client::publishHotspotConfig(const PublishHotspotConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishHotspotConfigWithOptions(request, runtime);
}

/**
 * @summary 发布
 *
 * @param request PublishSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishSceneResponse
 */
PublishSceneResponse Client::publishSceneWithOptions(const PublishSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishSceneResponse>();
}

/**
 * @summary 发布
 *
 * @param request PublishSceneRequest
 * @return PublishSceneResponse
 */
PublishSceneResponse Client::publishScene(const PublishSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishSceneWithOptions(request, runtime);
}

/**
 * @summary 发布
 *
 * @param request PublishStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishStatusResponse
 */
PublishStatusResponse Client::publishStatusWithOptions(const PublishStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishStatusResponse>();
}

/**
 * @summary 发布
 *
 * @param request PublishStatusRequest
 * @return PublishStatusResponse
 */
PublishStatusResponse Client::publishStatus(const PublishStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishStatusWithOptions(request, runtime);
}

/**
 * @summary 恢复原图
 *
 * @param request RecoveryOriginImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoveryOriginImageResponse
 */
RecoveryOriginImageResponse Client::recoveryOriginImageWithOptions(const RecoveryOriginImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoveryOriginImage"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoveryOriginImageResponse>();
}

/**
 * @summary 恢复原图
 *
 * @param request RecoveryOriginImageRequest
 * @return RecoveryOriginImageResponse
 */
RecoveryOriginImageResponse Client::recoveryOriginImage(const RecoveryOriginImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoveryOriginImageWithOptions(request, runtime);
}

/**
 * @summary 手动矫正
 *
 * @param request RectVerticalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RectVerticalResponse
 */
RectVerticalResponse Client::rectVerticalWithOptions(const RectVerticalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountDetectDoor()) {
    query["CountDetectDoor"] = request.countDetectDoor();
  }

  if (!!request.hasDetectDoor()) {
    query["DetectDoor"] = request.detectDoor();
  }

  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  if (!!request.hasVerticalRect()) {
    query["VerticalRect"] = request.verticalRect();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RectVertical"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RectVerticalResponse>();
}

/**
 * @summary 手动矫正
 *
 * @param request RectVerticalRequest
 * @return RectVerticalResponse
 */
RectVerticalResponse Client::rectVertical(const RectVerticalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rectVerticalWithOptions(request, runtime);
}

/**
 * @summary 图片矫正
 *
 * @param request RectifyImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RectifyImageResponse
 */
RectifyImageResponse Client::rectifyImageWithOptions(const RectifyImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCameraHeight()) {
    query["CameraHeight"] = request.cameraHeight();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RectifyImage"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RectifyImageResponse>();
}

/**
 * @summary 图片矫正
 *
 * @param request RectifyImageRequest
 * @return RectifyImageResponse
 */
RectifyImageResponse Client::rectifyImage(const RectifyImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rectifyImageWithOptions(request, runtime);
}

/**
 * @summary 恢复子场景
 *
 * @param request RollbackSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackSubSceneResponse
 */
RollbackSubSceneResponse Client::rollbackSubSceneWithOptions(const RollbackSubSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackSubSceneResponse>();
}

/**
 * @summary 恢复子场景
 *
 * @param request RollbackSubSceneRequest
 * @return RollbackSubSceneResponse
 */
RollbackSubSceneResponse Client::rollbackSubScene(const RollbackSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackSubSceneWithOptions(request, runtime);
}

/**
 * @param request SaveHotspotConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveHotspotConfigResponse
 */
SaveHotspotConfigResponse Client::saveHotspotConfigWithOptions(const SaveHotspotConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamTag()) {
    query["ParamTag"] = request.paramTag();
  }

  if (!!request.hasPreviewToken()) {
    query["PreviewToken"] = request.previewToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveHotspotConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveHotspotConfigResponse>();
}

/**
 * @param request SaveHotspotConfigRequest
 * @return SaveHotspotConfigResponse
 */
SaveHotspotConfigResponse Client::saveHotspotConfig(const SaveHotspotConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveHotspotConfigWithOptions(request, runtime);
}

/**
 * @param request SaveHotspotTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveHotspotTagResponse
 */
SaveHotspotTagResponse Client::saveHotspotTagWithOptions(const SaveHotspotTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamTag()) {
    query["ParamTag"] = request.paramTag();
  }

  if (!!request.hasSubSceneUuid()) {
    query["SubSceneUuid"] = request.subSceneUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveHotspotTag"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveHotspotTagResponse>();
}

/**
 * @param request SaveHotspotTagRequest
 * @return SaveHotspotTagResponse
 */
SaveHotspotTagResponse Client::saveHotspotTag(const SaveHotspotTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveHotspotTagWithOptions(request, runtime);
}

/**
 * @summary 保存热点
 *
 * @param request SaveHotspotTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveHotspotTagListResponse
 */
SaveHotspotTagListResponse Client::saveHotspotTagListWithOptions(const SaveHotspotTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotspotListJson()) {
    query["HotspotListJson"] = request.hotspotListJson();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveHotspotTagList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveHotspotTagListResponse>();
}

/**
 * @summary 保存热点
 *
 * @param request SaveHotspotTagListRequest
 * @return SaveHotspotTagListResponse
 */
SaveHotspotTagListResponse Client::saveHotspotTagList(const SaveHotspotTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveHotspotTagListWithOptions(request, runtime);
}

/**
 * @summary 保存小地图数据
 *
 * @param request SaveMinimapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveMinimapResponse
 */
SaveMinimapResponse Client::saveMinimapWithOptions(const SaveMinimapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveMinimap"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveMinimapResponse>();
}

/**
 * @summary 保存小地图数据
 *
 * @param request SaveMinimapRequest
 * @return SaveMinimapResponse
 */
SaveMinimapResponse Client::saveMinimap(const SaveMinimapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMinimapWithOptions(request, runtime);
}

/**
 * @summary 保存模型文件
 *
 * @param request SaveModelConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveModelConfigResponse
 */
SaveModelConfigResponse Client::saveModelConfigWithOptions(const SaveModelConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveModelConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveModelConfigResponse>();
}

/**
 * @summary 保存模型文件
 *
 * @param request SaveModelConfigRequest
 * @return SaveModelConfigResponse
 */
SaveModelConfigResponse Client::saveModelConfig(const SaveModelConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveModelConfigWithOptions(request, runtime);
}

/**
 * @summary 发布
 *
 * @param request ScenePublishRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScenePublishResponse
 */
ScenePublishResponse Client::scenePublishWithOptions(const ScenePublishRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScenePublish"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScenePublishResponse>();
}

/**
 * @summary 发布
 *
 * @param request ScenePublishRequest
 * @return ScenePublishResponse
 */
ScenePublishResponse Client::scenePublish(const ScenePublishRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scenePublishWithOptions(request, runtime);
}

/**
 * @summary 预览
 *
 * @param request TempPreviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempPreviewResponse
 */
TempPreviewResponse Client::tempPreviewWithOptions(const TempPreviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TempPreview"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempPreviewResponse>();
}

/**
 * @summary 预览
 *
 * @param request TempPreviewRequest
 * @return TempPreviewResponse
 */
TempPreviewResponse Client::tempPreview(const TempPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempPreviewWithOptions(request, runtime);
}

/**
 * @summary 查询预览任务处理状态
 *
 * @param request TempPreviewStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TempPreviewStatusResponse
 */
TempPreviewStatusResponse Client::tempPreviewStatusWithOptions(const TempPreviewStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TempPreviewStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TempPreviewStatusResponse>();
}

/**
 * @summary 查询预览任务处理状态
 *
 * @param request TempPreviewStatusRequest
 * @return TempPreviewStatusResponse
 */
TempPreviewStatusResponse Client::tempPreviewStatus(const TempPreviewStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tempPreviewStatusWithOptions(request, runtime);
}

/**
 * @summary 更新关联数据
 *
 * @param request UpdateConnDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnDataResponse
 */
UpdateConnDataResponse Client::updateConnDataWithOptions(const UpdateConnDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnData()) {
    query["ConnData"] = request.connData();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConnData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnDataResponse>();
}

/**
 * @summary 更新关联数据
 *
 * @param request UpdateConnDataRequest
 * @return UpdateConnDataResponse
 */
UpdateConnDataResponse Client::updateConnData(const UpdateConnDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConnDataWithOptions(request, runtime);
}

/**
 * @summary 更新标注数据
 *
 * @param request UpdateLayoutDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLayoutDataResponse
 */
UpdateLayoutDataResponse Client::updateLayoutDataWithOptions(const UpdateLayoutDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLayoutData()) {
    query["LayoutData"] = request.layoutData();
  }

  if (!!request.hasSubSceneId()) {
    query["SubSceneId"] = request.subSceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLayoutData"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLayoutDataResponse>();
}

/**
 * @summary 更新标注数据
 *
 * @param request UpdateLayoutDataRequest
 * @return UpdateLayoutDataResponse
 */
UpdateLayoutDataResponse Client::updateLayoutData(const UpdateLayoutDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLayoutDataWithOptions(request, runtime);
}

/**
 * @summary 变更项目信息
 *
 * @param request UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.businessId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary 变更项目信息
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}

/**
 * @summary 更新主场景
 *
 * @param request UpdateSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateSceneWithOptions(const UpdateSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSceneResponse>();
}

/**
 * @summary 更新主场景
 *
 * @param request UpdateSceneRequest
 * @return UpdateSceneResponse
 */
UpdateSceneResponse Client::updateScene(const UpdateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSceneWithOptions(request, runtime);
}

/**
 * @summary 更新子场景
 *
 * @param tmpReq UpdateSubSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubSceneResponse
 */
UpdateSubSceneResponse Client::updateSubSceneWithOptions(const UpdateSubSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubSceneShrinkRequest request = UpdateSubSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasViewPoint()) {
    request.setViewPointShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.viewPoint(), "ViewPoint", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasViewPointShrink()) {
    query["ViewPoint"] = request.viewPointShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSubScene"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubSceneResponse>();
}

/**
 * @summary 更新子场景
 *
 * @param request UpdateSubSceneRequest
 * @return UpdateSubSceneResponse
 */
UpdateSubSceneResponse Client::updateSubScene(const UpdateSubSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubSceneWithOptions(request, runtime);
}

/**
 * @summary 更新子场景顺序
 *
 * @param tmpReq UpdateSubSceneSeqRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubSceneSeqResponse
 */
UpdateSubSceneSeqResponse Client::updateSubSceneSeqWithOptions(const UpdateSubSceneSeqRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubSceneSeqShrinkRequest request = UpdateSubSceneSeqShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSortSubSceneIds()) {
    request.setSortSubSceneIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sortSubSceneIds(), "SortSubSceneIds", "json"));
  }

  json query = {};
  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasSortSubSceneIdsShrink()) {
    query["SortSubSceneIds"] = request.sortSubSceneIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSubSceneSeq"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubSceneSeqResponse>();
}

/**
 * @summary 更新子场景顺序
 *
 * @param request UpdateSubSceneSeqRequest
 * @return UpdateSubSceneSeqResponse
 */
UpdateSubSceneSeqResponse Client::updateSubSceneSeq(const UpdateSubSceneSeqRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubSceneSeqWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Tdsr20200101