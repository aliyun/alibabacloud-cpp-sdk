#include <darabonba/Core.hpp>
#include <alibabacloud/PaiStudio20210202.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PaiStudio20210202::Models;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{

AlibabaCloud::PaiStudio20210202::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "pai.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou" , "pai.cn-hangzhou.data.aliyun.com"},
    {"cn-shanghai" , "pai.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "pai.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong" , "pai.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1" , "pai.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "pai.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "pai.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "pai.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "pai.us-east-1.aliyuncs.com"},
    {"us-west-1" , "pai.us-west-1.aliyuncs.com"},
    {"eu-central-1" , "pai.eu-central-1.aliyuncs.com"},
    {"ap-south-1" , "pai.ap-south-1.aliyuncs.com"},
    {"me-east-1" , "pai.me-east-1.aliyuncs.com"},
    {"ap-northeast-1" , "pai.ap-northeast-1.aliyuncs.com"},
    {"cn-qingdao" , "pai.cn-qingdao.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "pai.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-wulanchabu" , "pai.cn-wulanchabu.aliyuncs.com"},
    {"cn-zhangjiakou" , "pai.cn-zhangjiakou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("paistudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 复制实验
 *
 * @param request CopyExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyExperimentResponse
 */
CopyExperimentResponse Client::copyExperimentWithOptions(const string &ExperimentId, const CopyExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CopyExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/copy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyExperimentResponse>();
}

/**
 * @summary 复制实验
 *
 * @param request CopyExperimentRequest
 * @return CopyExperimentResponse
 */
CopyExperimentResponse Client::copyExperiment(const string &ExperimentId, const CopyExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return copyExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 创建实验，或根据实验模版创建实验
 *
 * @param request CreateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperimentWithOptions(const CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentResponse>();
}

/**
 * @summary 创建实验，或根据实验模版创建实验
 *
 * @param request CreateExperimentRequest
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperiment(const CreateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentWithOptions(request, headers, runtime);
}

/**
 * @summary 创建算法文件夹
 *
 * @param request CreateExperimentFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentFolderResponse
 */
CreateExperimentFolderResponse Client::createExperimentFolderWithOptions(const CreateExperimentFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentFolderId()) {
    body["ParentFolderId"] = request.parentFolderId();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperimentFolder"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentfolders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentFolderResponse>();
}

/**
 * @summary 创建算法文件夹
 *
 * @param request CreateExperimentFolderRequest
 * @return CreateExperimentFolderResponse
 */
CreateExperimentFolderResponse Client::createExperimentFolder(const CreateExperimentFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentFolderWithOptions(request, headers, runtime);
}

/**
 * @summary 校验实验是否能迁移
 *
 * @param request CreateExperimentMigrateValidationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentMigrateValidationResponse
 */
CreateExperimentMigrateValidationResponse Client::createExperimentMigrateValidationWithOptions(const CreateExperimentMigrateValidationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceExpId()) {
    query["SourceExpId"] = request.sourceExpId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExperimentMigrateValidation"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/migrate/experimentvalidation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentMigrateValidationResponse>();
}

/**
 * @summary 校验实验是否能迁移
 *
 * @param request CreateExperimentMigrateValidationRequest
 * @return CreateExperimentMigrateValidationResponse
 */
CreateExperimentMigrateValidationResponse Client::createExperimentMigrateValidation(const CreateExperimentMigrateValidationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentMigrateValidationWithOptions(request, headers, runtime);
}

/**
 * @summary 创建一个工作流的作业
 *
 * @param request CreateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExecuteType()) {
    body["ExecuteType"] = request.executeType();
  }

  if (!!request.hasExperimentId()) {
    body["ExperimentId"] = request.experimentId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasPipelineDraftId()) {
    body["PipelineDraftId"] = request.pipelineDraftId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary 创建一个工作流的作业
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobWithOptions(request, headers, runtime);
}

/**
 * @summary 删除实验
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentResponse>();
}

/**
 * @summary 删除实验
 *
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperiment(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary 删除算法文件夹
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentFolderResponse
 */
DeleteExperimentFolderResponse Client::deleteExperimentFolderWithOptions(const string &FolderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperimentFolder"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentfolders/" , Darabonba::Encode::Encoder::percentEncode(FolderId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentFolderResponse>();
}

/**
 * @summary 删除算法文件夹
 *
 * @return DeleteExperimentFolderResponse
 */
DeleteExperimentFolderResponse Client::deleteExperimentFolder(const string &FolderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentFolderWithOptions(FolderId, headers, runtime);
}

/**
 * @summary 获取算法树
 *
 * @param request GetAlgoTreeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgoTreeResponse
 */
GetAlgoTreeResponse Client::getAlgoTreeWithOptions(const GetAlgoTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgoTree"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algo/tree")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgoTreeResponse>();
}

/**
 * @summary 获取算法树
 *
 * @param request GetAlgoTreeRequest
 * @return GetAlgoTreeResponse
 */
GetAlgoTreeResponse Client::getAlgoTree(const GetAlgoTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgoTreeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取算法定义
 *
 * @param request GetAlgorithmDefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgorithmDefResponse
 */
GetAlgorithmDefResponse Client::getAlgorithmDefWithOptions(const GetAlgorithmDefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgoVersion()) {
    query["AlgoVersion"] = request.algoVersion();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
  }

  if (!!request.hasSignature()) {
    query["Signature"] = request.signature();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgorithmDef"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithm/def")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgorithmDefResponse>();
}

/**
 * @summary 获取算法定义
 *
 * @param request GetAlgorithmDefRequest
 * @return GetAlgorithmDefResponse
 */
GetAlgorithmDefResponse Client::getAlgorithmDef(const GetAlgorithmDefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgorithmDefWithOptions(request, headers, runtime);
}

/**
 * @summary 批量获取算法定义
 *
 * @param request GetAlgorithmDefsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgorithmDefsResponse
 */
GetAlgorithmDefsResponse Client::getAlgorithmDefsWithOptions(const GetAlgorithmDefsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLatestTimestamp()) {
    query["LatestTimestamp"] = request.latestTimestamp();
  }

  if (!!request.hasRangeEnd()) {
    query["RangeEnd"] = request.rangeEnd();
  }

  if (!!request.hasRangeStart()) {
    query["RangeStart"] = request.rangeStart();
  }

  if (!!request.hasTimestamp()) {
    query["Timestamp"] = request.timestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgorithmDefs"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithm/defs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgorithmDefsResponse>();
}

/**
 * @summary 批量获取算法定义
 *
 * @param request GetAlgorithmDefsRequest
 * @return GetAlgorithmDefsResponse
 */
GetAlgorithmDefsResponse Client::getAlgorithmDefs(const GetAlgorithmDefsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgorithmDefsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取算法树
 *
 * @param request GetAlgorithmTreeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlgorithmTreeResponse
 */
GetAlgorithmTreeResponse Client::getAlgorithmTreeWithOptions(const GetAlgorithmTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlgorithmTree"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/algorithm/tree")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlgorithmTreeResponse>();
}

/**
 * @summary 获取算法树
 *
 * @param request GetAlgorithmTreeRequest
 * @return GetAlgorithmTreeResponse
 */
GetAlgorithmTreeResponse Client::getAlgorithmTree(const GetAlgorithmTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAlgorithmTreeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentResponse>();
}

/**
 * @summary 获取实验信息
 *
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperiment(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary 获取算法文件夹下的内容
 *
 * @param request GetExperimentFolderChildrenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentFolderChildrenResponse
 */
GetExperimentFolderChildrenResponse Client::getExperimentFolderChildrenWithOptions(const string &FolderId, const GetExperimentFolderChildrenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasOnlyFolder()) {
    query["OnlyFolder"] = request.onlyFolder();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentFolderChildren"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentfolders/" , Darabonba::Encode::Encoder::percentEncode(FolderId) , "/children")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentFolderChildrenResponse>();
}

/**
 * @summary 获取算法文件夹下的内容
 *
 * @param request GetExperimentFolderChildrenRequest
 * @return GetExperimentFolderChildrenResponse
 */
GetExperimentFolderChildrenResponse Client::getExperimentFolderChildren(const string &FolderId, const GetExperimentFolderChildrenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentFolderChildrenWithOptions(FolderId, request, headers, runtime);
}

/**
 * @summary 获取实验的元信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentMetaResponse
 */
GetExperimentMetaResponse Client::getExperimentMetaWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentMeta"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/meta")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentMetaResponse>();
}

/**
 * @summary 获取实验的元信息
 *
 * @return GetExperimentMetaResponse
 */
GetExperimentMetaResponse Client::getExperimentMeta(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentMetaWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary 获取实验以及实验节点的状态
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentStatusResponse
 */
GetExperimentStatusResponse Client::getExperimentStatusWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentStatus"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentStatusResponse>();
}

/**
 * @summary 获取实验以及实验节点的状态
 *
 * @return GetExperimentStatusResponse
 */
GetExperimentStatusResponse Client::getExperimentStatus(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentStatusWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary 查询实验的可视化meta
 *
 * @param request GetExperimentVisualizationMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentVisualizationMetaResponse
 */
GetExperimentVisualizationMetaResponse Client::getExperimentVisualizationMetaWithOptions(const string &ExperimentId, const GetExperimentVisualizationMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentVisualizationMeta"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/visualizationMeta")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentVisualizationMetaResponse>();
}

/**
 * @summary 查询实验的可视化meta
 *
 * @param request GetExperimentVisualizationMetaRequest
 * @return GetExperimentVisualizationMetaResponse
 */
GetExperimentVisualizationMetaResponse Client::getExperimentVisualizationMeta(const string &ExperimentId, const GetExperimentVisualizationMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentVisualizationMetaWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 获取实验的统计信息
 *
 * @param request GetExperimentsStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentsStatisticsResponse
 */
GetExperimentsStatisticsResponse Client::getExperimentsStatisticsWithOptions(const GetExperimentsStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.workspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentsStatistics"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentsStatisticsResponse>();
}

/**
 * @summary 获取实验的统计信息
 *
 * @param request GetExperimentsStatisticsRequest
 * @return GetExperimentsStatisticsResponse
 */
GetExperimentsStatisticsResponse Client::getExperimentsStatistics(const GetExperimentsStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentsStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验或文件夹所有者列表
 *
 * @param request GetExperimentsUsersStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentsUsersStatisticsResponse
 */
GetExperimentsUsersStatisticsResponse Client::getExperimentsUsersStatisticsWithOptions(const GetExperimentsUsersStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperimentsUsersStatistics"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/experimentsusers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentsUsersStatisticsResponse>();
}

/**
 * @summary 获取实验或文件夹所有者列表
 *
 * @param request GetExperimentsUsersStatisticsRequest
 * @return GetExperimentsUsersStatisticsResponse
 */
GetExperimentsUsersStatisticsResponse Client::getExperimentsUsersStatistics(const GetExperimentsUsersStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentsUsersStatisticsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取一个PAI Studio作业详情
 *
 * @param request GetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &JobId, const GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary 获取一个PAI Studio作业详情
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &JobId, const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobWithOptions(JobId, request, headers, runtime);
}

/**
 * @summary 获取MaxCompute表schema
 *
 * @param request GetMCTableSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMCTableSchemaResponse
 */
GetMCTableSchemaResponse Client::getMCTableSchemaWithOptions(const string &TableName, const GetMCTableSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMCTableSchema"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasources/maxcompute/tables/" , Darabonba::Encode::Encoder::percentEncode(TableName) , "/schema")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMCTableSchemaResponse>();
}

/**
 * @summary 获取MaxCompute表schema
 *
 * @param request GetMCTableSchemaRequest
 * @return GetMCTableSchemaResponse
 */
GetMCTableSchemaResponse Client::getMCTableSchema(const string &TableName, const GetMCTableSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMCTableSchemaWithOptions(TableName, request, headers, runtime);
}

/**
 * @summary 获取实验节点输入桩的输入表的格式
 *
 * @param request GetNodeInputSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeInputSchemaResponse
 */
GetNodeInputSchemaResponse Client::getNodeInputSchemaWithOptions(const string &ExperimentId, const string &NodeId, const GetNodeInputSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputId()) {
    query["InputId"] = request.inputId();
  }

  if (!!request.hasInputIndex()) {
    query["InputIndex"] = request.inputIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeInputSchema"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/nodes/" , Darabonba::Encode::Encoder::percentEncode(NodeId) , "/schema")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeInputSchemaResponse>();
}

/**
 * @summary 获取实验节点输入桩的输入表的格式
 *
 * @param request GetNodeInputSchemaRequest
 * @return GetNodeInputSchemaResponse
 */
GetNodeInputSchemaResponse Client::getNodeInputSchema(const string &ExperimentId, const string &NodeId, const GetNodeInputSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeInputSchemaWithOptions(ExperimentId, NodeId, request, headers, runtime);
}

/**
 * @summary 获取某个节点的输出模型信息
 *
 * @param request GetNodeOutputRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeOutputResponse
 */
GetNodeOutputResponse Client::getNodeOutputWithOptions(const string &ExperimentId, const string &NodeId, const string &OutputId, const GetNodeOutputRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputIndex()) {
    query["OutputIndex"] = request.outputIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeOutput"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/nodes/" , Darabonba::Encode::Encoder::percentEncode(NodeId) , "/outputs/" , Darabonba::Encode::Encoder::percentEncode(OutputId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeOutputResponse>();
}

/**
 * @summary 获取某个节点的输出模型信息
 *
 * @param request GetNodeOutputRequest
 * @return GetNodeOutputResponse
 */
GetNodeOutputResponse Client::getNodeOutput(const string &ExperimentId, const string &NodeId, const string &OutputId, const GetNodeOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeOutputWithOptions(ExperimentId, NodeId, OutputId, request, headers, runtime);
}

/**
 * @summary 获取PAI Studio中指定模板
 *
 * @param request GetTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const string &TemplateId, const GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary 获取PAI Studio中指定模板
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &TemplateId, const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary 获取授权角色列表
 *
 * @param request ListAuthRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthRolesResponse
 */
ListAuthRolesResponse Client::listAuthRolesWithOptions(const ListAuthRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsGenerateToken()) {
    query["IsGenerateToken"] = request.isGenerateToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthRoles"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/authorization/roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthRolesResponse>();
}

/**
 * @summary 获取授权角色列表
 *
 * @param request ListAuthRolesRequest
 * @return ListAuthRolesResponse
 */
ListAuthRolesResponse Client::listAuthRoles(const ListAuthRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthRolesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实验列表
 *
 * @param request ListExperimentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperimentsWithOptions(const ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasExperimentId()) {
    query["ExperimentId"] = request.experimentId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperiments"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentsResponse>();
}

/**
 * @summary 获取实验列表
 *
 * @param request ListExperimentsRequest
 * @return ListExperimentsResponse
 */
ListExperimentsResponse Client::listExperiments(const ListExperimentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentsWithOptions(request, headers, runtime);
}

/**
 * @summary 列举标签
 *
 * @param request ListImageLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageLabelsResponse
 */
ListImageLabelsResponse Client::listImageLabelsWithOptions(const ListImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasLabelFilter()) {
    query["LabelFilter"] = request.labelFilter();
  }

  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageLabels"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/image/labels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageLabelsResponse>();
}

/**
 * @summary 列举标签
 *
 * @param request ListImageLabelsRequest
 * @return ListImageLabelsResponse
 */
ListImageLabelsResponse Client::listImageLabels(const ListImageLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listImageLabelsWithOptions(request, headers, runtime);
}

/**
 * @summary 列举已注册镜像
 *
 * @param request ListImagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary 列举已注册镜像
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listImagesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取作业详情
 *
 * @param request ListJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasExperimentId()) {
    query["ExperimentId"] = request.experimentId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary 获取作业详情
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取某个节点的输出模型列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeOutputsResponse
 */
ListNodeOutputsResponse Client::listNodeOutputsWithOptions(const string &ExperimentId, const string &NodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodeOutputs"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/nodes/" , Darabonba::Encode::Encoder::percentEncode(NodeId) , "/outputs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeOutputsResponse>();
}

/**
 * @summary 获取某个节点的输出模型列表
 *
 * @return ListNodeOutputsResponse
 */
ListNodeOutputsResponse Client::listNodeOutputs(const string &ExperimentId, const string &NodeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNodeOutputsWithOptions(ExperimentId, NodeId, headers, runtime);
}

/**
 * @summary 获取最近的实验
 *
 * @param request ListRecentExperimentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentExperimentsResponse
 */
ListRecentExperimentsResponse Client::listRecentExperimentsWithOptions(const ListRecentExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecentExperiments"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/recentexperiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentExperimentsResponse>();
}

/**
 * @summary 获取最近的实验
 *
 * @param request ListRecentExperimentsRequest
 * @return ListRecentExperimentsResponse
 */
ListRecentExperimentsResponse Client::listRecentExperiments(const ListRecentExperimentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRecentExperimentsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取PAI Studio中指定模板列表
 *
 * @param request ListTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabel()) {
    query["Label"] = request.label();
  }

  if (!!request.hasList()) {
    query["List"] = request.list();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  if (!!request.hasTypeId()) {
    query["TypeId"] = request.typeId();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary 获取PAI Studio中指定模板列表
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary 迁移PAI Studio 1.0的实验目录 
 *
 * @param request MigrateExperimentFoldersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateExperimentFoldersResponse
 */
MigrateExperimentFoldersResponse Client::migrateExperimentFoldersWithOptions(const MigrateExperimentFoldersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasIsOwner()) {
    query["IsOwner"] = request.isOwner();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateExperimentFolders"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/migrate/folders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateExperimentFoldersResponse>();
}

/**
 * @summary 迁移PAI Studio 1.0的实验目录 
 *
 * @param request MigrateExperimentFoldersRequest
 * @return MigrateExperimentFoldersResponse
 */
MigrateExperimentFoldersResponse Client::migrateExperimentFolders(const MigrateExperimentFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateExperimentFoldersWithOptions(request, headers, runtime);
}

/**
 * @summary 迁移PAI Studio 1.0的实验
 *
 * @param request MigrateExperimentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MigrateExperimentsResponse
 */
MigrateExperimentsResponse Client::migrateExperimentsWithOptions(const MigrateExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDestFolderId()) {
    query["DestFolderId"] = request.destFolderId();
  }

  if (!!request.hasIsOwner()) {
    query["IsOwner"] = request.isOwner();
  }

  if (!!request.hasSourceExpId()) {
    query["SourceExpId"] = request.sourceExpId();
  }

  if (!!request.hasUpdateIfExists()) {
    query["UpdateIfExists"] = request.updateIfExists();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MigrateExperiments"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/migrate/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MigrateExperimentsResponse>();
}

/**
 * @summary 迁移PAI Studio 1.0的实验
 *
 * @param request MigrateExperimentsRequest
 * @return MigrateExperimentsResponse
 */
MigrateExperimentsResponse Client::migrateExperiments(const MigrateExperimentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return migrateExperimentsWithOptions(request, headers, runtime);
}

/**
 * @summary 预览Maxcompute表数据
 *
 * @param request PreviewMCTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewMCTableResponse
 */
PreviewMCTableResponse Client::previewMCTableWithOptions(const string &TableName, const PreviewMCTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasPartition()) {
    query["Partition"] = request.partition();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewMCTable"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasources/maxcompute/tables/" , Darabonba::Encode::Encoder::percentEncode(TableName) , "/preview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewMCTableResponse>();
}

/**
 * @summary 预览Maxcompute表数据
 *
 * @param request PreviewMCTableRequest
 * @return PreviewMCTableResponse
 */
PreviewMCTableResponse Client::previewMCTable(const string &TableName, const PreviewMCTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewMCTableWithOptions(TableName, request, headers, runtime);
}

/**
 * @summary 发布实验
 *
 * @param request PublishExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishExperimentResponse
 */
PublishExperimentResponse Client::publishExperimentWithOptions(const string &ExperimentId, const PublishExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/publish")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishExperimentResponse>();
}

/**
 * @summary 发布实验
 *
 * @param request PublishExperimentRequest
 * @return PublishExperimentResponse
 */
PublishExperimentResponse Client::publishExperiment(const string &ExperimentId, const PublishExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 查询实验的可视化数据
 *
 * @param request QueryExperimentVisualizationDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryExperimentVisualizationDataResponse
 */
QueryExperimentVisualizationDataResponse Client::queryExperimentVisualizationDataWithOptions(const string &ExperimentId, const QueryExperimentVisualizationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "QueryExperimentVisualizationData"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/visualizationDataQuery")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryExperimentVisualizationDataResponse>();
}

/**
 * @summary 查询实验的可视化数据
 *
 * @param request QueryExperimentVisualizationDataRequest
 * @return QueryExperimentVisualizationDataResponse
 */
QueryExperimentVisualizationDataResponse Client::queryExperimentVisualizationData(const string &ExperimentId, const QueryExperimentVisualizationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryExperimentVisualizationDataWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 搜索MaxCompute表
 *
 * @param request SearchMCTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMCTablesResponse
 */
SearchMCTablesResponse Client::searchMCTablesWithOptions(const SearchMCTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMCTables"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasources/maxcompute/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMCTablesResponse>();
}

/**
 * @summary 搜索MaxCompute表
 *
 * @param request SearchMCTablesRequest
 * @return SearchMCTablesResponse
 */
SearchMCTablesResponse Client::searchMCTables(const SearchMCTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchMCTablesWithOptions(request, headers, runtime);
}

/**
 * @summary 停止实验所有运行中的作业
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopExperimentResponse
 */
StopExperimentResponse Client::stopExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopExperiment"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopExperimentResponse>();
}

/**
 * @summary 停止实验所有运行中的作业
 *
 * @return StopExperimentResponse
 */
StopExperimentResponse Client::stopExperiment(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopExperimentWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary 停止一个实验的作业
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopJobResponse
 */
StopJobResponse Client::stopJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopJob"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopJobResponse>();
}

/**
 * @summary 停止一个实验的作业
 *
 * @return StopJobResponse
 */
StopJobResponse Client::stopJob(const string &JobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopJobWithOptions(JobId, headers, runtime);
}

/**
 * @summary 更新实验内容
 *
 * @param request UpdateExperimentContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentContentResponse
 */
UpdateExperimentContentResponse Client::updateExperimentContentWithOptions(const string &ExperimentId, const UpdateExperimentContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperimentContent"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/content")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentContentResponse>();
}

/**
 * @summary 更新实验内容
 *
 * @param request UpdateExperimentContentRequest
 * @return UpdateExperimentContentResponse
 */
UpdateExperimentContentResponse Client::updateExperimentContent(const string &ExperimentId, const UpdateExperimentContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentContentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary 更新算法文件夹
 *
 * @param request UpdateExperimentFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentFolderResponse
 */
UpdateExperimentFolderResponse Client::updateExperimentFolderWithOptions(const string &FolderId, const UpdateExperimentFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentFolderId()) {
    body["ParentFolderId"] = request.parentFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperimentFolder"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experimentfolders/" , Darabonba::Encode::Encoder::percentEncode(FolderId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentFolderResponse>();
}

/**
 * @summary 更新算法文件夹
 *
 * @param request UpdateExperimentFolderRequest
 * @return UpdateExperimentFolderResponse
 */
UpdateExperimentFolderResponse Client::updateExperimentFolder(const string &FolderId, const UpdateExperimentFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentFolderWithOptions(FolderId, request, headers, runtime);
}

/**
 * @summary 更新实验的Meta信息
 *
 * @param request UpdateExperimentMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentMetaResponse
 */
UpdateExperimentMetaResponse Client::updateExperimentMetaWithOptions(const string &ExperimentId, const UpdateExperimentMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperimentMeta"},
    {"version" , "2021-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/meta")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentMetaResponse>();
}

/**
 * @summary 更新实验的Meta信息
 *
 * @param request UpdateExperimentMetaRequest
 * @return UpdateExperimentMetaResponse
 */
UpdateExperimentMetaResponse Client::updateExperimentMeta(const string &ExperimentId, const UpdateExperimentMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentMetaWithOptions(ExperimentId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiStudio20210202