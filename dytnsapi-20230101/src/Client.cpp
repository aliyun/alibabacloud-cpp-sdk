#include <darabonba/Core.hpp>
#include <alibabacloud/Dytnsapi20230101.hpp>
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
using namespace AlibabaCloud::Dytnsapi20230101::Models;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{

AlibabaCloud::Dytnsapi20230101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("dytnsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary HLR服务
 *
 * @param request DescribeNumberHLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNumberHLRResponse
 */
DescribeNumberHLRResponse Client::describeNumberHLRWithOptions(const DescribeNumberHLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNumberHLR"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNumberHLRResponse>();
}

/**
 * @summary HLR服务
 *
 * @param request DescribeNumberHLRRequest
 * @return DescribeNumberHLRResponse
 */
DescribeNumberHLRResponse Client::describeNumberHLR(const DescribeNumberHLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNumberHLRWithOptions(request, runtime);
}

/**
 * @summary 号码百科国际站号码归属服务
 *
 * @param request DescribeNumberMccMncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNumberMccMncResponse
 */
DescribeNumberMccMncResponse Client::describeNumberMccMncWithOptions(const DescribeNumberMccMncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNumberMccMnc"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNumberMccMncResponse>();
}

/**
 * @summary 号码百科国际站号码归属服务
 *
 * @param request DescribeNumberMccMncRequest
 * @return DescribeNumberMccMncResponse
 */
DescribeNumberMccMncResponse Client::describeNumberMccMnc(const DescribeNumberMccMncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNumberMccMncWithOptions(request, runtime);
}

/**
 * @summary 获取认证结果
 *
 * @param request GetIdentificationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentificationResultResponse
 */
GetIdentificationResultResponse Client::getIdentificationResultWithOptions(const GetIdentificationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentificationResult"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentificationResultResponse>();
}

/**
 * @summary 获取认证结果
 *
 * @param request GetIdentificationResultRequest
 * @return GetIdentificationResultResponse
 */
GetIdentificationResultResponse Client::getIdentificationResult(const GetIdentificationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentificationResultWithOptions(request, runtime);
}

/**
 * @summary 国际认证获取sessionId
 *
 * @param request GetIdentificationSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentificationSessionResponse
 */
GetIdentificationSessionResponse Client::getIdentificationSessionWithOptions(const GetIdentificationSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentificationSession"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentificationSessionResponse>();
}

/**
 * @summary 国际认证获取sessionId
 *
 * @param request GetIdentificationSessionRequest
 * @return GetIdentificationSessionResponse
 */
GetIdentificationSessionResponse Client::getIdentificationSession(const GetIdentificationSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentificationSessionWithOptions(request, runtime);
}

/**
 * @summary Obtains the verification result of your phone number.
 *
 * @param request GetPhoneNumberIdentificationResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneNumberIdentificationResultResponse
 */
GetPhoneNumberIdentificationResultResponse Client::getPhoneNumberIdentificationResultWithOptions(const GetPhoneNumberIdentificationResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSessionPayload()) {
    query["SessionPayload"] = request.getSessionPayload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneNumberIdentificationResult"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneNumberIdentificationResultResponse>();
}

/**
 * @summary Obtains the verification result of your phone number.
 *
 * @param request GetPhoneNumberIdentificationResultRequest
 * @return GetPhoneNumberIdentificationResultResponse
 */
GetPhoneNumberIdentificationResultResponse Client::getPhoneNumberIdentificationResult(const GetPhoneNumberIdentificationResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhoneNumberIdentificationResultWithOptions(request, runtime);
}

/**
 * @summary Obtains the verification URL of your phone number.
 *
 * @param request GetPhoneNumberIdentificationUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneNumberIdentificationUrlResponse
 */
GetPhoneNumberIdentificationUrlResponse Client::getPhoneNumberIdentificationUrlWithOptions(const GetPhoneNumberIdentificationUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasRememberPhoneNumber()) {
    query["RememberPhoneNumber"] = request.getRememberPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneNumberIdentificationUrl"},
    {"version" , "2023-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneNumberIdentificationUrlResponse>();
}

/**
 * @summary Obtains the verification URL of your phone number.
 *
 * @param request GetPhoneNumberIdentificationUrlRequest
 * @return GetPhoneNumberIdentificationUrlResponse
 */
GetPhoneNumberIdentificationUrlResponse Client::getPhoneNumberIdentificationUrl(const GetPhoneNumberIdentificationUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhoneNumberIdentificationUrlWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101