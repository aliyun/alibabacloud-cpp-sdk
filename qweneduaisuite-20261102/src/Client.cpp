#include <darabonba/Core.hpp>
#include <alibabacloud/QwenEduAiSuite20261102.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::QwenEduAiSuite20261102::Models;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{

AlibabaCloud::QwenEduAiSuite20261102::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "QwenEduAiSuite";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("qweneduaisuite", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Activates the learning capability for the current Alibaba Cloud account and supports querying the activation status.
 *
 * @description ## Request description
 * - This operation activates the Qwen learning AI suite capability for the current Alibaba Cloud account.
 * - You must call this operation first. You can call business API operations such as problem solving and grading only after `ACTIVE` is returned.
 * ### Precautions
 * - Both Alibaba Cloud accounts and RAM users can call this operation.
 * - When a RAM user calls this operation, ensure that the RAM user has the required RAM permissions. The service is activated for the Alibaba Cloud account to which the RAM user belongs.
 * - This operation is idempotent based on the Alibaba Cloud account ID. Repeated calls do not result in multiple activations.
 *
 * @param request ActivateQwenEduApiRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateQwenEduApiResponse
 */
ActivateQwenEduApiResponse Client::activateQwenEduApiWithOptions(const ActivateQwenEduApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateQwenEduApi"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/service/activate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateQwenEduApiResponse>();
}

/**
 * @summary Activates the learning capability for the current Alibaba Cloud account and supports querying the activation status.
 *
 * @description ## Request description
 * - This operation activates the Qwen learning AI suite capability for the current Alibaba Cloud account.
 * - You must call this operation first. You can call business API operations such as problem solving and grading only after `ACTIVE` is returned.
 * ### Precautions
 * - Both Alibaba Cloud accounts and RAM users can call this operation.
 * - When a RAM user calls this operation, ensure that the RAM user has the required RAM permissions. The service is activated for the Alibaba Cloud account to which the RAM user belongs.
 * - This operation is idempotent based on the Alibaba Cloud account ID. Repeated calls do not result in multiple activations.
 *
 * @param request ActivateQwenEduApiRequest
 * @return ActivateQwenEduApiResponse
 */
ActivateQwenEduApiResponse Client::activateQwenEduApi(const ActivateQwenEduApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activateQwenEduApiWithOptions(request, headers, runtime);
}

/**
 * @summary Submits a single-page homework image and asynchronously retrieves the grading results.
 *
 * @description ## Request description
 * - This operation submits a homework image to the server for question segmentation, recognition, and grading.
 * - You can submit the image by using `imageBase64` or `imageUrl`. `imageBase64` takes precedence.
 * - The optional `dewarp` parameter specifies whether to correct the image distortion. Default value: `true`.
 * - Provide `requestId` to facilitate troubleshooting and reconciliation.
 * - Image size limit: The Base64-encoded image size cannot exceed 15 MB.
 * - All requests and responses use the JSON format.
 *
 * @param request CreateEduHomeworkCorrectSubmitRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduHomeworkCorrectSubmitResponse
 */
CreateEduHomeworkCorrectSubmitResponse Client::createEduHomeworkCorrectSubmitWithOptions(const CreateEduHomeworkCorrectSubmitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDewarp()) {
    body["dewarp"] = request.getDewarp();
  }

  if (!!request.hasImageBase64()) {
    body["imageBase64"] = request.getImageBase64();
  }

  if (!!request.hasImageUrl()) {
    body["imageUrl"] = request.getImageUrl();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduHomeworkCorrectSubmit"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/homework/correct/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEduHomeworkCorrectSubmitResponse>();
}

/**
 * @summary Submits a single-page homework image and asynchronously retrieves the grading results.
 *
 * @description ## Request description
 * - This operation submits a homework image to the server for question segmentation, recognition, and grading.
 * - You can submit the image by using `imageBase64` or `imageUrl`. `imageBase64` takes precedence.
 * - The optional `dewarp` parameter specifies whether to correct the image distortion. Default value: `true`.
 * - Provide `requestId` to facilitate troubleshooting and reconciliation.
 * - Image size limit: The Base64-encoded image size cannot exceed 15 MB.
 * - All requests and responses use the JSON format.
 *
 * @param request CreateEduHomeworkCorrectSubmitRequest
 * @return CreateEduHomeworkCorrectSubmitResponse
 */
CreateEduHomeworkCorrectSubmitResponse Client::createEduHomeworkCorrectSubmit(const CreateEduHomeworkCorrectSubmitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEduHomeworkCorrectSubmitWithOptions(request, headers, runtime);
}

/**
 * @summary Provides question resolution services by using image URLs or Base64 encoding.
 *
 * @description ## Request description
 * - This API supports obtaining question resolution results by providing the URL or Base64 encoding of a question image.
 * - Supports processing a single image. The image format must be JPG, JPEG, or PNG.
 * - The image must be clear and complete. Avoid tilted, obscured, or irrelevant content.
 * - Each request can process only one image. Multi-image or plain text requests are not supported.
 * - The recommended image size is up to 1 MB, with a maximum of 10 MB. The image width and height must not exceed 8,000 pixels, and the total pixel count must not exceed 2.6 million.
 * - You must use the HTTPS protocol to call the API and provide image URLs.
 * - The user_id parameter must be an anonymized identifier. Do not pass direct identity information such as names or phone numbers.
 * - The API uses the HTTP POST method combined with Server-Sent Events (SSE) streaming response. The client must read the response event by event, rather than waiting for the connection to close to read the entire response.
 * - A successful response returns the question resolution process through a series of message events and ends with a complete event. If an error occurs, an error event is returned.
 * - For retryable errors such as TOO_MANY_ACTIVE_STREAMS, use an exponential backoff strategy to retry the request.
 * - Set a reasonable timeout period of at least 3 minutes on the client, and ensure that the proxy layer does not cache SSE responses.
 *
 * @param tmpReq CreateEduProblemSolveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduProblemSolveResponse
 */
FutureGenerator<CreateEduProblemSolveResponse> Client::createEduProblemSolveWithSSE(const CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEduProblemSolveShrinkRequest request = CreateEduProblemSolveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "query", "json"));
  }

  json body = {};
  if (!!request.hasQueryShrink()) {
    body["query"] = request.getQueryShrink();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduProblemSolve"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/problem/solve/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
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
      })).get<CreateEduProblemSolveResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Provides question resolution services by using image URLs or Base64 encoding.
 *
 * @description ## Request description
 * - This API supports obtaining question resolution results by providing the URL or Base64 encoding of a question image.
 * - Supports processing a single image. The image format must be JPG, JPEG, or PNG.
 * - The image must be clear and complete. Avoid tilted, obscured, or irrelevant content.
 * - Each request can process only one image. Multi-image or plain text requests are not supported.
 * - The recommended image size is up to 1 MB, with a maximum of 10 MB. The image width and height must not exceed 8,000 pixels, and the total pixel count must not exceed 2.6 million.
 * - You must use the HTTPS protocol to call the API and provide image URLs.
 * - The user_id parameter must be an anonymized identifier. Do not pass direct identity information such as names or phone numbers.
 * - The API uses the HTTP POST method combined with Server-Sent Events (SSE) streaming response. The client must read the response event by event, rather than waiting for the connection to close to read the entire response.
 * - A successful response returns the question resolution process through a series of message events and ends with a complete event. If an error occurs, an error event is returned.
 * - For retryable errors such as TOO_MANY_ACTIVE_STREAMS, use an exponential backoff strategy to retry the request.
 * - Set a reasonable timeout period of at least 3 minutes on the client, and ensure that the proxy layer does not cache SSE responses.
 *
 * @param tmpReq CreateEduProblemSolveRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEduProblemSolveResponse
 */
