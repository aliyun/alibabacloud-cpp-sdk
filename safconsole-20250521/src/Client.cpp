#include <darabonba/Core.hpp>
#include <alibabacloud/Safconsole20250521.hpp>
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
using namespace AlibabaCloud::Safconsole20250521::Models;
namespace AlibabaCloud
{
namespace Safconsole20250521
{

AlibabaCloud::Safconsole20250521::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("safconsole", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Apply for Bastion Host Account
 *
 * @description ## Request Description
 * - This interface is used for customers to create a modeling project for the first time.
 * - `projectName` is a required field, with a maximum length of 50 characters.
 * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
 * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
 *
 * @param request ApplyBastionAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyBastionAccountResponse
 */
ApplyBastionAccountResponse Client::applyBastionAccountWithOptions(const ApplyBastionAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyBastionAccount"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyBastionAccountResponse>();
}

/**
 * @summary Apply for Bastion Host Account
 *
 * @description ## Request Description
 * - This interface is used for customers to create a modeling project for the first time.
 * - `projectName` is a required field, with a maximum length of 50 characters.
 * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
 * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
 *
 * @param request ApplyBastionAccountRequest
 * @return ApplyBastionAccountResponse
 */
ApplyBastionAccountResponse Client::applyBastionAccount(const ApplyBastionAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyBastionAccountWithOptions(request, runtime);
}

/**
 * @summary Associate Retrospective Task
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request AssociatePocTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociatePocTaskResponse
 */
AssociatePocTaskResponse Client::associatePocTaskWithOptions(const AssociatePocTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociatePocTask"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociatePocTaskResponse>();
}

/**
 * @summary Associate Retrospective Task
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request AssociatePocTaskRequest
 * @return AssociatePocTaskResponse
 */
AssociatePocTaskResponse Client::associatePocTask(const AssociatePocTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associatePocTaskWithOptions(request, runtime);
}

/**
 * @summary Complete project and release resources.
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request CompleteModelingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteModelingProjectResponse
 */
CompleteModelingProjectResponse Client::completeModelingProjectWithOptions(const CompleteModelingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteModelingProject"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteModelingProjectResponse>();
}

/**
 * @summary Complete project and release resources.
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request CompleteModelingProjectRequest
 * @return CompleteModelingProjectResponse
 */
CompleteModelingProjectResponse Client::completeModelingProject(const CompleteModelingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeModelingProjectWithOptions(request, runtime);
}

/**
 * @summary Create basic model information
 *
 * @param request CreateCustomerModuleBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomerModuleBasicInfoResponse
 */
CreateCustomerModuleBasicInfoResponse Client::createCustomerModuleBasicInfoWithOptions(const CreateCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleName()) {
    query["CustomerModuleName"] = request.getCustomerModuleName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasModuleType()) {
    query["ModuleType"] = request.getModuleType();
  }

  if (!!request.hasStorePath()) {
    query["StorePath"] = request.getStorePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomerModuleBasicInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomerModuleBasicInfoResponse>();
}

/**
 * @summary Create basic model information
 *
 * @param request CreateCustomerModuleBasicInfoRequest
 * @return CreateCustomerModuleBasicInfoResponse
 */
CreateCustomerModuleBasicInfoResponse Client::createCustomerModuleBasicInfo(const CreateCustomerModuleBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomerModuleBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Save Model Feature Configuration
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
 *
 * @param request CreateCustomerModuleMetaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomerModuleMetaInfoResponse
 */
CreateCustomerModuleMetaInfoResponse Client::createCustomerModuleMetaInfoWithOptions(const CreateCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  if (!!request.hasFeatureString()) {
    query["FeatureString"] = request.getFeatureString();
  }

  if (!!request.hasFeatureTemplate()) {
    query["FeatureTemplate"] = request.getFeatureTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomerModuleMetaInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomerModuleMetaInfoResponse>();
}

/**
 * @summary Save Model Feature Configuration
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
 *
 * @param request CreateCustomerModuleMetaInfoRequest
 * @return CreateCustomerModuleMetaInfoResponse
 */
CreateCustomerModuleMetaInfoResponse Client::createCustomerModuleMetaInfo(const CreateCustomerModuleMetaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomerModuleMetaInfoWithOptions(request, runtime);
}

/**
 * @summary Create Model Output Information
 *
 * @param request CreateCustomerModuleOutputInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomerModuleOutputInfoResponse
 */
CreateCustomerModuleOutputInfoResponse Client::createCustomerModuleOutputInfoWithOptions(const CreateCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  if (!!request.hasFinalScoreFormat()) {
    query["FinalScoreFormat"] = request.getFinalScoreFormat();
  }

  if (!!request.hasProcessExpression()) {
    query["ProcessExpression"] = request.getProcessExpression();
  }

  if (!!request.hasTestFileUrl()) {
    query["TestFileUrl"] = request.getTestFileUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomerModuleOutputInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomerModuleOutputInfoResponse>();
}

/**
 * @summary Create Model Output Information
 *
 * @param request CreateCustomerModuleOutputInfoRequest
 * @return CreateCustomerModuleOutputInfoResponse
 */
CreateCustomerModuleOutputInfoResponse Client::createCustomerModuleOutputInfo(const CreateCustomerModuleOutputInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomerModuleOutputInfoWithOptions(request, runtime);
}

/**
 * @summary Initialize a modeling project.
 *
 * @description ## Request Description
 * - This interface is used for customers to create a modeling project for the first time.
 * - `projectName` is a required field, with a maximum length of 50 characters.
 * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
 * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
 *
 * @param request CreateModelingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelingProjectResponse
 */
CreateModelingProjectResponse Client::createModelingProjectWithOptions(const CreateModelingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelingProject"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelingProjectResponse>();
}

/**
 * @summary Initialize a modeling project.
 *
 * @description ## Request Description
 * - This interface is used for customers to create a modeling project for the first time.
 * - `projectName` is a required field, with a maximum length of 50 characters.
 * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
 * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
 *
 * @param request CreateModelingProjectRequest
 * @return CreateModelingProjectResponse
 */
CreateModelingProjectResponse Client::createModelingProject(const CreateModelingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelingProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified customer model based on the provided customer model ID.
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: Deletion is irreversible, please use with caution.
 *
 * @param request DeleteModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary Deletes the specified customer model based on the provided customer model ID.
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: Deletion is irreversible, please use with caution.
 *
 * @param request DeleteModelRequest
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const DeleteModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelWithOptions(request, runtime);
}

/**
 * @summary Deploy Model File
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DeployModelFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployModelFileResponse
 */
DeployModelFileResponse Client::deployModelFileWithOptions(const DeployModelFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployModelFile"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployModelFileResponse>();
}

/**
 * @summary Deploy Model File
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DeployModelFileRequest
 * @return DeployModelFileResponse
 */
DeployModelFileResponse Client::deployModelFile(const DeployModelFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployModelFileWithOptions(request, runtime);
}

/**
 * @summary Query basic model information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomerModuleBasicInfoResponse
 */
DescribeCustomerModuleBasicInfoResponse Client::describeCustomerModuleBasicInfoWithOptions(const DescribeCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomerModuleBasicInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomerModuleBasicInfoResponse>();
}

/**
 * @summary Query basic model information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleBasicInfoRequest
 * @return DescribeCustomerModuleBasicInfoResponse
 */
DescribeCustomerModuleBasicInfoResponse Client::describeCustomerModuleBasicInfo(const DescribeCustomerModuleBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomerModuleBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Query model feature information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleMetaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomerModuleMetaInfoResponse
 */
DescribeCustomerModuleMetaInfoResponse Client::describeCustomerModuleMetaInfoWithOptions(const DescribeCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomerModuleMetaInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomerModuleMetaInfoResponse>();
}

/**
 * @summary Query model feature information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleMetaInfoRequest
 * @return DescribeCustomerModuleMetaInfoResponse
 */
DescribeCustomerModuleMetaInfoResponse Client::describeCustomerModuleMetaInfo(const DescribeCustomerModuleMetaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomerModuleMetaInfoWithOptions(request, runtime);
}

/**
 * @summary Query model output information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleOutputInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomerModuleOutputInfoResponse
 */
DescribeCustomerModuleOutputInfoResponse Client::describeCustomerModuleOutputInfoWithOptions(const DescribeCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomerModuleOutputInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomerModuleOutputInfoResponse>();
}

/**
 * @summary Query model output information based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
 *
 * @param request DescribeCustomerModuleOutputInfoRequest
 * @return DescribeCustomerModuleOutputInfoResponse
 */
DescribeCustomerModuleOutputInfoResponse Client::describeCustomerModuleOutputInfo(const DescribeCustomerModuleOutputInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomerModuleOutputInfoWithOptions(request, runtime);
}

/**
 * @summary Return specific feature options based on the feature template
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request DescribeFeatureOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFeatureOptionResponse
 */
DescribeFeatureOptionResponse Client::describeFeatureOptionWithOptions(const DescribeFeatureOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureTemplate()) {
    query["FeatureTemplate"] = request.getFeatureTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFeatureOption"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFeatureOptionResponse>();
}

/**
 * @summary Return specific feature options based on the feature template
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request DescribeFeatureOptionRequest
 * @return DescribeFeatureOptionResponse
 */
DescribeFeatureOptionResponse Client::describeFeatureOption(const DescribeFeatureOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFeatureOptionWithOptions(request, runtime);
}

/**
 * @summary Get the list of available feature templates for model configuration.
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which consists of a label (label) and a value (value).
 *
 * @param request DescribeFeatureTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFeatureTemplateListResponse
 */
DescribeFeatureTemplateListResponse Client::describeFeatureTemplateListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeFeatureTemplateList"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFeatureTemplateListResponse>();
}

/**
 * @summary Get the list of available feature templates for model configuration.
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which consists of a label (label) and a value (value).
 *
 * @return DescribeFeatureTemplateListResponse
 */
DescribeFeatureTemplateListResponse Client::describeFeatureTemplateList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFeatureTemplateListWithOptions(runtime);
}

/**
 * @summary Get File Download Link
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DescribeFileDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileDownloadUrlResponse
 */
DescribeFileDownloadUrlResponse Client::describeFileDownloadUrlWithOptions(const DescribeFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFileDownloadUrl"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileDownloadUrlResponse>();
}

/**
 * @summary Get File Download Link
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DescribeFileDownloadUrlRequest
 * @return DescribeFileDownloadUrlResponse
 */
DescribeFileDownloadUrlResponse Client::describeFileDownloadUrl(const DescribeFileDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Render the feature configuration of the model
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each including a label (label) and value (value).
 *
 * @param request DescribeModelFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelFeatureResponse
 */
DescribeModelFeatureResponse Client::describeModelFeatureWithOptions(const DescribeModelFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  if (!!request.hasFeatureTemplate()) {
    query["FeatureTemplate"] = request.getFeatureTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelFeature"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelFeatureResponse>();
}

/**
 * @summary Render the feature configuration of the model
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each including a label (label) and value (value).
 *
 * @param request DescribeModelFeatureRequest
 * @return DescribeModelFeatureResponse
 */
DescribeModelFeatureResponse Client::describeModelFeature(const DescribeModelFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelFeatureWithOptions(request, runtime);
}

/**
 * @summary Obtain OSS Authentication Data for Upload
 *
 * @param request DescribeModelOssTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelOssTokenResponse
 */
DescribeModelOssTokenResponse Client::describeModelOssTokenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeModelOssToken"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelOssTokenResponse>();
}

/**
 * @summary Obtain OSS Authentication Data for Upload
 *
 * @return DescribeModelOssTokenResponse
 */
DescribeModelOssTokenResponse Client::describeModelOssToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelOssTokenWithOptions(runtime);
}

/**
 * @summary Get detailed project data
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DescribeModelingProjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelingProjectDetailResponse
 */
DescribeModelingProjectDetailResponse Client::describeModelingProjectDetailWithOptions(const DescribeModelingProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelingProjectDetail"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelingProjectDetailResponse>();
}

/**
 * @summary Get detailed project data
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request DescribeModelingProjectDetailRequest
 * @return DescribeModelingProjectDetailResponse
 */
DescribeModelingProjectDetailResponse Client::describeModelingProjectDetail(const DescribeModelingProjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelingProjectDetailWithOptions(request, runtime);
}

/**
 * @summary Paginated query for the list of modeling projects under the current user.
 *
 * @description ## 请求说明
 * - 该API用于获取指定租户下的所有建模项目的概览信息。
 * - 支持通过`pageSize`和`currentPage`参数进行分页查询，默认每页显示10条记录。
 * - 可选地，使用`status`参数来过滤特定状态（如`active`, `released`等）的项目。
 * - 返回结果中包含每个项目的ID、名称、环境状态、建模状态、开始时间及结束时间（如果有的话），以及创建该项目的登录账号。
 *
 * @param request DescribeModelingProjectListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelingProjectListResponse
 */
DescribeModelingProjectListResponse Client::describeModelingProjectListWithOptions(const DescribeModelingProjectListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelingProjectList"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelingProjectListResponse>();
}

/**
 * @summary Paginated query for the list of modeling projects under the current user.
 *
 * @description ## 请求说明
 * - 该API用于获取指定租户下的所有建模项目的概览信息。
 * - 支持通过`pageSize`和`currentPage`参数进行分页查询，默认每页显示10条记录。
 * - 可选地，使用`status`参数来过滤特定状态（如`active`, `released`等）的项目。
 * - 返回结果中包含每个项目的ID、名称、环境状态、建模状态、开始时间及结束时间（如果有的话），以及创建该项目的登录账号。
 *
 * @param request DescribeModelingProjectListRequest
 * @return DescribeModelingProjectListResponse
 */
DescribeModelingProjectListResponse Client::describeModelingProjectList(const DescribeModelingProjectListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelingProjectListWithOptions(request, runtime);
}

/**
 * @summary Query Whether the Service Corresponding to a Specific Model Exists Based on Customer Model ID
 *
 * @description ## Request Description
 * This interface is used to check whether a specific model service exists by providing the `customerModuleId`. If it exists, it returns `true`; otherwise, it returns `false`.
 * ### Notes
 * - `customerModuleId` is a required parameter and must be of string type.
 * - This API is mainly used for front-end page display or logical judgment to confirm whether the service corresponding to the user\\"s selected model has been created.
 *
 * @param request DescribeModuleServiceExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModuleServiceExistResponse
 */
DescribeModuleServiceExistResponse Client::describeModuleServiceExistWithOptions(const DescribeModuleServiceExistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModuleServiceExist"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModuleServiceExistResponse>();
}

/**
 * @summary Query Whether the Service Corresponding to a Specific Model Exists Based on Customer Model ID
 *
 * @description ## Request Description
 * This interface is used to check whether a specific model service exists by providing the `customerModuleId`. If it exists, it returns `true`; otherwise, it returns `false`.
 * ### Notes
 * - `customerModuleId` is a required parameter and must be of string type.
 * - This API is mainly used for front-end page display or logical judgment to confirm whether the service corresponding to the user\\"s selected model has been created.
 *
 * @param request DescribeModuleServiceExistRequest
 * @return DescribeModuleServiceExistResponse
 */
DescribeModuleServiceExistResponse Client::describeModuleServiceExist(const DescribeModuleServiceExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModuleServiceExistWithOptions(request, runtime);
}

/**
 * @summary Query the current status of a model based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
 *
 * @param request DescribeModuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModuleStatusResponse
 */
DescribeModuleStatusResponse Client::describeModuleStatusWithOptions(const DescribeModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModuleStatus"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModuleStatusResponse>();
}

/**
 * @summary Query the current status of a model based on the customer model ID
 *
 * @description ## Request Description
 * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
 *
 * @param request DescribeModuleStatusRequest
 * @return DescribeModuleStatusResponse
 */
DescribeModuleStatusResponse Client::describeModuleStatus(const DescribeModuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModuleStatusWithOptions(request, runtime);
}

/**
 * @summary Query POC task list.
 *
 * @param request DescribePocTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribePocTaskList"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocTaskListResponse>();
}

/**
 * @summary Query POC task list.
 *
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocTaskListWithOptions(runtime);
}

/**
 * @summary Query Model Hosting Orders
 *
 * @param request DescribeSafRmmpOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafRmmpOrderResponse
 */
DescribeSafRmmpOrderResponse Client::describeSafRmmpOrderWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeSafRmmpOrder"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafRmmpOrderResponse>();
}

/**
 * @summary Query Model Hosting Orders
 *
 * @return DescribeSafRmmpOrderResponse
 */
DescribeSafRmmpOrderResponse Client::describeSafRmmpOrder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafRmmpOrderWithOptions(runtime);
}

/**
 * @summary Query Scene and Service
 *
 * @param request DescribeServiceAndSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceAndSceneResponse
 */
DescribeServiceAndSceneResponse Client::describeServiceAndSceneWithOptions(const DescribeServiceAndSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceAndScene"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceAndSceneResponse>();
}

/**
 * @summary Query Scene and Service
 *
 * @param request DescribeServiceAndSceneRequest
 * @return DescribeServiceAndSceneResponse
 */
DescribeServiceAndSceneResponse Client::describeServiceAndScene(const DescribeServiceAndSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceAndSceneWithOptions(request, runtime);
}

/**
 * @summary Get all model information for a specified user, supporting pagination
 *
 * @description ## Request Description
 * This API is used to query all model information under a specific user and supports pagination through page parameters. Fuzzy search can be performed using the `name` parameter.
 * - `regId`: Region identifier, required.
 * - `pageSize`: Number of items per page, required.
 * - `currentPage`: Current page number, starting from 1, required.
 * - `userId`: User ID, required.
 *
 * @param request DescribeUserModelListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserModelListResponse
 */
DescribeUserModelListResponse Client::describeUserModelListWithOptions(const DescribeUserModelListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserModelList"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserModelListResponse>();
}

/**
 * @summary Get all model information for a specified user, supporting pagination
 *
 * @description ## Request Description
 * This API is used to query all model information under a specific user and supports pagination through page parameters. Fuzzy search can be performed using the `name` parameter.
 * - `regId`: Region identifier, required.
 * - `pageSize`: Number of items per page, required.
 * - `currentPage`: Current page number, starting from 1, required.
 * - `userId`: User ID, required.
 *
 * @param request DescribeUserModelListRequest
 * @return DescribeUserModelListResponse
 */
DescribeUserModelListResponse Client::describeUserModelList(const DescribeUserModelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserModelListWithOptions(request, runtime);
}

/**
 * @summary Iterate Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request DuplicateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DuplicateModelResponse
 */
DuplicateModelResponse Client::duplicateModelWithOptions(const DuplicateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DuplicateModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DuplicateModelResponse>();
}

/**
 * @summary Iterate Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request DuplicateModelRequest
 * @return DuplicateModelResponse
 */
DuplicateModelResponse Client::duplicateModel(const DuplicateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return duplicateModelWithOptions(request, runtime);
}

/**
 * @summary Edit Model
 *
 * @param request EditModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditModelResponse
 */
EditModelResponse Client::editModelWithOptions(const EditModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditModelResponse>();
}

/**
 * @summary Edit Model
 *
 * @param request EditModelRequest
 * @return EditModelResponse
 */
EditModelResponse Client::editModel(const EditModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editModelWithOptions(request, runtime);
}

/**
 * @summary View Bastion Host Initial Password
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request GetBastionHostCertificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBastionHostCertificationResponse
 */
GetBastionHostCertificationResponse Client::getBastionHostCertificationWithOptions(const GetBastionHostCertificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBastionHostCertification"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBastionHostCertificationResponse>();
}

/**
 * @summary View Bastion Host Initial Password
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request GetBastionHostCertificationRequest
 * @return GetBastionHostCertificationResponse
 */
GetBastionHostCertificationResponse Client::getBastionHostCertification(const GetBastionHostCertificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBastionHostCertificationWithOptions(request, runtime);
}

/**
 * @summary Iterate Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request IterateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IterateModelResponse
 */
IterateModelResponse Client::iterateModelWithOptions(const IterateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IterateModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IterateModelResponse>();
}

/**
 * @summary Iterate Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request IterateModelRequest
 * @return IterateModelResponse
 */
IterateModelResponse Client::iterateModel(const IterateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return iterateModelWithOptions(request, runtime);
}

/**
 * @summary Offline Model
 *
 * @param request OfflineModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineModelResponse
 */
OfflineModelResponse Client::offlineModelWithOptions(const OfflineModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineModelResponse>();
}

/**
 * @summary Offline Model
 *
 * @param request OfflineModelRequest
 * @return OfflineModelResponse
 */
OfflineModelResponse Client::offlineModel(const OfflineModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineModelWithOptions(request, runtime);
}

/**
 * @summary Online Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: Deletion is irreversible, please use with caution.
 *
 * @param request OnlineModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineModelResponse
 */
OnlineModelResponse Client::onlineModelWithOptions(const OnlineModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnlineModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineModelResponse>();
}

/**
 * @summary Online Model
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: Deletion is irreversible, please use with caution.
 *
 * @param request OnlineModelRequest
 * @return OnlineModelResponse
 */
OnlineModelResponse Client::onlineModel(const OnlineModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineModelWithOptions(request, runtime);
}

/**
 * @summary Parse Expression Parameters
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request ParseExpressionParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ParseExpressionParametersResponse
 */
ParseExpressionParametersResponse Client::parseExpressionParametersWithOptions(const ParseExpressionParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ParseExpressionParameters"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ParseExpressionParametersResponse>();
}

/**
 * @summary Parse Expression Parameters
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request ParseExpressionParametersRequest
 * @return ParseExpressionParametersResponse
 */
ParseExpressionParametersResponse Client::parseExpressionParameters(const ParseExpressionParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return parseExpressionParametersWithOptions(request, runtime);
}

/**
 * @summary Pre-release Model
 *
 * @param request PrepublishModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrepublishModelResponse
 */
PrepublishModelResponse Client::prepublishModelWithOptions(const PrepublishModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrepublishModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrepublishModelResponse>();
}

/**
 * @summary Pre-release Model
 *
 * @param request PrepublishModelRequest
 * @return PrepublishModelResponse
 */
PrepublishModelResponse Client::prepublishModel(const PrepublishModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return prepublishModelWithOptions(request, runtime);
}

/**
 * @summary Request to Sync Model Files
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request RequestModelFileSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequestModelFileSyncResponse
 */
RequestModelFileSyncResponse Client::requestModelFileSyncWithOptions(const RequestModelFileSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RequestModelFileSync"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequestModelFileSyncResponse>();
}

/**
 * @summary Request to Sync Model Files
 *
 * @description ## 请求说明
 * - 本接口用于客户首次创建建模项目。
 * - `projectName` 是必填项，长度不超过50个字符。
 * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
 * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
 *
 * @param request RequestModelFileSyncRequest
 * @return RequestModelFileSyncResponse
 */
RequestModelFileSyncResponse Client::requestModelFileSync(const RequestModelFileSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requestModelFileSyncWithOptions(request, runtime);
}

/**
 * @summary Roll back the specified customer model based on the provided customer model ID.
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request RollbackModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackModelResponse
 */
RollbackModelResponse Client::rollbackModelWithOptions(const RollbackModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackModelResponse>();
}

/**
 * @summary Roll back the specified customer model based on the provided customer model ID.
 *
 * @description ## Request Description
 * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
 * - **Note**: The deletion operation is irreversible, please use with caution.
 *
 * @param request RollbackModelRequest
 * @return RollbackModelResponse
 */
RollbackModelResponse Client::rollbackModel(const RollbackModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackModelWithOptions(request, runtime);
}

/**
 * @summary Pre-release Model Testing
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestModelResponse
 */
TestModelResponse Client::testModelWithOptions(const TestModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestModelResponse>();
}

/**
 * @summary Pre-release Model Testing
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestModelRequest
 * @return TestModelResponse
 */
TestModelResponse Client::testModel(const TestModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testModelWithOptions(request, runtime);
}

/**
 * @summary Pre-release Test Model
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestPreModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestPreModelResponse
 */
TestPreModelResponse Client::testPreModelWithOptions(const TestPreModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestPreModel"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestPreModelResponse>();
}

/**
 * @summary Pre-release Test Model
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestPreModelRequest
 * @return TestPreModelResponse
 */
TestPreModelResponse Client::testPreModel(const TestPreModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testPreModelWithOptions(request, runtime);
}

/**
 * @summary Test Expression
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestProcessExpressionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestProcessExpressionResponse
 */
TestProcessExpressionResponse Client::testProcessExpressionWithOptions(const TestProcessExpressionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpression()) {
    query["Expression"] = request.getExpression();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestProcessExpression"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestProcessExpressionResponse>();
}

/**
 * @summary Test Expression
 *
 * @description ## Request Description
 * - This interface is used to query all available feature templates in the system.
 * - The request method is GET, and no additional parameters are required.
 * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
 *
 * @param request TestProcessExpressionRequest
 * @return TestProcessExpressionResponse
 */
TestProcessExpressionResponse Client::testProcessExpression(const TestProcessExpressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testProcessExpressionWithOptions(request, runtime);
}

/**
 * @summary Update basic model information
 *
 * @param request UpdateModuleBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModuleBasicInfoResponse
 */
UpdateModuleBasicInfoResponse Client::updateModuleBasicInfoWithOptions(const UpdateModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  if (!!request.hasCustomerModuleName()) {
    query["CustomerModuleName"] = request.getCustomerModuleName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasModuleType()) {
    query["ModuleType"] = request.getModuleType();
  }

  if (!!request.hasStorePath()) {
    query["StorePath"] = request.getStorePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateModuleBasicInfo"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModuleBasicInfoResponse>();
}

/**
 * @summary Update basic model information
 *
 * @param request UpdateModuleBasicInfoRequest
 * @return UpdateModuleBasicInfoResponse
 */
UpdateModuleBasicInfoResponse Client::updateModuleBasicInfo(const UpdateModuleBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModuleBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Validate model file
 *
 * @param request ValidateModelFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateModelFileResponse
 */
ValidateModelFileResponse Client::validateModelFileWithOptions(const ValidateModelFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateModelFile"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateModelFileResponse>();
}

/**
 * @summary Validate model file
 *
 * @param request ValidateModelFileRequest
 * @return ValidateModelFileResponse
 */
ValidateModelFileResponse Client::validateModelFile(const ValidateModelFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateModelFileWithOptions(request, runtime);
}

/**
 * @summary Validate Test File
 *
 * @param request ValidateTestFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateTestFileResponse
 */
ValidateTestFileResponse Client::validateTestFileWithOptions(const ValidateTestFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerModuleId()) {
    query["CustomerModuleId"] = request.getCustomerModuleId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateTestFile"},
    {"version" , "2025-05-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateTestFileResponse>();
}

/**
 * @summary Validate Test File
 *
 * @param request ValidateTestFileRequest
 * @return ValidateTestFileResponse
 */
ValidateTestFileResponse Client::validateTestFile(const ValidateTestFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateTestFileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Safconsole20250521