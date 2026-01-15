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
 * @summary 根据客户模型ID查询模型特征信息
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
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
 * @summary 根据客户模型ID查询模型特征信息
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
 *
 * @param request DescribeCustomerModuleMetaInfoRequest
 * @return DescribeCustomerModuleMetaInfoResponse
 */
DescribeCustomerModuleMetaInfoResponse Client::describeCustomerModuleMetaInfo(const DescribeCustomerModuleMetaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomerModuleMetaInfoWithOptions(request, runtime);
}

/**
 * @summary 根据客户模型ID查询模型出参信息
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
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
 * @summary 根据客户模型ID查询模型出参信息
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
 *
 * @param request DescribeCustomerModuleOutputInfoRequest
 * @return DescribeCustomerModuleOutputInfoResponse
 */
DescribeCustomerModuleOutputInfoResponse Client::describeCustomerModuleOutputInfo(const DescribeCustomerModuleOutputInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomerModuleOutputInfoWithOptions(request, runtime);
}

/**
 * @summary 根据特征模板返回特征模板具体特征选项
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 根据特征模板返回特征模板具体特征选项
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @param request DescribeFeatureOptionRequest
 * @return DescribeFeatureOptionResponse
 */
DescribeFeatureOptionResponse Client::describeFeatureOption(const DescribeFeatureOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFeatureOptionWithOptions(request, runtime);
}

/**
 * @summary 获取可用的特征模板列表，用于模型配置。
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 获取可用的特征模板列表，用于模型配置。
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @return DescribeFeatureTemplateListResponse
 */
DescribeFeatureTemplateListResponse Client::describeFeatureTemplateList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFeatureTemplateListWithOptions(runtime);
}

/**
 * @summary 渲染模型的特征配置
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 渲染模型的特征配置
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @param request DescribeModelFeatureRequest
 * @return DescribeModelFeatureResponse
 */
DescribeModelFeatureResponse Client::describeModelFeature(const DescribeModelFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelFeatureWithOptions(request, runtime);
}

/**
 * @summary 获取上传oss鉴权数据
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
 * @summary 获取上传oss鉴权数据
 *
 * @return DescribeModelOssTokenResponse
 */
DescribeModelOssTokenResponse Client::describeModelOssToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelOssTokenWithOptions(runtime);
}

/**
 * @summary 根据客户模型ID查询指定模型对应服务是否存在
 *
 * @description ## 请求说明
 * 该接口用于通过提供的`customerModuleId`来检查特定的模型服务是否已经存在。如果存在，则返回`true`；反之则返回`false`。
 * ### 注意事项
 * - `customerModuleId`是必须提供的参数，且为字符串类型。
 * - 此API主要用于前端页面展示或逻辑判断时使用，以确认用户所选模型是否有对应的服务被创建。
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
 * @summary 根据客户模型ID查询指定模型对应服务是否存在
 *
 * @description ## 请求说明
 * 该接口用于通过提供的`customerModuleId`来检查特定的模型服务是否已经存在。如果存在，则返回`true`；反之则返回`false`。
 * ### 注意事项
 * - `customerModuleId`是必须提供的参数，且为字符串类型。
 * - 此API主要用于前端页面展示或逻辑判断时使用，以确认用户所选模型是否有对应的服务被创建。
 *
 * @param request DescribeModuleServiceExistRequest
 * @return DescribeModuleServiceExistResponse
 */
DescribeModuleServiceExistResponse Client::describeModuleServiceExist(const DescribeModuleServiceExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModuleServiceExistWithOptions(request, runtime);
}

/**
 * @summary 根据客户模型ID查询模型当前状态
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
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
 * @summary 根据客户模型ID查询模型当前状态
 *
 * @description ## 请求说明
 * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
 *
 * @param request DescribeModuleStatusRequest
 * @return DescribeModuleStatusResponse
 */
DescribeModuleStatusResponse Client::describeModuleStatus(const DescribeModuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModuleStatusWithOptions(request, runtime);
}

/**
 * @summary 查询模型托管订单
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
 * @summary 查询模型托管订单
 *
 * @return DescribeSafRmmpOrderResponse
 */
DescribeSafRmmpOrderResponse Client::describeSafRmmpOrder() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafRmmpOrderWithOptions(runtime);
}