CreateEduProblemSolveResponse Client::createEduProblemSolveWithOptions(const CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEduProblemSolveShrinkRequest request = CreateEduProblemSolveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "query", "json"));
  }

  json body = {};
  if (!!request.hasQueryShrink()) {
    body["query"] = request.getQueryShrink();
  }

  if (!!request.hasRequestId()) {
    body["requestId"] = request.getRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEduProblemSolve"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/problem/solve/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEduProblemSolveResponse>();
}

/**
 * @summary Provides question resolution services by using image URLs or Base64 encoding.
 *
 * @description ## Request description
 * - This API supports obtaining question resolution results by providing the URL or Base64 encoding of a question image.
 * - Supports processing a single image. The image format must be JPG, JPEG, or PNG.
 * - The image must be clear and complete. Avoid tilted, obscured, or irrelevant content.
 * - Each request can process only one image. Multi-image or plain text requests are not supported.
 * - The recommended image size is up to 1 MB, with a maximum of 10 MB. The image width and height must not exceed 8,000 pixels, and the total pixel count must not exceed 2.6 million.
 * - You must use the HTTPS protocol to call the API and provide image URLs.
 * - The user_id parameter must be an anonymized identifier. Do not pass direct identity information such as names or phone numbers.
 * - The API uses the HTTP POST method combined with Server-Sent Events (SSE) streaming response. The client must read the response event by event, rather than waiting for the connection to close to read the entire response.
 * - A successful response returns the question resolution process through a series of message events and ends with a complete event. If an error occurs, an error event is returned.
 * - For retryable errors such as TOO_MANY_ACTIVE_STREAMS, use an exponential backoff strategy to retry the request.
 * - Set a reasonable timeout period of at least 3 minutes on the client, and ensure that the proxy layer does not cache SSE responses.
 *
 * @param request CreateEduProblemSolveRequest
 * @return CreateEduProblemSolveResponse
 */
