#include <darabonba/Core.hpp>
#include <alibabacloud/YundunBastionhost20191209.hpp>
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
using namespace AlibabaCloud::YundunBastionhost20191209::Models;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{

AlibabaCloud::YundunBastionhost20191209::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangjiakou" , "bastionhost.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote" , "bastionhost.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-heyuan" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-guangzhou" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-chengdu" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hongkong" , "bastionhost.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1" , "bastionhost.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "bastionhost.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "bastionhost.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "bastionhost.ap-southeast-5.aliyuncs.com"},
    {"us-east-1" , "bastionhost.us-east-1.aliyuncs.com"},
    {"us-west-1" , "bastionhost.us-west-1.aliyuncs.com"},
    {"eu-west-1" , "bastionhost.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "bastionhost.eu-central-1.aliyuncs.com"},
    {"me-east-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-north-2-gov-1" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-northeast-2-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-south-1" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-southeast-2" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-finance-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-gov-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-edge-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-fujian" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-finance" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-qingdao-nebula" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-inner" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-inner" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-wuhan" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-yushanfang" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangbei" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "yundun-bastionhost.aliyuncs.com"},
    {"eu-west-1-oxs" , "yundun-bastionhost.aliyuncs.com"},
    {"rus-west-1-pop" , "yundun-bastionhost.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "yundun-bastionhost.aliyuncs.com"},
    {"ap-northeast-2" , "bastionhost.ap-northeast-2.aliyuncs.com"},
    {"ap-southeast-6" , "bastionhost.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-7" , "bastionhost.ap-southeast-7.aliyuncs.com"},
    {"na-south-1" , "bastionhost.na-south-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("yundun-bastionhost", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary If an O&M engineer runs a command that is configured in a command approval control policy, the administrator receives an approval request for the command in the Bastionhost console. The command can be run only after the administrator approves the request. If the administrator rejects the request, the command cannot be run.
 *
 * @description Approves a command execution request from an O&M engineer.
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AcceptApproveCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptApproveCommandResponse
 */
AcceptApproveCommandResponse Client::acceptApproveCommandWithOptions(const AcceptApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptApproveCommand"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptApproveCommandResponse>();
}

/**
 * @summary If an O&M engineer runs a command that is configured in a command approval control policy, the administrator receives an approval request for the command in the Bastionhost console. The command can be run only after the administrator approves the request. If the administrator rejects the request, the command cannot be run.
 *
 * @description Approves a command execution request from an O&M engineer.
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AcceptApproveCommandRequest
 * @return AcceptApproveCommandResponse
 */
AcceptApproveCommandResponse Client::acceptApproveCommand(const AcceptApproveCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptApproveCommandWithOptions(request, runtime);
}

/**
 * @summary If an administrator enables O&M approval in a control policy, O&M engineers must submit an O&M request and obtain administrator approval before they can log on to assets.
 *
 * @description Approves an O&M request submitted by an O&M engineer.
 * The China site Chinese version of this China Chinese China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China.
 *
 * @param request AcceptOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptOperationTicketResponse
 */
AcceptOperationTicketResponse Client::acceptOperationTicketWithOptions(const AcceptOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEffectCount()) {
    query["EffectCount"] = request.getEffectCount();
  }

  if (!!request.hasEffectEndTime()) {
    query["EffectEndTime"] = request.getEffectEndTime();
  }

  if (!!request.hasEffectStartTime()) {
    query["EffectStartTime"] = request.getEffectStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationTicketId()) {
    query["OperationTicketId"] = request.getOperationTicketId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptOperationTicketResponse>();
}

/**
 * @summary If an administrator enables O&M approval in a control policy, O&M engineers must submit an O&M request and obtain administrator approval before they can log on to assets.
 *
 * @description Approves an O&M request submitted by an O&M engineer.
 * The China site Chinese version of this China Chinese China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China China.
 *
 * @param request AcceptOperationTicketRequest
 * @return AcceptOperationTicketResponse
 */
AcceptOperationTicketResponse Client::acceptOperationTicket(const AcceptOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Adds multiple database instances to a specified asset group.
 *
 * @param request AddDatabasesToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDatabasesToGroupResponse
 */
AddDatabasesToGroupResponse Client::addDatabasesToGroupWithOptions(const AddDatabasesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDatabasesToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDatabasesToGroupResponse>();
}

/**
 * @summary Adds multiple database instances to a specified asset group.
 *
 * @param request AddDatabasesToGroupRequest
 * @return AddDatabasesToGroupResponse
 */
AddDatabasesToGroupResponse Client::addDatabasesToGroup(const AddDatabasesToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDatabasesToGroupWithOptions(request, runtime);
}

/**
 * @summary Adds multiple hosts to a specified asset group in a batch.
 *
 * @description Adds multiple hosts to a specified host group in a batch. By adding multiple hosts to a host group, you can centrally manage these hosts and grant permissions in a batch.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AddHostsToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddHostsToGroupResponse
 */
AddHostsToGroupResponse Client::addHostsToGroupWithOptions(const AddHostsToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddHostsToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddHostsToGroupResponse>();
}

/**
 * @summary Adds multiple hosts to a specified asset group in a batch.
 *
 * @description Adds multiple hosts to a specified host group in a batch. By adding multiple hosts to a host group, you can centrally manage these hosts and grant permissions in a batch.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AddHostsToGroupRequest
 * @return AddHostsToGroupResponse
 */
AddHostsToGroupResponse Client::addHostsToGroup(const AddHostsToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addHostsToGroupWithOptions(request, runtime);
}

/**
 * @summary Adds member accounts in a resource directory.
 *
 * @param request AddInstanceRdMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInstanceRdMemberResponse
 */
AddInstanceRdMemberResponse Client::addInstanceRdMemberWithOptions(const AddInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddInstanceRdMember"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInstanceRdMemberResponse>();
}

/**
 * @summary Adds member accounts in a resource directory.
 *
 * @param request AddInstanceRdMemberRequest
 * @return AddInstanceRdMemberResponse
 */
AddInstanceRdMemberResponse Client::addInstanceRdMember(const AddInstanceRdMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInstanceRdMemberWithOptions(request, runtime);
}

/**
 * @summary Adds users to a user group in a batch.
 *
 * @description ### Operation description
 * This operation adds users to a user group in a batch. After you create a user group by calling the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation, you can call this operation to add multiple users to the user group for batch authorization and management.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AddUsersToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroupWithOptions(const AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUsersToGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUsersToGroupResponse>();
}

/**
 * @summary Adds users to a user group in a batch.
 *
 * @description ### Operation description
 * This operation adds users to a user group in a batch. After you create a user group by calling the [CreateUserGroup](https://help.aliyun.com/document_detail/204596.html) operation, you can call this operation to add multiple users to the user group for batch authorization and management.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request AddUsersToGroupRequest
 * @return AddUsersToGroupResponse
 */
AddUsersToGroupResponse Client::addUsersToGroup(const AddUsersToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToGroupWithOptions(request, runtime);
}

/**
 * @summary Approves an O&M task execution request.
 *
 * @param request AllowOperationTaskApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllowOperationTaskApprovalResponse
 */
AllowOperationTaskApprovalResponse Client::allowOperationTaskApprovalWithOptions(const AllowOperationTaskApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApproveId()) {
    query["ApproveId"] = request.getApproveId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllowOperationTaskApproval"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllowOperationTaskApprovalResponse>();
}

/**
 * @summary Approves an O&M task execution request.
 *
 * @param request AllowOperationTaskApprovalRequest
 * @return AllowOperationTaskApprovalResponse
 */
AllowOperationTaskApprovalResponse Client::allowOperationTaskApproval(const AllowOperationTaskApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allowOperationTaskApprovalWithOptions(request, runtime);
}

/**
 * @summary Authorizes a user to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDatabaseAccountsToUserResponse
 */
AttachDatabaseAccountsToUserResponse Client::attachDatabaseAccountsToUserWithOptions(const AttachDatabaseAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDatabaseAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDatabaseAccountsToUserResponse>();
}

/**
 * @summary Authorizes a user to manage databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserRequest
 * @return AttachDatabaseAccountsToUserResponse
 */
AttachDatabaseAccountsToUserResponse Client::attachDatabaseAccountsToUser(const AttachDatabaseAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDatabaseAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Grants a user group permissions on databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDatabaseAccountsToUserGroupResponse
 */
AttachDatabaseAccountsToUserGroupResponse Client::attachDatabaseAccountsToUserGroupWithOptions(const AttachDatabaseAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDatabaseAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDatabaseAccountsToUserGroupResponse>();
}

/**
 * @summary Grants a user group permissions on databases and database accounts.
 *
 * @param request AttachDatabaseAccountsToUserGroupRequest
 * @return AttachDatabaseAccountsToUserGroupResponse
 */
AttachDatabaseAccountsToUserGroupResponse Client::attachDatabaseAccountsToUserGroup(const AttachDatabaseAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDatabaseAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Associates host accounts with a host shared key.
 *
 * @param request AttachHostAccountsToHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToHostShareKeyResponse
 */
AttachHostAccountsToHostShareKeyResponse Client::attachHostAccountsToHostShareKeyWithOptions(const AttachHostAccountsToHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountIds()) {
    query["HostAccountIds"] = request.getHostAccountIds();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToHostShareKeyResponse>();
}

/**
 * @summary Associates host accounts with a host shared key.
 *
 * @param request AttachHostAccountsToHostShareKeyRequest
 * @return AttachHostAccountsToHostShareKeyResponse
 */
AttachHostAccountsToHostShareKeyResponse Client::attachHostAccountsToHostShareKey(const AttachHostAccountsToHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Authorizes assets for a user. After the authorization, the user can use Bastionhost to perform O&M operations on the authorized assets.
 *
 * @param request AttachHostAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToUserResponse
 */
AttachHostAccountsToUserResponse Client::attachHostAccountsToUserWithOptions(const AttachHostAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToUserResponse>();
}

/**
 * @summary Authorizes assets for a user. After the authorization, the user can use Bastionhost to perform O&M operations on the authorized assets.
 *
 * @param request AttachHostAccountsToUserRequest
 * @return AttachHostAccountsToUserResponse
 */
AttachHostAccountsToUserResponse Client::attachHostAccountsToUser(const AttachHostAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Grants a user group permissions on hosts and host accounts.
 *
 * @description After you grant a user group permissions on hosts and host accounts, all users in the user group can access the authorized hosts.
 *
 * @param request AttachHostAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostAccountsToUserGroupResponse
 */
AttachHostAccountsToUserGroupResponse Client::attachHostAccountsToUserGroupWithOptions(const AttachHostAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostAccountsToUserGroupResponse>();
}

/**
 * @summary Grants a user group permissions on hosts and host accounts.
 *
 * @description After you grant a user group permissions on hosts and host accounts, all users in the user group can access the authorized hosts.
 *
 * @param request AttachHostAccountsToUserGroupRequest
 * @return AttachHostAccountsToUserGroupResponse
 */
AttachHostAccountsToUserGroupResponse Client::attachHostAccountsToUserGroup(const AttachHostAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on host groups and host accounts to a user.
 *
 * @param request AttachHostGroupAccountsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostGroupAccountsToUserResponse
 */
AttachHostGroupAccountsToUserResponse Client::attachHostGroupAccountsToUserWithOptions(const AttachHostGroupAccountsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostGroupAccountsToUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostGroupAccountsToUserResponse>();
}

/**
 * @summary Grants permissions on host groups and host accounts to a user.
 *
 * @param request AttachHostGroupAccountsToUserRequest
 * @return AttachHostGroupAccountsToUserResponse
 */
AttachHostGroupAccountsToUserResponse Client::attachHostGroupAccountsToUser(const AttachHostGroupAccountsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostGroupAccountsToUserWithOptions(request, runtime);
}

/**
 * @summary Grants permissions on host groups and host accounts to a user group.
 *
 * @param request AttachHostGroupAccountsToUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachHostGroupAccountsToUserGroupResponse
 */
AttachHostGroupAccountsToUserGroupResponse Client::attachHostGroupAccountsToUserGroupWithOptions(const AttachHostGroupAccountsToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachHostGroupAccountsToUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachHostGroupAccountsToUserGroupResponse>();
}

/**
 * @summary Grants permissions on host groups and host accounts to a user group.
 *
 * @param request AttachHostGroupAccountsToUserGroupRequest
 * @return AttachHostGroupAccountsToUserGroupResponse
 */
AttachHostGroupAccountsToUserGroupResponse Client::attachHostGroupAccountsToUserGroup(const AttachHostGroupAccountsToUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachHostGroupAccountsToUserGroupWithOptions(request, runtime);
}

/**
 * @summary Associates members with a project.
 *
 * @param request AttachMembersToProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachMembersToProjectResponse
 */
AttachMembersToProjectResponse Client::attachMembersToProjectWithOptions(const AttachMembersToProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.getMemberIds();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachMembersToProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachMembersToProjectResponse>();
}

/**
 * @summary Associates members with a project.
 *
 * @param request AttachMembersToProjectRequest
 * @return AttachMembersToProjectResponse
 */
AttachMembersToProjectResponse Client::attachMembersToProject(const AttachMembersToProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachMembersToProjectWithOptions(request, runtime);
}

/**
 * @summary Associates project authorization administrators.
 *
 * @param request AttachProjectManagersToProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachProjectManagersToProjectAuthorizationResponse
 */
AttachProjectManagersToProjectAuthorizationResponse Client::attachProjectManagersToProjectAuthorizationWithOptions(const AttachProjectManagersToProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrincipals()) {
    query["Principals"] = request.getPrincipals();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachProjectManagersToProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachProjectManagersToProjectAuthorizationResponse>();
}

/**
 * @summary Associates project authorization administrators.
 *
 * @param request AttachProjectManagersToProjectAuthorizationRequest
 * @return AttachProjectManagersToProjectAuthorizationResponse
 */
AttachProjectManagersToProjectAuthorizationResponse Client::attachProjectManagersToProjectAuthorization(const AttachProjectManagersToProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachProjectManagersToProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Specifies the projects that can be managed in a project authorization. You can call this operation only when the ScopeType parameter returned by the GetProjectAuthorization operation for the corresponding project authorization is 2.
 *
 * @param request AttachProjectsToProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachProjectsToProjectAuthorizationResponse
 */
AttachProjectsToProjectAuthorizationResponse Client::attachProjectsToProjectAuthorizationWithOptions(const AttachProjectsToProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachProjectsToProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachProjectsToProjectAuthorizationResponse>();
}

/**
 * @summary Specifies the projects that can be managed in a project authorization. You can call this operation only when the ScopeType parameter returned by the GetProjectAuthorization operation for the corresponding project authorization is 2.
 *
 * @param request AttachProjectsToProjectAuthorizationRequest
 * @return AttachProjectsToProjectAuthorizationResponse
 */
AttachProjectsToProjectAuthorizationResponse Client::attachProjectsToProjectAuthorization(const AttachProjectsToProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachProjectsToProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Associates projects with the scope of an audit policy. You can invoke this operation only when the ScopeType parameter returned by the GetReviewRule operation for the corresponding audit policy is 2.
 *
 * @param request AttachProjectsToReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachProjectsToReviewRuleResponse
 */
AttachProjectsToReviewRuleResponse Client::attachProjectsToReviewRuleWithOptions(const AttachProjectsToReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachProjectsToReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachProjectsToReviewRuleResponse>();
}

/**
 * @summary Associates projects with the scope of an audit policy. You can invoke this operation only when the ScopeType parameter returned by the GetReviewRule operation for the corresponding audit policy is 2.
 *
 * @param request AttachProjectsToReviewRuleRequest
 * @return AttachProjectsToReviewRuleResponse
 */
AttachProjectsToReviewRuleResponse Client::attachProjectsToReviewRule(const AttachProjectsToReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachProjectsToReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Attaches auditors to an audit policy.
 *
 * @param request AttachReviewersToReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachReviewersToReviewRuleResponse
 */
AttachReviewersToReviewRuleResponse Client::attachReviewersToReviewRuleWithOptions(const AttachReviewersToReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrincipals()) {
    query["Principals"] = request.getPrincipals();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachReviewersToReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachReviewersToReviewRuleResponse>();
}

/**
 * @summary Attaches auditors to an audit policy.
 *
 * @param request AttachReviewersToReviewRuleRequest
 * @return AttachReviewersToReviewRuleResponse
 */
AttachReviewersToReviewRuleResponse Client::attachReviewersToReviewRule(const AttachReviewersToReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachReviewersToReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Configures the security groups that control inbound and outbound network traffic for a Bastionhost instance.
 *
 * @param request ConfigInstanceSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceSecurityGroupsResponse
 */
ConfigInstanceSecurityGroupsResponse Client::configInstanceSecurityGroupsWithOptions(const ConfigInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizedSecurityGroups()) {
    query["AuthorizedSecurityGroups"] = request.getAuthorizedSecurityGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceSecurityGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceSecurityGroupsResponse>();
}

/**
 * @summary Configures the security groups that control inbound and outbound network traffic for a Bastionhost instance.
 *
 * @param request ConfigInstanceSecurityGroupsRequest
 * @return ConfigInstanceSecurityGroupsResponse
 */
ConfigInstanceSecurityGroupsResponse Client::configInstanceSecurityGroups(const ConfigInstanceSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Adds specified public IP addresses to the whitelist of a Bastionhost instance after public network access is enabled to allow public network traffic to access the instance.
 *
 * @description Configures the public IP address whitelist for a Bastionhost instance. By default, all public IP addresses are allowed to access the Bastionhost instance. To restrict public network access, call this operation to add specified public IP addresses to the whitelist and restrict public network traffic to the Bastionhost instance.
 * The queries per second (QPS) limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ConfigInstanceWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigInstanceWhiteListResponse
 */
ConfigInstanceWhiteListResponse Client::configInstanceWhiteListWithOptions(const ConfigInstanceWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasWhiteList()) {
    query["WhiteList"] = request.getWhiteList();
  }

  if (!!request.hasWhiteListPolicies()) {
    query["WhiteListPolicies"] = request.getWhiteListPolicies();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigInstanceWhiteList"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigInstanceWhiteListResponse>();
}

/**
 * @summary Adds specified public IP addresses to the whitelist of a Bastionhost instance after public network access is enabled to allow public network traffic to access the instance.
 *
 * @description Configures the public IP address whitelist for a Bastionhost instance. By default, all public IP addresses are allowed to access the Bastionhost instance. To restrict public network access, call this operation to add specified public IP addresses to the whitelist and restrict public network traffic to the Bastionhost instance.
 * The queries per second (QPS) limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ConfigInstanceWhiteListRequest
 * @return ConfigInstanceWhiteListResponse
 */
ConfigInstanceWhiteListResponse Client::configInstanceWhiteList(const ConfigInstanceWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configInstanceWhiteListWithOptions(request, runtime);
}

/**
 * @summary Imports database assets into a bastion host. Supported database types include MySQL, SQL Server, PostgreSQL, and Oracle for ApsaraDB RDS instances, MySQL, PostgreSQL, and PolarDB for PostgreSQL (Compatible with Oracle) for PolarDB clusters, and MySQL, SQL Server, PostgreSQL, and Oracle for self-managed databases.
 *
 * @param request CreateDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabaseWithOptions(const CreateDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabasePort()) {
    query["DatabasePort"] = request.getDatabasePort();
  }

  if (!!request.hasDatabasePrivateAddress()) {
    query["DatabasePrivateAddress"] = request.getDatabasePrivateAddress();
  }

  if (!!request.hasDatabasePublicAddress()) {
    query["DatabasePublicAddress"] = request.getDatabasePublicAddress();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceMemberId()) {
    query["InstanceMemberId"] = request.getInstanceMemberId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasPolarDBEndpointType()) {
    query["PolarDBEndpointType"] = request.getPolarDBEndpointType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceRegionId()) {
    query["SourceInstanceRegionId"] = request.getSourceInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseResponse>();
}

/**
 * @summary Imports database assets into a bastion host. Supported database types include MySQL, SQL Server, PostgreSQL, and Oracle for ApsaraDB RDS instances, MySQL, PostgreSQL, and PolarDB for PostgreSQL (Compatible with Oracle) for PolarDB clusters, and MySQL, SQL Server, PostgreSQL, and Oracle for self-managed databases.
 *
 * @param request CreateDatabaseRequest
 * @return CreateDatabaseResponse
 */
CreateDatabaseResponse Client::createDatabase(const CreateDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseWithOptions(request, runtime);
}

/**
 * @summary After a database is created, you can create a database account for it. After the account is created, O&M engineers can use the account to log on to and manage the database.
 *
 * @param request CreateDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatabaseAccountResponse
 */
CreateDatabaseAccountResponse Client::createDatabaseAccountWithOptions(const CreateDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginAttribute()) {
    query["LoginAttribute"] = request.getLoginAttribute();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatabaseAccountResponse>();
}

/**
 * @summary After a database is created, you can create a database account for it. After the account is created, O&M engineers can use the account to log on to and manage the database.
 *
 * @param request CreateDatabaseAccountRequest
 * @return CreateDatabaseAccountResponse
 */
CreateDatabaseAccountResponse Client::createDatabaseAccount(const CreateDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a configuration backup export task. Only one configuration backup export task can run at a time for a Bastionhost instance.
 *
 * @param request CreateExportConfigJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExportConfigJobResponse
 */
CreateExportConfigJobResponse Client::createExportConfigJobWithOptions(const CreateExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExportConfigJob"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExportConfigJobResponse>();
}

/**
 * @summary Creates a configuration backup export task. Only one configuration backup export task can run at a time for a Bastionhost instance.
 *
 * @param request CreateExportConfigJobRequest
 * @return CreateExportConfigJobResponse
 */
CreateExportConfigJobResponse Client::createExportConfigJob(const CreateExportConfigJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExportConfigJobWithOptions(request, runtime);
}

/**
 * @summary Creates a host in a Bastionhost instance. Bastionhost supports O&M for hosts from different sources, including Alibaba Cloud ECS instances, on-premises IDC servers, and servers on other clouds. Before you perform O&M on a host through Bastionhost, you must first import the host into Bastionhost. You can call this operation to create a host that you want to manage in Bastionhost.
 *
 * @param request CreateHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostResponse
 */
CreateHostResponse Client::createHostWithOptions(const CreateHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHostPrivateAddress()) {
    query["HostPrivateAddress"] = request.getHostPrivateAddress();
  }

  if (!!request.hasHostPublicAddress()) {
    query["HostPublicAddress"] = request.getHostPublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceMemberId()) {
    query["InstanceMemberId"] = request.getInstanceMemberId();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostResponse>();
}

/**
 * @summary Creates a host in a Bastionhost instance. Bastionhost supports O&M for hosts from different sources, including Alibaba Cloud ECS instances, on-premises IDC servers, and servers on other clouds. Before you perform O&M on a host through Bastionhost, you must first import the host into Bastionhost. You can call this operation to create a host that you want to manage in Bastionhost.
 *
 * @param request CreateHostRequest
 * @return CreateHostResponse
 */
CreateHostResponse Client::createHost(const CreateHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostWithOptions(request, runtime);
}

/**
 * @summary After you add a host to Bastionhost, you can create a host account for the host to manage the existing account of the host in Bastionhost. After a host account is created, O&M engineers can use the account to log on to the host through Bastionhost for O&M operations.
 *
 * @param request CreateHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostAccountResponse
 */
CreateHostAccountResponse Client::createHostAccountWithOptions(const CreateHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.getPrivilegeType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRotationMode()) {
    query["RotationMode"] = request.getRotationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostAccountResponse>();
}

/**
 * @summary After you add a host to Bastionhost, you can create a host account for the host to manage the existing account of the host in Bastionhost. After a host account is created, O&M engineers can use the account to log on to the host through Bastionhost for O&M operations.
 *
 * @param request CreateHostAccountRequest
 * @return CreateHostAccountResponse
 */
CreateHostAccountResponse Client::createHostAccount(const CreateHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostAccountWithOptions(request, runtime);
}

/**
 * @summary You can create different asset groups based on your business requirements, add assets of the same type to an asset group, and manage assets by category and perform batch operations.
 *
 * @param request CreateHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroupWithOptions(const CreateHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostGroupResponse>();
}

/**
 * @summary You can create different asset groups based on your business requirements, add assets of the same type to an asset group, and manage assets by category and perform batch operations.
 *
 * @param request CreateHostGroupRequest
 * @return CreateHostGroupResponse
 */
CreateHostGroupResponse Client::createHostGroup(const CreateHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostGroupWithOptions(request, runtime);
}

/**
 * @summary The shared key feature of Bastionhost allows you to store private keys used for host logon in Bastionhost. After a private key is stored, it can be shared across multiple host accounts to improve host account management efficiency.
 *
 * @param request CreateHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostShareKeyResponse
 */
CreateHostShareKeyResponse Client::createHostShareKeyWithOptions(const CreateHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyName()) {
    query["HostShareKeyName"] = request.getHostShareKeyName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostShareKeyResponse>();
}

/**
 * @summary The shared key feature of Bastionhost allows you to store private keys used for host logon in Bastionhost. After a private key is stored, it can be shared across multiple host accounts to improve host account management efficiency.
 *
 * @param request CreateHostShareKeyRequest
 * @return CreateHostShareKeyResponse
 */
CreateHostShareKeyResponse Client::createHostShareKey(const CreateHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary To centrally manage assets that are distributed across different network environments or that cannot communicate with the virtual private cloud (VPC) where Bastionhost is deployed, use the network domain feature of Bastionhost. You can configure a proxy server for these assets, create a network domain in Bastionhost, add the proxy server to the network domain, and then add the assets to the network domain. This way, you can manage the assets through Bastionhost.
 *
 * @param request CreateNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkDomainResponse
 */
CreateNetworkDomainResponse Client::createNetworkDomainWithOptions(const CreateNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProxies()) {
    query["Proxies"] = request.getProxies();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkDomainResponse>();
}

/**
 * @summary To centrally manage assets that are distributed across different network environments or that cannot communicate with the virtual private cloud (VPC) where Bastionhost is deployed, use the network domain feature of Bastionhost. You can configure a proxy server for these assets, create a network domain in Bastionhost, add the proxy server to the network domain, and then add the assets to the network domain. This way, you can manage the assets through Bastionhost.
 *
 * @param request CreateNetworkDomainRequest
 * @return CreateNetworkDomainResponse
 */
CreateNetworkDomainResponse Client::createNetworkDomain(const CreateNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Creates an O&M request. When an administrator enables O&M approval in a control policy, O&M engineers must create an O&M request and obtain administrator approval before performing O&M operations.
 *
 * @param request CreateOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOperationTicketResponse
 */
CreateOperationTicketResponse Client::createOperationTicketWithOptions(const CreateOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApproveComment()) {
    query["ApproveComment"] = request.getApproveComment();
  }

  if (!!request.hasAssetAccountName()) {
    query["AssetAccountName"] = request.getAssetAccountName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.getAssetId();
  }

  if (!!request.hasEffectEndTime()) {
    query["EffectEndTime"] = request.getEffectEndTime();
  }

  if (!!request.hasEffectStartTime()) {
    query["EffectStartTime"] = request.getEffectStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsOneTimeEffect()) {
    query["IsOneTimeEffect"] = request.getIsOneTimeEffect();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOperationTicketResponse>();
}

/**
 * @summary Creates an O&M request. When an administrator enables O&M approval in a control policy, O&M engineers must create an O&M request and obtain administrator approval before performing O&M operations.
 *
 * @param request CreateOperationTicketRequest
 * @return CreateOperationTicketResponse
 */
CreateOperationTicketResponse Client::createOperationTicket(const CreateOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Manages O&M behaviors by configuring command control, command approval, protocol control, and access control policies to effectively prevent users from executing high-risk commands or performing misoperations, ensuring O&M security.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Manages O&M behaviors by configuring command control, command approval, protocol control, and access control policies to effectively prevent users from executing high-risk commands or performing misoperations, ensuring O&M security.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a project.
 *
 * @param request CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.getMemberIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a project.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary Creates a project authorization.
 *
 * @param request CreateProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectAuthorizationResponse
 */
CreateProjectAuthorizationResponse Client::createProjectAuthorizationWithOptions(const CreateProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectAuthorizationResponse>();
}

/**
 * @summary Creates a project authorization.
 *
 * @param request CreateProjectAuthorizationRequest
 * @return CreateProjectAuthorizationResponse
 */
CreateProjectAuthorizationResponse Client::createProjectAuthorization(const CreateProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Creates a project notification recipient.
 *
 * @param request CreateProjectNotifyReceiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectNotifyReceiverResponse
 */
CreateProjectNotifyReceiverResponse Client::createProjectNotifyReceiverWithOptions(const CreateProjectNotifyReceiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProjectNotifyReceiver"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectNotifyReceiverResponse>();
}

/**
 * @summary Creates a project notification recipient.
 *
 * @param request CreateProjectNotifyReceiverRequest
 * @return CreateProjectNotifyReceiverResponse
 */
CreateProjectNotifyReceiverResponse Client::createProjectNotifyReceiver(const CreateProjectNotifyReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectNotifyReceiverWithOptions(request, runtime);
}

/**
 * @summary Creates an audit policy.
 *
 * @param request CreateReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReviewRuleResponse
 */
CreateReviewRuleResponse Client::createReviewRuleWithOptions(const CreateReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReviewRuleResponse>();
}

/**
 * @summary Creates an audit policy.
 *
 * @param request CreateReviewRuleRequest
 * @return CreateReviewRuleResponse
 */
CreateReviewRuleResponse Client::createReviewRule(const CreateReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an authorization rule to grant multiple users batch access to assets and set the validity period for their access. The authorization rule feature improves the efficiency of managing users and assets, and controls the time period during which users can access assets.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Creates an authorization rule to grant multiple users batch access to assets and set the validity period for their access. The authorization rule feature improves the efficiency of managing users and assets, and controls the time period during which users can access assets.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a bastion host.
 *
 * @description Adds local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After adding a user, O\\&M engineers can log on to the bastion host with that account to perform O\\&M operations on authorized hosts.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLanguageStatus()) {
    query["LanguageStatus"] = request.getLanguageStatus();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasMobileCountryCode()) {
    query["MobileCountryCode"] = request.getMobileCountryCode();
  }

  if (!!request.hasNeedResetPassword()) {
    query["NeedResetPassword"] = request.getNeedResetPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceUserId()) {
    query["SourceUserId"] = request.getSourceUserId();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  if (!!request.hasTwoFactorStatus()) {
    query["TwoFactorStatus"] = request.getTwoFactorStatus();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Adds a user to a bastion host.
 *
 * @description Adds local users, Resource Access Management (RAM) users, Active Directory (AD)-authenticated users, or Lightweight Directory Access Protocol (LDAP)-authenticated users to a bastion host. After adding a user, O\\&M engineers can log on to the bastion host with that account to perform O\\&M operations on authorized hosts.
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a user group for a bastion host.
 *
 * @description Creates a user group for a bastion host. Bastion host administrators can use this operation to create a user group and then call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group in batches. Adding users to the same user group enables unified authorization and management of bastion host users.
 * The China site Chinese edition single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request CreateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupResponse>();
}

/**
 * @summary Creates a user group for a bastion host.
 *
 * @description Creates a user group for a bastion host. Bastion host administrators can use this operation to create a user group and then call the [AddUsersToGroup](https://help.aliyun.com/document_detail/204600.html) operation to add users to the user group in batches. Adding users to the same user group enables unified authorization and management of bastion host users.
 * The China site Chinese edition single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\&M client.
 *
 * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
 *
 * @param request CreateUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserPublicKeyResponse
 */
CreateUserPublicKeyResponse Client::createUserPublicKeyWithOptions(const CreateUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  if (!!request.hasPublicKeyName()) {
    query["PublicKeyName"] = request.getPublicKeyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserPublicKeyResponse>();
}

/**
 * @summary Creates a public key for a bastion host user and hosts the public key in the bastion host. This way, O\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\&M engineers can use the private key that corresponds to the public key to log on to the bastion host from an O\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\&M client.
 *
 * @description You can call the CreateUserPublicKey operation to create a public key for the specified user of a bastion host.
 *
 * @param request CreateUserPublicKeyRequest
 * @return CreateUserPublicKeyResponse
 */
CreateUserPublicKeyResponse Client::createUserPublicKey(const CreateUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a single database instance.
 *
 * @param request DeleteDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabaseWithOptions(const DeleteDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseResponse>();
}

/**
 * @summary Deletes a single database instance.
 *
 * @param request DeleteDatabaseRequest
 * @return DeleteDatabaseResponse
 */
DeleteDatabaseResponse Client::deleteDatabase(const DeleteDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a single database account.
 *
 * @param request DeleteDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatabaseAccountResponse
 */
DeleteDatabaseAccountResponse Client::deleteDatabaseAccountWithOptions(const DeleteDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatabaseAccountResponse>();
}

/**
 * @summary Deletes a single database account.
 *
 * @param request DeleteDatabaseAccountRequest
 * @return DeleteDatabaseAccountResponse
 */
DeleteDatabaseAccountResponse Client::deleteDatabaseAccount(const DeleteDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a single host.
 *
 * @param request DeleteHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostResponse
 */
DeleteHostResponse Client::deleteHostWithOptions(const DeleteHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostResponse>();
}

/**
 * @summary Deletes a single host.
 *
 * @param request DeleteHostRequest
 * @return DeleteHostResponse
 */
DeleteHostResponse Client::deleteHost(const DeleteHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostWithOptions(request, runtime);
}

/**
 * @summary Deletes a single host account.
 *
 * @description ### Operation description
 * This operation deletes a single host account. If a host account is no longer in use, call this operation to delete the host account that is configured in Bastionhost.
 * > After you delete a host account, you must manually enter the host account and password when you log on to the host through Bastionhost.
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Use this operation appropriately.
 *
 * @param request DeleteHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostAccountResponse
 */
DeleteHostAccountResponse Client::deleteHostAccountWithOptions(const DeleteHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostAccountResponse>();
}

/**
 * @summary Deletes a single host account.
 *
 * @description ### Operation description
 * This operation deletes a single host account. If a host account is no longer in use, call this operation to delete the host account that is configured in Bastionhost.
 * > After you delete a host account, you must manually enter the host account and password when you log on to the host through Bastionhost.
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Use this operation appropriately.
 *
 * @param request DeleteHostAccountRequest
 * @return DeleteHostAccountResponse
 */
DeleteHostAccountResponse Client::deleteHostAccount(const DeleteHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes a single asset group.
 *
 * @description This operation deletes a single host group. If all hosts in a host group on a bastion host no longer need to be managed through the bastion host, you can call this operation to delete the host group.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request DeleteHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroupWithOptions(const DeleteHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostGroupResponse>();
}

/**
 * @summary Deletes a single asset group.
 *
 * @description This operation deletes a single host group. If all hosts in a host group on a bastion host no longer need to be managed through the bastion host, you can call this operation to delete the host group.
 * ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request DeleteHostGroupRequest
 * @return DeleteHostGroupResponse
 */
DeleteHostGroupResponse Client::deleteHostGroup(const DeleteHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a host shared key.
 *
 * @param request DeleteHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostShareKeyResponse
 */
DeleteHostShareKeyResponse Client::deleteHostShareKeyWithOptions(const DeleteHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostShareKeyResponse>();
}

/**
 * @summary Deletes a host shared key.
 *
 * @param request DeleteHostShareKeyRequest
 * @return DeleteHostShareKeyResponse
 */
DeleteHostShareKeyResponse Client::deleteHostShareKey(const DeleteHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a single network domain.
 *
 * @param request DeleteNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkDomainResponse
 */
DeleteNetworkDomainResponse Client::deleteNetworkDomainWithOptions(const DeleteNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkDomainResponse>();
}

/**
 * @summary Deletes a single network domain.
 *
 * @param request DeleteNetworkDomainRequest
 * @return DeleteNetworkDomainResponse
 */
DeleteNetworkDomainResponse Client::deleteNetworkDomain(const DeleteNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a single control policy.
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a single control policy.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a project authorization.
 *
 * @param request DeleteProjectAuthorizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectAuthorizationsResponse
 */
DeleteProjectAuthorizationsResponse Client::deleteProjectAuthorizationsWithOptions(const DeleteProjectAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationIds()) {
    query["AuthorizationIds"] = request.getAuthorizationIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjectAuthorizations"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectAuthorizationsResponse>();
}

/**
 * @summary Deletes a project authorization.
 *
 * @param request DeleteProjectAuthorizationsRequest
 * @return DeleteProjectAuthorizationsResponse
 */
DeleteProjectAuthorizationsResponse Client::deleteProjectAuthorizations(const DeleteProjectAuthorizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectAuthorizationsWithOptions(request, runtime);
}

/**
 * @summary Deletes notification recipients from a project.
 *
 * @param request DeleteProjectNotifyReceiversRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectNotifyReceiversResponse
 */
DeleteProjectNotifyReceiversResponse Client::deleteProjectNotifyReceiversWithOptions(const DeleteProjectNotifyReceiversRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReceiverIds()) {
    query["ReceiverIds"] = request.getReceiverIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjectNotifyReceivers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectNotifyReceiversResponse>();
}

/**
 * @summary Deletes notification recipients from a project.
 *
 * @param request DeleteProjectNotifyReceiversRequest
 * @return DeleteProjectNotifyReceiversResponse
 */
DeleteProjectNotifyReceiversResponse Client::deleteProjectNotifyReceivers(const DeleteProjectNotifyReceiversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectNotifyReceiversWithOptions(request, runtime);
}

/**
 * @summary Deletes projects in batches.
 *
 * @param request DeleteProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectsResponse
 */
DeleteProjectsResponse Client::deleteProjectsWithOptions(const DeleteProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjects"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectsResponse>();
}

/**
 * @summary Deletes projects in batches.
 *
 * @param request DeleteProjectsRequest
 * @return DeleteProjectsResponse
 */
DeleteProjectsResponse Client::deleteProjects(const DeleteProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectsWithOptions(request, runtime);
}

/**
 * @summary Deletes an audit policy.
 *
 * @param request DeleteReviewRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReviewRulesResponse
 */
DeleteReviewRulesResponse Client::deleteReviewRulesWithOptions(const DeleteReviewRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleIds()) {
    query["ReviewRuleIds"] = request.getReviewRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteReviewRules"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReviewRulesResponse>();
}

/**
 * @summary Deletes an audit policy.
 *
 * @param request DeleteReviewRulesRequest
 * @return DeleteReviewRulesResponse
 */
DeleteReviewRulesResponse Client::deleteReviewRules(const DeleteReviewRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReviewRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a single authorization rule.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes a single authorization rule.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a bastion host user.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Deletes a bastion host user.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a single user group from a bastion host.
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupResponse>();
}

/**
 * @summary Deletes a single user group from a bastion host.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a public key from the specified user.
 *
 * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
 *
 * @param request DeleteUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPublicKeyResponse
 */
DeleteUserPublicKeyResponse Client::deleteUserPublicKeyWithOptions(const DeleteUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKeyId()) {
    query["PublicKeyId"] = request.getPublicKeyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserPublicKeyResponse>();
}

/**
 * @summary Deletes a public key from the specified user.
 *
 * @description You can call the DeleteUserPublicKey operation to delete a public key from the specified user of a bastion host.
 *
 * @param request DeleteUserPublicKeyRequest
 * @return DeleteUserPublicKeyResponse
 */
DeleteUserPublicKeyResponse Client::deleteUserPublicKey(const DeleteUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Queries all the attributes of an instance, such as the instance ID and description.
 *
 * @description You can directly call this operation to purchase an HSM instance. For prepaid products, the payment is deducted synchronously.
 *
 * @param request DescribeInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttributeWithOptions(const DescribeInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAttribute"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAttributeResponse>();
}

/**
 * @summary Queries all the attributes of an instance, such as the instance ID and description.
 *
 * @description You can directly call this operation to purchase an HSM instance. For prepaid products, the payment is deducted synchronously.
 *
 * @param request DescribeInstanceAttributeRequest
 * @return DescribeInstanceAttributeResponse
 */
DescribeInstanceAttributeResponse Client::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of instances.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.getInstanceStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries the list of instances.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud regions that support Bastionhost instances.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the Alibaba Cloud regions that support Bastionhost instances.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on databases and database accounts from a user.
 *
 * @param request DetachDatabaseAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDatabaseAccountsFromUserResponse
 */
DetachDatabaseAccountsFromUserResponse Client::detachDatabaseAccountsFromUserWithOptions(const DetachDatabaseAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDatabaseAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDatabaseAccountsFromUserResponse>();
}

/**
 * @summary Revokes permissions on databases and database accounts from a user.
 *
 * @param request DetachDatabaseAccountsFromUserRequest
 * @return DetachDatabaseAccountsFromUserResponse
 */
DetachDatabaseAccountsFromUserResponse Client::detachDatabaseAccountsFromUser(const DetachDatabaseAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDatabaseAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Removes databases and database accounts that are authorized to a user group.
 *
 * @param request DetachDatabaseAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDatabaseAccountsFromUserGroupResponse
 */
DetachDatabaseAccountsFromUserGroupResponse Client::detachDatabaseAccountsFromUserGroupWithOptions(const DetachDatabaseAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDatabaseAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDatabaseAccountsFromUserGroupResponse>();
}

/**
 * @summary Removes databases and database accounts that are authorized to a user group.
 *
 * @param request DetachDatabaseAccountsFromUserGroupRequest
 * @return DetachDatabaseAccountsFromUserGroupResponse
 */
DetachDatabaseAccountsFromUserGroupResponse Client::detachDatabaseAccountsFromUserGroup(const DetachDatabaseAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDatabaseAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Removes the association between host accounts and a host shared key.
 *
 * @param request DetachHostAccountsFromHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromHostShareKeyResponse
 */
DetachHostAccountsFromHostShareKeyResponse Client::detachHostAccountsFromHostShareKeyWithOptions(const DetachHostAccountsFromHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountIds()) {
    query["HostAccountIds"] = request.getHostAccountIds();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromHostShareKeyResponse>();
}

/**
 * @summary Removes the association between host accounts and a host shared key.
 *
 * @param request DetachHostAccountsFromHostShareKeyRequest
 * @return DetachHostAccountsFromHostShareKeyResponse
 */
DetachHostAccountsFromHostShareKeyResponse Client::detachHostAccountsFromHostShareKey(const DetachHostAccountsFromHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on hosts and host accounts from a user.
 *
 * @param request DetachHostAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromUserResponse
 */
DetachHostAccountsFromUserResponse Client::detachHostAccountsFromUserWithOptions(const DetachHostAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromUserResponse>();
}

/**
 * @summary Revokes permissions on hosts and host accounts from a user.
 *
 * @param request DetachHostAccountsFromUserRequest
 * @return DetachHostAccountsFromUserResponse
 */
DetachHostAccountsFromUserResponse Client::detachHostAccountsFromUser(const DetachHostAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Removes authorized hosts and host accounts from a user group.
 *
 * @param request DetachHostAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostAccountsFromUserGroupResponse
 */
DetachHostAccountsFromUserGroupResponse Client::detachHostAccountsFromUserGroupWithOptions(const DetachHostAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostAccountsFromUserGroupResponse>();
}

/**
 * @summary Removes authorized hosts and host accounts from a user group.
 *
 * @param request DetachHostAccountsFromUserGroupRequest
 * @return DetachHostAccountsFromUserGroupResponse
 */
DetachHostAccountsFromUserGroupResponse Client::detachHostAccountsFromUserGroup(const DetachHostAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
 *
 * @param request DetachHostGroupAccountsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostGroupAccountsFromUserResponse
 */
DetachHostGroupAccountsFromUserResponse Client::detachHostGroupAccountsFromUserWithOptions(const DetachHostGroupAccountsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostGroupAccountsFromUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostGroupAccountsFromUserResponse>();
}

/**
 * @summary Removes host groups and host accounts from the list of host groups and host accounts that a user is authorized to manage.
 *
 * @param request DetachHostGroupAccountsFromUserRequest
 * @return DetachHostGroupAccountsFromUserResponse
 */
DetachHostGroupAccountsFromUserResponse Client::detachHostGroupAccountsFromUser(const DetachHostGroupAccountsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostGroupAccountsFromUserWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on one or more host groups and host accounts from a user group.
 *
 * @param request DetachHostGroupAccountsFromUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachHostGroupAccountsFromUserGroupResponse
 */
DetachHostGroupAccountsFromUserGroupResponse Client::detachHostGroupAccountsFromUserGroupWithOptions(const DetachHostGroupAccountsFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachHostGroupAccountsFromUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachHostGroupAccountsFromUserGroupResponse>();
}

/**
 * @summary Revokes permissions on one or more host groups and host accounts from a user group.
 *
 * @param request DetachHostGroupAccountsFromUserGroupRequest
 * @return DetachHostGroupAccountsFromUserGroupResponse
 */
DetachHostGroupAccountsFromUserGroupResponse Client::detachHostGroupAccountsFromUserGroup(const DetachHostGroupAccountsFromUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachHostGroupAccountsFromUserGroupWithOptions(request, runtime);
}

/**
 * @summary Removes members from a project.
 *
 * @param request DetachMembersFromProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachMembersFromProjectResponse
 */
DetachMembersFromProjectResponse Client::detachMembersFromProjectWithOptions(const DetachMembersFromProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.getMemberIds();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachMembersFromProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachMembersFromProjectResponse>();
}

/**
 * @summary Removes members from a project.
 *
 * @param request DetachMembersFromProjectRequest
 * @return DetachMembersFromProjectResponse
 */
DetachMembersFromProjectResponse Client::detachMembersFromProject(const DetachMembersFromProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachMembersFromProjectWithOptions(request, runtime);
}

/**
 * @summary Removes a project administrator from project authorization management.
 *
 * @param request DetachProjectManagersFromProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachProjectManagersFromProjectAuthorizationResponse
 */
DetachProjectManagersFromProjectAuthorizationResponse Client::detachProjectManagersFromProjectAuthorizationWithOptions(const DetachProjectManagersFromProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrincipalIds()) {
    query["PrincipalIds"] = request.getPrincipalIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachProjectManagersFromProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachProjectManagersFromProjectAuthorizationResponse>();
}

/**
 * @summary Removes a project administrator from project authorization management.
 *
 * @param request DetachProjectManagersFromProjectAuthorizationRequest
 * @return DetachProjectManagersFromProjectAuthorizationResponse
 */
DetachProjectManagersFromProjectAuthorizationResponse Client::detachProjectManagersFromProjectAuthorization(const DetachProjectManagersFromProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachProjectManagersFromProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Removes projects from the scope of a project authorization. This operation can be called only when the ScopeType parameter returned by the GetProjectAuthorization operation is 2.
 *
 * @param request DetachProjectsFromProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachProjectsFromProjectAuthorizationResponse
 */
DetachProjectsFromProjectAuthorizationResponse Client::detachProjectsFromProjectAuthorizationWithOptions(const DetachProjectsFromProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachProjectsFromProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachProjectsFromProjectAuthorizationResponse>();
}

/**
 * @summary Removes projects from the scope of a project authorization. This operation can be called only when the ScopeType parameter returned by the GetProjectAuthorization operation is 2.
 *
 * @param request DetachProjectsFromProjectAuthorizationRequest
 * @return DetachProjectsFromProjectAuthorizationResponse
 */
DetachProjectsFromProjectAuthorizationResponse Client::detachProjectsFromProjectAuthorization(const DetachProjectsFromProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachProjectsFromProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Removes projects from the scope of an audit policy. This operation can be called only when the ScopeType parameter in the corresponding audit policy returned by the GetReviewRule operation has a value of 2.
 *
 * @param request DetachProjectsFromReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachProjectsFromReviewRuleResponse
 */
DetachProjectsFromReviewRuleResponse Client::detachProjectsFromReviewRuleWithOptions(const DetachProjectsFromReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachProjectsFromReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachProjectsFromReviewRuleResponse>();
}

/**
 * @summary Removes projects from the scope of an audit policy. This operation can be called only when the ScopeType parameter in the corresponding audit policy returned by the GetReviewRule operation has a value of 2.
 *
 * @param request DetachProjectsFromReviewRuleRequest
 * @return DetachProjectsFromReviewRuleResponse
 */
DetachProjectsFromReviewRuleResponse Client::detachProjectsFromReviewRule(const DetachProjectsFromReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachProjectsFromReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Unbinds an auditor from an audit rule.
 *
 * @param request DetachReviewersFromReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachReviewersFromReviewRuleResponse
 */
DetachReviewersFromReviewRuleResponse Client::detachReviewersFromReviewRuleWithOptions(const DetachReviewersFromReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrincipalIds()) {
    query["PrincipalIds"] = request.getPrincipalIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachReviewersFromReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachReviewersFromReviewRuleResponse>();
}

/**
 * @summary Unbinds an auditor from an audit rule.
 *
 * @param request DetachReviewersFromReviewRuleRequest
 * @return DetachReviewersFromReviewRuleResponse
 */
DetachReviewersFromReviewRuleResponse Client::detachReviewersFromReviewRule(const DetachReviewersFromReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachReviewersFromReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Disables public network access for a Bastionhost instance.
 *
 * @param request DisableInstancePublicAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstancePublicAccessResponse
 */
DisableInstancePublicAccessResponse Client::disableInstancePublicAccessWithOptions(const DisableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInstancePublicAccess"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInstancePublicAccessResponse>();
}

/**
 * @summary Disables public network access for a Bastionhost instance.
 *
 * @param request DisableInstancePublicAccessRequest
 * @return DisableInstancePublicAccessResponse
 */
DisableInstancePublicAccessResponse Client::disableInstancePublicAccess(const DisableInstancePublicAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInstancePublicAccessWithOptions(request, runtime);
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRuleWithOptions(const DisableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableRuleResponse>();
}

/**
 * @summary Disables an authorization rule.
 *
 * @param request DisableRuleRequest
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRule(const DisableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRuleWithOptions(request, runtime);
}

/**
 * @summary Enables public network access for a specified Bastionhost instance.
 *
 * @param request EnableInstancePublicAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInstancePublicAccessResponse
 */
EnableInstancePublicAccessResponse Client::enableInstancePublicAccessWithOptions(const EnableInstancePublicAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInstancePublicAccess"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInstancePublicAccessResponse>();
}

/**
 * @summary Enables public network access for a specified Bastionhost instance.
 *
 * @param request EnableInstancePublicAccessRequest
 * @return EnableInstancePublicAccessResponse
 */
EnableInstancePublicAccessResponse Client::enableInstancePublicAccess(const EnableInstancePublicAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInstancePublicAccessWithOptions(request, runtime);
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRuleWithOptions(const EnableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableRuleResponse>();
}

/**
 * @summary Enables an authorization rule.
 *
 * @param request EnableRuleRequest
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRule(const EnableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRuleWithOptions(request, runtime);
}

/**
 * @summary Applies for a host or database O&M token to perform O&M operations on assets.
 *
 * @param request GenerateAssetOperationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAssetOperationTokenResponse
 */
GenerateAssetOperationTokenResponse Client::generateAssetOperationTokenWithOptions(const GenerateAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetAccountId()) {
    query["AssetAccountId"] = request.getAssetAccountId();
  }

  if (!!request.hasAssetAccountName()) {
    query["AssetAccountName"] = request.getAssetAccountName();
  }

  if (!!request.hasAssetAccountPassword()) {
    query["AssetAccountPassword"] = request.getAssetAccountPassword();
  }

  if (!!request.hasAssetAccountProtocolName()) {
    query["AssetAccountProtocolName"] = request.getAssetAccountProtocolName();
  }

  if (!!request.hasAssetId()) {
    query["AssetId"] = request.getAssetId();
  }

  if (!!request.hasAssetType()) {
    query["AssetType"] = request.getAssetType();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginAttribute()) {
    query["LoginAttribute"] = request.getLoginAttribute();
  }

  if (!!request.hasOperationMode()) {
    query["OperationMode"] = request.getOperationMode();
  }

  if (!!request.hasOperationNote()) {
    query["OperationNote"] = request.getOperationNote();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSsoClient()) {
    query["SsoClient"] = request.getSsoClient();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateAssetOperationToken"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAssetOperationTokenResponse>();
}

/**
 * @summary Applies for a host or database O&M token to perform O&M operations on assets.
 *
 * @param request GenerateAssetOperationTokenRequest
 * @return GenerateAssetOperationTokenResponse
 */
GenerateAssetOperationTokenResponse Client::generateAssetOperationToken(const GenerateAssetOperationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAssetOperationTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified O&M task.
 *
 * @param request GetAutoOpsTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoOpsTaskResponse
 */
GetAutoOpsTaskResponse Client::getAutoOpsTaskWithOptions(const GetAutoOpsTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAutoOpsTask"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoOpsTaskResponse>();
}

/**
 * @summary Queries the details of a specified O&M task.
 *
 * @param request GetAutoOpsTaskRequest
 * @return GetAutoOpsTaskResponse
 */
GetAutoOpsTaskResponse Client::getAutoOpsTask(const GetAutoOpsTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoOpsTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified database.
 *
 * @param request GetDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary Retrieves the details of a specified database.
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified database account.
 *
 * @param request GetDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseAccountResponse
 */
GetDatabaseAccountResponse Client::getDatabaseAccountWithOptions(const GetDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseAccountResponse>();
}

/**
 * @summary Retrieves the details of a specified database account.
 *
 * @param request GetDatabaseAccountRequest
 * @return GetDatabaseAccountResponse
 */
GetDatabaseAccountResponse Client::getDatabaseAccount(const GetDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a configuration backup export task. This operation is supported only for Bastionhost V3.2.44 and later.
 *
 * @param request GetExportConfigJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExportConfigJobResponse
 */
GetExportConfigJobResponse Client::getExportConfigJobWithOptions(const GetExportConfigJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExportConfigJob"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExportConfigJobResponse>();
}

/**
 * @summary Retrieves the details of a configuration backup export task. This operation is supported only for Bastionhost V3.2.44 and later.
 *
 * @param request GetExportConfigJobRequest
 * @return GetExportConfigJobResponse
 */
GetExportConfigJobResponse Client::getExportConfigJob(const GetExportConfigJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExportConfigJobWithOptions(request, runtime);
}

/**
 * @summary Includes information such as the hostname, source, host address, and protocol port.
 *
 * @param request GetHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostResponse
 */
GetHostResponse Client::getHostWithOptions(const GetHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostResponse>();
}

/**
 * @summary Includes information such as the hostname, source, host address, and protocol port.
 *
 * @param request GetHostRequest
 * @return GetHostResponse
 */
GetHostResponse Client::getHost(const GetHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified host account.
 *
 * @param request GetHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostAccountResponse
 */
GetHostAccountResponse Client::getHostAccountWithOptions(const GetHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostAccountResponse>();
}

/**
 * @summary Retrieves the details of a specified host account.
 *
 * @param request GetHostAccountRequest
 * @return GetHostAccountResponse
 */
GetHostAccountResponse Client::getHostAccount(const GetHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostAccountWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified asset group.
 *
 * @param request GetHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroupWithOptions(const GetHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostGroupResponse>();
}

/**
 * @summary Retrieves the details of a specified asset group.
 *
 * @param request GetHostGroupRequest
 * @return GetHostGroupResponse
 */
GetHostGroupResponse Client::getHostGroup(const GetHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a host shared key.
 *
 * @param request GetHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHostShareKeyResponse
 */
GetHostShareKeyResponse Client::getHostShareKeyWithOptions(const GetHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHostShareKeyResponse>();
}

/**
 * @summary Queries the details of a host shared key.
 *
 * @param request GetHostShareKeyRequest
 * @return GetHostShareKeyResponse
 */
GetHostShareKeyResponse Client::getHostShareKey(const GetHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the Active Directory (AD) authentication configurations of a Bastionhost instance.
 *
 * @description ### Usage notes
 * This operation queries the Active Directory (AD) authentication configurations of a Bastionhost instance. You can use the AD authentication feature of Bastionhost to synchronize users from an AD server to Bastionhost. After the synchronization is complete, users can perform O&M operations on servers by using Bastionhost. For enterprise-level managed operations, you can also refer to Alibaba Cloud Managed Services.
 * ### QPS limits
 * The queries per second (QPS) limit on this operation is 10 per user. If the number of API invocations exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation at a reasonable frequency.
 *
 * @param request GetInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceADAuthServerResponse
 */
GetInstanceADAuthServerResponse Client::getInstanceADAuthServerWithOptions(const GetInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserSourceId()) {
    query["UserSourceId"] = request.getUserSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceADAuthServerResponse>();
}

/**
 * @summary Queries the Active Directory (AD) authentication configurations of a Bastionhost instance.
 *
 * @description ### Usage notes
 * This operation queries the Active Directory (AD) authentication configurations of a Bastionhost instance. You can use the AD authentication feature of Bastionhost to synchronize users from an AD server to Bastionhost. After the synchronization is complete, users can perform O&M operations on servers by using Bastionhost. For enterprise-level managed operations, you can also refer to Alibaba Cloud Managed Services.
 * ### QPS limits
 * The queries per second (QPS) limit on this operation is 10 per user. If the number of API invocations exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation at a reasonable frequency.
 *
 * @param request GetInstanceADAuthServerRequest
 * @return GetInstanceADAuthServerResponse
 */
GetInstanceADAuthServerResponse Client::getInstanceADAuthServer(const GetInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
 *
 * @param request GetInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLDAPAuthServerResponse
 */
GetInstanceLDAPAuthServerResponse Client::getInstanceLDAPAuthServerWithOptions(const GetInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceLDAPAuthServerResponse>();
}

/**
 * @summary Queries the settings of Lightweight Directory Access Protocol (LDAP) authentication on a bastion host.
 *
 * @param request GetInstanceLDAPAuthServerRequest
 * @return GetInstanceLDAPAuthServerResponse
 */
GetInstanceLDAPAuthServerResponse Client::getInstanceLDAPAuthServer(const GetInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceLDAPAuthServerWithOptions(request, runtime);
}

/**
 * @summary Queries the storage usage of a Bastionhost instance.
 *
 * @param request GetInstanceStoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceStoreInfoResponse
 */
GetInstanceStoreInfoResponse Client::getInstanceStoreInfoWithOptions(const GetInstanceStoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceStoreInfo"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceStoreInfoResponse>();
}

/**
 * @summary Queries the storage usage of a Bastionhost instance.
 *
 * @param request GetInstanceStoreInfoRequest
 * @return GetInstanceStoreInfoResponse
 */
GetInstanceStoreInfoResponse Client::getInstanceStoreInfo(const GetInstanceStoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceStoreInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of two-factor authentication on a bastion host.
 *
 * @description Queries the two-factor authentication settings of a bastion host. When two-factor authentication is enabled, Bastionhost sends a verification code to a local user who logs on to the bastion host. The local user must enter a valid username, password, and verification code to log on, which reduces the security risks of account information leaks.
 * ### Limit
 * This operation can be called up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered and your business may be affected. Take note of this limit when you call this operation.
 *
 * @param request GetInstanceTwoFactorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceTwoFactorResponse
 */
GetInstanceTwoFactorResponse Client::getInstanceTwoFactorWithOptions(const GetInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceTwoFactor"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceTwoFactorResponse>();
}

/**
 * @summary Queries the settings of two-factor authentication on a bastion host.
 *
 * @description Queries the two-factor authentication settings of a bastion host. When two-factor authentication is enabled, Bastionhost sends a verification code to a local user who logs on to the bastion host. The local user must enter a valid username, password, and verification code to log on, which reduces the security risks of account information leaks.
 * ### Limit
 * This operation can be called up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered and your business may be affected. Take note of this limit when you call this operation.
 *
 * @param request GetInstanceTwoFactorRequest
 * @return GetInstanceTwoFactorResponse
 */
GetInstanceTwoFactorResponse Client::getInstanceTwoFactor(const GetInstanceTwoFactorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceTwoFactorWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified network domain.
 *
 * @param request GetNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkDomainResponse
 */
GetNetworkDomainResponse Client::getNetworkDomainWithOptions(const GetNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckProxyState()) {
    query["CheckProxyState"] = request.getCheckProxyState();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkDomainResponse>();
}

/**
 * @summary Retrieves the details of a specified network domain.
 *
 * @param request GetNetworkDomainRequest
 * @return GetNetworkDomainResponse
 */
GetNetworkDomainResponse Client::getNetworkDomain(const GetNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified control policy.
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary Retrieves the details of a specified control policy.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the asset scope of a specified control policy.
 *
 * @param request GetPolicyAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyAssetScopeResponse
 */
GetPolicyAssetScopeResponse Client::getPolicyAssetScopeWithOptions(const GetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyAssetScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyAssetScopeResponse>();
}

/**
 * @summary Retrieves the asset scope of a specified control policy.
 *
 * @param request GetPolicyAssetScopeRequest
 * @return GetPolicyAssetScopeResponse
 */
GetPolicyAssetScopeResponse Client::getPolicyAssetScope(const GetPolicyAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the effective user scope of a specified control policy.
 *
 * @param request GetPolicyUserScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyUserScopeResponse
 */
GetPolicyUserScopeResponse Client::getPolicyUserScopeWithOptions(const GetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPolicyUserScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyUserScopeResponse>();
}

/**
 * @summary Retrieves the effective user scope of a specified control policy.
 *
 * @param request GetPolicyUserScopeRequest
 * @return GetPolicyUserScopeResponse
 */
GetPolicyUserScopeResponse Client::getPolicyUserScope(const GetPolicyUserScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyUserScopeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified project.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Queries the details of a specified project.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a project authorization.
 *
 * @param request GetProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectAuthorizationResponse
 */
GetProjectAuthorizationResponse Client::getProjectAuthorizationWithOptions(const GetProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectAuthorizationResponse>();
}

/**
 * @summary Queries the details of a project authorization.
 *
 * @param request GetProjectAuthorizationRequest
 * @return GetProjectAuthorizationResponse
 */
GetProjectAuthorizationResponse Client::getProjectAuthorization(const GetProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an audit policy.
 *
 * @param request GetReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReviewRuleResponse
 */
GetReviewRuleResponse Client::getReviewRuleWithOptions(const GetReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReviewRuleResponse>();
}

/**
 * @summary Queries the details of an audit policy.
 *
 * @param request GetReviewRuleRequest
 * @return GetReviewRuleResponse
 */
GetReviewRuleResponse Client::getReviewRule(const GetReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified authorization rule.
 *
 * @param request GetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRuleWithOptions(const GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleResponse>();
}

/**
 * @summary Retrieves the details of a specified authorization rule.
 *
 * @param request GetRuleRequest
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRule(const GetRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified Bastionhost user.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Retrieves the details of a specified Bastionhost user.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified Bastionhost user group.
 *
 * @param request GetUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroupWithOptions(const GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupResponse>();
}

/**
 * @summary Retrieves the details of a specified Bastionhost user group.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary Imports KMS secrets for a specified host.
 *
 * @param tmpReq ImportKMSSecretsForHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportKMSSecretsForHostResponse
 */
ImportKMSSecretsForHostResponse Client::importKMSSecretsForHostWithOptions(const ImportKMSSecretsForHostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportKMSSecretsForHostShrinkRequest request = ImportKMSSecretsForHostShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSecrets()) {
    request.setSecretsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecrets(), "Secrets", "json"));
  }

  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecretsShrink()) {
    query["Secrets"] = request.getSecretsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportKMSSecretsForHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportKMSSecretsForHostResponse>();
}

/**
 * @summary Imports KMS secrets for a specified host.
 *
 * @param request ImportKMSSecretsForHostRequest
 * @return ImportKMSSecretsForHostResponse
 */
ImportKMSSecretsForHostResponse Client::importKMSSecretsForHost(const ImportKMSSecretsForHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importKMSSecretsForHostWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of commands that require approval.
 *
 * @description This API operation allows administrators to retrieve the list of commands that require approval.
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request ListApproveCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApproveCommandsResponse
 */
ListApproveCommandsResponse Client::listApproveCommandsWithOptions(const ListApproveCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApproveCommands"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApproveCommandsResponse>();
}

/**
 * @summary Retrieves the list of commands that require approval.
 *
 * @description This API operation allows administrators to retrieve the list of commands that require approval.
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request ListApproveCommandsRequest
 * @return ListApproveCommandsResponse
 */
ListApproveCommandsResponse Client::listApproveCommands(const ListApproveCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApproveCommandsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of database accounts.
 *
 * @param request ListDatabaseAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsResponse
 */
ListDatabaseAccountsResponse Client::listDatabaseAccountsWithOptions(const ListDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsResponse>();
}

/**
 * @summary Retrieves a list of database accounts.
 *
 * @param request ListDatabaseAccountsRequest
 * @return ListDatabaseAccountsResponse
 */
ListDatabaseAccountsResponse Client::listDatabaseAccounts(const ListDatabaseAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsForUserResponse
 */
ListDatabaseAccountsForUserResponse Client::listDatabaseAccountsForUserWithOptions(const ListDatabaseAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccountsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsForUserResponse>();
}

/**
 * @summary Queries the database accounts of a database and whether a user is authorized to manage each database account.
 *
 * @param request ListDatabaseAccountsForUserRequest
 * @return ListDatabaseAccountsForUserResponse
 */
ListDatabaseAccountsForUserResponse Client::listDatabaseAccountsForUser(const ListDatabaseAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the list of authorized and unauthorized database accounts for a user group.
 *
 * @param request ListDatabaseAccountsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabaseAccountsForUserGroupResponse
 */
ListDatabaseAccountsForUserGroupResponse Client::listDatabaseAccountsForUserGroupWithOptions(const ListDatabaseAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabaseAccountsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabaseAccountsForUserGroupResponse>();
}

/**
 * @summary Queries the list of authorized and unauthorized database accounts for a user group.
 *
 * @param request ListDatabaseAccountsForUserGroupRequest
 * @return ListDatabaseAccountsForUserGroupResponse
 */
ListDatabaseAccountsForUserGroupResponse Client::listDatabaseAccountsForUserGroup(const ListDatabaseAccountsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabaseAccountsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the databases of a specified Bastionhost instance.
 *
 * @param request ListDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Queries the databases of a specified Bastionhost instance.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of databases authorized for a user.
 *
 * @param request ListDatabasesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesForUserResponse
 */
ListDatabasesForUserResponse Client::listDatabasesForUserWithOptions(const ListDatabasesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabasesForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesForUserResponse>();
}

/**
 * @summary Queries the list of databases authorized for a user.
 *
 * @param request ListDatabasesForUserRequest
 * @return ListDatabasesForUserResponse
 */
ListDatabasesForUserResponse Client::listDatabasesForUser(const ListDatabasesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the databases authorized for a user group.
 *
 * @param request ListDatabasesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesForUserGroupResponse
 */
ListDatabasesForUserGroupResponse Client::listDatabasesForUserGroupWithOptions(const ListDatabasesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabasesForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesForUserGroupResponse>();
}

/**
 * @summary Queries the databases authorized for a user group.
 *
 * @param request ListDatabasesForUserGroupRequest
 * @return ListDatabasesForUserGroupResponse
 */
ListDatabasesForUserGroupResponse Client::listDatabasesForUserGroup(const ListDatabasesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of host accounts.
 *
 * @param request ListHostAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsResponse
 */
ListHostAccountsResponse Client::listHostAccountsWithOptions(const ListHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsResponse>();
}

/**
 * @summary Retrieves a list of host accounts.
 *
 * @param request ListHostAccountsRequest
 * @return ListHostAccountsResponse
 */
ListHostAccountsResponse Client::listHostAccounts(const ListHostAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the host accounts associated with a host shared key.
 *
 * @param request ListHostAccountsForHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForHostShareKeyResponse
 */
ListHostAccountsForHostShareKeyResponse Client::listHostAccountsForHostShareKeyWithOptions(const ListHostAccountsForHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForHostShareKeyResponse>();
}

/**
 * @summary Retrieves the host accounts associated with a host shared key.
 *
 * @param request ListHostAccountsForHostShareKeyRequest
 * @return ListHostAccountsForHostShareKeyResponse
 */
ListHostAccountsForHostShareKeyResponse Client::listHostAccountsForHostShareKey(const ListHostAccountsForHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of authorized and unauthorized host accounts for a specified user on a specified host.
 *
 * @param request ListHostAccountsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForUserResponse
 */
ListHostAccountsForUserResponse Client::listHostAccountsForUserWithOptions(const ListHostAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForUserResponse>();
}

/**
 * @summary Queries the list of authorized and unauthorized host accounts for a specified user on a specified host.
 *
 * @param request ListHostAccountsForUserRequest
 * @return ListHostAccountsForUserResponse
 */
ListHostAccountsForUserResponse Client::listHostAccountsForUser(const ListHostAccountsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the authorized and unauthorized host accounts of a specified user group on a specified host.
 *
 * @param request ListHostAccountsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostAccountsForUserGroupResponse
 */
ListHostAccountsForUserGroupResponse Client::listHostAccountsForUserGroupWithOptions(const ListHostAccountsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostAccountsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostAccountsForUserGroupResponse>();
}

/**
 * @summary Queries the authorized and unauthorized host accounts of a specified user group on a specified host.
 *
 * @param request ListHostAccountsForUserGroupRequest
 * @return ListHostAccountsForUserGroupResponse
 */
ListHostAccountsForUserGroupResponse Client::listHostAccountsForUserGroup(const ListHostAccountsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostAccountsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the names of host accounts authorized for a specified user in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupAccountNamesForUserResponse
 */
ListHostGroupAccountNamesForUserResponse Client::listHostGroupAccountNamesForUserWithOptions(const ListHostGroupAccountNamesForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupAccountNamesForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupAccountNamesForUserResponse>();
}

/**
 * @summary Queries the names of host accounts authorized for a specified user in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserRequest
 * @return ListHostGroupAccountNamesForUserResponse
 */
ListHostGroupAccountNamesForUserResponse Client::listHostGroupAccountNamesForUser(const ListHostGroupAccountNamesForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupAccountNamesForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the names of host accounts authorized for a specified user group in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupAccountNamesForUserGroupResponse
 */
ListHostGroupAccountNamesForUserGroupResponse Client::listHostGroupAccountNamesForUserGroupWithOptions(const ListHostGroupAccountNamesForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupAccountNamesForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupAccountNamesForUserGroupResponse>();
}

/**
 * @summary Queries the names of host accounts authorized for a specified user group in a specified host group.
 *
 * @param request ListHostGroupAccountNamesForUserGroupRequest
 * @return ListHostGroupAccountNamesForUserGroupResponse
 */
ListHostGroupAccountNamesForUserGroupResponse Client::listHostGroupAccountNamesForUserGroup(const ListHostGroupAccountNamesForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupAccountNamesForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the asset groups under a specified bastion host.
 *
 * @param request ListHostGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroupsWithOptions(const ListHostGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsResponse>();
}

/**
 * @summary Queries the asset groups under a specified bastion host.
 *
 * @param request ListHostGroupsRequest
 * @return ListHostGroupsResponse
 */
ListHostGroupsResponse Client::listHostGroups(const ListHostGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the authorized or unauthorized host groups for a specified Bastionhost user.
 *
 * @param request ListHostGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsForUserResponse
 */
ListHostGroupsForUserResponse Client::listHostGroupsForUserWithOptions(const ListHostGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsForUserResponse>();
}

/**
 * @summary Queries the authorized or unauthorized host groups for a specified Bastionhost user.
 *
 * @param request ListHostGroupsForUserRequest
 * @return ListHostGroupsForUserResponse
 */
ListHostGroupsForUserResponse Client::listHostGroupsForUser(const ListHostGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the authorized or unauthorized host groups for a specified Bastionhost user group.
 *
 * @param request ListHostGroupsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostGroupsForUserGroupResponse
 */
ListHostGroupsForUserGroupResponse Client::listHostGroupsForUserGroupWithOptions(const ListHostGroupsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostGroupsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostGroupsForUserGroupResponse>();
}

/**
 * @summary Queries the authorized or unauthorized host groups for a specified Bastionhost user group.
 *
 * @param request ListHostGroupsForUserGroupRequest
 * @return ListHostGroupsForUserGroupResponse
 */
ListHostGroupsForUserGroupResponse Client::listHostGroupsForUserGroup(const ListHostGroupsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostGroupsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the list of host shared keys.
 *
 * @param request ListHostShareKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostShareKeysResponse
 */
ListHostShareKeysResponse Client::listHostShareKeysWithOptions(const ListHostShareKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostShareKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostShareKeysResponse>();
}

/**
 * @summary Queries the list of host shared keys.
 *
 * @param request ListHostShareKeysRequest
 * @return ListHostShareKeysResponse
 */
ListHostShareKeysResponse Client::listHostShareKeys(const ListHostShareKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostShareKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the hosts in a specified Bastionhost instance.
 *
 * @param request ListHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsResponse
 */
ListHostsResponse Client::listHostsWithOptions(const ListHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHosts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsResponse>();
}

/**
 * @summary Queries the hosts in a specified Bastionhost instance.
 *
 * @param request ListHostsRequest
 * @return ListHostsResponse
 */
ListHostsResponse Client::listHosts(const ListHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of authorized or unauthorized hosts for a specified Bastionhost user.
 *
 * @param request ListHostsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsForUserResponse
 */
ListHostsForUserResponse Client::listHostsForUserWithOptions(const ListHostsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsForUserResponse>();
}

/**
 * @summary Queries the list of authorized or unauthorized hosts for a specified Bastionhost user.
 *
 * @param request ListHostsForUserRequest
 * @return ListHostsForUserResponse
 */
ListHostsForUserResponse Client::listHostsForUser(const ListHostsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries the list of authorized or unauthorized hosts for a specified Bastionhost user group.
 *
 * @param request ListHostsForUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHostsForUserGroupResponse
 */
ListHostsForUserGroupResponse Client::listHostsForUserGroupWithOptions(const ListHostsForUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.getMode();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHostsForUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHostsForUserGroupResponse>();
}

/**
 * @summary Queries the list of authorized or unauthorized hosts for a specified Bastionhost user group.
 *
 * @param request ListHostsForUserGroupRequest
 * @return ListHostsForUserGroupResponse
 */
ListHostsForUserGroupResponse Client::listHostsForUserGroup(const ListHostsForUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHostsForUserGroupWithOptions(request, runtime);
}

/**
 * @summary Lists all importable KMS credentials for a specified host.
 *
 * @param request ListImportableKMSSecretsForHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImportableKMSSecretsForHostResponse
 */
ListImportableKMSSecretsForHostResponse Client::listImportableKMSSecretsForHostWithOptions(const ListImportableKMSSecretsForHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImportableKMSSecretsForHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImportableKMSSecretsForHostResponse>();
}

/**
 * @summary Lists all importable KMS credentials for a specified host.
 *
 * @param request ListImportableKMSSecretsForHostRequest
 * @return ListImportableKMSSecretsForHostResponse
 */
ListImportableKMSSecretsForHostResponse Client::listImportableKMSSecretsForHost(const ListImportableKMSSecretsForHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImportableKMSSecretsForHostWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of member accounts in a resource directory.
 *
 * @param request ListInstanceRdMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceRdMembersResponse
 */
ListInstanceRdMembersResponse Client::listInstanceRdMembersWithOptions(const ListInstanceRdMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceRdMembers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceRdMembersResponse>();
}

/**
 * @summary Retrieves a list of member accounts in a resource directory.
 *
 * @param request ListInstanceRdMembersRequest
 * @return ListInstanceRdMembersResponse
 */
ListInstanceRdMembersResponse Client::listInstanceRdMembers(const ListInstanceRdMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceRdMembersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of member accounts that are not assigned to other projects.
 *
 * @param request ListMembersNotForProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMembersNotForProjectResponse
 */
ListMembersNotForProjectResponse Client::listMembersNotForProjectWithOptions(const ListMembersNotForProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMembersNotForProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMembersNotForProjectResponse>();
}

/**
 * @summary Queries the list of member accounts that are not assigned to other projects.
 *
 * @param request ListMembersNotForProjectRequest
 * @return ListMembersNotForProjectResponse
 */
ListMembersNotForProjectResponse Client::listMembersNotForProject(const ListMembersNotForProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMembersNotForProjectWithOptions(request, runtime);
}

/**
 * @summary Queries the network domains of a specified Bastionhost instance.
 *
 * @param request ListNetworkDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkDomainsResponse
 */
ListNetworkDomainsResponse Client::listNetworkDomainsWithOptions(const ListNetworkDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkDomains"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkDomainsResponse>();
}

/**
 * @summary Queries the network domains of a specified Bastionhost instance.
 *
 * @param request ListNetworkDomainsRequest
 * @return ListNetworkDomainsResponse
 */
ListNetworkDomainsResponse Client::listNetworkDomains(const ListNetworkDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkDomainsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of authorized database accounts.
 *
 * @param request ListOperationDatabaseAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationDatabaseAccountsResponse
 */
ListOperationDatabaseAccountsResponse Client::listOperationDatabaseAccountsWithOptions(const ListOperationDatabaseAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationProjectId()) {
    query["OperationProjectId"] = request.getOperationProjectId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationDatabaseAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationDatabaseAccountsResponse>();
}

/**
 * @summary Retrieves a list of authorized database accounts.
 *
 * @param request ListOperationDatabaseAccountsRequest
 * @return ListOperationDatabaseAccountsResponse
 */
ListOperationDatabaseAccountsResponse Client::listOperationDatabaseAccounts(const ListOperationDatabaseAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationDatabaseAccountsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of databases authorized for the current Resource Access Management (RAM) user.
 *
 * @param request ListOperationDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationDatabasesResponse
 */
ListOperationDatabasesResponse Client::listOperationDatabasesWithOptions(const ListOperationDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAddress()) {
    query["DatabaseAddress"] = request.getDatabaseAddress();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabaseType()) {
    query["DatabaseType"] = request.getDatabaseType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationDatabases"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationDatabasesResponse>();
}

/**
 * @summary Retrieves the list of databases authorized for the current Resource Access Management (RAM) user.
 *
 * @param request ListOperationDatabasesRequest
 * @return ListOperationDatabasesResponse
 */
ListOperationDatabasesResponse Client::listOperationDatabases(const ListOperationDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationDatabasesWithOptions(request, runtime);
}

/**
 * @summary Lists the host accounts for which the current Resource Access Management (RAM) user has authorization.
 *
 * @param request ListOperationHostAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationHostAccountsResponse
 */
ListOperationHostAccountsResponse Client::listOperationHostAccountsWithOptions(const ListOperationHostAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationHostAccounts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationHostAccountsResponse>();
}

/**
 * @summary Lists the host accounts for which the current Resource Access Management (RAM) user has authorization.
 *
 * @param request ListOperationHostAccountsRequest
 * @return ListOperationHostAccountsResponse
 */
ListOperationHostAccountsResponse Client::listOperationHostAccounts(const ListOperationHostAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationHostAccountsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of hosts with authorization for the current Resource Access Management (RAM) user.
 *
 * @param request ListOperationHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationHostsResponse
 */
ListOperationHostsResponse Client::listOperationHostsWithOptions(const ListOperationHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.getHostAddress();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasOperationProjectId()) {
    query["OperationProjectId"] = request.getOperationProjectId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  if (!!request.hasSourceInstanceState()) {
    query["SourceInstanceState"] = request.getSourceInstanceState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationHosts"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationHostsResponse>();
}

/**
 * @summary Retrieves the list of hosts with authorization for the current Resource Access Management (RAM) user.
 *
 * @param request ListOperationHostsRequest
 * @return ListOperationHostsResponse
 */
ListOperationHostsResponse Client::listOperationHosts(const ListOperationHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationHostsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of O&M tickets pending approval.
 *
 * @description This API operation allows administrators to retrieve a list of O&M tickets pending approval.
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request ListOperationTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationTicketsResponse
 */
ListOperationTicketsResponse Client::listOperationTicketsWithOptions(const ListOperationTicketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetAddress()) {
    query["AssetAddress"] = request.getAssetAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOperationTickets"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationTicketsResponse>();
}

/**
 * @summary Retrieves a list of O&M tickets pending approval.
 *
 * @description This API operation allows administrators to retrieve a list of O&M tickets pending approval.
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request ListOperationTicketsRequest
 * @return ListOperationTicketsResponse
 */
ListOperationTicketsResponse Client::listOperationTickets(const ListOperationTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationTicketsWithOptions(request, runtime);
}

/**
 * @summary Queries the control policies.
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary Queries the control policies.
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of project authorizations.
 *
 * @param request ListProjectAuthorizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectAuthorizationsResponse
 */
ListProjectAuthorizationsResponse Client::listProjectAuthorizationsWithOptions(const ListProjectAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectAuthorizations"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectAuthorizationsResponse>();
}

/**
 * @summary Queries the list of project authorizations.
 *
 * @param request ListProjectAuthorizationsRequest
 * @return ListProjectAuthorizationsResponse
 */
ListProjectAuthorizationsResponse Client::listProjectAuthorizations(const ListProjectAuthorizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectAuthorizationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of notification recipients for a project.
 *
 * @param request ListProjectNotifyReceiversRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectNotifyReceiversResponse
 */
ListProjectNotifyReceiversResponse Client::listProjectNotifyReceiversWithOptions(const ListProjectNotifyReceiversRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectNotifyReceivers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectNotifyReceiversResponse>();
}

/**
 * @summary Queries the list of notification recipients for a project.
 *
 * @param request ListProjectNotifyReceiversRequest
 * @return ListProjectNotifyReceiversResponse
 */
ListProjectNotifyReceiversResponse Client::listProjectNotifyReceivers(const ListProjectNotifyReceiversRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectNotifyReceiversWithOptions(request, runtime);
}

/**
 * @summary Queries a list of projects.
 *
 * @param request ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Queries a list of projects.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the projects that the current user can manage.
 *
 * @param request ListProjectsForProjectAuthorizationPrincipalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsForProjectAuthorizationPrincipalResponse
 */
ListProjectsForProjectAuthorizationPrincipalResponse Client::listProjectsForProjectAuthorizationPrincipalWithOptions(const ListProjectsForProjectAuthorizationPrincipalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectsForProjectAuthorizationPrincipal"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsForProjectAuthorizationPrincipalResponse>();
}

/**
 * @summary Queries the projects that the current user can manage.
 *
 * @param request ListProjectsForProjectAuthorizationPrincipalRequest
 * @return ListProjectsForProjectAuthorizationPrincipalResponse
 */
ListProjectsForProjectAuthorizationPrincipalResponse Client::listProjectsForProjectAuthorizationPrincipal(const ListProjectsForProjectAuthorizationPrincipalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsForProjectAuthorizationPrincipalWithOptions(request, runtime);
}

/**
 * @summary Queries the list of projects that are not associated with a project authorization.
 *
 * @param request ListProjectsNotForProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsNotForProjectAuthorizationResponse
 */
ListProjectsNotForProjectAuthorizationResponse Client::listProjectsNotForProjectAuthorizationWithOptions(const ListProjectsNotForProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectsNotForProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsNotForProjectAuthorizationResponse>();
}

/**
 * @summary Queries the list of projects that are not associated with a project authorization.
 *
 * @param request ListProjectsNotForProjectAuthorizationRequest
 * @return ListProjectsNotForProjectAuthorizationResponse
 */
ListProjectsNotForProjectAuthorizationResponse Client::listProjectsNotForProjectAuthorization(const ListProjectsNotForProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsNotForProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Queries the list of projects that are not associated with an audit policy.
 *
 * @param request ListProjectsNotForReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsNotForReviewRuleResponse
 */
ListProjectsNotForReviewRuleResponse Client::listProjectsNotForReviewRuleWithOptions(const ListProjectsNotForReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectsNotForReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsNotForReviewRuleResponse>();
}

/**
 * @summary Queries the list of projects that are not associated with an audit policy.
 *
 * @param request ListProjectsNotForReviewRuleRequest
 * @return ListProjectsNotForReviewRuleResponse
 */
ListProjectsNotForReviewRuleResponse Client::listProjectsNotForReviewRule(const ListProjectsNotForReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsNotForReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the audit policy list.
 *
 * @param request ListReviewRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReviewRulesResponse
 */
ListReviewRulesResponse Client::listReviewRulesWithOptions(const ListReviewRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReviewRules"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReviewRulesResponse>();
}

/**
 * @summary Queries the audit policy list.
 *
 * @param request ListReviewRulesRequest
 * @return ListReviewRulesResponse
 */
ListReviewRulesResponse Client::listReviewRules(const ListReviewRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReviewRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization rules of a specified Bastionhost instance.
 *
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleState()) {
    query["RuleState"] = request.getRuleState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRules"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRulesResponse>();
}

/**
 * @summary Queries the authorization rules of a specified Bastionhost instance.
 *
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags bound to a resource.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the tags bound to a resource.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are bound to one or more Bastionhost instances.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are bound to one or more Bastionhost instances.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of pending automated O&M approvals.
 *
 * @param request ListTodoOpsTaskApprovalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTodoOpsTaskApprovalsResponse
 */
ListTodoOpsTaskApprovalsResponse Client::listTodoOpsTaskApprovalsWithOptions(const ListTodoOpsTaskApprovalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.getScheduleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTodoOpsTaskApprovals"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTodoOpsTaskApprovalsResponse>();
}

/**
 * @summary Retrieves the list of pending automated O&M approvals.
 *
 * @param request ListTodoOpsTaskApprovalsRequest
 * @return ListTodoOpsTaskApprovalsResponse
 */
ListTodoOpsTaskApprovalsResponse Client::listTodoOpsTaskApprovals(const ListTodoOpsTaskApprovalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTodoOpsTaskApprovalsWithOptions(request, runtime);
}

/**
 * @summary Queries the user groups of a specified Bastionhost instance.
 *
 * @param request ListUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroupsWithOptions(const ListUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroups"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsResponse>();
}

/**
 * @summary Queries the user groups of a specified Bastionhost instance.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of user groups that a user has joined.
 *
 * @param request ListUserGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsForUserResponse
 */
ListUserGroupsForUserResponse Client::listUserGroupsForUserWithOptions(const ListUserGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPagingOff()) {
    query["PagingOff"] = request.getPagingOff();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserGroupsForUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsForUserResponse>();
}

/**
 * @summary Queries the list of user groups that a user has joined.
 *
 * @param request ListUserGroupsForUserRequest
 * @return ListUserGroupsForUserResponse
 */
ListUserGroupsForUserResponse Client::listUserGroupsForUser(const ListUserGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Lists the SSH public keys that are configured for a Bastionhost user. Users can use these public keys for key-based authentication when logging on to hosts through Bastionhost.
 *
 * @param request ListUserPublicKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPublicKeysResponse
 */
ListUserPublicKeysResponse Client::listUserPublicKeysWithOptions(const ListUserPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserPublicKeys"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPublicKeysResponse>();
}

/**
 * @summary Lists the SSH public keys that are configured for a Bastionhost user. Users can use these public keys for key-based authentication when logging on to hosts through Bastionhost.
 *
 * @param request ListUserPublicKeysRequest
 * @return ListUserPublicKeysResponse
 */
ListUserPublicKeysResponse Client::listUserPublicKeys(const ListUserPublicKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPublicKeysWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of users for a specified bastion host.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceUserId()) {
    query["SourceUserId"] = request.getSourceUserId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasUserState()) {
    query["UserState"] = request.getUserState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Retrieves the list of users for a specified bastion host.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Locks one or more users of a bastion host.
 *
 * @description # Description
 * Locks one or more bastion host users to prevent them from performing O\\&M operations. If a user does not need to use a bastion host within a specific period of time, lock the user account. Locked users cannot log on to or perform O\\&M operations on the hosts on which they have permissions. To unlock users later, use the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsersWithOptions(const LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockUsersResponse>();
}

/**
 * @summary Locks one or more users of a bastion host.
 *
 * @description # Description
 * Locks one or more bastion host users to prevent them from performing O\\&M operations. If a user does not need to use a bastion host within a specific period of time, lock the user account. Locked users cannot log on to or perform O\\&M operations on the hosts on which they have permissions. To unlock users later, use the [UnlockUsers](https://help.aliyun.com/document_detail/204590.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockUsersRequest
 * @return LockUsersResponse
 */
LockUsersResponse Client::lockUsers(const LockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockUsersWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a database.
 *
 * @param request ModifyDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseResponse
 */
ModifyDatabaseResponse Client::modifyDatabaseWithOptions(const ModifyDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabaseId()) {
    query["DatabaseId"] = request.getDatabaseId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDatabasePort()) {
    query["DatabasePort"] = request.getDatabasePort();
  }

  if (!!request.hasDatabasePrivateAddress()) {
    query["DatabasePrivateAddress"] = request.getDatabasePrivateAddress();
  }

  if (!!request.hasDatabasePublicAddress()) {
    query["DatabasePublicAddress"] = request.getDatabasePublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSourceInstanceId()) {
    query["SourceInstanceId"] = request.getSourceInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabase"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseResponse>();
}

/**
 * @summary Modifies the basic information of a database.
 *
 * @param request ModifyDatabaseRequest
 * @return ModifyDatabaseResponse
 */
ModifyDatabaseResponse Client::modifyDatabase(const ModifyDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a database account.
 *
 * @param request ModifyDatabaseAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabaseAccountResponse
 */
ModifyDatabaseAccountResponse Client::modifyDatabaseAccountWithOptions(const ModifyDatabaseAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseAccountId()) {
    query["DatabaseAccountId"] = request.getDatabaseAccountId();
  }

  if (!!request.hasDatabaseAccountName()) {
    query["DatabaseAccountName"] = request.getDatabaseAccountName();
  }

  if (!!request.hasDatabaseSchema()) {
    query["DatabaseSchema"] = request.getDatabaseSchema();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabaseAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabaseAccountResponse>();
}

/**
 * @summary Modifies the basic information of a database account.
 *
 * @param request ModifyDatabaseAccountRequest
 * @return ModifyDatabaseAccountResponse
 */
ModifyDatabaseAccountResponse Client::modifyDatabaseAccount(const ModifyDatabaseAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabaseAccountWithOptions(request, runtime);
}

/**
 * @summary Moves multiple database instances to a specified project.
 *
 * @param request ModifyDatabasesProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDatabasesProjectResponse
 */
ModifyDatabasesProjectResponse Client::modifyDatabasesProjectWithOptions(const ModifyDatabasesProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetProjectId()) {
    query["TargetProjectId"] = request.getTargetProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDatabasesProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDatabasesProjectResponse>();
}

/**
 * @summary Moves multiple database instances to a specified project.
 *
 * @param request ModifyDatabasesProjectRequest
 * @return ModifyDatabasesProjectResponse
 */
ModifyDatabasesProjectResponse Client::modifyDatabasesProject(const ModifyDatabasesProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDatabasesProjectWithOptions(request, runtime);
}

/**
 * @summary Updates the address, name, operating system type, and description of a host.
 *
 * @description This operation updates the basic information of on-premises hosts, ECS hosts, and hosts in dedicated ApsaraDB RDS clusters.
 * > If you update the basic information of an ECS host or a host in a dedicated ApsaraDB RDS cluster, the changes may be overwritten. This is because Bastionhost periodically synchronizes the basic information of ECS hosts and hosts in dedicated ApsaraDB RDS clusters.
 *
 * @param request ModifyHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostResponse
 */
ModifyHostResponse Client::modifyHostWithOptions(const ModifyHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostId()) {
    query["HostId"] = request.getHostId();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasHostPrivateAddress()) {
    query["HostPrivateAddress"] = request.getHostPrivateAddress();
  }

  if (!!request.hasHostPublicAddress()) {
    query["HostPublicAddress"] = request.getHostPublicAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasOSType()) {
    query["OSType"] = request.getOSType();
  }

  if (!!request.hasPrefKex()) {
    query["PrefKex"] = request.getPrefKex();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHost"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostResponse>();
}

/**
 * @summary Updates the address, name, operating system type, and description of a host.
 *
 * @description This operation updates the basic information of on-premises hosts, ECS hosts, and hosts in dedicated ApsaraDB RDS clusters.
 * > If you update the basic information of an ECS host or a host in a dedicated ApsaraDB RDS cluster, the changes may be overwritten. This is because Bastionhost periodically synchronizes the basic information of ECS hosts and hosts in dedicated ApsaraDB RDS clusters.
 *
 * @param request ModifyHostRequest
 * @return ModifyHostResponse
 */
ModifyHostResponse Client::modifyHost(const ModifyHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostWithOptions(request, runtime);
}

/**
 * @summary Modifies host account information, including the name, password, and private key of a host account.
 *
 * @param request ModifyHostAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostAccountResponse
 */
ModifyHostAccountResponse Client::modifyHostAccountWithOptions(const ModifyHostAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasHostAccountName()) {
    query["HostAccountName"] = request.getHostAccountName();
  }

  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.getPrivilegeType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRotationMode()) {
    query["RotationMode"] = request.getRotationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostAccount"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostAccountResponse>();
}

/**
 * @summary Modifies host account information, including the name, password, and private key of a host account.
 *
 * @param request ModifyHostAccountRequest
 * @return ModifyHostAccountResponse
 */
ModifyHostAccountResponse Client::modifyHostAccount(const ModifyHostAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostAccountWithOptions(request, runtime);
}

/**
 * @summary Modifies the name or description of an asset group.
 *
 * @param request ModifyHostGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostGroupResponse
 */
ModifyHostGroupResponse Client::modifyHostGroupWithOptions(const ModifyHostGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostGroupName()) {
    query["HostGroupName"] = request.getHostGroupName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostGroupResponse>();
}

/**
 * @summary Modifies the name or description of an asset group.
 *
 * @param request ModifyHostGroupRequest
 * @return ModifyHostGroupResponse
 */
ModifyHostGroupResponse Client::modifyHostGroup(const ModifyHostGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostGroupWithOptions(request, runtime);
}

/**
 * @summary Updates a host shared key.
 *
 * @param request ModifyHostShareKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostShareKeyResponse
 */
ModifyHostShareKeyResponse Client::modifyHostShareKeyWithOptions(const ModifyHostShareKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostShareKeyId()) {
    query["HostShareKeyId"] = request.getHostShareKeyId();
  }

  if (!!request.hasHostShareKeyName()) {
    query["HostShareKeyName"] = request.getHostShareKeyName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassPhrase()) {
    query["PassPhrase"] = request.getPassPhrase();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostShareKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostShareKeyResponse>();
}

/**
 * @summary Updates a host shared key.
 *
 * @param request ModifyHostShareKeyRequest
 * @return ModifyHostShareKeyResponse
 */
ModifyHostShareKeyResponse Client::modifyHostShareKey(const ModifyHostShareKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostShareKeyWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoint type used for host O&M. Bastionhost supports O&M over the Internet and private networks.
 *
 * @param request ModifyHostsActiveAddressTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostsActiveAddressTypeResponse
 */
ModifyHostsActiveAddressTypeResponse Client::modifyHostsActiveAddressTypeWithOptions(const ModifyHostsActiveAddressTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActiveAddressType()) {
    query["ActiveAddressType"] = request.getActiveAddressType();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostsActiveAddressType"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostsActiveAddressTypeResponse>();
}

/**
 * @summary Modifies the endpoint type used for host O&M. Bastionhost supports O&M over the Internet and private networks.
 *
 * @param request ModifyHostsActiveAddressTypeRequest
 * @return ModifyHostsActiveAddressTypeResponse
 */
ModifyHostsActiveAddressTypeResponse Client::modifyHostsActiveAddressType(const ModifyHostsActiveAddressTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostsActiveAddressTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the ports used by Bastionhost for the RDP and SSH protocols on hosts. By default, Bastionhost uses port 3389 for RDP and port 22 for SSH. If you have configured custom ports on your hosts, you can call this operation to update the port settings.
 *
 * @description ### Usage notes
 * This operation modifies the ports of O&M protocols for multiple hosts. If you consider the standard ports of O&M protocols insecure and vulnerable to attacks, such as port 22 for SSH, you can call this operation to specify custom ports.
 * > Ports 0 to 1024 are reserved for Bastionhost. Do not specify a reserved port as a custom port.
 * ### QPS limits
 * You can call this operation up to 10 times per second. Requests that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyHostsPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostsPortResponse
 */
ModifyHostsPortResponse Client::modifyHostsPortWithOptions(const ModifyHostsPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProtocolName()) {
    query["ProtocolName"] = request.getProtocolName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostsPort"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostsPortResponse>();
}

/**
 * @summary Modifies the ports used by Bastionhost for the RDP and SSH protocols on hosts. By default, Bastionhost uses port 3389 for RDP and port 22 for SSH. If you have configured custom ports on your hosts, you can call this operation to update the port settings.
 *
 * @description ### Usage notes
 * This operation modifies the ports of O&M protocols for multiple hosts. If you consider the standard ports of O&M protocols insecure and vulnerable to attacks, such as port 22 for SSH, you can call this operation to specify custom ports.
 * > Ports 0 to 1024 are reserved for Bastionhost. Do not specify a reserved port as a custom port.
 * ### QPS limits
 * You can call this operation up to 10 times per second. Requests that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyHostsPortRequest
 * @return ModifyHostsPortResponse
 */
ModifyHostsPortResponse Client::modifyHostsPort(const ModifyHostsPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostsPortWithOptions(request, runtime);
}

/**
 * @summary Moves hosts to a different project in a batch.
 *
 * @param request ModifyHostsProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostsProjectResponse
 */
ModifyHostsProjectResponse Client::modifyHostsProjectWithOptions(const ModifyHostsProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetProjectId()) {
    query["TargetProjectId"] = request.getTargetProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostsProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostsProjectResponse>();
}

/**
 * @summary Moves hosts to a different project in a batch.
 *
 * @param request ModifyHostsProjectRequest
 * @return ModifyHostsProjectResponse
 */
ModifyHostsProjectResponse Client::modifyHostsProject(const ModifyHostsProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostsProjectWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of the Active Directory (AD) authentication server for a Bastionhost instance.
 *
 * @param request ModifyInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceADAuthServerResponse
 */
ModifyInstanceADAuthServerResponse Client::modifyInstanceADAuthServerWithOptions(const ModifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEmailMapping()) {
    query["EmailMapping"] = request.getEmailMapping();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.getIsDefault();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasIsSyncEmailAttr()) {
    query["IsSyncEmailAttr"] = request.getIsSyncEmailAttr();
  }

  if (!!request.hasIsSyncMobileAttr()) {
    query["IsSyncMobileAttr"] = request.getIsSyncMobileAttr();
  }

  if (!!request.hasIsSyncNameAttr()) {
    query["IsSyncNameAttr"] = request.getIsSyncNameAttr();
  }

  if (!!request.hasIsSyncOuAsUserGroup()) {
    query["IsSyncOuAsUserGroup"] = request.getIsSyncOuAsUserGroup();
  }

  if (!!request.hasMobileMapping()) {
    query["MobileMapping"] = request.getMobileMapping();
  }

  if (!!request.hasNameMapping()) {
    query["NameMapping"] = request.getNameMapping();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasServerName()) {
    query["ServerName"] = request.getServerName();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  if (!!request.hasSyncInterval()) {
    query["SyncInterval"] = request.getSyncInterval();
  }

  if (!!request.hasUserSourceId()) {
    query["UserSourceId"] = request.getUserSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceADAuthServerResponse>();
}

/**
 * @summary Modifies the configuration of the Active Directory (AD) authentication server for a Bastionhost instance.
 *
 * @param request ModifyInstanceADAuthServerRequest
 * @return ModifyInstanceADAuthServerResponse
 */
ModifyInstanceADAuthServerResponse Client::modifyInstanceADAuthServer(const ModifyInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a specified bastion host instance.
 *
 * @description You can call this operation to purchase an Encryption Service instance. This is a prepaid product, and the operation deducts the fee synchronously.
 *
 * @param request ModifyInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttributeWithOptions(const ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAttribute"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAttributeResponse>();
}

/**
 * @summary Modifies the information of a specified bastion host instance.
 *
 * @description You can call this operation to purchase an Encryption Service instance. This is a prepaid product, and the operation deducts the fee synchronously.
 *
 * @param request ModifyInstanceAttributeRequest
 * @return ModifyInstanceAttributeResponse
 */
ModifyInstanceAttributeResponse Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of the LDAP authentication server for a Bastionhost instance.
 *
 * @param request ModifyInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceLDAPAuthServerResponse
 */
ModifyInstanceLDAPAuthServerResponse Client::modifyInstanceLDAPAuthServerWithOptions(const ModifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasEmailMapping()) {
    query["EmailMapping"] = request.getEmailMapping();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasLoginNameMapping()) {
    query["LoginNameMapping"] = request.getLoginNameMapping();
  }

  if (!!request.hasMobileMapping()) {
    query["MobileMapping"] = request.getMobileMapping();
  }

  if (!!request.hasNameMapping()) {
    query["NameMapping"] = request.getNameMapping();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceLDAPAuthServerResponse>();
}

/**
 * @summary Modifies the configuration of the LDAP authentication server for a Bastionhost instance.
 *
 * @param request ModifyInstanceLDAPAuthServerRequest
 * @return ModifyInstanceLDAPAuthServerResponse
 */
ModifyInstanceLDAPAuthServerResponse Client::modifyInstanceLDAPAuthServer(const ModifyInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceLDAPAuthServerWithOptions(request, runtime);
}

/**
 * @summary Modifies the two-factor authentication settings of a bastion host.
 *
 * @param request ModifyInstanceTwoFactorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceTwoFactorResponse
 */
ModifyInstanceTwoFactorResponse Client::modifyInstanceTwoFactorWithOptions(const ModifyInstanceTwoFactorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableTwoFactor()) {
    query["EnableTwoFactor"] = request.getEnableTwoFactor();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSkipTwoFactorTime()) {
    query["SkipTwoFactorTime"] = request.getSkipTwoFactorTime();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceTwoFactor"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceTwoFactorResponse>();
}

/**
 * @summary Modifies the two-factor authentication settings of a bastion host.
 *
 * @param request ModifyInstanceTwoFactorRequest
 * @return ModifyInstanceTwoFactorResponse
 */
ModifyInstanceTwoFactorResponse Client::modifyInstanceTwoFactor(const ModifyInstanceTwoFactorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceTwoFactorWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a network domain.
 *
 * @param request ModifyNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNetworkDomainResponse
 */
ModifyNetworkDomainResponse Client::modifyNetworkDomainWithOptions(const ModifyNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasNetworkDomainName()) {
    query["NetworkDomainName"] = request.getNetworkDomainName();
  }

  if (!!request.hasNetworkDomainType()) {
    query["NetworkDomainType"] = request.getNetworkDomainType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProxies()) {
    query["Proxies"] = request.getProxies();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNetworkDomainResponse>();
}

/**
 * @summary Modifies the basic information of a network domain.
 *
 * @param request ModifyNetworkDomainRequest
 * @return ModifyNetworkDomainResponse
 */
ModifyNetworkDomainResponse Client::modifyNetworkDomain(const ModifyNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic information of a control policy.
 *
 * @param request ModifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicyWithOptions(const ModifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicy"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyResponse>();
}

/**
 * @summary Modifies the basic information of a control policy.
 *
 * @param request ModifyPolicyRequest
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicy(const ModifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a project.
 *
 * @param request ModifyProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProjectResponse
 */
ModifyProjectResponse Client::modifyProjectWithOptions(const ModifyProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.getMemberIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProject"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProjectResponse>();
}

/**
 * @summary Modifies a project.
 *
 * @param request ModifyProjectRequest
 * @return ModifyProjectResponse
 */
ModifyProjectResponse Client::modifyProject(const ModifyProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProjectWithOptions(request, runtime);
}

/**
 * @summary Modifies project authorization.
 *
 * @param request ModifyProjectAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProjectAuthorizationResponse
 */
ModifyProjectAuthorizationResponse Client::modifyProjectAuthorizationWithOptions(const ModifyProjectAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationId()) {
    query["AuthorizationId"] = request.getAuthorizationId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProjectAuthorization"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProjectAuthorizationResponse>();
}

/**
 * @summary Modifies project authorization.
 *
 * @param request ModifyProjectAuthorizationRequest
 * @return ModifyProjectAuthorizationResponse
 */
ModifyProjectAuthorizationResponse Client::modifyProjectAuthorization(const ModifyProjectAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProjectAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Modifies the notification recipient of a project.
 *
 * @param request ModifyProjectNotifyReceiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProjectNotifyReceiverResponse
 */
ModifyProjectNotifyReceiverResponse Client::modifyProjectNotifyReceiverWithOptions(const ModifyProjectNotifyReceiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.getReceiverId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProjectNotifyReceiver"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProjectNotifyReceiverResponse>();
}

/**
 * @summary Modifies the notification recipient of a project.
 *
 * @param request ModifyProjectNotifyReceiverRequest
 * @return ModifyProjectNotifyReceiverResponse
 */
ModifyProjectNotifyReceiverResponse Client::modifyProjectNotifyReceiver(const ModifyProjectNotifyReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProjectNotifyReceiverWithOptions(request, runtime);
}

/**
 * @summary Modifies an audit policy.
 *
 * @param request ModifyReviewRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyReviewRuleResponse
 */
ModifyReviewRuleResponse Client::modifyReviewRuleWithOptions(const ModifyReviewRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReviewRuleId()) {
    query["ReviewRuleId"] = request.getReviewRuleId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyReviewRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyReviewRuleResponse>();
}

/**
 * @summary Modifies an audit policy.
 *
 * @param request ModifyReviewRuleRequest
 * @return ModifyReviewRuleResponse
 */
ModifyReviewRuleResponse Client::modifyReviewRule(const ModifyReviewRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyReviewRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of an authorization rule.
 *
 * @param request ModifyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRuleWithOptions(const ModifyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRule"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleResponse>();
}

/**
 * @summary Updates the basic information of an authorization rule.
 *
 * @param request ModifyRuleRequest
 * @return ModifyRuleResponse
 */
ModifyRuleResponse Client::modifyRule(const ModifyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a user of a bastion host.
 *
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEffectiveEndTime()) {
    query["EffectiveEndTime"] = request.getEffectiveEndTime();
  }

  if (!!request.hasEffectiveStartTime()) {
    query["EffectiveStartTime"] = request.getEffectiveStartTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLanguageStatus()) {
    query["LanguageStatus"] = request.getLanguageStatus();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasMobileCountryCode()) {
    query["MobileCountryCode"] = request.getMobileCountryCode();
  }

  if (!!request.hasNeedResetPassword()) {
    query["NeedResetPassword"] = request.getNeedResetPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTwoFactorMethods()) {
    query["TwoFactorMethods"] = request.getTwoFactorMethods();
  }

  if (!!request.hasTwoFactorStatus()) {
    query["TwoFactorStatus"] = request.getTwoFactorStatus();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUser"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserResponse>();
}

/**
 * @summary Modifies the information about a user of a bastion host.
 *
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a user group.
 *
 * @param request ModifyUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserGroupResponse
 */
ModifyUserGroupResponse Client::modifyUserGroupWithOptions(const ModifyUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserGroupName()) {
    query["UserGroupName"] = request.getUserGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserGroupResponse>();
}

/**
 * @summary Modifies the information of a user group.
 *
 * @param request ModifyUserGroupRequest
 * @return ModifyUserGroupResponse
 */
ModifyUserGroupResponse Client::modifyUserGroup(const ModifyUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the public key of the user.
 *
 * @param request ModifyUserPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserPublicKeyResponse
 */
ModifyUserPublicKeyResponse Client::modifyUserPublicKeyWithOptions(const ModifyUserPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPublicKey()) {
    query["PublicKey"] = request.getPublicKey();
  }

  if (!!request.hasPublicKeyId()) {
    query["PublicKeyId"] = request.getPublicKeyId();
  }

  if (!!request.hasPublicKeyName()) {
    query["PublicKeyName"] = request.getPublicKeyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserPublicKey"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserPublicKeyResponse>();
}

/**
 * @summary Modifies the public key of the user.
 *
 * @param request ModifyUserPublicKeyRequest
 * @return ModifyUserPublicKeyResponse
 */
ModifyUserPublicKeyResponse Client::modifyUserPublicKey(const ModifyUserPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Moves multiple databases to a specified network domain.
 *
 * @param request MoveDatabasesToNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveDatabasesToNetworkDomainResponse
 */
MoveDatabasesToNetworkDomainResponse Client::moveDatabasesToNetworkDomainWithOptions(const MoveDatabasesToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveDatabasesToNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveDatabasesToNetworkDomainResponse>();
}

/**
 * @summary Moves multiple databases to a specified network domain.
 *
 * @param request MoveDatabasesToNetworkDomainRequest
 * @return MoveDatabasesToNetworkDomainResponse
 */
MoveDatabasesToNetworkDomainResponse Client::moveDatabasesToNetworkDomain(const MoveDatabasesToNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveDatabasesToNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Moves multiple hosts to a specified network domain.
 *
 * @param request MoveHostsToNetworkDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveHostsToNetworkDomainResponse
 */
MoveHostsToNetworkDomainResponse Client::moveHostsToNetworkDomainWithOptions(const MoveHostsToNetworkDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNetworkDomainId()) {
    query["NetworkDomainId"] = request.getNetworkDomainId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveHostsToNetworkDomain"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveHostsToNetworkDomainResponse>();
}

/**
 * @summary Moves multiple hosts to a specified network domain.
 *
 * @param request MoveHostsToNetworkDomainRequest
 * @return MoveHostsToNetworkDomainResponse
 */
MoveHostsToNetworkDomainResponse Client::moveHostsToNetworkDomain(const MoveHostsToNetworkDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveHostsToNetworkDomainWithOptions(request, runtime);
}

/**
 * @summary Moves a Bastionhost instance to a specified resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Moves a Bastionhost instance to a specified resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Rejects a command execution request. If an O&M engineer executes a command configured in a command approval policy, the administrator receives an approval request in the Bastionhost console. The command can be executed only after the administrator approves it. If the request is rejected, the command cannot be executed.
 *
 * @description This API operation allows administrators to reject command execution requests from O&M engineers.
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request RejectApproveCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectApproveCommandResponse
 */
RejectApproveCommandResponse Client::rejectApproveCommandWithOptions(const RejectApproveCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommandId()) {
    query["CommandId"] = request.getCommandId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectApproveCommand"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectApproveCommandResponse>();
}

/**
 * @summary Rejects a command execution request. If an O&M engineer executes a command configured in a command approval policy, the administrator receives an approval request in the Bastionhost console. The command can be executed only after the administrator approves it. If the request is rejected, the command cannot be executed.
 *
 * @description This API operation allows administrators to reject command execution requests from O&M engineers.
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request RejectApproveCommandRequest
 * @return RejectApproveCommandResponse
 */
RejectApproveCommandResponse Client::rejectApproveCommand(const RejectApproveCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectApproveCommandWithOptions(request, runtime);
}

/**
 * @summary Rejects an O&M task execution request.
 *
 * @param request RejectOperationTaskApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectOperationTaskApprovalResponse
 */
RejectOperationTaskApprovalResponse Client::rejectOperationTaskApprovalWithOptions(const RejectOperationTaskApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApproveId()) {
    query["ApproveId"] = request.getApproveId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectOperationTaskApproval"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectOperationTaskApprovalResponse>();
}

/**
 * @summary Rejects an O&M task execution request.
 *
 * @param request RejectOperationTaskApprovalRequest
 * @return RejectOperationTaskApprovalResponse
 */
RejectOperationTaskApprovalResponse Client::rejectOperationTaskApproval(const RejectOperationTaskApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectOperationTaskApprovalWithOptions(request, runtime);
}

/**
 * @summary Rejects an O&M application. If O&M approval is enabled in the control policy configured by the administrator, O&M engineers must apply for O&M and obtain administrator approval before logging on to assets.
 *
 * @description Rejects an O&M application submitted by an O&M engineer.
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RejectOperationTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectOperationTicketResponse
 */
RejectOperationTicketResponse Client::rejectOperationTicketWithOptions(const RejectOperationTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperationTicketId()) {
    query["OperationTicketId"] = request.getOperationTicketId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectOperationTicket"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectOperationTicketResponse>();
}

/**
 * @summary Rejects an O&M application. If O&M approval is enabled in the control policy configured by the administrator, O&M engineers must apply for O&M and obtain administrator approval before logging on to assets.
 *
 * @description Rejects an O&M application submitted by an O&M engineer.
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RejectOperationTicketRequest
 * @return RejectOperationTicketResponse
 */
RejectOperationTicketResponse Client::rejectOperationTicket(const RejectOperationTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectOperationTicketWithOptions(request, runtime);
}

/**
 * @summary Removes multiple databases from an asset group at a time.
 *
 * @param request RemoveDatabasesFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDatabasesFromGroupResponse
 */
RemoveDatabasesFromGroupResponse Client::removeDatabasesFromGroupWithOptions(const RemoveDatabasesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseIds()) {
    query["DatabaseIds"] = request.getDatabaseIds();
  }

  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDatabasesFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDatabasesFromGroupResponse>();
}

/**
 * @summary Removes multiple databases from an asset group at a time.
 *
 * @param request RemoveDatabasesFromGroupRequest
 * @return RemoveDatabasesFromGroupResponse
 */
RemoveDatabasesFromGroupResponse Client::removeDatabasesFromGroup(const RemoveDatabasesFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDatabasesFromGroupWithOptions(request, runtime);
}

/**
 * @summary Removes multiple hosts from a specified host group.
 *
 * @description This operation removes multiple hosts from a host group. If some hosts no longer require unified management through a host group, you can use this operation to remove them.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request RemoveHostsFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveHostsFromGroupResponse
 */
RemoveHostsFromGroupResponse Client::removeHostsFromGroupWithOptions(const RemoveHostsFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostGroupId()) {
    query["HostGroupId"] = request.getHostGroupId();
  }

  if (!!request.hasHostIds()) {
    query["HostIds"] = request.getHostIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveHostsFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveHostsFromGroupResponse>();
}

/**
 * @summary Removes multiple hosts from a specified host group.
 *
 * @description This operation removes multiple hosts from a host group. If some hosts no longer require unified management through a host group, you can use this operation to remove them.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request RemoveHostsFromGroupRequest
 * @return RemoveHostsFromGroupResponse
 */
RemoveHostsFromGroupResponse Client::removeHostsFromGroup(const RemoveHostsFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeHostsFromGroupWithOptions(request, runtime);
}

/**
 * @summary Removes a Resource Directory (RD) member account from a Bastionhost instance. You must remove all assets of the member account from Bastionhost before you call this operation.
 *
 * @description Before removing a member account, you must purge the ECS, RDS, and PolarDB instance assets that belong to the member account from Bastionhost.
 *
 * @param request RemoveInstanceRdMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInstanceRdMemberResponse
 */
RemoveInstanceRdMemberResponse Client::removeInstanceRdMemberWithOptions(const RemoveInstanceRdMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInstanceRdMember"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInstanceRdMemberResponse>();
}

/**
 * @summary Removes a Resource Directory (RD) member account from a Bastionhost instance. You must remove all assets of the member account from Bastionhost before you call this operation.
 *
 * @description Before removing a member account, you must purge the ECS, RDS, and PolarDB instance assets that belong to the member account from Bastionhost.
 *
 * @param request RemoveInstanceRdMemberRequest
 * @return RemoveInstanceRdMemberResponse
 */
RemoveInstanceRdMemberResponse Client::removeInstanceRdMember(const RemoveInstanceRdMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeInstanceRdMemberWithOptions(request, runtime);
}

/**
 * @summary Removes multiple users from a user group.
 *
 * @description ### Usage notes
 * This operation removes multiple users from a user group. You can call this operation to remove users from a user group in batches when users resign or transfer to other departments and their permissions need to be revoked, or when users switch to another user group.
 * ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request RemoveUsersFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroupWithOptions(const RemoveUsersFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsersFromGroup"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersFromGroupResponse>();
}

/**
 * @summary Removes multiple users from a user group.
 *
 * @description ### Usage notes
 * This operation removes multiple users from a user group. You can call this operation to remove users from a user group in batches when users resign or transfer to other departments and their permissions need to be revoked, or when users switch to another user group.
 * ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request RemoveUsersFromGroupRequest
 * @return RemoveUsersFromGroupResponse
 */
RemoveUsersFromGroupResponse Client::removeUsersFromGroup(const RemoveUsersFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersFromGroupWithOptions(request, runtime);
}

/**
 * @summary Renews an O&M token. Each call extends the validity of the O&M token by 1 hour.
 *
 * @param request RenewAssetOperationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAssetOperationTokenResponse
 */
RenewAssetOperationTokenResponse Client::renewAssetOperationTokenWithOptions(const RenewAssetOperationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasTokenId()) {
    query["TokenId"] = request.getTokenId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAssetOperationToken"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAssetOperationTokenResponse>();
}

/**
 * @summary Renews an O&M token. Each call extends the validity of the O&M token by 1 hour.
 *
 * @param request RenewAssetOperationTokenRequest
 * @return RenewAssetOperationTokenResponse
 */
RenewAssetOperationTokenResponse Client::renewAssetOperationToken(const RenewAssetOperationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAssetOperationTokenWithOptions(request, runtime);
}

/**
 * @summary Purges the logon credentials (password or SSH private key) of a specified host account.
 *
 * @param request ResetHostAccountCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetHostAccountCredentialResponse
 */
ResetHostAccountCredentialResponse Client::resetHostAccountCredentialWithOptions(const ResetHostAccountCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialType()) {
    query["CredentialType"] = request.getCredentialType();
  }

  if (!!request.hasHostAccountId()) {
    query["HostAccountId"] = request.getHostAccountId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetHostAccountCredential"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetHostAccountCredentialResponse>();
}

/**
 * @summary Purges the logon credentials (password or SSH private key) of a specified host account.
 *
 * @param request ResetHostAccountCredentialRequest
 * @return ResetHostAccountCredentialResponse
 */
ResetHostAccountCredentialResponse Client::resetHostAccountCredential(const ResetHostAccountCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetHostAccountCredentialWithOptions(request, runtime);
}

/**
 * @summary Configures the logon time limit settings for a specified control policy.
 *
 * @param tmpReq SetPolicyAccessTimeRangeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyAccessTimeRangeConfigResponse
 */
SetPolicyAccessTimeRangeConfigResponse Client::setPolicyAccessTimeRangeConfigWithOptions(const SetPolicyAccessTimeRangeConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyAccessTimeRangeConfigShrinkRequest request = SetPolicyAccessTimeRangeConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessTimeRangeConfig()) {
    request.setAccessTimeRangeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessTimeRangeConfig(), "AccessTimeRangeConfig", "json"));
  }

  json query = {};
  if (!!request.hasAccessTimeRangeConfigShrink()) {
    query["AccessTimeRangeConfig"] = request.getAccessTimeRangeConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyAccessTimeRangeConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyAccessTimeRangeConfigResponse>();
}

/**
 * @summary Configures the logon time limit settings for a specified control policy.
 *
 * @param request SetPolicyAccessTimeRangeConfigRequest
 * @return SetPolicyAccessTimeRangeConfigResponse
 */
SetPolicyAccessTimeRangeConfigResponse Client::setPolicyAccessTimeRangeConfig(const SetPolicyAccessTimeRangeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyAccessTimeRangeConfigWithOptions(request, runtime);
}

/**
 * @summary Configures the O&M approval configuration for a specified control policy.
 *
 * @param tmpReq SetPolicyApprovalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyApprovalConfigResponse
 */
SetPolicyApprovalConfigResponse Client::setPolicyApprovalConfigWithOptions(const SetPolicyApprovalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyApprovalConfigShrinkRequest request = SetPolicyApprovalConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovalConfig()) {
    request.setApprovalConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApprovalConfig(), "ApprovalConfig", "json"));
  }

  json query = {};
  if (!!request.hasApprovalConfigShrink()) {
    query["ApprovalConfig"] = request.getApprovalConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyApprovalConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyApprovalConfigResponse>();
}

/**
 * @summary Configures the O&M approval configuration for a specified control policy.
 *
 * @param request SetPolicyApprovalConfigRequest
 * @return SetPolicyApprovalConfigResponse
 */
SetPolicyApprovalConfigResponse Client::setPolicyApprovalConfig(const SetPolicyApprovalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyApprovalConfigWithOptions(request, runtime);
}

/**
 * @summary Sets the effective asset scope for a specified control policy.
 *
 * @param request SetPolicyAssetScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyAssetScopeResponse
 */
SetPolicyAssetScopeResponse Client::setPolicyAssetScopeWithOptions(const SetPolicyAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabases()) {
    query["Databases"] = request.getDatabases();
  }

  if (!!request.hasHostGroups()) {
    query["HostGroups"] = request.getHostGroups();
  }

  if (!!request.hasHosts()) {
    query["Hosts"] = request.getHosts();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyAssetScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyAssetScopeResponse>();
}

/**
 * @summary Sets the effective asset scope for a specified control policy.
 *
 * @param request SetPolicyAssetScopeRequest
 * @return SetPolicyAssetScopeResponse
 */
SetPolicyAssetScopeResponse Client::setPolicyAssetScope(const SetPolicyAssetScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyAssetScopeWithOptions(request, runtime);
}

/**
 * @summary Configures the commands that are allowed or denied, and the commands that require approval for the users and hosts to which a specified policy applies.
 *
 * @param tmpReq SetPolicyCommandConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyCommandConfigResponse
 */
SetPolicyCommandConfigResponse Client::setPolicyCommandConfigWithOptions(const SetPolicyCommandConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyCommandConfigShrinkRequest request = SetPolicyCommandConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommandConfig()) {
    request.setCommandConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommandConfig(), "CommandConfig", "json"));
  }

  json query = {};
  if (!!request.hasCommandConfigShrink()) {
    query["CommandConfig"] = request.getCommandConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyCommandConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyCommandConfigResponse>();
}

/**
 * @summary Configures the commands that are allowed or denied, and the commands that require approval for the users and hosts to which a specified policy applies.
 *
 * @param request SetPolicyCommandConfigRequest
 * @return SetPolicyCommandConfigResponse
 */
SetPolicyCommandConfigResponse Client::setPolicyCommandConfig(const SetPolicyCommandConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyCommandConfigWithOptions(request, runtime);
}

/**
 * @summary Configures whether source IP addresses can access hosts to which the current policy applies.
 *
 * @param tmpReq SetPolicyIPAclConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyIPAclConfigResponse
 */
SetPolicyIPAclConfigResponse Client::setPolicyIPAclConfigWithOptions(const SetPolicyIPAclConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyIPAclConfigShrinkRequest request = SetPolicyIPAclConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIPAclConfig()) {
    request.setIPAclConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIPAclConfig(), "IPAclConfig", "json"));
  }

  json query = {};
  if (!!request.hasIPAclConfigShrink()) {
    query["IPAclConfig"] = request.getIPAclConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyIPAclConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyIPAclConfigResponse>();
}

/**
 * @summary Configures whether source IP addresses can access hosts to which the current policy applies.
 *
 * @param request SetPolicyIPAclConfigRequest
 * @return SetPolicyIPAclConfigResponse
 */
SetPolicyIPAclConfigResponse Client::setPolicyIPAclConfig(const SetPolicyIPAclConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyIPAclConfigWithOptions(request, runtime);
}

/**
 * @summary Configures the RDP, SSH, and SFTP options of a control policy.
 *
 * @param tmpReq SetPolicyProtocolConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyProtocolConfigResponse
 */
SetPolicyProtocolConfigResponse Client::setPolicyProtocolConfigWithOptions(const SetPolicyProtocolConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetPolicyProtocolConfigShrinkRequest request = SetPolicyProtocolConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProtocolConfig()) {
    request.setProtocolConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProtocolConfig(), "ProtocolConfig", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProtocolConfigShrink()) {
    query["ProtocolConfig"] = request.getProtocolConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyProtocolConfig"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyProtocolConfigResponse>();
}

/**
 * @summary Configures the RDP, SSH, and SFTP options of a control policy.
 *
 * @param request SetPolicyProtocolConfigRequest
 * @return SetPolicyProtocolConfigResponse
 */
SetPolicyProtocolConfigResponse Client::setPolicyProtocolConfig(const SetPolicyProtocolConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyProtocolConfigWithOptions(request, runtime);
}

/**
 * @summary Sets the user scope for a specified control policy.
 *
 * @param request SetPolicyUserScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPolicyUserScopeResponse
 */
SetPolicyUserScopeResponse Client::setPolicyUserScopeWithOptions(const SetPolicyUserScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasUserGroupIds()) {
    query["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPolicyUserScope"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPolicyUserScopeResponse>();
}

/**
 * @summary Sets the user scope for a specified control policy.
 *
 * @param request SetPolicyUserScopeRequest
 * @return SetPolicyUserScopeResponse
 */
SetPolicyUserScopeResponse Client::setPolicyUserScope(const SetPolicyUserScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPolicyUserScopeWithOptions(request, runtime);
}

/**
 * @summary Starts a specified Bastionhost instance.
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientSecurityGroupIds()) {
    query["ClientSecurityGroupIds"] = request.getClientSecurityGroupIds();
  }

  if (!!request.hasEnablePortalPrivateAccess()) {
    query["EnablePortalPrivateAccess"] = request.getEnablePortalPrivateAccess();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  if (!!request.hasSlaveVswitchId()) {
    query["SlaveVswitchId"] = request.getSlaveVswitchId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary Starts a specified Bastionhost instance.
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates and binds tags for specified Bastionhost instances.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates and binds tags for specified Bastionhost instances.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unlocks one or more users of a bastion host.
 *
 * @description Unlocks previously locked bastion host users, allowing them to resume O\\&M operations. Use this operation after locking users with the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsersWithOptions(const UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserIds()) {
    query["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockUsers"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockUsersResponse>();
}

/**
 * @summary Unlocks one or more users of a bastion host.
 *
 * @description Unlocks previously locked bastion host users, allowing them to resume O\\&M operations. Use this operation after locking users with the [LockUsers](https://help.aliyun.com/document_detail/204591.html) operation.
 * # Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockUsersRequest
 * @return UnlockUsersResponse
 */
UnlockUsersResponse Client::unlockUsers(const UnlockUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockUsersWithOptions(request, runtime);
}

/**
 * @summary Unbinds and deletes tags from a specified Bastionhost instance in batches.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Unbinds and deletes tags from a specified Bastionhost instance in batches.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Tests the connectivity to the Active Directory (AD) authentication server configured for a Bastionhost instance. Use this operation to validate your AD settings before you save them.
 *
 * @param request VerifyInstanceADAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyInstanceADAuthServerResponse
 */
VerifyInstanceADAuthServerResponse Client::verifyInstanceADAuthServerWithOptions(const VerifyInstanceADAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyInstanceADAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyInstanceADAuthServerResponse>();
}

/**
 * @summary Tests the connectivity to the Active Directory (AD) authentication server configured for a Bastionhost instance. Use this operation to validate your AD settings before you save them.
 *
 * @param request VerifyInstanceADAuthServerRequest
 * @return VerifyInstanceADAuthServerResponse
 */
VerifyInstanceADAuthServerResponse Client::verifyInstanceADAuthServer(const VerifyInstanceADAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyInstanceADAuthServerWithOptions(request, runtime);
}

/**
 * @summary Tests the connectivity to the Lightweight Directory Access Protocol (LDAP) authentication server configured for a Bastionhost instance. Use this operation to validate your LDAP settings before you save them.
 *
 * @param request VerifyInstanceLDAPAuthServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyInstanceLDAPAuthServerResponse
 */
VerifyInstanceLDAPAuthServerResponse Client::verifyInstanceLDAPAuthServerWithOptions(const VerifyInstanceLDAPAuthServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasBaseDN()) {
    query["BaseDN"] = request.getBaseDN();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsSSL()) {
    query["IsSSL"] = request.getIsSSL();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServer()) {
    query["Server"] = request.getServer();
  }

  if (!!request.hasStandbyServer()) {
    query["StandbyServer"] = request.getStandbyServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyInstanceLDAPAuthServer"},
    {"version" , "2019-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyInstanceLDAPAuthServerResponse>();
}

/**
 * @summary Tests the connectivity to the Lightweight Directory Access Protocol (LDAP) authentication server configured for a Bastionhost instance. Use this operation to validate your LDAP settings before you save them.
 *
 * @param request VerifyInstanceLDAPAuthServerRequest
 * @return VerifyInstanceLDAPAuthServerResponse
 */
VerifyInstanceLDAPAuthServerResponse Client::verifyInstanceLDAPAuthServer(const VerifyInstanceLDAPAuthServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyInstanceLDAPAuthServerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209