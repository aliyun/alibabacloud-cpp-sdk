#include <darabonba/Core.hpp>
#include <alibabacloud/CCC20200527.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::CCC20200527::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace CCC20200527
{

AlibabaCloud::CCC20200527::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "ccc.aliyuncs.com"},
    {"ap-south-1" , "ccc.aliyuncs.com"},
    {"ap-southeast-1" , "ccc.aliyuncs.com"},
    {"ap-southeast-2" , "ccc.aliyuncs.com"},
    {"ap-southeast-3" , "ccc.aliyuncs.com"},
    {"ap-southeast-5" , "ccc.aliyuncs.com"},
    {"cn-beijing" , "ccc.aliyuncs.com"},
    {"cn-chengdu" , "ccc.aliyuncs.com"},
    {"cn-hongkong" , "ccc.aliyuncs.com"},
    {"cn-huhehaote" , "ccc.aliyuncs.com"},
    {"cn-qingdao" , "ccc.aliyuncs.com"},
    {"cn-shenzhen" , "ccc.aliyuncs.com"},
    {"cn-zhangjiakou" , "ccc.aliyuncs.com"},
    {"eu-central-1" , "ccc.aliyuncs.com"},
    {"eu-west-1" , "ccc.aliyuncs.com"},
    {"me-east-1" , "ccc.aliyuncs.com"},
    {"us-east-1" , "ccc.aliyuncs.com"},
    {"us-west-1" , "ccc.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ccc.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "ccc.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ccc.aliyuncs.com"},
    {"cn-north-2-gov-1" , "ccc.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ccc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request CheckServiceLinkedRoleForDeletingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleForDeletingResponse
 */
CheckServiceLinkedRoleForDeletingResponse Client::checkServiceLinkedRoleForDeletingWithOptions(const CheckServiceLinkedRoleForDeletingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionTaskId()) {
    query["DeletionTaskId"] = request.deletionTaskId();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.roleArn();
  }

  if (!!request.hasSPIRegionId()) {
    query["SPIRegionId"] = request.SPIRegionId();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRoleForDeleting"},
    {"version" , "2020-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleForDeletingResponse>();
}

/**
 * @param request CheckServiceLinkedRoleForDeletingRequest
 * @return CheckServiceLinkedRoleForDeletingResponse
 */
CheckServiceLinkedRoleForDeletingResponse Client::checkServiceLinkedRoleForDeleting(const CheckServiceLinkedRoleForDeletingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleForDeletingWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CCC20200527