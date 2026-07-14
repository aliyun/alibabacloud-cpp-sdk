#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Yike20260707::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Yike20260707
{

AlibabaCloud::Yike20260707::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "yike.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "yike.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("yike", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 查询媒资内容理解作业
 *
 * @param request GetMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJobWithOptions(const GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaComprehensionJobResponse>();
}

/**
 * @summary 查询媒资内容理解作业
 *
 * @param request GetMediaComprehensionJobRequest
 * @return GetMediaComprehensionJobResponse
 */
GetMediaComprehensionJobResponse Client::getMediaComprehensionJob(const GetMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaComprehensionJobWithOptions(request, runtime);
}

/**
 * @summary 提交媒资内容理解作业
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJobWithOptions(const SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobParams()) {
    query["JobParams"] = request.getJobParams();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaComprehensionJob"},
    {"version" , "2026-07-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaComprehensionJobResponse>();
}

/**
 * @summary 提交媒资内容理解作业
 *
 * @param request SubmitMediaComprehensionJobRequest
 * @return SubmitMediaComprehensionJobResponse
 */
SubmitMediaComprehensionJobResponse Client::submitMediaComprehensionJob(const SubmitMediaComprehensionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaComprehensionJobWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Yike20260707