CreateEduProblemSolveResponse Client::createEduProblemSolve(const CreateEduProblemSolveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEduProblemSolveWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the progress and final results of homework grading based on the task ID.
 *
 * @description ## Request description
 * - This operation queries the status and detailed results of single-page homework grading by using the `taskId` returned when the task is submitted.
 * - The caller should poll this operation at an interval of 1 to 2 seconds until the task status changes to `finished` or `failed`.
 * - When the task status is `finished`, the response contains complete grading information, including question recognition, grading conclusions, dewarped images, and rendered images.
 * - If the task fails (the status is `failed`), check the `message` field in the response or the specific fault information in `data`.
 * - All requests and responses are in JSON format.
 *
 * @param request GetEduHomeworkCorrectionResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEduHomeworkCorrectionResultResponse
 */
GetEduHomeworkCorrectionResultResponse Client::getEduHomeworkCorrectionResultWithOptions(const GetEduHomeworkCorrectionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEduHomeworkCorrectionResult"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/homework/correct/result")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEduHomeworkCorrectionResultResponse>();
}

/**
 * @summary Queries the progress and final results of homework grading based on the task ID.
 *
 * @description ## Request description
 * - This operation queries the status and detailed results of single-page homework grading by using the `taskId` returned when the task is submitted.
 * - The caller should poll this operation at an interval of 1 to 2 seconds until the task status changes to `finished` or `failed`.
 * - When the task status is `finished`, the response contains complete grading information, including question recognition, grading conclusions, dewarped images, and rendered images.
 * - If the task fails (the status is `failed`), check the `message` field in the response or the specific fault information in `data`.
 * - All requests and responses are in JSON format.
 *
 * @param request GetEduHomeworkCorrectionResultRequest
 * @return GetEduHomeworkCorrectionResultResponse
 */
GetEduHomeworkCorrectionResultResponse Client::getEduHomeworkCorrectionResult(const GetEduHomeworkCorrectionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEduHomeworkCorrectionResultWithOptions(request, headers, runtime);
}

/**
 * @summary Queries whether the current account has activated Qwen education-related services.
 *
 * @description ## Request description
 * This operation queries whether a specified Alibaba Cloud account or RAM user has successfully activated the Qwen learning AI suite. Before calling any business API operations, you must use this operation to confirm that the service status is `ACTIVE`. If the service is not activated, perform the corresponding operations based on the returned status information, such as waiting for a period of time and retrying.
 * ### Precautions
 * - This operation supports calls from Alibaba Cloud accounts and RAM users.
 * - When a RAM user calls this operation, make sure that the RAM user has the required RAM permissions. The service is activated for the Alibaba Cloud account to which the RAM user belongs.
 * - This operation is idempotent based on the Alibaba Cloud account ID. Repeated calls do not result in multiple activations.
 * - If the status is `ACTIVATING`, retry the query after the time interval recommended by the returned `retry_after_seconds` field.
 * - If a failure occurs (`FAILED`), refer to the specific error code, take corresponding measures, and then try again.
 *
 * @param request GetQwenEduApiActivationStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQwenEduApiActivationStatusResponse
 */
GetQwenEduApiActivationStatusResponse Client::getQwenEduApiActivationStatusWithOptions(const GetQwenEduApiActivationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQwenEduApiActivationStatus"},
    {"version" , "2026-11-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/service/activation/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQwenEduApiActivationStatusResponse>();
}

/**
 * @summary Queries whether the current account has activated Qwen education-related services.
 *
 * @description ## Request description
 * This operation queries whether a specified Alibaba Cloud account or RAM user has successfully activated the Qwen learning AI suite. Before calling any business API operations, you must use this operation to confirm that the service status is `ACTIVE`. If the service is not activated, perform the corresponding operations based on the returned status information, such as waiting for a period of time and retrying.
 * ### Precautions
 * - This operation supports calls from Alibaba Cloud accounts and RAM users.
 * - When a RAM user calls this operation, make sure that the RAM user has the required RAM permissions. The service is activated for the Alibaba Cloud account to which the RAM user belongs.
 * - This operation is idempotent based on the Alibaba Cloud account ID. Repeated calls do not result in multiple activations.
 * - If the status is `ACTIVATING`, retry the query after the time interval recommended by the returned `retry_after_seconds` field.
 * - If a failure occurs (`FAILED`), refer to the specific error code, take corresponding measures, and then try again.
 *
 * @param request GetQwenEduApiActivationStatusRequest
 * @return GetQwenEduApiActivationStatusResponse
 */
GetQwenEduApiActivationStatusResponse Client::getQwenEduApiActivationStatus(const GetQwenEduApiActivationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getQwenEduApiActivationStatusWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102