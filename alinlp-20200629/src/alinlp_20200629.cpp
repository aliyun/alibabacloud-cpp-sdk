// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alinlp_20200629.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Alinlp20200629;

Alibabacloud_Alinlp20200629::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alinlp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alinlp20200629::Client::getEndpoint(shared_ptr<string> productId,
                                                        shared_ptr<string> regionId,
                                                        shared_ptr<string> endpointRule,
                                                        shared_ptr<string> network,
                                                        shared_ptr<string> suffix,
                                                        shared_ptr<map<string, string>> endpointMap,
                                                        shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ADClockResponse Alibabacloud_Alinlp20200629::Client::aDClockWithOptions(shared_ptr<ADClockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ADClock"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ADClockResponse(callApi(params, req, runtime));
}

ADClockResponse Alibabacloud_Alinlp20200629::Client::aDClock(shared_ptr<ADClockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aDClockWithOptions(request, runtime);
}

ADMMUResponse Alibabacloud_Alinlp20200629::Client::aDMMUWithOptions(shared_ptr<ADMMURequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ADMMU"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ADMMUResponse(callApi(params, req, runtime));
}

ADMMUResponse Alibabacloud_Alinlp20200629::Client::aDMMU(shared_ptr<ADMMURequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aDMMUWithOptions(request, runtime);
}

ADMiniCogResponse Alibabacloud_Alinlp20200629::Client::aDMiniCogWithOptions(shared_ptr<ADMiniCogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ADMiniCog"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ADMiniCogResponse(callApi(params, req, runtime));
}

ADMiniCogResponse Alibabacloud_Alinlp20200629::Client::aDMiniCog(shared_ptr<ADMiniCogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aDMiniCogWithOptions(request, runtime);
}

ADMiniCogResultResponse Alibabacloud_Alinlp20200629::Client::aDMiniCogResultWithOptions(shared_ptr<ADMiniCogResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ADMiniCogResult"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ADMiniCogResultResponse(callApi(params, req, runtime));
}

ADMiniCogResultResponse Alibabacloud_Alinlp20200629::Client::aDMiniCogResult(shared_ptr<ADMiniCogResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aDMiniCogResultWithOptions(request, runtime);
}

GetBrandChEcomResponse Alibabacloud_Alinlp20200629::Client::getBrandChEcomWithOptions(shared_ptr<GetBrandChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBrandChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBrandChEcomResponse(callApi(params, req, runtime));
}

GetBrandChEcomResponse Alibabacloud_Alinlp20200629::Client::getBrandChEcom(shared_ptr<GetBrandChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBrandChEcomWithOptions(request, runtime);
}

GetCateChEcomResponse Alibabacloud_Alinlp20200629::Client::getCateChEcomWithOptions(shared_ptr<GetCateChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCateChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCateChEcomResponse(callApi(params, req, runtime));
}

GetCateChEcomResponse Alibabacloud_Alinlp20200629::Client::getCateChEcom(shared_ptr<GetCateChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCateChEcomWithOptions(request, runtime);
}

GetCheckDuplicationChMedicalResponse Alibabacloud_Alinlp20200629::Client::getCheckDuplicationChMedicalWithOptions(shared_ptr<GetCheckDuplicationChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originQ)) {
    body->insert(pair<string, string>("OriginQ", *request->originQ));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originT)) {
    body->insert(pair<string, string>("OriginT", *request->originT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCheckDuplicationChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCheckDuplicationChMedicalResponse(callApi(params, req, runtime));
}

GetCheckDuplicationChMedicalResponse Alibabacloud_Alinlp20200629::Client::getCheckDuplicationChMedical(shared_ptr<GetCheckDuplicationChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCheckDuplicationChMedicalWithOptions(request, runtime);
}

GetDiagnosisChMedicalResponse Alibabacloud_Alinlp20200629::Client::getDiagnosisChMedicalWithOptions(shared_ptr<GetDiagnosisChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagnosisChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagnosisChMedicalResponse(callApi(params, req, runtime));
}

GetDiagnosisChMedicalResponse Alibabacloud_Alinlp20200629::Client::getDiagnosisChMedical(shared_ptr<GetDiagnosisChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiagnosisChMedicalWithOptions(request, runtime);
}

GetDpChEcomResponse Alibabacloud_Alinlp20200629::Client::getDpChEcomWithOptions(shared_ptr<GetDpChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDpChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDpChEcomResponse(callApi(params, req, runtime));
}

GetDpChEcomResponse Alibabacloud_Alinlp20200629::Client::getDpChEcom(shared_ptr<GetDpChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDpChEcomWithOptions(request, runtime);
}

GetDpChGeneralCTBResponse Alibabacloud_Alinlp20200629::Client::getDpChGeneralCTBWithOptions(shared_ptr<GetDpChGeneralCTBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDpChGeneralCTB"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDpChGeneralCTBResponse(callApi(params, req, runtime));
}

GetDpChGeneralCTBResponse Alibabacloud_Alinlp20200629::Client::getDpChGeneralCTB(shared_ptr<GetDpChGeneralCTBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDpChGeneralCTBWithOptions(request, runtime);
}

GetDpChGeneralStanfordResponse Alibabacloud_Alinlp20200629::Client::getDpChGeneralStanfordWithOptions(shared_ptr<GetDpChGeneralStanfordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDpChGeneralStanford"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDpChGeneralStanfordResponse(callApi(params, req, runtime));
}

GetDpChGeneralStanfordResponse Alibabacloud_Alinlp20200629::Client::getDpChGeneralStanford(shared_ptr<GetDpChGeneralStanfordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDpChGeneralStanfordWithOptions(request, runtime);
}

GetEcChGeneralResponse Alibabacloud_Alinlp20200629::Client::getEcChGeneralWithOptions(shared_ptr<GetEcChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEcChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEcChGeneralResponse(callApi(params, req, runtime));
}

GetEcChGeneralResponse Alibabacloud_Alinlp20200629::Client::getEcChGeneral(shared_ptr<GetEcChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEcChGeneralWithOptions(request, runtime);
}

GetEcEnGeneralResponse Alibabacloud_Alinlp20200629::Client::getEcEnGeneralWithOptions(shared_ptr<GetEcEnGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEcEnGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEcEnGeneralResponse(callApi(params, req, runtime));
}

GetEcEnGeneralResponse Alibabacloud_Alinlp20200629::Client::getEcEnGeneral(shared_ptr<GetEcEnGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEcEnGeneralWithOptions(request, runtime);
}

GetItemPubChEcomResponse Alibabacloud_Alinlp20200629::Client::getItemPubChEcomWithOptions(shared_ptr<GetItemPubChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetItemPubChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetItemPubChEcomResponse(callApi(params, req, runtime));
}

GetItemPubChEcomResponse Alibabacloud_Alinlp20200629::Client::getItemPubChEcom(shared_ptr<GetItemPubChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getItemPubChEcomWithOptions(request, runtime);
}

GetKeywordChEcomResponse Alibabacloud_Alinlp20200629::Client::getKeywordChEcomWithOptions(shared_ptr<GetKeywordChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    body->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKeywordChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetKeywordChEcomResponse(callApi(params, req, runtime));
}

GetKeywordChEcomResponse Alibabacloud_Alinlp20200629::Client::getKeywordChEcom(shared_ptr<GetKeywordChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKeywordChEcomWithOptions(request, runtime);
}

GetKeywordEnEcomResponse Alibabacloud_Alinlp20200629::Client::getKeywordEnEcomWithOptions(shared_ptr<GetKeywordEnEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKeywordEnEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetKeywordEnEcomResponse(callApi(params, req, runtime));
}

GetKeywordEnEcomResponse Alibabacloud_Alinlp20200629::Client::getKeywordEnEcom(shared_ptr<GetKeywordEnEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKeywordEnEcomWithOptions(request, runtime);
}

GetMedicineChMedicalResponse Alibabacloud_Alinlp20200629::Client::getMedicineChMedicalWithOptions(shared_ptr<GetMedicineChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->factory)) {
    body->insert(pair<string, string>("Factory", *request->factory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specification)) {
    body->insert(pair<string, string>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    body->insert(pair<string, string>("Unit", *request->unit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMedicineChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMedicineChMedicalResponse(callApi(params, req, runtime));
}

GetMedicineChMedicalResponse Alibabacloud_Alinlp20200629::Client::getMedicineChMedical(shared_ptr<GetMedicineChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMedicineChMedicalWithOptions(request, runtime);
}

GetNerChEcomResponse Alibabacloud_Alinlp20200629::Client::getNerChEcomWithOptions(shared_ptr<GetNerChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lexerId)) {
    body->insert(pair<string, string>("LexerId", *request->lexerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNerChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNerChEcomResponse(callApi(params, req, runtime));
}

GetNerChEcomResponse Alibabacloud_Alinlp20200629::Client::getNerChEcom(shared_ptr<GetNerChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNerChEcomWithOptions(request, runtime);
}

GetNerChMedicalResponse Alibabacloud_Alinlp20200629::Client::getNerChMedicalWithOptions(shared_ptr<GetNerChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNerChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNerChMedicalResponse(callApi(params, req, runtime));
}

GetNerChMedicalResponse Alibabacloud_Alinlp20200629::Client::getNerChMedical(shared_ptr<GetNerChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNerChMedicalWithOptions(request, runtime);
}

GetNerCustomizedChEcomResponse Alibabacloud_Alinlp20200629::Client::getNerCustomizedChEcomWithOptions(shared_ptr<GetNerCustomizedChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lexerId)) {
    body->insert(pair<string, string>("LexerId", *request->lexerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNerCustomizedChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNerCustomizedChEcomResponse(callApi(params, req, runtime));
}

GetNerCustomizedChEcomResponse Alibabacloud_Alinlp20200629::Client::getNerCustomizedChEcom(shared_ptr<GetNerCustomizedChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNerCustomizedChEcomWithOptions(request, runtime);
}

GetNerCustomizedSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getNerCustomizedSeaEcomWithOptions(shared_ptr<GetNerCustomizedSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNerCustomizedSeaEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNerCustomizedSeaEcomResponse(callApi(params, req, runtime));
}

GetNerCustomizedSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getNerCustomizedSeaEcom(shared_ptr<GetNerCustomizedSeaEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNerCustomizedSeaEcomWithOptions(request, runtime);
}

GetOperationChMedicalResponse Alibabacloud_Alinlp20200629::Client::getOperationChMedicalWithOptions(shared_ptr<GetOperationChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOperationChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOperationChMedicalResponse(callApi(params, req, runtime));
}

GetOperationChMedicalResponse Alibabacloud_Alinlp20200629::Client::getOperationChMedical(shared_ptr<GetOperationChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOperationChMedicalWithOptions(request, runtime);
}

GetPosChEcomResponse Alibabacloud_Alinlp20200629::Client::getPosChEcomWithOptions(shared_ptr<GetPosChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPosChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPosChEcomResponse(callApi(params, req, runtime));
}

GetPosChEcomResponse Alibabacloud_Alinlp20200629::Client::getPosChEcom(shared_ptr<GetPosChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPosChEcomWithOptions(request, runtime);
}

GetPosChGeneralResponse Alibabacloud_Alinlp20200629::Client::getPosChGeneralWithOptions(shared_ptr<GetPosChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPosChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPosChGeneralResponse(callApi(params, req, runtime));
}

GetPosChGeneralResponse Alibabacloud_Alinlp20200629::Client::getPosChGeneral(shared_ptr<GetPosChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPosChGeneralWithOptions(request, runtime);
}

GetPriceChEcomResponse Alibabacloud_Alinlp20200629::Client::getPriceChEcomWithOptions(shared_ptr<GetPriceChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPriceChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPriceChEcomResponse(callApi(params, req, runtime));
}

GetPriceChEcomResponse Alibabacloud_Alinlp20200629::Client::getPriceChEcom(shared_ptr<GetPriceChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPriceChEcomWithOptions(request, runtime);
}

GetSaChGeneralResponse Alibabacloud_Alinlp20200629::Client::getSaChGeneralWithOptions(shared_ptr<GetSaChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSaChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSaChGeneralResponse(callApi(params, req, runtime));
}

GetSaChGeneralResponse Alibabacloud_Alinlp20200629::Client::getSaChGeneral(shared_ptr<GetSaChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSaChGeneralWithOptions(request, runtime);
}

GetSaSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getSaSeaEcomWithOptions(shared_ptr<GetSaSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSaSeaEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSaSeaEcomResponse(callApi(params, req, runtime));
}

GetSaSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getSaSeaEcom(shared_ptr<GetSaSeaEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSaSeaEcomWithOptions(request, runtime);
}

GetSimilarityChMedicalResponse Alibabacloud_Alinlp20200629::Client::getSimilarityChMedicalWithOptions(shared_ptr<GetSimilarityChMedicalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originQ)) {
    body->insert(pair<string, string>("OriginQ", *request->originQ));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originT)) {
    body->insert(pair<string, string>("OriginT", *request->originT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSimilarityChMedical"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSimilarityChMedicalResponse(callApi(params, req, runtime));
}

GetSimilarityChMedicalResponse Alibabacloud_Alinlp20200629::Client::getSimilarityChMedical(shared_ptr<GetSimilarityChMedicalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSimilarityChMedicalWithOptions(request, runtime);
}

GetSummaryChEcomResponse Alibabacloud_Alinlp20200629::Client::getSummaryChEcomWithOptions(shared_ptr<GetSummaryChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSummaryChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSummaryChEcomResponse(callApi(params, req, runtime));
}

GetSummaryChEcomResponse Alibabacloud_Alinlp20200629::Client::getSummaryChEcom(shared_ptr<GetSummaryChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSummaryChEcomWithOptions(request, runtime);
}

GetTableQAServiceInfoByIdResponse Alibabacloud_Alinlp20200629::Client::getTableQAServiceInfoByIdWithOptions(shared_ptr<GetTableQAServiceInfoByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableQAServiceInfoById"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableQAServiceInfoByIdResponse(callApi(params, req, runtime));
}

GetTableQAServiceInfoByIdResponse Alibabacloud_Alinlp20200629::Client::getTableQAServiceInfoById(shared_ptr<GetTableQAServiceInfoByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTableQAServiceInfoByIdWithOptions(request, runtime);
}

GetTcChEcomResponse Alibabacloud_Alinlp20200629::Client::getTcChEcomWithOptions(shared_ptr<GetTcChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTcChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTcChEcomResponse(callApi(params, req, runtime));
}

GetTcChEcomResponse Alibabacloud_Alinlp20200629::Client::getTcChEcom(shared_ptr<GetTcChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTcChEcomWithOptions(request, runtime);
}

GetTcChGeneralResponse Alibabacloud_Alinlp20200629::Client::getTcChGeneralWithOptions(shared_ptr<GetTcChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTcChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTcChGeneralResponse(callApi(params, req, runtime));
}

GetTcChGeneralResponse Alibabacloud_Alinlp20200629::Client::getTcChGeneral(shared_ptr<GetTcChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTcChGeneralWithOptions(request, runtime);
}

GetTsChEcomResponse Alibabacloud_Alinlp20200629::Client::getTsChEcomWithOptions(shared_ptr<GetTsChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originQ)) {
    body->insert(pair<string, string>("OriginQ", *request->originQ));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originT)) {
    body->insert(pair<string, string>("OriginT", *request->originT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTsChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTsChEcomResponse(callApi(params, req, runtime));
}

GetTsChEcomResponse Alibabacloud_Alinlp20200629::Client::getTsChEcom(shared_ptr<GetTsChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTsChEcomWithOptions(request, runtime);
}

GetWeChCommentResponse Alibabacloud_Alinlp20200629::Client::getWeChCommentWithOptions(shared_ptr<GetWeChCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWeChComment"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeChCommentResponse(callApi(params, req, runtime));
}

GetWeChCommentResponse Alibabacloud_Alinlp20200629::Client::getWeChComment(shared_ptr<GetWeChCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWeChCommentWithOptions(request, runtime);
}

GetWeChEcomResponse Alibabacloud_Alinlp20200629::Client::getWeChEcomWithOptions(shared_ptr<GetWeChEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWeChEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeChEcomResponse(callApi(params, req, runtime));
}

GetWeChEcomResponse Alibabacloud_Alinlp20200629::Client::getWeChEcom(shared_ptr<GetWeChEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWeChEcomWithOptions(request, runtime);
}

GetWeChEntertainmentResponse Alibabacloud_Alinlp20200629::Client::getWeChEntertainmentWithOptions(shared_ptr<GetWeChEntertainmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWeChEntertainment"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeChEntertainmentResponse(callApi(params, req, runtime));
}

GetWeChEntertainmentResponse Alibabacloud_Alinlp20200629::Client::getWeChEntertainment(shared_ptr<GetWeChEntertainmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWeChEntertainmentWithOptions(request, runtime);
}

GetWeChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWeChGeneralWithOptions(shared_ptr<GetWeChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWeChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeChGeneralResponse(callApi(params, req, runtime));
}

GetWeChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWeChGeneral(shared_ptr<GetWeChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWeChGeneralWithOptions(request, runtime);
}

GetWeChSearchResponse Alibabacloud_Alinlp20200629::Client::getWeChSearchWithOptions(shared_ptr<GetWeChSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    body->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    body->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWeChSearch"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeChSearchResponse(callApi(params, req, runtime));
}

GetWeChSearchResponse Alibabacloud_Alinlp20200629::Client::getWeChSearch(shared_ptr<GetWeChSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWeChSearchWithOptions(request, runtime);
}

GetWsChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsChGeneralWithOptions(shared_ptr<GetWsChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsChGeneralResponse(callApi(params, req, runtime));
}

GetWsChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsChGeneral(shared_ptr<GetWsChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsChGeneralWithOptions(request, runtime);
}

GetWsCustomizedChEcomCommentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomCommentWithOptions(shared_ptr<GetWsCustomizedChEcomCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChEcomComment"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChEcomCommentResponse(callApi(params, req, runtime));
}

GetWsCustomizedChEcomCommentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomComment(shared_ptr<GetWsCustomizedChEcomCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChEcomCommentWithOptions(request, runtime);
}

GetWsCustomizedChEcomContentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomContentWithOptions(shared_ptr<GetWsCustomizedChEcomContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChEcomContent"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChEcomContentResponse(callApi(params, req, runtime));
}

GetWsCustomizedChEcomContentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomContent(shared_ptr<GetWsCustomizedChEcomContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChEcomContentWithOptions(request, runtime);
}

GetWsCustomizedChEcomTitleResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomTitleWithOptions(shared_ptr<GetWsCustomizedChEcomTitleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChEcomTitle"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChEcomTitleResponse(callApi(params, req, runtime));
}

GetWsCustomizedChEcomTitleResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEcomTitle(shared_ptr<GetWsCustomizedChEcomTitleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChEcomTitleWithOptions(request, runtime);
}

GetWsCustomizedChEntertainmentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEntertainmentWithOptions(shared_ptr<GetWsCustomizedChEntertainmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChEntertainment"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChEntertainmentResponse(callApi(params, req, runtime));
}

GetWsCustomizedChEntertainmentResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChEntertainment(shared_ptr<GetWsCustomizedChEntertainmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChEntertainmentWithOptions(request, runtime);
}

GetWsCustomizedChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChGeneralWithOptions(shared_ptr<GetWsCustomizedChGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChGeneralResponse(callApi(params, req, runtime));
}

GetWsCustomizedChGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChGeneral(shared_ptr<GetWsCustomizedChGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChGeneralWithOptions(request, runtime);
}

GetWsCustomizedChO2OResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChO2OWithOptions(shared_ptr<GetWsCustomizedChO2ORequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outType)) {
    body->insert(pair<string, string>("OutType", *request->outType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenizerId)) {
    body->insert(pair<string, string>("TokenizerId", *request->tokenizerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedChO2O"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedChO2OResponse(callApi(params, req, runtime));
}

GetWsCustomizedChO2OResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedChO2O(shared_ptr<GetWsCustomizedChO2ORequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedChO2OWithOptions(request, runtime);
}

GetWsCustomizedSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedSeaEcomWithOptions(shared_ptr<GetWsCustomizedSeaEcomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedSeaEcom"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedSeaEcomResponse(callApi(params, req, runtime));
}

GetWsCustomizedSeaEcomResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedSeaEcom(shared_ptr<GetWsCustomizedSeaEcomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedSeaEcomWithOptions(request, runtime);
}

GetWsCustomizedSeaGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedSeaGeneralWithOptions(shared_ptr<GetWsCustomizedSeaGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWsCustomizedSeaGeneral"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWsCustomizedSeaGeneralResponse(callApi(params, req, runtime));
}

GetWsCustomizedSeaGeneralResponse Alibabacloud_Alinlp20200629::Client::getWsCustomizedSeaGeneral(shared_ptr<GetWsCustomizedSeaGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWsCustomizedSeaGeneralWithOptions(request, runtime);
}

OpenAlinlpServiceResponse Alibabacloud_Alinlp20200629::Client::openAlinlpServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenAlinlpService"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenAlinlpServiceResponse(callApi(params, req, runtime));
}

OpenAlinlpServiceResponse Alibabacloud_Alinlp20200629::Client::openAlinlpService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openAlinlpServiceWithOptions(runtime);
}

RequestTableQAResponse Alibabacloud_Alinlp20200629::Client::requestTableQAWithOptions(shared_ptr<RequestTableQARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestTableQA"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestTableQAResponse(callApi(params, req, runtime));
}

RequestTableQAResponse Alibabacloud_Alinlp20200629::Client::requestTableQA(shared_ptr<RequestTableQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestTableQAWithOptions(request, runtime);
}

RequestTableQAOnlineResponse Alibabacloud_Alinlp20200629::Client::requestTableQAOnlineWithOptions(shared_ptr<RequestTableQAOnlineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->botId)) {
    body->insert(pair<string, string>("BotId", *request->botId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->question)) {
    body->insert(pair<string, string>("Question", *request->question));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    body->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestTableQAOnline"))},
    {"version", boost::any(string("2020-06-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestTableQAOnlineResponse(callApi(params, req, runtime));
}

RequestTableQAOnlineResponse Alibabacloud_Alinlp20200629::Client::requestTableQAOnline(shared_ptr<RequestTableQAOnlineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestTableQAOnlineWithOptions(request, runtime);
}

