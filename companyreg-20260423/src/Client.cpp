#include <darabonba/Core.hpp>
#include <alibabacloud/Companyreg20260423.hpp>
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
using namespace AlibabaCloud::Companyreg20260423::Models;
namespace AlibabaCloud
{
namespace Companyreg20260423
{

AlibabaCloud::Companyreg20260423::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "companyreg.aliyuncs.com"},
    {"ap-northeast-2-pop" , "companyreg.aliyuncs.com"},
    {"ap-south-1" , "companyreg.aliyuncs.com"},
    {"ap-southeast-1" , "companyreg.aliyuncs.com"},
    {"ap-southeast-2" , "companyreg.aliyuncs.com"},
    {"ap-southeast-3" , "companyreg.aliyuncs.com"},
    {"ap-southeast-5" , "companyreg.aliyuncs.com"},
    {"cn-beijing" , "companyreg.aliyuncs.com"},
    {"cn-beijing-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "companyreg.aliyuncs.com"},
    {"cn-beijing-gov-1" , "companyreg.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "companyreg.aliyuncs.com"},
    {"cn-chengdu" , "companyreg.aliyuncs.com"},
    {"cn-edge-1" , "companyreg.aliyuncs.com"},
    {"cn-fujian" , "companyreg.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-finance" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "companyreg.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "companyreg.aliyuncs.com"},
    {"cn-hongkong" , "companyreg.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "companyreg.aliyuncs.com"},
    {"cn-huhehaote" , "companyreg.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "companyreg.aliyuncs.com"},
    {"cn-north-2-gov-1" , "companyreg.aliyuncs.com"},
    {"cn-qingdao" , "companyreg.aliyuncs.com"},
    {"cn-qingdao-nebula" , "companyreg.aliyuncs.com"},
    {"cn-shanghai" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-inner" , "companyreg.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-inner" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "companyreg.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "companyreg.aliyuncs.com"},
    {"cn-wuhan" , "companyreg.aliyuncs.com"},
    {"cn-wulanchabu" , "companyreg.aliyuncs.com"},
    {"cn-yushanfang" , "companyreg.aliyuncs.com"},
    {"cn-zhangbei" , "companyreg.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "companyreg.aliyuncs.com"},
    {"cn-zhangjiakou" , "companyreg.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "companyreg.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "companyreg.aliyuncs.com"},
    {"eu-central-1" , "companyreg.aliyuncs.com"},
    {"eu-west-1" , "companyreg.aliyuncs.com"},
    {"eu-west-1-oxs" , "companyreg.aliyuncs.com"},
    {"me-east-1" , "companyreg.aliyuncs.com"},
    {"rus-west-1-pop" , "companyreg.aliyuncs.com"},
    {"us-east-1" , "companyreg.aliyuncs.com"},
    {"us-west-1" , "companyreg.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("companyreg", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 查询已备案信息
 *
 * @param request QuerySuccessIcpDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySuccessIcpDataResponse
 */
QuerySuccessIcpDataResponse Client::querySuccessIcpDataWithOptions(const QuerySuccessIcpDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySuccessIcpData"},
    {"version" , "2026-04-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySuccessIcpDataResponse>();
}

/**
 * @summary 查询已备案信息
 *
 * @param request QuerySuccessIcpDataRequest
 * @return QuerySuccessIcpDataResponse
 */
QuerySuccessIcpDataResponse Client::querySuccessIcpData(const QuerySuccessIcpDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySuccessIcpDataWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Companyreg20260423