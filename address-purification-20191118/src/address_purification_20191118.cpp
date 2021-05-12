// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/address_purification_20191118.hpp>
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

using namespace Alibabacloud_Address-purification20191118;

Alibabacloud_Address-purification20191118::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("address-purification"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Address-purification20191118::Client::getEndpoint(shared_ptr<string> productId,
                                                                      shared_ptr<string> regionId,
                                                                      shared_ptr<string> endpointRule,
                                                                      shared_ptr<string> network,
                                                                      shared_ptr<string> suffix,
                                                                      shared_ptr<map<string, string>> endpointMap,
                                                                      shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

GetAddressDivisionCodeResponse Alibabacloud_Address-purification20191118::Client::getAddressDivisionCodeWithOptions(shared_ptr<GetAddressDivisionCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressDivisionCodeResponse(doRPCRequest(make_shared<string>("GetAddressDivisionCode"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressDivisionCodeResponse Alibabacloud_Address-purification20191118::Client::getAddressDivisionCode(shared_ptr<GetAddressDivisionCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressDivisionCodeWithOptions(request, runtime);
}

StructureAddressResponse Alibabacloud_Address-purification20191118::Client::structureAddressWithOptions(shared_ptr<StructureAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StructureAddressResponse(doRPCRequest(make_shared<string>("StructureAddress"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StructureAddressResponse Alibabacloud_Address-purification20191118::Client::structureAddress(shared_ptr<StructureAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return structureAddressWithOptions(request, runtime);
}

ExtractExpressResponse Alibabacloud_Address-purification20191118::Client::extractExpressWithOptions(shared_ptr<ExtractExpressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExtractExpressResponse(doRPCRequest(make_shared<string>("ExtractExpress"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExtractExpressResponse Alibabacloud_Address-purification20191118::Client::extractExpress(shared_ptr<ExtractExpressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractExpressWithOptions(request, runtime);
}

ExtractNameResponse Alibabacloud_Address-purification20191118::Client::extractNameWithOptions(shared_ptr<ExtractNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExtractNameResponse(doRPCRequest(make_shared<string>("ExtractName"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExtractNameResponse Alibabacloud_Address-purification20191118::Client::extractName(shared_ptr<ExtractNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractNameWithOptions(request, runtime);
}

GetAddressBlockMappingResponse Alibabacloud_Address-purification20191118::Client::getAddressBlockMappingWithOptions(shared_ptr<GetAddressBlockMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressBlockMappingResponse(doRPCRequest(make_shared<string>("GetAddressBlockMapping"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressBlockMappingResponse Alibabacloud_Address-purification20191118::Client::getAddressBlockMapping(shared_ptr<GetAddressBlockMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressBlockMappingWithOptions(request, runtime);
}

GetAddressSearchResponse Alibabacloud_Address-purification20191118::Client::getAddressSearchWithOptions(shared_ptr<GetAddressSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressSearchResponse(doRPCRequest(make_shared<string>("GetAddressSearch"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressSearchResponse Alibabacloud_Address-purification20191118::Client::getAddressSearch(shared_ptr<GetAddressSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressSearchWithOptions(request, runtime);
}

PredictPOIResponse Alibabacloud_Address-purification20191118::Client::predictPOIWithOptions(shared_ptr<PredictPOIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PredictPOIResponse(doRPCRequest(make_shared<string>("PredictPOI"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PredictPOIResponse Alibabacloud_Address-purification20191118::Client::predictPOI(shared_ptr<PredictPOIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predictPOIWithOptions(request, runtime);
}

ClassifyPOIResponse Alibabacloud_Address-purification20191118::Client::classifyPOIWithOptions(shared_ptr<ClassifyPOIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClassifyPOIResponse(doRPCRequest(make_shared<string>("ClassifyPOI"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClassifyPOIResponse Alibabacloud_Address-purification20191118::Client::classifyPOI(shared_ptr<ClassifyPOIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return classifyPOIWithOptions(request, runtime);
}

CorrectAddressResponse Alibabacloud_Address-purification20191118::Client::correctAddressWithOptions(shared_ptr<CorrectAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CorrectAddressResponse(doRPCRequest(make_shared<string>("CorrectAddress"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CorrectAddressResponse Alibabacloud_Address-purification20191118::Client::correctAddress(shared_ptr<CorrectAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return correctAddressWithOptions(request, runtime);
}

GetZipcodeResponse Alibabacloud_Address-purification20191118::Client::getZipcodeWithOptions(shared_ptr<GetZipcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetZipcodeResponse(doRPCRequest(make_shared<string>("GetZipcode"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetZipcodeResponse Alibabacloud_Address-purification20191118::Client::getZipcode(shared_ptr<GetZipcodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getZipcodeWithOptions(request, runtime);
}

CompleteAddressResponse Alibabacloud_Address-purification20191118::Client::completeAddressWithOptions(shared_ptr<CompleteAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompleteAddressResponse(doRPCRequest(make_shared<string>("CompleteAddress"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompleteAddressResponse Alibabacloud_Address-purification20191118::Client::completeAddress(shared_ptr<CompleteAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeAddressWithOptions(request, runtime);
}

GetAddressSimilarityResponse Alibabacloud_Address-purification20191118::Client::getAddressSimilarityWithOptions(shared_ptr<GetAddressSimilarityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressSimilarityResponse(doRPCRequest(make_shared<string>("GetAddressSimilarity"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressSimilarityResponse Alibabacloud_Address-purification20191118::Client::getAddressSimilarity(shared_ptr<GetAddressSimilarityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressSimilarityWithOptions(request, runtime);
}

GetAddressGeocodeResponse Alibabacloud_Address-purification20191118::Client::getAddressGeocodeWithOptions(shared_ptr<GetAddressGeocodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressGeocodeResponse(doRPCRequest(make_shared<string>("GetAddressGeocode"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressGeocodeResponse Alibabacloud_Address-purification20191118::Client::getAddressGeocode(shared_ptr<GetAddressGeocodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressGeocodeWithOptions(request, runtime);
}

TransferCoordResponse Alibabacloud_Address-purification20191118::Client::transferCoordWithOptions(shared_ptr<TransferCoordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferCoordResponse(doRPCRequest(make_shared<string>("TransferCoord"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferCoordResponse Alibabacloud_Address-purification20191118::Client::transferCoord(shared_ptr<TransferCoordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCoordWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Address-purification20191118::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateProjectShrinkRequest> request = make_shared<UpdateProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProjectResponse(doRPCRequest(make_shared<string>("UpdateProject"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProjectResponse Alibabacloud_Address-purification20191118::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

ExtractPhoneResponse Alibabacloud_Address-purification20191118::Client::extractPhoneWithOptions(shared_ptr<ExtractPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExtractPhoneResponse(doRPCRequest(make_shared<string>("ExtractPhone"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExtractPhoneResponse Alibabacloud_Address-purification20191118::Client::extractPhone(shared_ptr<ExtractPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractPhoneWithOptions(request, runtime);
}

GetInputSearchResponse Alibabacloud_Address-purification20191118::Client::getInputSearchWithOptions(shared_ptr<GetInputSearchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInputSearchResponse(doRPCRequest(make_shared<string>("GetInputSearch"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInputSearchResponse Alibabacloud_Address-purification20191118::Client::getInputSearch(shared_ptr<GetInputSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInputSearchWithOptions(request, runtime);
}

GetAddressEvaluateResponse Alibabacloud_Address-purification20191118::Client::getAddressEvaluateWithOptions(shared_ptr<GetAddressEvaluateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAddressEvaluateResponse(doRPCRequest(make_shared<string>("GetAddressEvaluate"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAddressEvaluateResponse Alibabacloud_Address-purification20191118::Client::getAddressEvaluate(shared_ptr<GetAddressEvaluateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAddressEvaluateWithOptions(request, runtime);
}

ExtractAddressResponse Alibabacloud_Address-purification20191118::Client::extractAddressWithOptions(shared_ptr<ExtractAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExtractAddressResponse(doRPCRequest(make_shared<string>("ExtractAddress"), make_shared<string>("2019-11-18"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExtractAddressResponse Alibabacloud_Address-purification20191118::Client::extractAddress(shared_ptr<ExtractAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return extractAddressWithOptions(request, runtime);
}