/**
 * @summary 查询场景和服务
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
 * @summary 查询场景和服务
 *
 * @param request DescribeServiceAndSceneRequest
 * @return DescribeServiceAndSceneResponse
 */
DescribeServiceAndSceneResponse Client::describeServiceAndScene(const DescribeServiceAndSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceAndSceneWithOptions(request, runtime);
}

/**
 * @summary 获取指定用户下的所有模型信息，支持分页查询
 *
 * @description ## 请求说明
 * 该 API 用于查询特定用户下的所有模型信息，并支持通过分页参数进行分页查询。可以通过 `name` 参数进行模糊搜索。
 * - `regId`: 地域标识，必填。
 * - `pageSize`: 每页显示的条目数，必填。
 * - `currentPage`: 当前页码，从1开始计数，必填。
 * - `userId`: 用户ID，必填。
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
 * @summary 获取指定用户下的所有模型信息，支持分页查询
 *
 * @description ## 请求说明
 * 该 API 用于查询特定用户下的所有模型信息，并支持通过分页参数进行分页查询。可以通过 `name` 参数进行模糊搜索。
 * - `regId`: 地域标识，必填。
 * - `pageSize`: 每页显示的条目数，必填。
 * - `currentPage`: 当前页码，从1开始计数，必填。
 * - `userId`: 用户ID，必填。
 *
 * @param request DescribeUserModelListRequest
 * @return DescribeUserModelListResponse
 */
DescribeUserModelListResponse Client::describeUserModelList(const DescribeUserModelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserModelListWithOptions(request, runtime);
}

/**
 * @summary 迭代模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
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
 * @summary 迭代模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
 *
 * @param request DuplicateModelRequest
 * @return DuplicateModelResponse
 */
DuplicateModelResponse Client::duplicateModel(const DuplicateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return duplicateModelWithOptions(request, runtime);
}

/**
 * @summary 编辑模型
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
 * @summary 编辑模型
 *
 * @param request EditModelRequest
 * @return EditModelResponse
 */
EditModelResponse Client::editModel(const EditModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editModelWithOptions(request, runtime);
}

/**
 * @summary 迭代模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
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
 * @summary 迭代模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
 *
 * @param request IterateModelRequest
 * @return IterateModelResponse
 */
IterateModelResponse Client::iterateModel(const IterateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return iterateModelWithOptions(request, runtime);
}

/**
 * @summary 下线模型
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
 * @summary 下线模型
 *
 * @param request OfflineModelRequest
 * @return OfflineModelResponse
 */
OfflineModelResponse Client::offlineModel(const OfflineModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineModelWithOptions(request, runtime);
}

/**
 * @summary 上线模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
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
 * @summary 上线模型
 *
 * @description ## 请求说明
 * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
 * - **注意**：删除操作不可逆，请谨慎使用。
 *
 * @param request OnlineModelRequest
 * @return OnlineModelResponse
 */
OnlineModelResponse Client::onlineModel(const OnlineModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineModelWithOptions(request, runtime);
}

/**
 * @summary 解析表达式参数
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 解析表达式参数
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @param request ParseExpressionParametersRequest
 * @return ParseExpressionParametersResponse
 */
ParseExpressionParametersResponse Client::parseExpressionParameters(const ParseExpressionParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return parseExpressionParametersWithOptions(request, runtime);
}

/**
 * @summary 预发布模型
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
 * @summary 预发布模型
 *
 * @param request PrepublishModelRequest
 * @return PrepublishModelResponse
 */
PrepublishModelResponse Client::prepublishModel(const PrepublishModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return prepublishModelWithOptions(request, runtime);
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
 * @summary 预发布测试模型
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 预发布测试模型
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @param request TestModelRequest
 * @return TestModelResponse
 */
TestModelResponse Client::testModel(const TestModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testModelWithOptions(request, runtime);
}

/**
 * @summary 预发布测试模型
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 预发布测试模型
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
 *
 * @param request TestPreModelRequest
 * @return TestPreModelResponse
 */
TestPreModelResponse Client::testPreModel(const TestPreModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testPreModelWithOptions(request, runtime);
}

/**
 * @summary 测试表达式
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
 * @summary 测试表达式
 *
 * @description ## 请求说明
 * - 该接口用于查询系统中所有可用的特征模板。
 * - 请求方式为 GET，无需提供额外参数。
 * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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