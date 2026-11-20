#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BMed20261116.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::QwenB2BMed20261116::Models;
namespace AlibabaCloud
{
namespace QwenB2BMed20261116
{

AlibabaCloud::QwenB2BMed20261116::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "QwenB2BMed";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("qwenb2bmed", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Initiates a conversation with the Qwen medical agent.
 *
 * @param request MedicalAgentChatRequest
 * @param headers MedicalAgentChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalAgentChatResponse
 */
FutureGenerator<MedicalAgentChatResponse> Client::medicalAgentChatWithSSE(const MedicalAgentChatRequest &request, const MedicalAgentChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MedicalAgentChat"},
    {"version" , "2026-11-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/medicalQa")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<MedicalAgentChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Initiates a conversation with the Qwen medical agent.
 *
 * @param request MedicalAgentChatRequest
 * @param headers MedicalAgentChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalAgentChatResponse
 */
MedicalAgentChatResponse Client::medicalAgentChatWithOptions(const MedicalAgentChatRequest &request, const MedicalAgentChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MedicalAgentChat"},
    {"version" , "2026-11-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/medicalQa")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MedicalAgentChatResponse>();
}

/**
 * @summary Initiates a conversation with the Qwen medical agent.
 *
 * @param request MedicalAgentChatRequest
 * @return MedicalAgentChatResponse
 */
MedicalAgentChatResponse Client::medicalAgentChat(const MedicalAgentChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MedicalAgentChatHeaders headers = MedicalAgentChatHeaders();
  return medicalAgentChatWithOptions(request, headers, runtime);
}

/**
 * @summary Performs inference using the external Qwen medical foundation model.
 *
 * @param request MedicalModelInferenceRequest
 * @param headers MedicalModelInferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalModelInferenceResponse
 */
FutureGenerator<MedicalModelInferenceResponse> Client::medicalModelInferenceWithSSE(const MedicalModelInferenceRequest &request, const MedicalModelInferenceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MedicalModelInference"},
    {"version" , "2026-11-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/directModel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<MedicalModelInferenceResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Performs inference using the external Qwen medical foundation model.
 *
 * @param request MedicalModelInferenceRequest
 * @param headers MedicalModelInferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalModelInferenceResponse
 */
MedicalModelInferenceResponse Client::medicalModelInferenceWithOptions(const MedicalModelInferenceRequest &request, const MedicalModelInferenceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MedicalModelInference"},
    {"version" , "2026-11-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/directModel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MedicalModelInferenceResponse>();
}

/**
 * @summary Performs inference using the external Qwen medical foundation model.
 *
 * @param request MedicalModelInferenceRequest
 * @return MedicalModelInferenceResponse
 */
MedicalModelInferenceResponse Client::medicalModelInference(const MedicalModelInferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MedicalModelInferenceHeaders headers = MedicalModelInferenceHeaders();
  return medicalModelInferenceWithOptions(request, headers, runtime);
}

/**
 * @summary Activates the Qwen medical service and returns the current activation status.
 *
 * @param request OpenServiceRequest
 * @param headers OpenServiceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenServiceResponse
 */
OpenServiceResponse Client::openServiceWithOptions(const OpenServiceRequest &request, const OpenServiceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasOpenBenefits()) {
    body["openBenefits"] = request.getOpenBenefits();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OpenService"},
    {"version" , "2026-11-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/medical/openService")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenServiceResponse>();
}

/**
 * @summary Activates the Qwen medical service and returns the current activation status.
 *
 * @param request OpenServiceRequest
 * @return OpenServiceResponse
 */
OpenServiceResponse Client::openService(const OpenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OpenServiceHeaders headers = OpenServiceHeaders();
  return openServiceWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261116