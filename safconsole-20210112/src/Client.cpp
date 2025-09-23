#include <darabonba/Core.hpp>
#include <alibabacloud/Safconsole20210112.hpp>
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
using namespace AlibabaCloud::Safconsole20210112::Models;
namespace AlibabaCloud
{
namespace Safconsole20210112
{

AlibabaCloud::Safconsole20210112::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Used for external deletion of community samples in risk identification services.
 *
 * @param request RevokeFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeFeedbackResponse
 */
RevokeFeedbackResponse Client::revokeFeedbackWithOptions(const RevokeFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSampleType()) {
    body["SampleType"] = request.sampleType();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokeFeedback"},
    {"version" , "2021-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeFeedbackResponse>();
}

/**
 * @summary Used for external deletion of community samples in risk identification services.
 *
 * @param request RevokeFeedbackRequest
 * @return RevokeFeedbackResponse
 */
RevokeFeedbackResponse Client::revokeFeedback(const RevokeFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeFeedbackWithOptions(request, runtime);
}

/**
 * @summary Used for the external creation of community samples in risk identification services.
 *
 * @param request SendFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendFeedbackResponse
 */
SendFeedbackResponse Client::sendFeedbackWithOptions(const SendFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReason()) {
    query["Reason"] = request.reason();
  }

  if (!!request.hasRiskLabel()) {
    query["RiskLabel"] = request.riskLabel();
  }

  if (!!request.hasSampleType()) {
    query["SampleType"] = request.sampleType();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendFeedback"},
    {"version" , "2021-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendFeedbackResponse>();
}

/**
 * @summary Used for the external creation of community samples in risk identification services.
 *
 * @param request SendFeedbackRequest
 * @return SendFeedbackResponse
 */
SendFeedbackResponse Client::sendFeedback(const SendFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendFeedbackWithOptions(request, runtime);
}

/**
 * @summary Single User API for Sample Creation
 *
 * @param request UploadSampleApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadSampleApiResponse
 */
UploadSampleApiResponse Client::uploadSampleApiWithOptions(const UploadSampleApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDataValue()) {
    query["DataValue"] = request.dataValue();
  }

  if (!!request.hasSampleType()) {
    query["SampleType"] = request.sampleType();
  }

  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadSampleApi"},
    {"version" , "2021-01-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadSampleApiResponse>();
}

/**
 * @summary Single User API for Sample Creation
 *
 * @param request UploadSampleApiRequest
 * @return UploadSampleApiResponse
 */
UploadSampleApiResponse Client::uploadSampleApi(const UploadSampleApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadSampleApiWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Safconsole20210112