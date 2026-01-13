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
} // namespace AlibabaCloud
} // namespace Safconsole20250521