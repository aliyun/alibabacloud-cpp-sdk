#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudauth20221125.hpp>
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
using namespace AlibabaCloud::Cloudauth20221125::Models;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{

AlibabaCloud::Cloudauth20221125::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudauth", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Enterprise Element Verification
 *
 * @description Supports only enterprises and individual businesses.
 *
 * @param request EntElementVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntElementVerifyResponse
 */
EntElementVerifyResponse Client::entElementVerifyWithOptions(const EntElementVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntName()) {
    query["EntName"] = request.getEntName();
  }

  if (!!request.hasInfoVerifyType()) {
    query["InfoVerifyType"] = request.getInfoVerifyType();
  }

  if (!!request.hasLegalPersonCertNo()) {
    query["LegalPersonCertNo"] = request.getLegalPersonCertNo();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasLicenseNo()) {
    query["LicenseNo"] = request.getLicenseNo();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasUserAuthorization()) {
    query["UserAuthorization"] = request.getUserAuthorization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EntElementVerify"},
    {"version" , "2022-11-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntElementVerifyResponse>();
}

/**
 * @summary Enterprise Element Verification
 *
 * @description Supports only enterprises and individual businesses.
 *
 * @param request EntElementVerifyRequest
 * @return EntElementVerifyResponse
 */
EntElementVerifyResponse Client::entElementVerify(const EntElementVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return entElementVerifyWithOptions(request, runtime);
}

/**
 * @summary 企业要素核验PRO
 *
 * @param request EntElementVerifyPRORequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntElementVerifyPROResponse
 */
EntElementVerifyPROResponse Client::entElementVerifyPROWithOptions(const EntElementVerifyPRORequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntName()) {
    query["EntName"] = request.getEntName();
  }

  if (!!request.hasInfoVerifyType()) {
    query["InfoVerifyType"] = request.getInfoVerifyType();
  }

  if (!!request.hasLegalPersonCertNo()) {
    query["LegalPersonCertNo"] = request.getLegalPersonCertNo();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasLicenseNo()) {
    query["LicenseNo"] = request.getLicenseNo();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasUserAuthorization()) {
    query["UserAuthorization"] = request.getUserAuthorization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EntElementVerifyPRO"},
    {"version" , "2022-11-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntElementVerifyPROResponse>();
}

/**
 * @summary 企业要素核验PRO
 *
 * @param request EntElementVerifyPRORequest
 * @return EntElementVerifyPROResponse
 */
EntElementVerifyPROResponse Client::entElementVerifyPRO(const EntElementVerifyPRORequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return entElementVerifyPROWithOptions(request, runtime);
}

/**
 * @summary Enterprise Element Verification V2
 *
 * @description The Enterprise Element Verification API provides a service for verifying the consistency of enterprise element information, used to identify the authenticity of enterprise information.
 * It supports various institutions including enterprises, individual businesses, farmers\\" professional cooperatives, government agencies, public institutions, social organizations, legal profession institutions, and owners\\" meetings for 2-3 elements;
 * For 4 elements, it supports enterprises, individual businesses, farmers\\" professional cooperatives, and legal professions.
 *
 * @param request EntElementVerifyV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntElementVerifyV2Response
 */
EntElementVerifyV2Response Client::entElementVerifyV2WithOptions(const EntElementVerifyV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntName()) {
    query["EntName"] = request.getEntName();
  }

  if (!!request.hasInfoVerifyType()) {
    query["InfoVerifyType"] = request.getInfoVerifyType();
  }

  if (!!request.hasLegalPersonCertNo()) {
    query["LegalPersonCertNo"] = request.getLegalPersonCertNo();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasLicenseNo()) {
    query["LicenseNo"] = request.getLicenseNo();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasUserAuthorization()) {
    query["UserAuthorization"] = request.getUserAuthorization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EntElementVerifyV2"},
    {"version" , "2022-11-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntElementVerifyV2Response>();
}

/**
 * @summary Enterprise Element Verification V2
 *
 * @description The Enterprise Element Verification API provides a service for verifying the consistency of enterprise element information, used to identify the authenticity of enterprise information.
 * It supports various institutions including enterprises, individual businesses, farmers\\" professional cooperatives, government agencies, public institutions, social organizations, legal profession institutions, and owners\\" meetings for 2-3 elements;
 * For 4 elements, it supports enterprises, individual businesses, farmers\\" professional cooperatives, and legal professions.
 *
 * @param request EntElementVerifyV2Request
 * @return EntElementVerifyV2Response
 */
EntElementVerifyV2Response Client::entElementVerifyV2(const EntElementVerifyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return entElementVerifyV2WithOptions(request, runtime);
}

/**
 * @summary Abnormal Business Operation Query
 *
 * @param request EntRiskQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntRiskQueryResponse
 */
EntRiskQueryResponse Client::entRiskQueryWithOptions(const EntRiskQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasParamType()) {
    query["ParamType"] = request.getParamType();
  }

  if (!!request.hasParamValue()) {
    query["ParamValue"] = request.getParamValue();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasUserAuthorization()) {
    query["UserAuthorization"] = request.getUserAuthorization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EntRiskQuery"},
    {"version" , "2022-11-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntRiskQueryResponse>();
}

/**
 * @summary Abnormal Business Operation Query
 *
 * @param request EntRiskQueryRequest
 * @return EntRiskQueryResponse
 */
EntRiskQueryResponse Client::entRiskQuery(const EntRiskQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return entRiskQueryWithOptions(request, runtime);
}

/**
 * @summary Enterprise Authentication
 *
 * @param request EntVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntVerifyResponse
 */
EntVerifyResponse Client::entVerifyWithOptions(const EntVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountNo()) {
    query["AccountNo"] = request.getAccountNo();
  }

  if (!!request.hasEntName()) {
    query["EntName"] = request.getEntName();
  }

  if (!!request.hasInfoVerifyType()) {
    query["InfoVerifyType"] = request.getInfoVerifyType();
  }

  if (!!request.hasLegalPersonCertNo()) {
    query["LegalPersonCertNo"] = request.getLegalPersonCertNo();
  }

  if (!!request.hasLegalPersonMobile()) {
    query["LegalPersonMobile"] = request.getLegalPersonMobile();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasLicenseNo()) {
    query["LicenseNo"] = request.getLicenseNo();
  }

  if (!!request.hasMerchantBizId()) {
    query["MerchantBizId"] = request.getMerchantBizId();
  }

  if (!!request.hasMerchantUserId()) {
    query["MerchantUserId"] = request.getMerchantUserId();
  }

  if (!!request.hasRiskModelVersion()) {
    query["RiskModelVersion"] = request.getRiskModelVersion();
  }

  if (!!request.hasRiskVerifyType()) {
    query["RiskVerifyType"] = request.getRiskVerifyType();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasUserAuthorization()) {
    query["UserAuthorization"] = request.getUserAuthorization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EntVerify"},
    {"version" , "2022-11-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntVerifyResponse>();
}

/**
 * @summary Enterprise Authentication
 *
 * @param request EntVerifyRequest
 * @return EntVerifyResponse
 */
EntVerifyResponse Client::entVerify(const EntVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return entVerifyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudauth20221125